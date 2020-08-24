// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonAINavigation/Classes/BehaviorTree/BTTask_FlyTo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_FlyTo() {}
// Cross Module References
	DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams();
	UPackage* Z_Construct_UPackage__Script_DonAINavigation();
	DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDoNNavigationDebugParams();
	DONAINAVIGATION_API UClass* Z_Construct_UClass_UBTTask_FlyTo_NoRegister();
	DONAINAVIGATION_API UClass* Z_Construct_UClass_UBTTask_FlyTo();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert();
	DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish();
	DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDoNNavigationQueryData();
	DONAINAVIGATION_API UClass* Z_Construct_UClass_ADonNavigationManager_NoRegister();
	DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDoNNavigationQueryParams();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
class UScriptStruct* FBT_FlyToTarget_DebugParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DONAINAVIGATION_API uint32 Get_Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams, Z_Construct_UPackage__Script_DonAINavigation(), TEXT("BT_FlyToTarget_DebugParams"), sizeof(FBT_FlyToTarget_DebugParams), Get_Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Hash());
	}
	return Singleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FBT_FlyToTarget_DebugParams>()
{
	return FBT_FlyToTarget_DebugParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBT_FlyToTarget_DebugParams(FBT_FlyToTarget_DebugParams::StaticStruct, TEXT("/Script/DonAINavigation"), TEXT("BT_FlyToTarget_DebugParams"), false, nullptr, nullptr);
static struct FScriptStruct_DonAINavigation_StaticRegisterNativesFBT_FlyToTarget_DebugParams
{
	FScriptStruct_DonAINavigation_StaticRegisterNativesFBT_FlyToTarget_DebugParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BT_FlyToTarget_DebugParams")),new UScriptStruct::TCppStructOps<FBT_FlyToTarget_DebugParams>);
	}
} ScriptStruct_DonAINavigation_StaticRegisterNativesFBT_FlyToTarget_DebugParams;
	struct Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisualizePawnAsVoxels_MetaData[];
#endif
		static void NewProp_bVisualizePawnAsVoxels_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisualizePawnAsVoxels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBT_FlyToTarget_DebugParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::NewProp_bVisualizePawnAsVoxels_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::NewProp_bVisualizePawnAsVoxels_SetBit(void* Obj)
	{
		((FBT_FlyToTarget_DebugParams*)Obj)->bVisualizePawnAsVoxels = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::NewProp_bVisualizePawnAsVoxels = { "bVisualizePawnAsVoxels", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBT_FlyToTarget_DebugParams), &Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::NewProp_bVisualizePawnAsVoxels_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::NewProp_bVisualizePawnAsVoxels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::NewProp_bVisualizePawnAsVoxels_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::NewProp_bVisualizePawnAsVoxels,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
		Z_Construct_UScriptStruct_FDoNNavigationDebugParams,
		&NewStructOps,
		"BT_FlyToTarget_DebugParams",
		sizeof(FBT_FlyToTarget_DebugParams),
		alignof(FBT_FlyToTarget_DebugParams),
		Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DonAINavigation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BT_FlyToTarget_DebugParams"), sizeof(FBT_FlyToTarget_DebugParams), Get_Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Hash() { return 2126417357U; }
	void UBTTask_FlyTo::StaticRegisterNativesUBTTask_FlyTo()
	{
		UClass* Class = UBTTask_FlyTo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Pathfinding_OnDynamicCollisionAlert", &UBTTask_FlyTo::execPathfinding_OnDynamicCollisionAlert },
			{ "Pathfinding_OnFinish", &UBTTask_FlyTo::execPathfinding_OnFinish },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics
	{
		struct BTTask_FlyTo_eventPathfinding_OnDynamicCollisionAlert_Parms
		{
			FDonNavigationDynamicCollisionPayload Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTTask_FlyTo_eventPathfinding_OnDynamicCollisionAlert_Parms, Data), Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_FlyTo, nullptr, "Pathfinding_OnDynamicCollisionAlert", nullptr, nullptr, sizeof(BTTask_FlyTo_eventPathfinding_OnDynamicCollisionAlert_Parms), Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics
	{
		struct BTTask_FlyTo_eventPathfinding_OnFinish_Parms
		{
			FDoNNavigationQueryData Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTTask_FlyTo_eventPathfinding_OnFinish_Parms, Data), Z_Construct_UScriptStruct_FDoNNavigationQueryData, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_FlyTo, nullptr, "Pathfinding_OnFinish", nullptr, nullptr, sizeof(BTTask_FlyTo_eventPathfinding_OnFinish_Parms), Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBTTask_FlyTo_NoRegister()
	{
		return UBTTask_FlyTo::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_FlyTo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavigationManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumProximityRequired_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumProximityRequired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyToFlipFlopWhenTaskExits_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyToFlipFlopWhenTaskExits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlightResultKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FlightResultKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlightLocationKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FlightLocationKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_FlyTo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBTTask_FlyTo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert, "Pathfinding_OnDynamicCollisionAlert" }, // 965046266
		{ &Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish, "Pathfinding_OnFinish" }, // 1247334269
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FlyTo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BehaviorTree/BTTask_FlyTo.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_NavigationManager_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_NavigationManager = { "NavigationManager", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_FlyTo, NavigationManager), Z_Construct_UClass_ADonNavigationManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_NavigationManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_NavigationManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_DebugParams_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_DebugParams = { "DebugParams", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_FlyTo, DebugParams), Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams, METADATA_PARAMS(Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_DebugParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_DebugParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_QueryParams_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_QueryParams = { "QueryParams", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_FlyTo, QueryParams), Z_Construct_UScriptStruct_FDoNNavigationQueryParams, METADATA_PARAMS(Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_QueryParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_QueryParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_MinimumProximityRequired_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_MinimumProximityRequired = { "MinimumProximityRequired", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_FlyTo, MinimumProximityRequired), METADATA_PARAMS(Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_MinimumProximityRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_MinimumProximityRequired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_KeyToFlipFlopWhenTaskExits_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "Comment", "/* Optional: This boolean will be flip-flopped at the end of this task (regardless of success or failure). This can be useful for certain types of behavior tree setups*/" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
		{ "ToolTip", "Optional: This boolean will be flip-flopped at the end of this task (regardless of success or failure). This can be useful for certain types of behavior tree setups" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_KeyToFlipFlopWhenTaskExits = { "KeyToFlipFlopWhenTaskExits", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_FlyTo, KeyToFlipFlopWhenTaskExits), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_KeyToFlipFlopWhenTaskExits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_KeyToFlipFlopWhenTaskExits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_FlightResultKey_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "Comment", "/* Optional: Useful in somecases where you want failure or success of a task to automatically update a particular blackboard key*/" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
		{ "ToolTip", "Optional: Useful in somecases where you want failure or success of a task to automatically update a particular blackboard key" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_FlightResultKey = { "FlightResultKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_FlyTo, FlightResultKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_FlightResultKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_FlightResultKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_FlightLocationKey_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "Comment", "// Behavior Tree Input:\n" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
		{ "ToolTip", "Behavior Tree Input:" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_FlightLocationKey = { "FlightLocationKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_FlyTo, FlightLocationKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_FlightLocationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_FlightLocationKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_FlyTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_NavigationManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_DebugParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_QueryParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_MinimumProximityRequired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_KeyToFlipFlopWhenTaskExits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_FlightResultKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_FlightLocationKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_FlyTo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_FlyTo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_FlyTo_Statics::ClassParams = {
		&UBTTask_FlyTo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBTTask_FlyTo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FlyTo_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_FlyTo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FlyTo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_FlyTo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_FlyTo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_FlyTo, 1873415500);
	template<> DONAINAVIGATION_API UClass* StaticClass<UBTTask_FlyTo>()
	{
		return UBTTask_FlyTo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_FlyTo(Z_Construct_UClass_UBTTask_FlyTo, &UBTTask_FlyTo::StaticClass, TEXT("/Script/DonAINavigation"), TEXT("UBTTask_FlyTo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_FlyTo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
