// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FVector;
class UDoNNavigationVolumeComponent;
class UObject;
struct FColor;
class AActor;
#ifdef DONAINAVIGATION_DEPRECATED_VolumeAdaptiveBuilder_generated_h
#error "DEPRECATED_VolumeAdaptiveBuilder.generated.h already included, missing '#pragma once' in DEPRECATED_VolumeAdaptiveBuilder.h"
#endif
#define DONAINAVIGATION_DEPRECATED_VolumeAdaptiveBuilder_generated_h

#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_Legacy_DEPRECATED_VolumeAdaptiveBuilder_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNAVMapContainer_Statics; \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct();


template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<struct FNAVMapContainer>();

#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_Legacy_DEPRECATED_VolumeAdaptiveBuilder_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavigationGraphAerial_Statics; \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct();


template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<struct FNavigationGraphAerial>();

#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_Legacy_DEPRECATED_VolumeAdaptiveBuilder_h_65_SPARSE_DATA
#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_Legacy_DEPRECATED_VolumeAdaptiveBuilder_h_65_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNAVVolumeFromComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_GET_STRUCT(FVector,Z_Param_ComponentAt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UDoNNavigationVolumeComponent**)Z_Param__Result=P_THIS->GetNAVVolumeFromComponent(Z_Param_Component,Z_Param_ComponentAt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNAVVolumeFromObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UDoNNavigationVolumeComponent**)Z_Param__Result=P_THIS->GetNAVVolumeFromObject(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVisualizeSolution) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_source); \
		P_GET_STRUCT(FVector,Z_Param_destination); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathSolutionRaw); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathSolutionOptimized); \
		P_GET_UBOOL(Z_Param_VisualizeRawPath); \
		P_GET_UBOOL(Z_Param_VisualizeOptimizedPath); \
		P_GET_UBOOL(Z_Param_VisualizeInRealTime); \
		P_GET_UBOOL(Z_Param_DrawDebugVolumes); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LineThickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->VisualizeSolution(Z_Param_source,Z_Param_destination,Z_Param_Out_PathSolutionRaw,Z_Param_Out_PathSolutionOptimized,Z_Param_VisualizeRawPath,Z_Param_VisualizeOptimizedPath,Z_Param_VisualizeInRealTime,Z_Param_DrawDebugVolumes,Z_Param_LineThickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVisualizeNAVResultRealTime) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathSolution); \
		P_GET_STRUCT(FVector,Z_Param_Source); \
		P_GET_STRUCT(FVector,Z_Param_Destination); \
		P_GET_UBOOL(Z_Param_Reset); \
		P_GET_UBOOL(Z_Param_DrawDebugVolumes); \
		P_GET_STRUCT(FColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LineThickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->VisualizeNAVResultRealTime(Z_Param_Out_PathSolution,Z_Param_Source,Z_Param_Destination,Z_Param_Reset,Z_Param_DrawDebugVolumes,Z_Param_LineColor,Z_Param_LineThickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVisualizeNAVResult) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathSolution); \
		P_GET_STRUCT(FVector,Z_Param_Source); \
		P_GET_STRUCT(FVector,Z_Param_Destination); \
		P_GET_UBOOL(Z_Param_Reset); \
		P_GET_UBOOL(Z_Param_DrawDebugVolumes); \
		P_GET_STRUCT(FColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LineThickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->VisualizeNAVResult(Z_Param_Out_PathSolution,Z_Param_Source,Z_Param_Destination,Z_Param_Reset,Z_Param_DrawDebugVolumes,Z_Param_LineColor,Z_Param_LineThickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNavEntryPointFromPath) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_STRUCT(FVector,Z_Param_FinalDestination); \
		P_GET_PROPERTY(UIntProperty,Z_Param_currentVolumeIndex); \
		P_GET_TARRAY(UDoNNavigationVolumeComponent*,Z_Param_path); \
		P_GET_UBOOL_REF(Z_Param_Out_VolumeTraversalImminent); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_newVolumeIndex); \
		P_GET_UBOOL(Z_Param_DrawDebugVolumes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->NavEntryPointFromPath(Z_Param_Origin,Z_Param_FinalDestination,Z_Param_currentVolumeIndex,Z_Param_path,Z_Param_Out_VolumeTraversalImminent,Z_Param_Out_newVolumeIndex,Z_Param_DrawDebugVolumes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNavigaitonEntryPoint) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_OBJECT(UDoNNavigationVolumeComponent,Z_Param_CurrentVolume); \
		P_GET_OBJECT(UDoNNavigationVolumeComponent,Z_Param_DestinationVolume); \
		P_GET_UBOOL_REF(Z_Param_Out_VolumeTraversalImminent); \
		P_GET_UBOOL_REF(Z_Param_Out_overlapsX); \
		P_GET_UBOOL_REF(Z_Param_Out_overlapsY); \
		P_GET_UBOOL_REF(Z_Param_Out_overlapsZ); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->NavigaitonEntryPoint(Z_Param_Actor,Z_Param_CurrentVolume,Z_Param_DestinationVolume,Z_Param_Out_VolumeTraversalImminent,Z_Param_Out_overlapsX,Z_Param_Out_overlapsY,Z_Param_Out_overlapsZ); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNavigaitonEntryPointFromVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_OBJECT(UDoNNavigationVolumeComponent,Z_Param_CurrentVolume); \
		P_GET_OBJECT(UDoNNavigationVolumeComponent,Z_Param_DestinationVolume); \
		P_GET_UBOOL_REF(Z_Param_Out_VolumeTraversalImminent); \
		P_GET_UBOOL_REF(Z_Param_Out_overlapsX); \
		P_GET_UBOOL_REF(Z_Param_Out_overlapsY); \
		P_GET_UBOOL_REF(Z_Param_Out_overlapsZ); \
		P_GET_UBOOL(Z_Param_DrawDebug); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->NavigaitonEntryPointFromVector(Z_Param_Origin,Z_Param_CurrentVolume,Z_Param_DestinationVolume,Z_Param_Out_VolumeTraversalImminent,Z_Param_Out_overlapsX,Z_Param_Out_overlapsY,Z_Param_Out_overlapsZ,Z_Param_DrawDebug); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNavEntryPointsForTraversal) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_OBJECT(UDoNNavigationVolumeComponent,Z_Param_CurrentVolume); \
		P_GET_OBJECT(UDoNNavigationVolumeComponent,Z_Param_DestinationVolume); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_SegmentDist); \
		P_GET_UBOOL(Z_Param_DrawDebug); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->NavEntryPointsForTraversal(Z_Param_Origin,Z_Param_CurrentVolume,Z_Param_DestinationVolume,Z_Param_Out_SegmentDist,Z_Param_DrawDebug); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShortestPathToDestination_DebugRealtime) \
	{ \
		P_GET_UBOOL(Z_Param_Reset); \
		P_GET_STRUCT(FVector,Z_Param_origin); \
		P_GET_STRUCT(FVector,Z_Param_destination); \
		P_GET_OBJECT(UDoNNavigationVolumeComponent,Z_Param_originVolume); \
		P_GET_OBJECT(UDoNNavigationVolumeComponent,Z_Param_destinationVolume); \
		P_GET_UBOOL(Z_Param_DrawDebug); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathSolutionRaw); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathSolutionOptimized); \
		P_GET_UBOOL(Z_Param_DrawDebugVolumes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetShortestPathToDestination_DebugRealtime(Z_Param_Reset,Z_Param_origin,Z_Param_destination,Z_Param_originVolume,Z_Param_destinationVolume,Z_Param_DrawDebug,Z_Param_Out_PathSolutionRaw,Z_Param_Out_PathSolutionOptimized,Z_Param_DrawDebugVolumes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShortestPathToDestination) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_origin); \
		P_GET_STRUCT(FVector,Z_Param_destination); \
		P_GET_OBJECT(UDoNNavigationVolumeComponent,Z_Param_originVolume); \
		P_GET_OBJECT(UDoNNavigationVolumeComponent,Z_Param_destinationVolume); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathSolutionRaw); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathSolutionOptimized); \
		P_GET_UBOOL(Z_Param_DrawDebugVolumes); \
		P_GET_UBOOL(Z_Param_VisualizeRawPath); \
		P_GET_UBOOL(Z_Param_VisualizeOptimizedPath); \
		P_GET_UBOOL(Z_Param_VisualizeInRealTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LineThickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UDoNNavigationVolumeComponent*>*)Z_Param__Result=P_THIS->GetShortestPathToDestination(Z_Param_origin,Z_Param_destination,Z_Param_originVolume,Z_Param_destinationVolume,Z_Param_Out_PathSolutionRaw,Z_Param_Out_PathSolutionOptimized,Z_Param_DrawDebugVolumes,Z_Param_VisualizeRawPath,Z_Param_VisualizeOptimizedPath,Z_Param_VisualizeInRealTime,Z_Param_LineThickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildNAVNetwork) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BuildNAVNetwork(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCleanUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CleanUp(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateNAVVolume) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UNameProperty,Z_Param_VolumeName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SeedX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SeedY); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SeedZ); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UDoNNavigationVolumeComponent**)Z_Param__Result=P_THIS->CreateNAVVolume(Z_Param_Location,Z_Param_VolumeName,Z_Param_SeedX,Z_Param_SeedY,Z_Param_SeedZ); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrowNAVVolumeByIndex) \
	{ \
		P_GET_OBJECT(UDoNNavigationVolumeComponent,Z_Param_volume); \
		P_GET_PROPERTY(UIntProperty,Z_Param_XGrowth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_YGrowth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ZGrowth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GrowNAVVolumeByIndex(Z_Param_volume,Z_Param_XGrowth,Z_Param_YGrowth,Z_Param_ZGrowth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateAdaptiveNavigationVolumeSeeds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GenerateAdaptiveNavigationVolumeSeeds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructBuilder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConstructBuilder(); \
		P_NATIVE_END; \
	}


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_Legacy_DEPRECATED_VolumeAdaptiveBuilder_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNAVVolumeFromComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_GET_STRUCT(FVector,Z_Param_ComponentAt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UDoNNavigationVolumeComponent**)Z_Param__Result=P_THIS->GetNAVVolumeFromComponent(Z_Param_Component,Z_Param_ComponentAt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNAVVolumeFromObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UDoNNavigationVolumeComponent**)Z_Param__Result=P_THIS->GetNAVVolumeFromObject(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVisualizeSolution) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_source); \
		P_GET_STRUCT(FVector,Z_Param_destination); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathSolutionRaw); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathSolutionOptimized); \
		P_GET_UBOOL(Z_Param_VisualizeRawPath); \
		P_GET_UBOOL(Z_Param_VisualizeOptimizedPath); \
		P_GET_UBOOL(Z_Param_VisualizeInRealTime); \
		P_GET_UBOOL(Z_Param_DrawDebugVolumes); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LineThickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->VisualizeSolution(Z_Param_source,Z_Param_destination,Z_Param_Out_PathSolutionRaw,Z_Param_Out_PathSolutionOptimized,Z_Param_VisualizeRawPath,Z_Param_VisualizeOptimizedPath,Z_Param_VisualizeInRealTime,Z_Param_DrawDebugVolumes,Z_Param_LineThickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVisualizeNAVResultRealTime) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathSolution); \
		P_GET_STRUCT(FVector,Z_Param_Source); \
		P_GET_STRUCT(FVector,Z_Param_Destination); \
		P_GET_UBOOL(Z_Param_Reset); \
		P_GET_UBOOL(Z_Param_DrawDebugVolumes); \
		P_GET_STRUCT(FColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LineThickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->VisualizeNAVResultRealTime(Z_Param_Out_PathSolution,Z_Param_Source,Z_Param_Destination,Z_Param_Reset,Z_Param_DrawDebugVolumes,Z_Param_LineColor,Z_Param_LineThickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVisualizeNAVResult) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathSolution); \
		P_GET_STRUCT(FVector,Z_Param_Source); \
		P_GET_STRUCT(FVector,Z_Param_Destination); \
		P_GET_UBOOL(Z_Param_Reset); \
		P_GET_UBOOL(Z_Param_DrawDebugVolumes); \
		P_GET_STRUCT(FColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LineThickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->VisualizeNAVResult(Z_Param_Out_PathSolution,Z_Param_Source,Z_Param_Destination,Z_Param_Reset,Z_Param_DrawDebugVolumes,Z_Param_LineColor,Z_Param_LineThickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNavEntryPointFromPath) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_STRUCT(FVector,Z_Param_FinalDestination); \
		P_GET_PROPERTY(UIntProperty,Z_Param_currentVolumeIndex); \
		P_GET_TARRAY(UDoNNavigationVolumeComponent*,Z_Param_path); \
		P_GET_UBOOL_REF(Z_Param_Out_VolumeTraversalImminent); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_newVolumeIndex); \
		P_GET_UBOOL(Z_Param_DrawDebugVolumes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->NavEntryPointFromPath(Z_Param_Origin,Z_Param_FinalDestination,Z_Param_currentVolumeIndex,Z_Param_path,Z_Param_Out_VolumeTraversalImminent,Z_Param_Out_newVolumeIndex,Z_Param_DrawDebugVolumes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNavigaitonEntryPoint) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_OBJECT(UDoNNavigationVolumeComponent,Z_Param_CurrentVolume); \
		P_GET_OBJECT(UDoNNavigationVolumeComponent,Z_Param_DestinationVolume); \
		P_GET_UBOOL_REF(Z_Param_Out_VolumeTraversalImminent); \
		P_GET_UBOOL_REF(Z_Param_Out_overlapsX); \
		P_GET_UBOOL_REF(Z_Param_Out_overlapsY); \
		P_GET_UBOOL_REF(Z_Param_Out_overlapsZ); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->NavigaitonEntryPoint(Z_Param_Actor,Z_Param_CurrentVolume,Z_Param_DestinationVolume,Z_Param_Out_VolumeTraversalImminent,Z_Param_Out_overlapsX,Z_Param_Out_overlapsY,Z_Param_Out_overlapsZ); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNavigaitonEntryPointFromVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_OBJECT(UDoNNavigationVolumeComponent,Z_Param_CurrentVolume); \
		P_GET_OBJECT(UDoNNavigationVolumeComponent,Z_Param_DestinationVolume); \
		P_GET_UBOOL_REF(Z_Param_Out_VolumeTraversalImminent); \
		P_GET_UBOOL_REF(Z_Param_Out_overlapsX); \
		P_GET_UBOOL_REF(Z_Param_Out_overlapsY); \
		P_GET_UBOOL_REF(Z_Param_Out_overlapsZ); \
		P_GET_UBOOL(Z_Param_DrawDebug); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->NavigaitonEntryPointFromVector(Z_Param_Origin,Z_Param_CurrentVolume,Z_Param_DestinationVolume,Z_Param_Out_VolumeTraversalImminent,Z_Param_Out_overlapsX,Z_Param_Out_overlapsY,Z_Param_Out_overlapsZ,Z_Param_DrawDebug); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNavEntryPointsForTraversal) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_OBJECT(UDoNNavigationVolumeComponent,Z_Param_CurrentVolume); \
		P_GET_OBJECT(UDoNNavigationVolumeComponent,Z_Param_DestinationVolume); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_SegmentDist); \
		P_GET_UBOOL(Z_Param_DrawDebug); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->NavEntryPointsForTraversal(Z_Param_Origin,Z_Param_CurrentVolume,Z_Param_DestinationVolume,Z_Param_Out_SegmentDist,Z_Param_DrawDebug); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShortestPathToDestination_DebugRealtime) \
	{ \
		P_GET_UBOOL(Z_Param_Reset); \
		P_GET_STRUCT(FVector,Z_Param_origin); \
		P_GET_STRUCT(FVector,Z_Param_destination); \
		P_GET_OBJECT(UDoNNavigationVolumeComponent,Z_Param_originVolume); \
		P_GET_OBJECT(UDoNNavigationVolumeComponent,Z_Param_destinationVolume); \
		P_GET_UBOOL(Z_Param_DrawDebug); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathSolutionRaw); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathSolutionOptimized); \
		P_GET_UBOOL(Z_Param_DrawDebugVolumes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetShortestPathToDestination_DebugRealtime(Z_Param_Reset,Z_Param_origin,Z_Param_destination,Z_Param_originVolume,Z_Param_destinationVolume,Z_Param_DrawDebug,Z_Param_Out_PathSolutionRaw,Z_Param_Out_PathSolutionOptimized,Z_Param_DrawDebugVolumes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShortestPathToDestination) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_origin); \
		P_GET_STRUCT(FVector,Z_Param_destination); \
		P_GET_OBJECT(UDoNNavigationVolumeComponent,Z_Param_originVolume); \
		P_GET_OBJECT(UDoNNavigationVolumeComponent,Z_Param_destinationVolume); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathSolutionRaw); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathSolutionOptimized); \
		P_GET_UBOOL(Z_Param_DrawDebugVolumes); \
		P_GET_UBOOL(Z_Param_VisualizeRawPath); \
		P_GET_UBOOL(Z_Param_VisualizeOptimizedPath); \
		P_GET_UBOOL(Z_Param_VisualizeInRealTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LineThickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UDoNNavigationVolumeComponent*>*)Z_Param__Result=P_THIS->GetShortestPathToDestination(Z_Param_origin,Z_Param_destination,Z_Param_originVolume,Z_Param_destinationVolume,Z_Param_Out_PathSolutionRaw,Z_Param_Out_PathSolutionOptimized,Z_Param_DrawDebugVolumes,Z_Param_VisualizeRawPath,Z_Param_VisualizeOptimizedPath,Z_Param_VisualizeInRealTime,Z_Param_LineThickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildNAVNetwork) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BuildNAVNetwork(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCleanUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CleanUp(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateNAVVolume) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UNameProperty,Z_Param_VolumeName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SeedX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SeedY); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SeedZ); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UDoNNavigationVolumeComponent**)Z_Param__Result=P_THIS->CreateNAVVolume(Z_Param_Location,Z_Param_VolumeName,Z_Param_SeedX,Z_Param_SeedY,Z_Param_SeedZ); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrowNAVVolumeByIndex) \
	{ \
		P_GET_OBJECT(UDoNNavigationVolumeComponent,Z_Param_volume); \
		P_GET_PROPERTY(UIntProperty,Z_Param_XGrowth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_YGrowth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ZGrowth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GrowNAVVolumeByIndex(Z_Param_volume,Z_Param_XGrowth,Z_Param_YGrowth,Z_Param_ZGrowth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateAdaptiveNavigationVolumeSeeds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GenerateAdaptiveNavigationVolumeSeeds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructBuilder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConstructBuilder(); \
		P_NATIVE_END; \
	}


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_Legacy_DEPRECATED_VolumeAdaptiveBuilder_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADEPRECATED_VolumeAdaptiveBuilder(); \
	friend struct Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics; \
public: \
	DECLARE_CLASS(ADEPRECATED_VolumeAdaptiveBuilder, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/DonAINavigation"), NO_API) \
	DECLARE_SERIALIZER(ADEPRECATED_VolumeAdaptiveBuilder)


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_Legacy_DEPRECATED_VolumeAdaptiveBuilder_h_65_INCLASS \
private: \
	static void StaticRegisterNativesADEPRECATED_VolumeAdaptiveBuilder(); \
	friend struct Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics; \
public: \
	DECLARE_CLASS(ADEPRECATED_VolumeAdaptiveBuilder, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/DonAINavigation"), NO_API) \
	DECLARE_SERIALIZER(ADEPRECATED_VolumeAdaptiveBuilder)


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_Legacy_DEPRECATED_VolumeAdaptiveBuilder_h_65_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADEPRECATED_VolumeAdaptiveBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADEPRECATED_VolumeAdaptiveBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADEPRECATED_VolumeAdaptiveBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADEPRECATED_VolumeAdaptiveBuilder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADEPRECATED_VolumeAdaptiveBuilder(ADEPRECATED_VolumeAdaptiveBuilder&&); \
	NO_API ADEPRECATED_VolumeAdaptiveBuilder(const ADEPRECATED_VolumeAdaptiveBuilder&); \
public:


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_Legacy_DEPRECATED_VolumeAdaptiveBuilder_h_65_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADEPRECATED_VolumeAdaptiveBuilder(ADEPRECATED_VolumeAdaptiveBuilder&&); \
	NO_API ADEPRECATED_VolumeAdaptiveBuilder(const ADEPRECATED_VolumeAdaptiveBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADEPRECATED_VolumeAdaptiveBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADEPRECATED_VolumeAdaptiveBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADEPRECATED_VolumeAdaptiveBuilder)


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_Legacy_DEPRECATED_VolumeAdaptiveBuilder_h_65_PRIVATE_PROPERTY_OFFSET
#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_Legacy_DEPRECATED_VolumeAdaptiveBuilder_h_62_PROLOG
#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_Legacy_DEPRECATED_VolumeAdaptiveBuilder_h_65_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_Legacy_DEPRECATED_VolumeAdaptiveBuilder_h_65_PRIVATE_PROPERTY_OFFSET \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_Legacy_DEPRECATED_VolumeAdaptiveBuilder_h_65_SPARSE_DATA \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_Legacy_DEPRECATED_VolumeAdaptiveBuilder_h_65_RPC_WRAPPERS \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_Legacy_DEPRECATED_VolumeAdaptiveBuilder_h_65_INCLASS \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_Legacy_DEPRECATED_VolumeAdaptiveBuilder_h_65_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_Legacy_DEPRECATED_VolumeAdaptiveBuilder_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_Legacy_DEPRECATED_VolumeAdaptiveBuilder_h_65_PRIVATE_PROPERTY_OFFSET \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_Legacy_DEPRECATED_VolumeAdaptiveBuilder_h_65_SPARSE_DATA \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_Legacy_DEPRECATED_VolumeAdaptiveBuilder_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_Legacy_DEPRECATED_VolumeAdaptiveBuilder_h_65_INCLASS_NO_PURE_DECLS \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_Legacy_DEPRECATED_VolumeAdaptiveBuilder_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONAINAVIGATION_API UClass* StaticClass<class ADEPRECATED_VolumeAdaptiveBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_Legacy_DEPRECATED_VolumeAdaptiveBuilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
