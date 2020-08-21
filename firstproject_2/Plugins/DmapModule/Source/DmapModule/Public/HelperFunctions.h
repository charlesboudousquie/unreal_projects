// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include <unordered_map>
#include <functional>
#include <set>
#include <cassert>
#include "HelperFunctions.generated.h"


class UHierarchicalInstancedStaticMeshComponent;
struct EO_Node;

// class is meant to act as a namespace, because UHT cannot add namespaces.
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class DMAPMODULE_API UHelperFunctions : public UActorComponent
{
    GENERATED_BODY()

    static TArray<FColor> g_colors;

public:

    struct DrawInfo
    {
        float m_voxel_scalar;
        bool m_is_leaf;
        UHierarchicalInstancedStaticMeshComponent* m_mesh;
        TArray<EO_Node*> m_instances;
        bool m_should_clear_instances;
    };

    static void drawNode(const DrawInfo& p_info, EO_Node* p_node);

    static TArray<FColor>& getColors() { return g_colors; }

    static AActor * getActorWithTag(FName& p_tag, const UObject* p_world_obj);

    static FColor chooseColor(int p_level);

    static void setNodeInfo(DrawInfo& p_info, 
        float p_voxel_scalar,
        bool p_is_leaf,
        UHierarchicalInstancedStaticMeshComponent* p_mesh,
        TArray<EO_Node*>& p_instances,
        bool p_should_clear_instances);

    // draw hierarchical instances of the archetype/object specified
    static void drawInstances(const DrawInfo& p_info);

    static UHierarchicalInstancedStaticMeshComponent* getInstanceMesh(AActor *p_archetype);

    static std::unordered_map<int,TArray<EO_Node*>> partitionNodes(const TArray<EO_Node*>& p_nodes);

    template <typename T>
    static std::vector<T> gatherByPredicate(const std::vector<T>& p_vec, std::function<bool(T)> p_criteria)
    {
        std::vector<T> l_elements_found(p_vec.size());

        // if elements meets criteria for gathering, then copy them
        auto end_of_copied_elements = std::copy_if(p_vec.begin(), p_vec.end(), l_elements_found.begin(), p_criteria);
        l_elements_found.resize(std::distance(l_elements_found.begin(), end_of_copied_elements));

        return l_elements_found;
    }

    // gather elements from each element T, put them in a tuple
    // and then return those specific elements.
    template <typename T, typename... SpecialTuple>
    static std::vector<std::tuple<SpecialTuple...>> gatherMembersFromObjects(const std::vector<T>& p_vec, std::function<std::tuple<SpecialTuple...>(T)> p_tuple_gatherer)
    {
        std::vector<std::tuple<SpecialTuple...>> l_extracted_elements(p_vec.size());
        std::transform(p_vec.begin(), p_vec.end(), l_extracted_elements.begin(), p_tuple_gatherer);
        return l_extracted_elements;
    }

    template <typename T>
    static std::vector<T> toStdVector(const TArray<T>& p_array)
    {
        std::vector<T> toReturn(p_array.Num());
        for (int i = 0; i < p_array.Num(); i++)
        {
            toReturn[i] = p_array[i];
        }
        return toReturn;
    }

    template <typename T>
    static TArray<T> toTArray(const std::vector<T>& p_vec)
    {
        TArray<T> toReturn;// (p_vec.size());
        toReturn.SetNumZeroed(p_vec.size());
        for (int i = 0; i < p_vec.size(); i++)
        {
            toReturn[i] = p_vec[i];
        }
        return toReturn;
    }

    template <typename T>
    static TArray<T> arraySubrange(const TArray<T>& p_array, int first, int last)
    {
        assert(first >= 0 && last < p_array.Num());
        int size = last - first + 1;
        TArray<T> toReturn;
        toReturn.SetNumZeroed(size);
        int counter = 0;
        for (int i = first; i <= last; i++)
        {
            toReturn[counter] = p_array[i];
            counter++;
        }
        return toReturn;
    }



public:
    // Sets default values for this component's properties
    UHelperFunctions();

    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
    // Called when the game starts
    virtual void BeginPlay() override;





};
