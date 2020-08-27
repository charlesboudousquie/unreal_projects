
#include "EO_Node.hpp"
#include <cassert>

void EO_Node::createChildren()
{

    assert(m_level > 0);

    // initialize child nodes
    for (auto& child : m_children)
    {
        child.reset(new EO_Node()); // cause unique pointers are fun
        child->m_level = this->m_level - 1;
    }

    auto m_center = m_box.GetCenter();
    auto m_min = m_box.Min;
    auto m_max = m_box.Max;

    // box is cubic so we only need 1 length
    // of the box, we'll call it "h".
    float h = m_box.GetExtent().X;

    // L = Left, R = Right, F = Front, B = Back, U = Up, D = Down
    // Order LR, FB, UD
    // X = LR, Y = FB, Z = UD
    // set bounding boxes of child nodes

    // p_min_offset = offset from center of parent node
    // p_max_offset = ditto
    // Important: p_min_offset and p_max_offset must be between -1 to 1
    auto setBB = [&](const short p_index, const FVector p_min_offset, const FVector p_max_offset)
    {
        m_children[p_index]->setBoundingBox(m_center + (p_min_offset * h), m_center + (p_max_offset * h));
    };

    setBB(0, FVector{ -1,-1,-1 }, FVector{ 0 });
    setBB(1, FVector{ 0,-1,-1 }, FVector{ 1,0,0 });
    setBB(2, FVector{ -1,0,-1 }, FVector{ 0,1,0 });
    setBB(3, FVector{ 0,0,-1 }, FVector{ 1,1,0 });
    setBB(4, FVector{ -1,-1,0 }, FVector{ 0,0,1 });
    setBB(5, FVector{ 0,-1,0 }, FVector{ 1,0,1 });
    setBB(6, FVector{ -1,0,0 }, FVector{ 0,1,1 });
    setBB(7, FVector{ 0 }, FVector{ 1,1,1 });

    //m_children[0]->setBoundingBox(m_min, m_center); // LBD
    //m_children[1]->setBoundingBox(FVector(m_center.X, m_min.Y, m_min.Z), FVector(m_max.X, m_center.Y, m_center.Z)); // RBD // back bottom right
    //m_children[2]->setBoundingBox(FVector(m_center.X, m_min.Y, m_center.Z), FVector(m_max.X, m_center.Y, m_max.Z)); // RFD // front bottom right
    //m_children[3]->setBoundingBox(FVector(m_min.X, m_min.Y, m_center.Z), FVector(m_center.X, m_center.Y, m_max.Z)); // L // front bottom left
    //m_children[4]->setBoundingBox(FVector(m_min.X, m_center.Y, m_min.Z), FVector(m_center.X, m_max.Y, m_center.Z)); // L // back top left
    //m_children[5]->setBoundingBox(FVector(m_center.X, m_center.Y, m_min.Z), FVector(m_max.X, m_max.Y, m_center.Z)); // R // back top right
    //m_children[6]->setBoundingBox(m_center, m_max);																	// R // front top right
    //m_children[7]->setBoundingBox(FVector(m_min.X, m_center.Y, m_center.Z), FVector(m_center.X, m_max.Y, m_max.Z)); // L // front top left

    short l_index_counter = 0;
    // set codes
    for (auto& child : m_children)
    {

        child->m_code = Voxel(child->m_box.Min);

        assert(m_children.ContainsByPredicate(
            [child](EO_Node* p_node)
        {
            return p_node->m_code == child->m_code;
        }
        ) == false);

        child->m_parent = this;
        child->m_index = l_index_counter;
        l_index_counter++;
    }

}

void EO_Node::setBoundingBox(FVector p_min, FVector p_max)
{
    m_box = { p_min, p_max };
}

EO_Node* EO_Node::operator[](short p_index)
{
    return m_children[p_index].get();
}

bool EO_Node::IntersectsOrWithin(const FBox& p_region)
{
    return m_box.Intersect(p_region);// || m_box.IsInsideOrOn(p_region);
}