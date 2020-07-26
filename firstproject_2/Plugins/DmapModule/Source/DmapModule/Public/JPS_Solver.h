// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "Math/IntPoint.h"
#include "Math/Vector2D.h"
#include <list>
#include <vector>
#include <queue>
#include <unordered_set>

#include "GridNode.h"
#include "GridDirection.h"
#include "UpdateablePriorityQueue.h"
#include "JPS_Solver.generated.h"

UCLASS(ClassGroup = (Custom), BlueprintType, meta = (BlueprintSpawnableComponent))
class DMAPMODULE_API UJPS_Solver : public UActorComponent
{

    GENERATED_BODY()

    typedef FIntPoint GridPos;
    typedef std::vector<GridPos> GridPath;
    typedef TArray<TArray<GridNode>> GRID;

    static GridNode g_invalid_node;

    float octileHeuristic(const GridPos& A, const GridPos& B);

    TWeakObjectPtr <class UJPS_GridDrawer> m_jps_drawer;

    GRID m_grid; // row,col

    // frontier
    //std::priority_queue<GridNode*, std::vector<GridNode*>, GridComparator> m_frontier;
    UpdateablePriorityQueue m_frontier;
    
    // clears frontier and visited node list
    void clearState();

    // if within grid and not a wall
    bool isValid(const GridPos& p_pos);
    
    bool hasForcedNeighbor(const GridNode& p_node, FIntPoint p_dir);

    GridNode& getNode(const GridPos& p_pos);


    void processNeighbor(const GridPos& p_curr, const GridPos& p_jump_point /*const TArray<GridPos>& p_neighbors*/);

    // find neighbors and do A* stuff on them
    /*TArray<GridPos>*/void findSuccessors(GridPos m_current);
    // simply gets neighbors that can actually be reached,
    // should only be called on the start node
    TArray<GridPos> getNeighbors(const GridPos& p_point);
    // used for getting noteworthy neighbors during jumps
    void prune(GridPos p_current, FIntPoint p_dir, TArray<GridPos>& p_neighbors);

    // give parent node and direction to go in
    GridNode& jump(GridPos p_current, FIntPoint p_dir);
    // adds dir to current and retrieves that node
    GridPos step(GridPos p_current, FIntPoint p_dir);

    void giveGrid(const TArray<TArray<bool>>& p_data);

    // error sound made when path cannot be found
    void playFailedPathSound();
    
    class UAudioComponent* m_audio_comp;

public:

    UFUNCTION(BlueprintCallable, Category = "3d maps")
    void setStartFunc(const FIntPoint& p_pos) { m_start = p_pos; }
    UFUNCTION(BlueprintCallable, Category = "3d maps")
    void setGoalFunc(const FIntPoint& p_pos){ m_goal = p_pos; }


    // get most recently generated path
    GridPath getPath();
    // get grid in its current state
    const GRID& getGrid() { return m_grid; }

    // checks if position is inside current grid
    UFUNCTION(BlueprintCallable, Category = "3d maps")
    bool withinGrid(const FIntPoint& p_pos);

    // resize grid
    UFUNCTION(BlueprintCallable, Category = "3d maps")
    void resizeGrid(int rows, int cols);

    // user selects start and goal
    UFUNCTION(BlueprintCallable, Category = "3d maps")
    void solve(FIntPoint start, FIntPoint goal);

    // constructor with default grid
    UJPS_Solver();

    UPROPERTY(EditAnywhere)
    FIntPoint m_start;

    UPROPERTY(EditAnywhere)
    class USoundCue* m_cue;

    UPROPERTY(EditAnywhere)
    FIntPoint m_goal;

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

};