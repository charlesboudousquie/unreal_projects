// Fill out your copyright notice in the Description page of Project Settings.

#include "JPS_Solver.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundCue.h"
#include <vector>
#include <algorithm>
#include <cassert>
#include <array>

const float sqrt_2 = sqrt(2.0f);

GridNode UJPS_Solver::g_invalid_node
{
 false,
 false,
 false,
-1.0f, -1.0f, -1.0f,
nullptr,
{-1,-1} };

void UJPS_Solver::giveGrid(const TArray<TArray<bool>>& p_data)
{
    int row_count = p_data.Num();
    assert(row_count < 1);
    int col_count = p_data[0].Num();
    assert(col_count < 1);

    resizeGrid(row_count, col_count);

    // now copy grid
    for (int row = 0; row < row_count; row++)
    {
        for (int col = 0; col < col_count; col++)
        {
            m_grid[row][col].m_isWall = p_data[row][col];
        }
    }
}

void UJPS_Solver::playFailedPathSound()
{
    //static ConstructorHelpers::FObjectFinder<USoundBase> Soundf(TEXT("/Game/Sounds/backgroundsound"));

    //class USoundBase* Sound = Soundf.Object;
    m_audio_comp->Play();
    
}

void UJPS_Solver::resizeGrid(int rows, int cols)
{
    m_grid.Reset();
    m_grid.SetNum(rows);
    std::for_each(m_grid.begin(), m_grid.end(),
        [&](TArray<GridNode>& p_row) {p_row.SetNum(cols); });

    for (int i = 0; i < m_grid.Num(); i++)
    {
        for (int j = 0; j < m_grid[0].Num(); j++)
        {
            m_grid[i][j].m_pos = FIntPoint{i,j};
        }
    }

}

/*UJPS_Solver::GridPath*/void UJPS_Solver::solve(FIntPoint start, FIntPoint goal)
{

    if (!isValid(start) || !isValid(goal))
    {
        playFailedPathSound();
        return;
    }

    this->clearState();
    m_start = start;
    m_goal = goal;

    // add node to frontier
    m_frontier.push(&getNode(start));

    // while there is stuff on the frontier
    while (m_frontier.empty() == false)
    {

        // get top and pop
        auto top = m_frontier.top();
        m_frontier.pop();
        getNode(top->m_pos).m_closed = true;

        auto successors = findSuccessors(top->m_pos);

        // add each successor to frontier
        for (auto& successor : successors)
        {
            m_frontier.push(&getNode(successor));
        }

    }

    //return getPath(start, goal);

}

UJPS_Solver::UJPS_Solver()
{
    TArray<TArray<bool>> defaultGrid
    {
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
    };

    giveGrid(defaultGrid);

    static ConstructorHelpers::FObjectFinder<USoundCue> cue(TEXT("SoundCue'/DmapModule/grid_path_not_found_cue.grid_path_not_found_cue'"));
    if (cue.Succeeded())
    {
        
        m_cue = cue.Object;
        m_audio_comp = CreateDefaultSubobject<UAudioComponent>("JPS Audio Comp");
        m_audio_comp->bAutoActivate = false;
        //m_propellerAudioComponent->SetActive(false);
        m_audio_comp->SetSound(m_cue);
    }
}

float UJPS_Solver::octileHeuristic(const GridPos & A, const GridPos& B)
{
    auto diff = B - A;
    auto min = std::min(diff.X, diff.Y);
    auto max = std::max(diff.X, diff.Y);
    return min * sqrt_2 + (max - min);
}

void UJPS_Solver::clearState()
{
    m_frontier = {};
    m_start = m_goal = GridPos::NoneValue;
}

bool UJPS_Solver::isValid(const GridPos & p_pos)
{
    return withinGrid(p_pos) && (getNode(p_pos).m_isWall == false);
}

bool UJPS_Solver::withinGrid(const FIntPoint & p_pos)
{
    return (p_pos.X < m_grid.Num()) && // row
        (p_pos.Y < m_grid[0].Num()) &&  // col
        (p_pos.X >= 0) &&
        (p_pos.Y >= 0);
}

bool UJPS_Solver::hasForcedNeighbor(const GridNode & p_node, FIntPoint p_dir)
{
    // N = neighbor pos to examine
    auto N = p_node.m_pos;
    int dx = p_dir.X;
    int dy = p_dir.Y;

    // if we are going diagonally
    if (GridDirection::isDiagonal(p_dir))
    {
        // FL is wall OR FR is wall
        if (  (!isValid(N + GridPos{ -dx, 0 }) && isValid(N + GridPos{-dx,dy}))
            || (!isValid(N + GridPos{ 0, -dy }) && isValid(N + GridPos{ dx,-dy }))
            )
        {
            return true;
        }

        // jump FL or FR and see if we hit a jump point
        if (isValid(jump({ N.X + dx, N.Y }, { N.X, N.Y }).m_pos) ||
            isValid(jump({ N.X, N.Y + dy }, { N.X, N.Y }).m_pos))
        {
            return true;
        }

    }
    else
    {
        // horizontally
        if (dy == 0)
        {
            // if left is wall or right is wall
            if ((!isValid(N + GridPos{ -dx,1 }) && isValid(N + GridPos{ 0,1 })) ||
                (!isValid(N + GridPos{-dx,1}) && isValid(N + GridPos{0,-1}))
                )
            {
                return true;
            }
        }
        // vertically
        else
        {
            // if left is wall or right is wall
            if ((!isValid(N + GridPos{ -1,-dy }) && isValid(N + GridPos{ -1,0 })) ||
                (!isValid(N + GridPos{ 1,-dy }) && isValid(N + GridPos{ 1,0 }))
                )
            {
                return true;
            }
        }

    }




    // given some direction, retrieve node nieghbor by going in that unit direction
    // and checking if it is in grid and valid
    /*auto isVal = [&](const FIntPoint dir)
    {
        return isValid(dir + our_pos);
    };*/
    //auto Left =  //GridDirection::getLeft(c);
    //auto forwardLeft = isVal(p_dir.getForwardLeft());
    //auto Right = isVal(p_dir.getDirRight());
    //auto forwardRight = isVal(p_dir.getForwardRight());
    //// if diagonally
    //if (GridDirection::isDiagonal(p_dir))
    //{
    //    auto backLeft = isVal(p_dir.getDirBackLeft());
    //    // if back left is wall but left is not and forward left is also not a wall
    //    if (!backLeft && Left && forwardLeft)
    //    {
    //        return true;
    //    }
    //    auto backRight = isVal(p_dir.getDirBackRight());
    //    // if back right is wall but right is not and forward right is also not a wall
    //    if (!backRight && Right && forwardRight)
    //    {
    //        return true;
    //    }
    //}
    //// horizontal or diagonal
    //else
    //{
    //    auto forward = isVal(p_dir);
    //    if (forward)
    //    {
    //        // if left is wall but forward left != wall
    //        if (!Left && forwardLeft)
    //        {
    //            return true;
    //        }
    //        // if Right is wall but forward Right != wall
    //        if (!Right && forwardRight)
    //        {
    //            return true;
    //        }
    //    }
    //}

    // could not find any forced neighbors
    return false;
}

GridNode& UJPS_Solver::getNode(const GridPos & p_pos)
{
    return m_grid[p_pos.X][p_pos.Y];
}

UJPS_Solver::GridPath UJPS_Solver::getPath(GridPos p_start, GridPos p_goal)
{
    GridPath l_path;

    auto current = p_goal;

    while (current != p_start)
    {
        l_path.push_back(current);
        current = getNode(current).m_parent->m_pos;
    }

    std::reverse(l_path.begin(), l_path.end());
    return l_path;

}

TArray<UJPS_Solver::GridPos> UJPS_Solver::findSuccessors(GridPos m_current)
{
    //Algorithm 1 Identify Successors
    //Require : x: current node, s : start, g : goal
    //    1 : successors(x) ← ∅
    TArray<GridPos> l_successors;
    //    2 : neighbours(x) ← prune(x, neighbours(x))
    TArray<GridPos> l_neighbors = getNeighbors(m_current);
    prune(m_current, l_neighbors);
    //    3 : for all n ∈ neighbours(x) do
    for (const auto& neighbor_pos : l_neighbors)
    {
        auto& neighbor = getNode(neighbor_pos);
        if (neighbor.m_closed == false)
        {
            //    4 : n ← jump(x, direction(x, n), s, g)
            auto n = jump(m_current, GridDirection::getDirection(m_current, neighbor_pos));
            //    5 : add n to successors(x)
            if (isValid(n.m_pos))
            {
                l_successors.Add(n.m_pos);
            }
        }

    }

    //    6 : return successors(x)
    return l_successors;
}

void UJPS_Solver::processNeighbors(const GridPos& p_curr, const TArray<GridPos>& p_neighbors)
{

    auto& currentNode = getNode(p_curr);

    for (auto& neighbor : p_neighbors)
    {
        // jump in neighbor direction
        auto dir = GridDirection::getDirection(p_curr, neighbor);

        auto& j = jump(p_curr, dir);

        // if we can travel to this node
        if (isValid(j.m_pos))
        {

            // if we have already looked at node then just skip it
            if (j.m_closed)
            {
                continue;
            }

            // get distance from current to potential jump point
            auto dist = octileHeuristic(p_curr, j.m_pos);


            // update cost jump point
            float new_g_cost = dist + currentNode.g;

            // if this jump point has never been opened/seen
            // or we found a better route, then update it
            if (j.m_opened == false || new_g_cost < j.g)
            {

                //j.g = new_g_cost;
                //j.h = j.h || octileHeuristic(j, m_goal);
                //j.f = j.g + j.h;
                //j.m_parent = &currentNode;

                //if (!j.m_opened) {
                //    //openList.push(j);
                //    m_frontier.push(&j)
                //    j.m_opened = true;
                //}
                //else 
                //{
                //    //openList.updateItem(j);
                //    //m_frontier.
                //}

            }


        }

    }
}

TArray<UJPS_Solver::GridPos> UJPS_Solver::getNeighbors(const GridPos & p_point)
{
    assert(p_point == m_start);
    TArray<GridPos> l_neighbors;

    // neighbor positions
    TArray<GridPos> positions
    {
        p_point + GridPos{0,1},    // top      0   
        p_point + GridPos{1,0},    // right    1   
        p_point + GridPos{0,-1},   // bottom   2   
        p_point + GridPos{-1,0},   // left     3 

        // diagonals
         
    };

    auto addIfValid = [&](const GridPos& p_pos)
    {
        auto& N = getNode(p_pos);
        // if not a wall and within grid
        // and NOT CLOSED? maybe not opened???
        if (isValid(p_pos) && !N.m_closed)
        {
            l_neighbors.Add(p_pos);
        }
    };

    // add the 4 cardinal directions
    for (auto pos : positions)
    {
        addIfValid(positions[pos]);
    }

    // now check diagonals
    bool top = isValid(positions[0]);
    bool right = isValid(positions[1]);
    bool bottom = isValid(positions[2]);
    bool left = isValid(positions[3]);


    auto TR = p_point + GridPos{ 1,1 };
    auto BR = p_point + GridPos{ 1,-1 };
    auto BL = p_point + GridPos{ -1,-1 };
    auto TL = p_point + GridPos{ -1,1 };

    if (top || left)
    {
        addIfValid(TL);
    }
    if (top || right)
    {
        addIfValid(TR);
    }
    if (right || bottom)
    {
        addIfValid(BR);
    }
    if (bottom || left)
    {
        addIfValid(BL);
    }


    // if no parent exists then we use all of the neighbors
    /*if (getNode(p_point).m_parent == nullptr)
    {
        










    }*/
    //else
    //{
    //    // check if valid, if so then add
    //    auto checkPos = [&](int index)
    //    {
    //        return isValid(positions[index]);
    //    };

    //    auto checkAndAdd = [&](int index)
    //    {
    //        if (checkPos(index))
    //        {
    //            l_neighbors.Add(positions[index]);
    //        }
    //    };

    //    // vertical and horizontal
    //    checkAndAdd(0); // top
    //    checkAndAdd(2); // right
    //    checkAndAdd(4); // down
    //    checkAndAdd(6); // left

    //    auto checkAndAddDiag = [&](int p_left_adjacent, int p_dir, int p_right_adjacent)
    //    {
    //        if (checkPos(p_dir) && (checkPos(p_left_adjacent) || checkPos(p_right_adjacent)))
    //        {
    //            l_neighbors.Add(positions[p_dir]);
    //        }
    //    };

    //    // diagonal
    //    checkAndAddDiag(0, 1, 2); // top right
    //    checkAndAddDiag(2, 3, 4); // bottom right
    //    checkAndAddDiag(4, 5, 6); // bottom left
    //    checkAndAddDiag(6, 7, 0); // top left

    //}


    return l_neighbors;

}

void UJPS_Solver::prune(GridPos p_current, FIntPoint p_dir, TArray<GridPos>& p_neighbors)
{
    auto dx = p_dir.X;
    auto dy = p_dir.Y;

    auto c = p_current;

    auto addIfValid = [&](const GridPos& p_pos)
    {
        if (isValid(p_pos))
        {
            p_neighbors.Add(p_pos);
        }
    };


    //if diagonal
    if (GridDirection::isDiagonal(p_dir))
    {

        bool case1 = isValid(c + GridPos{ 0,dy });
        bool case2 = isValid(c + GridPos{ dx,0 });
        bool case3 = case1 && case2;
        bool case4 = !isValid(c + GridPos{ -dx,0 }) && isValid(c + GridPos{ -dx,dy });
        bool case5 = !isValid(c + GridPos{ 0,-dy }) && isValid(c + GridPos{ dx,-dy });

        // case 1
        if (case1)
        {
            addIfValid(c + GridPos{ 0,dy });
        }

        // case 2
        if (case2)
        {
            addIfValid(c + GridPos{ dx,0 });
        }

        // case 3
        if (case3)
        {
            addIfValid(c + GridPos{ dx,dy });
        }

        // case4 and case5 cannot both be true
        assert(!(case4 && case5));

        // case 4
        if (case4)
        {
            addIfValid(c + GridPos{-dx,dy});
        }
        // case 5
        else if (case5)
        {
            addIfValid(c + GridPos{ dx,-dy });
        }




    }
    else
    {

        // if vertical
        if (dx == 0)
        {
            bool case1 = isValid(c + GridPos{ 0,dy });
            if (case1)
            {
                addIfValid(c + GridPos{ 0,dy });

                bool case2 = !isValid(c + GridPos{ dx,0 });
                if (case2)
                {
                    addIfValid(c + GridPos{dx,dy});
                }
                bool case3 = !isValid(c + GridPos{ -dx,0 });
                if (case3)
                {
                    addIfValid(c + GridPos{ -dx,dy });
                }
            }
            
        }

        // if horizontal
        else
        {
            // case1
            // right nieghbor
            if (isValid(c + GridPos{ dx,0 }))
            {
                p_neighbors.Add(c + GridPos{ dx,0 });

                // case 2
                if (!isValid(c + GridPos{ 0,dy }))
                {
                    addIfValid(c + GridPos{dx,dy});
                }

                // case 3
                if (!isValid(c + GridPos{ 0,-dy }))
                {
                    addIfValid(c + GridPos{ dx,-dy });
                }

            }
        }
    }






}

GridNode& UJPS_Solver::jump(GridPos p_current, GridPos p_next)
{

    auto dir = GridDirection::getDirection(p_current, p_next);

    //Require: x: initial node,
    //    d : direction, s : start, g : goal
    //    1 : n ← step(x, d)
    auto& n = step(p_current, dir);
    //    2 : if n is an obstacle or is outside the grid then
    if (isValid(n.m_pos) == false)
    {
        //    3 :       return null
        return g_invalid_node;
    }
    //    4 : if n = g then
    if (n.m_pos == m_goal)
    {
        //    5 :       return n
        return n;
    }
    //    6 : if ∃ n' ∈ neighbours(n) s.t. n' is forced then    
    if (hasForcedNeighbor(n, p_dir))
    {
        //    7 :       return n
        return n;
    }
    //    8 : if d is diagonal then
    if (p_dir.isDiagonal())
    {
        //    9 :       for all i ∈{ 1, 2 } do
        //    10 :      if jump(n, di, s, g) is not null then
        //    11 :              return n
        if (isValid(jump(n.m_pos, p_dir.getForwardLeft()).m_pos))
        {
            return n;
        }
        if (isValid(jump(n.m_pos, p_dir.getForwardRight()).m_pos))
        {
            return n;
        }

    }

    //    12 : return jump(n, d, s, g)
    return jump(n.m_pos, p_dir);
}

GridNode& UJPS_Solver::step(GridPos p_current, FIntPoint p_dir)
{
    auto newPos = p_current + p_dir;
    return getNode(newPos);
}
















