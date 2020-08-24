// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonAINavigation/Classes/DonNavigationManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonNavigationManager() {}
// Cross Module References
	DONAINAVIGATION_API UFunction* Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DonAINavigation();
	DONAINAVIGATION_API UFunction* Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature();
	DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDoNNavigationQueryData();
	DONAINAVIGATION_API UFunction* Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature();
	DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload();
	DONAINAVIGATION_API UEnum* Z_Construct_UEnum_DonAINavigation_EDonNavigationQueryStatus();
	DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionTask();
	DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationTask();
	DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationQueryTask();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDoNNavigationQueryParams();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDoNNavigationDebugParams();
	DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDonNavVoxelXYZ();
	DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDonNavVoxelX();
	DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDonNavVoxelY();
	DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationVoxel();
	DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee();
	DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDonVoxelCollisionProfile();
	DONAINAVIGATION_API UClass* Z_Construct_UClass_ADonNavigationManager_NoRegister();
	DONAINAVIGATION_API UClass* Z_Construct_UClass_ADonNavigationManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADonNavigationManager_ConstructBuilder();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADonNavigationManager_Debug_ClearAllVolumes();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADonNavigationManager_Debug_ToggleWorldBoundaryInGame();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADonNavigationManager_HasTask();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics
	{
		struct _Script_DonAINavigation_eventDonCollisionSamplerCallback_Parms
		{
			bool bTaskSuccessful;
		};
		static void NewProp_bTaskSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTaskSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics::NewProp_bTaskSuccessful_SetBit(void* Obj)
	{
		((_Script_DonAINavigation_eventDonCollisionSamplerCallback_Parms*)Obj)->bTaskSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics::NewProp_bTaskSuccessful = { "bTaskSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_DonAINavigation_eventDonCollisionSamplerCallback_Parms), &Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics::NewProp_bTaskSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics::NewProp_bTaskSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//DECLARE_DYNAMIC_DELEGATE(FDonCollisionSamplerCallback);\n" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "DECLARE_DYNAMIC_DELEGATE(FDonCollisionSamplerCallback);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DonAINavigation, nullptr, "DonCollisionSamplerCallback__DelegateSignature", nullptr, nullptr, sizeof(_Script_DonAINavigation_eventDonCollisionSamplerCallback_Parms), Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics
	{
		struct _Script_DonAINavigation_eventDoNNavigationResultHandler_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DonAINavigation_eventDoNNavigationResultHandler_Parms, Data), Z_Construct_UScriptStruct_FDoNNavigationQueryData, METADATA_PARAMS(Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Non-Dynamic verison of result delegate: \n//\n// DECLARE_DELEGATE_OneParam( FDoNNavigationResultHandler, const FDoNNavigationQueryData& )\n//\n// Consider enabling this for C++ users depending on performance implications of the currently used dynamic delegates (Epic documentation states dynamic delegates are slower).\n// This will require maintenance of two sets of delegate types across the board and a separate API entry point for C++/BP users (UFUNCTIONs only accept dynamic delegate parameters).\n// @todo: profile this with high volume load once the system is stable to verify if there are any notable performance benefits in using static delegates.\n" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "Non-Dynamic verison of result delegate:\n\nDECLARE_DELEGATE_OneParam( FDoNNavigationResultHandler, const FDoNNavigationQueryData& )\n\nConsider enabling this for C++ users depending on performance implications of the currently used dynamic delegates (Epic documentation states dynamic delegates are slower).\nThis will require maintenance of two sets of delegate types across the board and a separate API entry point for C++/BP users (UFUNCTIONs only accept dynamic delegate parameters).\n@todo: profile this with high volume load once the system is stable to verify if there are any notable performance benefits in using static delegates." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DonAINavigation, nullptr, "DoNNavigationResultHandler__DelegateSignature", nullptr, nullptr, sizeof(_Script_DonAINavigation_eventDoNNavigationResultHandler_Parms), Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics
	{
		struct _Script_DonAINavigation_eventDonNavigationDynamicCollisionDelegate_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DonAINavigation_eventDonNavigationDynamicCollisionDelegate_Parms, Data), Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload, METADATA_PARAMS(Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DonAINavigation, nullptr, "DonNavigationDynamicCollisionDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_DonAINavigation_eventDonNavigationDynamicCollisionDelegate_Parms), Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EDonNavigationQueryStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DonAINavigation_EDonNavigationQueryStatus, Z_Construct_UPackage__Script_DonAINavigation(), TEXT("EDonNavigationQueryStatus"));
		}
		return Singleton;
	}
	template<> DONAINAVIGATION_API UEnum* StaticEnum<EDonNavigationQueryStatus>()
	{
		return EDonNavigationQueryStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDonNavigationQueryStatus(EDonNavigationQueryStatus_StaticEnum, TEXT("/Script/DonAINavigation"), TEXT("EDonNavigationQueryStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DonAINavigation_EDonNavigationQueryStatus_Hash() { return 1047347259U; }
	UEnum* Z_Construct_UEnum_DonAINavigation_EDonNavigationQueryStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DonAINavigation();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDonNavigationQueryStatus"), 0, Get_Z_Construct_UEnum_DonAINavigation_EDonNavigationQueryStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDonNavigationQueryStatus::Unscheduled", (int64)EDonNavigationQueryStatus::Unscheduled },
				{ "EDonNavigationQueryStatus::InProgress", (int64)EDonNavigationQueryStatus::InProgress },
				{ "EDonNavigationQueryStatus::Success", (int64)EDonNavigationQueryStatus::Success },
				{ "EDonNavigationQueryStatus::Failure", (int64)EDonNavigationQueryStatus::Failure },
				{ "EDonNavigationQueryStatus::QueryHasNoSolution", (int64)EDonNavigationQueryStatus::QueryHasNoSolution },
				{ "EDonNavigationQueryStatus::TimedOut", (int64)EDonNavigationQueryStatus::TimedOut },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Failure.Name", "EDonNavigationQueryStatus::Failure" },
				{ "InProgress.Name", "EDonNavigationQueryStatus::InProgress" },
				{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
				{ "QueryHasNoSolution.Name", "EDonNavigationQueryStatus::QueryHasNoSolution" },
				{ "Success.Name", "EDonNavigationQueryStatus::Success" },
				{ "TimedOut.Name", "EDonNavigationQueryStatus::TimedOut" },
				{ "Unscheduled.Name", "EDonNavigationQueryStatus::Unscheduled" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DonAINavigation,
				nullptr,
				"EDonNavigationQueryStatus",
				"EDonNavigationQueryStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FDonNavigationDynamicCollisionTask::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DONAINAVIGATION_API uint32 Get_Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionTask_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionTask, Z_Construct_UPackage__Script_DonAINavigation(), TEXT("DonNavigationDynamicCollisionTask"), sizeof(FDonNavigationDynamicCollisionTask), Get_Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionTask_Hash());
	}
	return Singleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FDonNavigationDynamicCollisionTask>()
{
	return FDonNavigationDynamicCollisionTask::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDonNavigationDynamicCollisionTask(FDonNavigationDynamicCollisionTask::StaticStruct, TEXT("/Script/DonAINavigation"), TEXT("DonNavigationDynamicCollisionTask"), false, nullptr, nullptr);
static struct FScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavigationDynamicCollisionTask
{
	FScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavigationDynamicCollisionTask()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DonNavigationDynamicCollisionTask")),new UScriptStruct::TCppStructOps<FDonNavigationDynamicCollisionTask>);
	}
} ScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavigationDynamicCollisionTask;
	struct Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionTask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionTask_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDonNavigationDynamicCollisionTask>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
		Z_Construct_UScriptStruct_FDonNavigationTask,
		&NewStructOps,
		"DonNavigationDynamicCollisionTask",
		sizeof(FDonNavigationDynamicCollisionTask),
		alignof(FDonNavigationDynamicCollisionTask),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionTask()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionTask_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DonAINavigation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DonNavigationDynamicCollisionTask"), sizeof(FDonNavigationDynamicCollisionTask), Get_Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionTask_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionTask_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionTask_Hash() { return 390618599U; }
class UScriptStruct* FDonNavigationQueryTask::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DONAINAVIGATION_API uint32 Get_Z_Construct_UScriptStruct_FDonNavigationQueryTask_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDonNavigationQueryTask, Z_Construct_UPackage__Script_DonAINavigation(), TEXT("DonNavigationQueryTask"), sizeof(FDonNavigationQueryTask), Get_Z_Construct_UScriptStruct_FDonNavigationQueryTask_Hash());
	}
	return Singleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FDonNavigationQueryTask>()
{
	return FDonNavigationQueryTask::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDonNavigationQueryTask(FDonNavigationQueryTask::StaticStruct, TEXT("/Script/DonAINavigation"), TEXT("DonNavigationQueryTask"), false, nullptr, nullptr);
static struct FScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavigationQueryTask
{
	FScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavigationQueryTask()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DonNavigationQueryTask")),new UScriptStruct::TCppStructOps<FDonNavigationQueryTask>);
	}
} ScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavigationQueryTask;
	struct Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicCollisionListener_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_DynamicCollisionListener;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDonNavigationQueryTask>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::NewProp_DynamicCollisionListener_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::NewProp_DynamicCollisionListener = { "DynamicCollisionListener", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDonNavigationQueryTask, DynamicCollisionListener), Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::NewProp_DynamicCollisionListener_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::NewProp_DynamicCollisionListener_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::NewProp_ResultHandler_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::NewProp_ResultHandler = { "ResultHandler", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDonNavigationQueryTask, ResultHandler), Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::NewProp_ResultHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::NewProp_ResultHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010008000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDonNavigationQueryTask, Data), Z_Construct_UScriptStruct_FDoNNavigationQueryData, METADATA_PARAMS(Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::NewProp_DynamicCollisionListener,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::NewProp_ResultHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::NewProp_Data,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
		Z_Construct_UScriptStruct_FDonNavigationTask,
		&NewStructOps,
		"DonNavigationQueryTask",
		sizeof(FDonNavigationQueryTask),
		alignof(FDonNavigationQueryTask),
		Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationQueryTask()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDonNavigationQueryTask_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DonAINavigation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DonNavigationQueryTask"), sizeof(FDonNavigationQueryTask), Get_Z_Construct_UScriptStruct_FDonNavigationQueryTask_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDonNavigationQueryTask_Hash() { return 688492287U; }
class UScriptStruct* FDonNavigationTask::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DONAINAVIGATION_API uint32 Get_Z_Construct_UScriptStruct_FDonNavigationTask_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDonNavigationTask, Z_Construct_UPackage__Script_DonAINavigation(), TEXT("DonNavigationTask"), sizeof(FDonNavigationTask), Get_Z_Construct_UScriptStruct_FDonNavigationTask_Hash());
	}
	return Singleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FDonNavigationTask>()
{
	return FDonNavigationTask::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDonNavigationTask(FDonNavigationTask::StaticStruct, TEXT("/Script/DonAINavigation"), TEXT("DonNavigationTask"), false, nullptr, nullptr);
static struct FScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavigationTask
{
	FScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavigationTask()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DonNavigationTask")),new UScriptStruct::TCppStructOps<FDonNavigationTask>);
	}
} ScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavigationTask;
	struct Z_Construct_UScriptStruct_FDonNavigationTask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDonNavigationTask_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDonNavigationTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDonNavigationTask>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDonNavigationTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
		nullptr,
		&NewStructOps,
		"DonNavigationTask",
		sizeof(FDonNavigationTask),
		alignof(FDonNavigationTask),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDonNavigationTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavigationTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationTask()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDonNavigationTask_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DonAINavigation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DonNavigationTask"), sizeof(FDonNavigationTask), Get_Z_Construct_UScriptStruct_FDonNavigationTask_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDonNavigationTask_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDonNavigationTask_Hash() { return 3455774810U; }
class UScriptStruct* FDoNNavigationQueryData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DONAINAVIGATION_API uint32 Get_Z_Construct_UScriptStruct_FDoNNavigationQueryData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoNNavigationQueryData, Z_Construct_UPackage__Script_DonAINavigation(), TEXT("DoNNavigationQueryData"), sizeof(FDoNNavigationQueryData), Get_Z_Construct_UScriptStruct_FDoNNavigationQueryData_Hash());
	}
	return Singleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FDoNNavigationQueryData>()
{
	return FDoNNavigationQueryData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDoNNavigationQueryData(FDoNNavigationQueryData::StaticStruct, TEXT("/Script/DonAINavigation"), TEXT("DoNNavigationQueryData"), false, nullptr, nullptr);
static struct FScriptStruct_DonAINavigation_StaticRegisterNativesFDoNNavigationQueryData
{
	FScriptStruct_DonAINavigation_StaticRegisterNativesFDoNNavigationQueryData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DoNNavigationQueryData")),new UScriptStruct::TCppStructOps<FDoNNavigationQueryData>);
	}
} ScriptStruct_DonAINavigation_StaticRegisterNativesFDoNNavigationQueryData;
	struct Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QueryStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QueryStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathSolutionOptimized_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathSolutionOptimized;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathSolutionOptimized_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Destination;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_CollisionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoNNavigationQueryData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_QueryStatus_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_QueryStatus = { "QueryStatus", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoNNavigationQueryData, QueryStatus), Z_Construct_UEnum_DonAINavigation_EDonNavigationQueryStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_QueryStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_QueryStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_QueryStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_PathSolutionOptimized_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_PathSolutionOptimized = { "PathSolutionOptimized", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoNNavigationQueryData, PathSolutionOptimized), METADATA_PARAMS(Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_PathSolutionOptimized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_PathSolutionOptimized_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_PathSolutionOptimized_Inner = { "PathSolutionOptimized", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_QueryParams_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_QueryParams = { "QueryParams", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoNNavigationQueryData, QueryParams), Z_Construct_UScriptStruct_FDoNNavigationQueryParams, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_QueryParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_QueryParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_Destination_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoNNavigationQueryData, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_Destination_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_Destination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_Origin_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoNNavigationQueryData, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x0014000000080008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoNNavigationQueryData, CollisionComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_CollisionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_Actor_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "Comment", "// Query input\n" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "Query input" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000000014, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoNNavigationQueryData, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_QueryStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_QueryStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_PathSolutionOptimized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_PathSolutionOptimized_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_QueryParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_Destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_CollisionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_Actor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
		nullptr,
		&NewStructOps,
		"DoNNavigationQueryData",
		sizeof(FDoNNavigationQueryData),
		alignof(FDoNNavigationQueryData),
		Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDoNNavigationQueryData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDoNNavigationQueryData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DonAINavigation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DoNNavigationQueryData"), sizeof(FDoNNavigationQueryData), Get_Z_Construct_UScriptStruct_FDoNNavigationQueryData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDoNNavigationQueryData_Hash() { return 1148694768U; }
class UScriptStruct* FDoNNavigationDebugParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DONAINAVIGATION_API uint32 Get_Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoNNavigationDebugParams, Z_Construct_UPackage__Script_DonAINavigation(), TEXT("DoNNavigationDebugParams"), sizeof(FDoNNavigationDebugParams), Get_Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Hash());
	}
	return Singleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FDoNNavigationDebugParams>()
{
	return FDoNNavigationDebugParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDoNNavigationDebugParams(FDoNNavigationDebugParams::StaticStruct, TEXT("/Script/DonAINavigation"), TEXT("DoNNavigationDebugParams"), false, nullptr, nullptr);
static struct FScriptStruct_DonAINavigation_StaticRegisterNativesFDoNNavigationDebugParams
{
	FScriptStruct_DonAINavigation_StaticRegisterNativesFDoNNavigationDebugParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DoNNavigationDebugParams")),new UScriptStruct::TCppStructOps<FDoNNavigationDebugParams>);
	}
} ScriptStruct_DonAINavigation_StaticRegisterNativesFDoNNavigationDebugParams;
	struct Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualizeInRealTime_MetaData[];
#endif
		static void NewProp_VisualizeInRealTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisualizeInRealTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualizeOptimizedPath_MetaData[];
#endif
		static void NewProp_VisualizeOptimizedPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisualizeOptimizedPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualizeRawPath_MetaData[];
#endif
		static void NewProp_VisualizeRawPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisualizeRawPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawDebugVolumes_MetaData[];
#endif
		static void NewProp_DrawDebugVolumes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawDebugVolumes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoNNavigationDebugParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_LineDuration_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "Comment", "/* -1 signifies persistent lines that need to be flushed out manually to clear them*/" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "-1 signifies persistent lines that need to be flushed out manually to clear them" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_LineDuration = { "LineDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoNNavigationDebugParams, LineDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_LineDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_LineDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_LineThickness_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoNNavigationDebugParams, LineThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_LineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_LineThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeInRealTime_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeInRealTime_SetBit(void* Obj)
	{
		((FDoNNavigationDebugParams*)Obj)->VisualizeInRealTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeInRealTime = { "VisualizeInRealTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDoNNavigationDebugParams), &Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeInRealTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeInRealTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeInRealTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeOptimizedPath_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeOptimizedPath_SetBit(void* Obj)
	{
		((FDoNNavigationDebugParams*)Obj)->VisualizeOptimizedPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeOptimizedPath = { "VisualizeOptimizedPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDoNNavigationDebugParams), &Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeOptimizedPath_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeOptimizedPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeOptimizedPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeRawPath_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeRawPath_SetBit(void* Obj)
	{
		((FDoNNavigationDebugParams*)Obj)->VisualizeRawPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeRawPath = { "VisualizeRawPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDoNNavigationDebugParams), &Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeRawPath_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeRawPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeRawPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_DrawDebugVolumes_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_DrawDebugVolumes_SetBit(void* Obj)
	{
		((FDoNNavigationDebugParams*)Obj)->DrawDebugVolumes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_DrawDebugVolumes = { "DrawDebugVolumes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDoNNavigationDebugParams), &Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_DrawDebugVolumes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_DrawDebugVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_DrawDebugVolumes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_LineDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_LineThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeInRealTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeOptimizedPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeRawPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_DrawDebugVolumes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
		nullptr,
		&NewStructOps,
		"DoNNavigationDebugParams",
		sizeof(FDoNNavigationDebugParams),
		alignof(FDoNNavigationDebugParams),
		Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDoNNavigationDebugParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DonAINavigation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DoNNavigationDebugParams"), sizeof(FDoNNavigationDebugParams), Get_Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Hash() { return 2786345589U; }
class UScriptStruct* FDoNNavigationQueryParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DONAINAVIGATION_API uint32 Get_Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoNNavigationQueryParams, Z_Construct_UPackage__Script_DonAINavigation(), TEXT("DoNNavigationQueryParams"), sizeof(FDoNNavigationQueryParams), Get_Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Hash());
	}
	return Singleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FDoNNavigationQueryParams>()
{
	return FDoNNavigationQueryParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDoNNavigationQueryParams(FDoNNavigationQueryParams::StaticStruct, TEXT("/Script/DonAINavigation"), TEXT("DoNNavigationQueryParams"), false, nullptr, nullptr);
static struct FScriptStruct_DonAINavigation_StaticRegisterNativesFDoNNavigationQueryParams
{
	FScriptStruct_DonAINavigation_StaticRegisterNativesFDoNNavigationQueryParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DoNNavigationQueryParams")),new UScriptStruct::TCppStructOps<FDoNNavigationQueryParams>);
	}
} ScriptStruct_DonAINavigation_StaticRegisterNativesFDoNNavigationQueryParams;
	struct Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTemp_WalkSolution_MetaData[];
#endif
		static void NewProp_bTemp_WalkSolution_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTemp_WalkSolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceRescheduleQuery_MetaData[];
#endif
		static void NewProp_bForceRescheduleQuery_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceRescheduleQuery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionShapeInflation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionShapeInflation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreciseDynamicCollisionRepathing_MetaData[];
#endif
		static void NewProp_bPreciseDynamicCollisionRepathing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreciseDynamicCollisionRepathing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxOptimizerSweepAttemptsPerNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxOptimizerSweepAttemptsPerNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipOptimizationPass_MetaData[];
#endif
		static void NewProp_bSkipOptimizationPass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipOptimizationPass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlexibleOriginGoal_MetaData[];
#endif
		static void NewProp_bFlexibleOriginGoal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlexibleOriginGoal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_QueryTimeout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoNNavigationQueryParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bTemp_WalkSolution_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bTemp_WalkSolution_SetBit(void* Obj)
	{
		((FDoNNavigationQueryParams*)Obj)->bTemp_WalkSolution = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bTemp_WalkSolution = { "bTemp_WalkSolution", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDoNNavigationQueryParams), &Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bTemp_WalkSolution_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bTemp_WalkSolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bTemp_WalkSolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bForceRescheduleQuery_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "Comment", "/** By default the navigation manager will not allow you to schedule a new query if a pre-existing query\n\x09*   scheduled by you is not yet complete. You can override this behavior by forcing the manager to abort\n\x09*   the old query and reschedule this one. Use with discretion: Hammering the manager with queries can\n\x09*   quickly degrade performance (especially in a dynamic collision context).\n\x09*/" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "By default the navigation manager will not allow you to schedule a new query if a pre-existing query\n scheduled by you is not yet complete. You can override this behavior by forcing the manager to abort\n the old query and reschedule this one. Use with discretion: Hammering the manager with queries can\n quickly degrade performance (especially in a dynamic collision context)." },
	};
#endif
	void Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bForceRescheduleQuery_SetBit(void* Obj)
	{
		((FDoNNavigationQueryParams*)Obj)->bForceRescheduleQuery = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bForceRescheduleQuery = { "bForceRescheduleQuery", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDoNNavigationQueryParams), &Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bForceRescheduleQuery_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bForceRescheduleQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bForceRescheduleQuery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_CollisionShapeInflation_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "Comment", "/** Allows you to inflate your mesh's collision extents by a fixed increment for all sweep based testing.\n\x09*   Typically used if you find your mesh bumping into obstacles while navigating along path solutions.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "Allows you to inflate your mesh's collision extents by a fixed increment for all sweep based testing.\n Typically used if you find your mesh bumping into obstacles while navigating along path solutions." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_CollisionShapeInflation = { "CollisionShapeInflation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoNNavigationQueryParams, CollisionShapeInflation), METADATA_PARAMS(Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_CollisionShapeInflation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_CollisionShapeInflation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bPreciseDynamicCollisionRepathing_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "Comment", "/** Enabling this will sample all voxels of your pawn or character for determining whether a path solution\n\x09*  needs to be recalculated due to dynamic obstacles. This will improve the accuracy of response to dynamic collisions\n\x09*  but comes at a steep cost as the number of event delegates required for listening to precise dynamic collisions is high\n\x09*  Only use this if you really need to.*/" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "Enabling this will sample all voxels of your pawn or character for determining whether a path solution\nneeds to be recalculated due to dynamic obstacles. This will improve the accuracy of response to dynamic collisions\nbut comes at a steep cost as the number of event delegates required for listening to precise dynamic collisions is high\nOnly use this if you really need to." },
	};
#endif
	void Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bPreciseDynamicCollisionRepathing_SetBit(void* Obj)
	{
		((FDoNNavigationQueryParams*)Obj)->bPreciseDynamicCollisionRepathing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bPreciseDynamicCollisionRepathing = { "bPreciseDynamicCollisionRepathing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDoNNavigationQueryParams), &Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bPreciseDynamicCollisionRepathing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bPreciseDynamicCollisionRepathing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bPreciseDynamicCollisionRepathing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_MaxOptimizerSweepAttemptsPerNode_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_MaxOptimizerSweepAttemptsPerNode = { "MaxOptimizerSweepAttemptsPerNode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoNNavigationQueryParams, MaxOptimizerSweepAttemptsPerNode), METADATA_PARAMS(Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_MaxOptimizerSweepAttemptsPerNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_MaxOptimizerSweepAttemptsPerNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bSkipOptimizationPass_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "Comment", "/** Skips optimization of the path solution completely. Optimized paths are shorter and more visually cogent\n\x09*   but come at a cost. Maps with low voxel density (high VoxelSize value) usually need optimization for best results\n\x09*/" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "Skips optimization of the path solution completely. Optimized paths are shorter and more visually cogent\n but come at a cost. Maps with low voxel density (high VoxelSize value) usually need optimization for best results" },
	};
#endif
	void Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bSkipOptimizationPass_SetBit(void* Obj)
	{
		((FDoNNavigationQueryParams*)Obj)->bSkipOptimizationPass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bSkipOptimizationPass = { "bSkipOptimizationPass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDoNNavigationQueryParams), &Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bSkipOptimizationPass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bSkipOptimizationPass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bSkipOptimizationPass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bFlexibleOriginGoal_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bFlexibleOriginGoal_SetBit(void* Obj)
	{
		((FDoNNavigationQueryParams*)Obj)->bFlexibleOriginGoal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bFlexibleOriginGoal = { "bFlexibleOriginGoal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDoNNavigationQueryParams), &Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bFlexibleOriginGoal_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bFlexibleOriginGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bFlexibleOriginGoal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_QueryTimeout_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "Comment", "/** If a query takes more time to run than the value specified here, the pathfinding task will abort\n\x09*   This is useful to prevent expensive queries (eg: by passing a destination for which no solution exists)\n\x09*   from clogging up the pathfinding system\n\x09*/" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "If a query takes more time to run than the value specified here, the pathfinding task will abort\n This is useful to prevent expensive queries (eg: by passing a destination for which no solution exists)\n from clogging up the pathfinding system" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_QueryTimeout = { "QueryTimeout", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoNNavigationQueryParams, QueryTimeout), METADATA_PARAMS(Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_QueryTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_QueryTimeout_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bTemp_WalkSolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bForceRescheduleQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_CollisionShapeInflation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bPreciseDynamicCollisionRepathing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_MaxOptimizerSweepAttemptsPerNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bSkipOptimizationPass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bFlexibleOriginGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_QueryTimeout,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
		nullptr,
		&NewStructOps,
		"DoNNavigationQueryParams",
		sizeof(FDoNNavigationQueryParams),
		alignof(FDoNNavigationQueryParams),
		Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDoNNavigationQueryParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DonAINavigation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DoNNavigationQueryParams"), sizeof(FDoNNavigationQueryParams), Get_Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Hash() { return 310652217U; }
class UScriptStruct* FDonNavVoxelXYZ::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DONAINAVIGATION_API uint32 Get_Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDonNavVoxelXYZ, Z_Construct_UPackage__Script_DonAINavigation(), TEXT("DonNavVoxelXYZ"), sizeof(FDonNavVoxelXYZ), Get_Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Hash());
	}
	return Singleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FDonNavVoxelXYZ>()
{
	return FDonNavVoxelXYZ::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDonNavVoxelXYZ(FDonNavVoxelXYZ::StaticStruct, TEXT("/Script/DonAINavigation"), TEXT("DonNavVoxelXYZ"), false, nullptr, nullptr);
static struct FScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavVoxelXYZ
{
	FScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavVoxelXYZ()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DonNavVoxelXYZ")),new UScriptStruct::TCppStructOps<FDonNavVoxelXYZ>);
	}
} ScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavVoxelXYZ;
	struct Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_X_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDonNavVoxelXYZ>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDonNavVoxelXYZ, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::NewProp_X_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::NewProp_X_Inner = { "X", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDonNavVoxelX, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::NewProp_X_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
		nullptr,
		&NewStructOps,
		"DonNavVoxelXYZ",
		sizeof(FDonNavVoxelXYZ),
		alignof(FDonNavVoxelXYZ),
		Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDonNavVoxelXYZ()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DonAINavigation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DonNavVoxelXYZ"), sizeof(FDonNavVoxelXYZ), Get_Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Hash() { return 3293500752U; }
class UScriptStruct* FDonNavVoxelX::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DONAINAVIGATION_API uint32 Get_Z_Construct_UScriptStruct_FDonNavVoxelX_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDonNavVoxelX, Z_Construct_UPackage__Script_DonAINavigation(), TEXT("DonNavVoxelX"), sizeof(FDonNavVoxelX), Get_Z_Construct_UScriptStruct_FDonNavVoxelX_Hash());
	}
	return Singleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FDonNavVoxelX>()
{
	return FDonNavVoxelX::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDonNavVoxelX(FDonNavVoxelX::StaticStruct, TEXT("/Script/DonAINavigation"), TEXT("DonNavVoxelX"), false, nullptr, nullptr);
static struct FScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavVoxelX
{
	FScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavVoxelX()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DonNavVoxelX")),new UScriptStruct::TCppStructOps<FDonNavVoxelX>);
	}
} ScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavVoxelX;
	struct Z_Construct_UScriptStruct_FDonNavVoxelX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Y_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDonNavVoxelX>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDonNavVoxelX, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::NewProp_Y_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::NewProp_Y_Inner = { "Y", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDonNavVoxelY, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::NewProp_Y_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
		nullptr,
		&NewStructOps,
		"DonNavVoxelX",
		sizeof(FDonNavVoxelX),
		alignof(FDonNavVoxelX),
		Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDonNavVoxelX()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDonNavVoxelX_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DonAINavigation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DonNavVoxelX"), sizeof(FDonNavVoxelX), Get_Z_Construct_UScriptStruct_FDonNavVoxelX_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDonNavVoxelX_Hash() { return 1918508776U; }
class UScriptStruct* FDonNavVoxelY::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DONAINAVIGATION_API uint32 Get_Z_Construct_UScriptStruct_FDonNavVoxelY_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDonNavVoxelY, Z_Construct_UPackage__Script_DonAINavigation(), TEXT("DonNavVoxelY"), sizeof(FDonNavVoxelY), Get_Z_Construct_UScriptStruct_FDonNavVoxelY_Hash());
	}
	return Singleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FDonNavVoxelY>()
{
	return FDonNavVoxelY::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDonNavVoxelY(FDonNavVoxelY::StaticStruct, TEXT("/Script/DonAINavigation"), TEXT("DonNavVoxelY"), false, nullptr, nullptr);
static struct FScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavVoxelY
{
	FScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavVoxelY()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DonNavVoxelY")),new UScriptStruct::TCppStructOps<FDonNavVoxelY>);
	}
} ScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavVoxelY;
	struct Z_Construct_UScriptStruct_FDonNavVoxelY_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Z;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Z_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// @todo: convert to regular struct and profile startup speed. Usinng a USTRUCT for these may be excessive\n" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "@todo: convert to regular struct and profile startup speed. Usinng a USTRUCT for these may be excessive" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDonNavVoxelY>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::NewProp_Z_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDonNavVoxelY, Z), METADATA_PARAMS(Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::NewProp_Z_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::NewProp_Z_Inner = { "Z", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDonNavigationVoxel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::NewProp_Z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::NewProp_Z_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
		nullptr,
		&NewStructOps,
		"DonNavVoxelY",
		sizeof(FDonNavVoxelY),
		alignof(FDonNavVoxelY),
		Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDonNavVoxelY()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDonNavVoxelY_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DonAINavigation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DonNavVoxelY"), sizeof(FDonNavVoxelY), Get_Z_Construct_UScriptStruct_FDonNavVoxelY_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDonNavVoxelY_Hash() { return 3714724934U; }
class UScriptStruct* FDonNavigationDynamicCollisionNotifyee::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DONAINAVIGATION_API uint32 Get_Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee, Z_Construct_UPackage__Script_DonAINavigation(), TEXT("DonNavigationDynamicCollisionNotifyee"), sizeof(FDonNavigationDynamicCollisionNotifyee), Get_Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Hash());
	}
	return Singleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FDonNavigationDynamicCollisionNotifyee>()
{
	return FDonNavigationDynamicCollisionNotifyee::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee(FDonNavigationDynamicCollisionNotifyee::StaticStruct, TEXT("/Script/DonAINavigation"), TEXT("DonNavigationDynamicCollisionNotifyee"), false, nullptr, nullptr);
static struct FScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavigationDynamicCollisionNotifyee
{
	FScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavigationDynamicCollisionNotifyee()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DonNavigationDynamicCollisionNotifyee")),new UScriptStruct::TCppStructOps<FDonNavigationDynamicCollisionNotifyee>);
	}
} ScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavigationDynamicCollisionNotifyee;
	struct Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Listener_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Listener;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// note: non-dynamic delegate can't be used as a function parameter apparently\n" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "note: non-dynamic delegate can't be used as a function parameter apparently" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDonNavigationDynamicCollisionNotifyee>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics::NewProp_Listener_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics::NewProp_Listener = { "Listener", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDonNavigationDynamicCollisionNotifyee, Listener), Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics::NewProp_Listener_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics::NewProp_Listener_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics::NewProp_Listener,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
		nullptr,
		&NewStructOps,
		"DonNavigationDynamicCollisionNotifyee",
		sizeof(FDonNavigationDynamicCollisionNotifyee),
		alignof(FDonNavigationDynamicCollisionNotifyee),
		Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DonAINavigation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DonNavigationDynamicCollisionNotifyee"), sizeof(FDonNavigationDynamicCollisionNotifyee), Get_Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Hash() { return 3104134080U; }
class UScriptStruct* FDonNavigationDynamicCollisionPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DONAINAVIGATION_API uint32 Get_Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload, Z_Construct_UPackage__Script_DonAINavigation(), TEXT("DonNavigationDynamicCollisionPayload"), sizeof(FDonNavigationDynamicCollisionPayload), Get_Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Hash());
	}
	return Singleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FDonNavigationDynamicCollisionPayload>()
{
	return FDonNavigationDynamicCollisionPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDonNavigationDynamicCollisionPayload(FDonNavigationDynamicCollisionPayload::StaticStruct, TEXT("/Script/DonAINavigation"), TEXT("DonNavigationDynamicCollisionPayload"), false, nullptr, nullptr);
static struct FScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavigationDynamicCollisionPayload
{
	FScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavigationDynamicCollisionPayload()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DonNavigationDynamicCollisionPayload")),new UScriptStruct::TCppStructOps<FDonNavigationDynamicCollisionPayload>);
	}
} ScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavigationDynamicCollisionPayload;
	struct Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Voxel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Voxel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDonNavigationDynamicCollisionPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Statics::NewProp_Voxel_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Statics::NewProp_Voxel = { "Voxel", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDonNavigationDynamicCollisionPayload, Voxel), Z_Construct_UScriptStruct_FDonNavigationVoxel, METADATA_PARAMS(Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Statics::NewProp_Voxel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Statics::NewProp_Voxel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Statics::NewProp_Voxel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
		nullptr,
		&NewStructOps,
		"DonNavigationDynamicCollisionPayload",
		sizeof(FDonNavigationDynamicCollisionPayload),
		alignof(FDonNavigationDynamicCollisionPayload),
		Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DonAINavigation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DonNavigationDynamicCollisionPayload"), sizeof(FDonNavigationDynamicCollisionPayload), Get_Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Hash() { return 245406767U; }
class UScriptStruct* FDonVoxelCollisionProfile::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DONAINAVIGATION_API uint32 Get_Z_Construct_UScriptStruct_FDonVoxelCollisionProfile_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDonVoxelCollisionProfile, Z_Construct_UPackage__Script_DonAINavigation(), TEXT("DonVoxelCollisionProfile"), sizeof(FDonVoxelCollisionProfile), Get_Z_Construct_UScriptStruct_FDonVoxelCollisionProfile_Hash());
	}
	return Singleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FDonVoxelCollisionProfile>()
{
	return FDonVoxelCollisionProfile::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDonVoxelCollisionProfile(FDonVoxelCollisionProfile::StaticStruct, TEXT("/Script/DonAINavigation"), TEXT("DonVoxelCollisionProfile"), false, nullptr, nullptr);
static struct FScriptStruct_DonAINavigation_StaticRegisterNativesFDonVoxelCollisionProfile
{
	FScriptStruct_DonAINavigation_StaticRegisterNativesFDonVoxelCollisionProfile()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DonVoxelCollisionProfile")),new UScriptStruct::TCppStructOps<FDonVoxelCollisionProfile>);
	}
} ScriptStruct_DonAINavigation_StaticRegisterNativesFDonVoxelCollisionProfile;
	struct Z_Construct_UScriptStruct_FDonVoxelCollisionProfile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDonVoxelCollisionProfile_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDonVoxelCollisionProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDonVoxelCollisionProfile>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDonVoxelCollisionProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
		nullptr,
		&NewStructOps,
		"DonVoxelCollisionProfile",
		sizeof(FDonVoxelCollisionProfile),
		alignof(FDonVoxelCollisionProfile),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDonVoxelCollisionProfile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonVoxelCollisionProfile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDonVoxelCollisionProfile()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDonVoxelCollisionProfile_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DonAINavigation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DonVoxelCollisionProfile"), sizeof(FDonVoxelCollisionProfile), Get_Z_Construct_UScriptStruct_FDonVoxelCollisionProfile_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDonVoxelCollisionProfile_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDonVoxelCollisionProfile_Hash() { return 2635497140U; }
class UScriptStruct* FDonNavigationVoxel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DONAINAVIGATION_API uint32 Get_Z_Construct_UScriptStruct_FDonNavigationVoxel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDonNavigationVoxel, Z_Construct_UPackage__Script_DonAINavigation(), TEXT("DonNavigationVoxel"), sizeof(FDonNavigationVoxel), Get_Z_Construct_UScriptStruct_FDonNavigationVoxel_Hash());
	}
	return Singleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FDonNavigationVoxel>()
{
	return FDonNavigationVoxel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDonNavigationVoxel(FDonNavigationVoxel::StaticStruct, TEXT("/Script/DonAINavigation"), TEXT("DonNavigationVoxel"), false, nullptr, nullptr);
static struct FScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavigationVoxel
{
	FScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavigationVoxel()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DonNavigationVoxel")),new UScriptStruct::TCppStructOps<FDonNavigationVoxel>);
	}
} ScriptStruct_DonAINavigation_StaticRegisterNativesFDonNavigationVoxel;
	struct Z_Construct_UScriptStruct_FDonNavigationVoxel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDonNavigationVoxel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDonNavigationVoxel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDonNavigationVoxel>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDonNavigationVoxel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
		nullptr,
		&NewStructOps,
		"DonNavigationVoxel",
		sizeof(FDonNavigationVoxel),
		alignof(FDonNavigationVoxel),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDonNavigationVoxel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavigationVoxel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationVoxel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDonNavigationVoxel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DonAINavigation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DonNavigationVoxel"), sizeof(FDonNavigationVoxel), Get_Z_Construct_UScriptStruct_FDonNavigationVoxel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDonNavigationVoxel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDonNavigationVoxel_Hash() { return 342096535U; }
	void ADonNavigationManager::StaticRegisterNativesADonNavigationManager()
	{
		UClass* Class = ADonNavigationManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbortPathfindingTask", &ADonNavigationManager::execAbortPathfindingTask },
			{ "ClampLocationToNavigableWorld", &ADonNavigationManager::execClampLocationToNavigableWorld },
			{ "ConstructBuilder", &ADonNavigationManager::execConstructBuilder },
			{ "Debug_ClearAllVolumes", &ADonNavigationManager::execDebug_ClearAllVolumes },
			{ "Debug_DrawAllVolumes", &ADonNavigationManager::execDebug_DrawAllVolumes },
			{ "Debug_DrawVolumesAroundPoint", &ADonNavigationManager::execDebug_DrawVolumesAroundPoint },
			{ "Debug_DrawVoxelCollisionProfile", &ADonNavigationManager::execDebug_DrawVoxelCollisionProfile },
			{ "Debug_ToggleWorldBoundaryInGame", &ADonNavigationManager::execDebug_ToggleWorldBoundaryInGame },
			{ "FindPathSolution_StressTesting", &ADonNavigationManager::execFindPathSolution_StressTesting },
			{ "FindRandomPointAroundOriginInNavWorld", &ADonNavigationManager::execFindRandomPointAroundOriginInNavWorld },
			{ "FindRandomPointFromActorInNavWorld", &ADonNavigationManager::execFindRandomPointFromActorInNavWorld },
			{ "HasTask", &ADonNavigationManager::execHasTask },
			{ "IsDirectPathLineSweep", &ADonNavigationManager::execIsDirectPathLineSweep },
			{ "IsDirectPathLineTrace", &ADonNavigationManager::execIsDirectPathLineTrace },
			{ "IsDirectPathSweep", &ADonNavigationManager::execIsDirectPathSweep },
			{ "IsLocationBeneathLandscape", &ADonNavigationManager::execIsLocationBeneathLandscape },
			{ "IsLocationWithinNavigableWorld", &ADonNavigationManager::execIsLocationWithinNavigableWorld },
			{ "IsMeshBoundsWithinNavigableWorld", &ADonNavigationManager::execIsMeshBoundsWithinNavigableWorld },
			{ "ScheduleDynamicCollisionUpdate", &ADonNavigationManager::execScheduleDynamicCollisionUpdate },
			{ "SchedulePathfindingTask", &ADonNavigationManager::execSchedulePathfindingTask },
			{ "StopListeningToDynamicCollisionsForPath", &ADonNavigationManager::execStopListeningToDynamicCollisionsForPath },
			{ "VisualizeDynamicCollisionListeners", &ADonNavigationManager::execVisualizeDynamicCollisionListeners },
			{ "VisualizeNAVResult", &ADonNavigationManager::execVisualizeNAVResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask_Statics
	{
		struct DonNavigationManager_eventAbortPathfindingTask_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventAbortPathfindingTask_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "Comment", "/** Aborts an existing pathfinding task for a given Actor */" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "Aborts an existing pathfinding task for a given Actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "AbortPathfindingTask", nullptr, nullptr, sizeof(DonNavigationManager_eventAbortPathfindingTask_Parms), Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics
	{
		struct DonNavigationManager_eventClampLocationToNavigableWorld_Parms
		{
			FVector DesiredLocation;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventClampLocationToNavigableWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics::NewProp_DesiredLocation = { "DesiredLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventClampLocationToNavigableWorld_Parms, DesiredLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics::NewProp_DesiredLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "Comment", "/* Clamps a vector to the navigation bounds as defined by the grid configuraiton of the navigation object you've placed in the map*/" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "Clamps a vector to the navigation bounds as defined by the grid configuraiton of the navigation object you've placed in the map" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "ClampLocationToNavigableWorld", nullptr, nullptr, sizeof(DonNavigationManager_eventClampLocationToNavigableWorld_Parms), Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADonNavigationManager_ConstructBuilder_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_ConstructBuilder_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "Comment", "// World generation\n" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "World generation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_ConstructBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "ConstructBuilder", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_ConstructBuilder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_ConstructBuilder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADonNavigationManager_ConstructBuilder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_ConstructBuilder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADonNavigationManager_Debug_ClearAllVolumes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_Debug_ClearAllVolumes_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_Debug_ClearAllVolumes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "Debug_ClearAllVolumes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_Debug_ClearAllVolumes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_Debug_ClearAllVolumes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADonNavigationManager_Debug_ClearAllVolumes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_Debug_ClearAllVolumes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes_Statics
	{
		struct DonNavigationManager_eventDebug_DrawAllVolumes_Parms
		{
			float LineThickness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventDebug_DrawAllVolumes_Parms, LineThickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes_Statics::NewProp_LineThickness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "Debug_DrawAllVolumes", nullptr, nullptr, sizeof(DonNavigationManager_eventDebug_DrawAllVolumes_Parms), Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics
	{
		struct DonNavigationManager_eventDebug_DrawVolumesAroundPoint_Parms
		{
			FVector Location;
			int32 CubeSize;
			bool DrawPersistentLines;
			float Duration;
			float LineThickness;
			bool bAutoInitializeVolumes;
		};
		static void NewProp_bAutoInitializeVolumes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoInitializeVolumes;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static void NewProp_DrawPersistentLines_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawPersistentLines;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CubeSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_bAutoInitializeVolumes_SetBit(void* Obj)
	{
		((DonNavigationManager_eventDebug_DrawVolumesAroundPoint_Parms*)Obj)->bAutoInitializeVolumes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_bAutoInitializeVolumes = { "bAutoInitializeVolumes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonNavigationManager_eventDebug_DrawVolumesAroundPoint_Parms), &Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_bAutoInitializeVolumes_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventDebug_DrawVolumesAroundPoint_Parms, LineThickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventDebug_DrawVolumesAroundPoint_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_DrawPersistentLines_SetBit(void* Obj)
	{
		((DonNavigationManager_eventDebug_DrawVolumesAroundPoint_Parms*)Obj)->DrawPersistentLines = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_DrawPersistentLines = { "DrawPersistentLines", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonNavigationManager_eventDebug_DrawVolumesAroundPoint_Parms), &Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_DrawPersistentLines_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_CubeSize = { "CubeSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventDebug_DrawVolumesAroundPoint_Parms, CubeSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventDebug_DrawVolumesAroundPoint_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_bAutoInitializeVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_LineThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_DrawPersistentLines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_CubeSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "CPP_Default_bAutoInitializeVolumes", "false" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "Debug_DrawVolumesAroundPoint", nullptr, nullptr, sizeof(DonNavigationManager_eventDebug_DrawVolumesAroundPoint_Parms), Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics
	{
		struct DonNavigationManager_eventDebug_DrawVoxelCollisionProfile_Parms
		{
			UPrimitiveComponent* MeshOrPrimitive;
			bool bDrawPersistent;
			float Duration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static void NewProp_bDrawPersistent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawPersistent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshOrPrimitive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshOrPrimitive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventDebug_DrawVoxelCollisionProfile_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::NewProp_bDrawPersistent_SetBit(void* Obj)
	{
		((DonNavigationManager_eventDebug_DrawVoxelCollisionProfile_Parms*)Obj)->bDrawPersistent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::NewProp_bDrawPersistent = { "bDrawPersistent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonNavigationManager_eventDebug_DrawVoxelCollisionProfile_Parms), &Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::NewProp_bDrawPersistent_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::NewProp_MeshOrPrimitive_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::NewProp_MeshOrPrimitive = { "MeshOrPrimitive", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventDebug_DrawVoxelCollisionProfile_Parms, MeshOrPrimitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::NewProp_MeshOrPrimitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::NewProp_MeshOrPrimitive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::NewProp_bDrawPersistent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::NewProp_MeshOrPrimitive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "CPP_Default_bDrawPersistent", "false" },
		{ "CPP_Default_Duration", "2.000000" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "Debug_DrawVoxelCollisionProfile", nullptr, nullptr, sizeof(DonNavigationManager_eventDebug_DrawVoxelCollisionProfile_Parms), Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADonNavigationManager_Debug_ToggleWorldBoundaryInGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_Debug_ToggleWorldBoundaryInGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_Debug_ToggleWorldBoundaryInGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "Debug_ToggleWorldBoundaryInGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_Debug_ToggleWorldBoundaryInGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_Debug_ToggleWorldBoundaryInGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADonNavigationManager_Debug_ToggleWorldBoundaryInGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_Debug_ToggleWorldBoundaryInGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics
	{
		struct DonNavigationManager_eventFindPathSolution_StressTesting_Parms
		{
			AActor* Actor;
			FVector Destination;
			TArray<FVector> PathSolutionRaw;
			TArray<FVector> PathSolutionOptimized;
			FDoNNavigationQueryParams QueryParams;
			FDoNNavigationDebugParams DebugParams;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryParams;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathSolutionOptimized;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathSolutionOptimized_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathSolutionRaw;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathSolutionRaw_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Destination;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DonNavigationManager_eventFindPathSolution_StressTesting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonNavigationManager_eventFindPathSolution_StressTesting_Parms), &Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_DebugParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_DebugParams = { "DebugParams", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventFindPathSolution_StressTesting_Parms, DebugParams), Z_Construct_UScriptStruct_FDoNNavigationDebugParams, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_DebugParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_DebugParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_QueryParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_QueryParams = { "QueryParams", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventFindPathSolution_StressTesting_Parms, QueryParams), Z_Construct_UScriptStruct_FDoNNavigationQueryParams, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_QueryParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_QueryParams_MetaData)) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_PathSolutionOptimized = { "PathSolutionOptimized", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventFindPathSolution_StressTesting_Parms, PathSolutionOptimized), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_PathSolutionOptimized_Inner = { "PathSolutionOptimized", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_PathSolutionRaw = { "PathSolutionRaw", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventFindPathSolution_StressTesting_Parms, PathSolutionRaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_PathSolutionRaw_Inner = { "PathSolutionRaw", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventFindPathSolution_StressTesting_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventFindPathSolution_StressTesting_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_DebugParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_QueryParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_PathSolutionOptimized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_PathSolutionOptimized_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_PathSolutionRaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_PathSolutionRaw_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_Destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "Comment", "/** \n\x09*  WARNING: This function is for stress-testing for performance only, it operates synchronously unlike the scheduler functions making it great for profiling sessions.\n\x09*  Use SchedulePathfindingTask for regular navigation and pathfinding usecases.\n\x09*\n\x09*  Given an actor (representing origin) and a destination point in the world, this function generates the shortest path between the two. \n\x09*\n\x09*  @param  Actor                  Actor which needs to navigate from one point to another. Typically (but not necessarily) a pawn. The location of this actor is treated as origin for pathfinding\x09\n\x09*  @param  Destination            Point in the world to which the actor needs to travel\n\x09*  @param  PathSolutionRaw        Path solution as an array of FVectors representing the shortest path from origin to destination\n\x09*  @param  PathSolutionOptimized  Path solution optimized from the raw path by performing collision sweeps using the actor's collision component\n\x09*  @param  QueryParams            Additional params for the path finding query\x09\x09\x09\x09\x09\x09\x09\x09\x09  \n\x09*  @param  DebugParams            Use these debug params to enable visualization of the raw and optimized paths and other debug related activities\n\x09*/" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "WARNING: This function is for stress-testing for performance only, it operates synchronously unlike the scheduler functions making it great for profiling sessions.\nUse SchedulePathfindingTask for regular navigation and pathfinding usecases.\n\nGiven an actor (representing origin) and a destination point in the world, this function generates the shortest path between the two.\n\n@param  Actor                  Actor which needs to navigate from one point to another. Typically (but not necessarily) a pawn. The location of this actor is treated as origin for pathfinding\n@param  Destination            Point in the world to which the actor needs to travel\n@param  PathSolutionRaw        Path solution as an array of FVectors representing the shortest path from origin to destination\n@param  PathSolutionOptimized  Path solution optimized from the raw path by performing collision sweeps using the actor's collision component\n@param  QueryParams            Additional params for the path finding query\n@param  DebugParams            Use these debug params to enable visualization of the raw and optimized paths and other debug related activities" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "FindPathSolution_StressTesting", nullptr, nullptr, sizeof(DonNavigationManager_eventFindPathSolution_StressTesting_Parms), Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics
	{
		struct DonNavigationManager_eventFindRandomPointAroundOriginInNavWorld_Parms
		{
			AActor* NavigationActor;
			FVector Origin;
			float Distance;
			bool bFoundValidResult;
			float MaxDesiredAltitude;
			float MaxZAngularDispacement;
			int32 MaxAttempts;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAttempts;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxZAngularDispacement;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDesiredAltitude;
		static void NewProp_bFoundValidResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFoundValidResult;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavigationActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventFindRandomPointAroundOriginInNavWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_MaxAttempts = { "MaxAttempts", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventFindRandomPointAroundOriginInNavWorld_Parms, MaxAttempts), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_MaxZAngularDispacement = { "MaxZAngularDispacement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventFindRandomPointAroundOriginInNavWorld_Parms, MaxZAngularDispacement), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_MaxDesiredAltitude = { "MaxDesiredAltitude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventFindRandomPointAroundOriginInNavWorld_Parms, MaxDesiredAltitude), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_bFoundValidResult_SetBit(void* Obj)
	{
		((DonNavigationManager_eventFindRandomPointAroundOriginInNavWorld_Parms*)Obj)->bFoundValidResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_bFoundValidResult = { "bFoundValidResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonNavigationManager_eventFindRandomPointAroundOriginInNavWorld_Parms), &Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_bFoundValidResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventFindRandomPointAroundOriginInNavWorld_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventFindRandomPointAroundOriginInNavWorld_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_NavigationActor = { "NavigationActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventFindRandomPointAroundOriginInNavWorld_Parms, NavigationActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_MaxAttempts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_MaxZAngularDispacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_MaxDesiredAltitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_bFoundValidResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_NavigationActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "CPP_Default_MaxAttempts", "5" },
		{ "CPP_Default_MaxDesiredAltitude", "-1.000000" },
		{ "CPP_Default_MaxZAngularDispacement", "15.000000" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "FindRandomPointAroundOriginInNavWorld", nullptr, nullptr, sizeof(DonNavigationManager_eventFindRandomPointAroundOriginInNavWorld_Parms), Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics
	{
		struct DonNavigationManager_eventFindRandomPointFromActorInNavWorld_Parms
		{
			AActor* Actor;
			float Distance;
			bool bFoundValidResult;
			float MaxDesiredAltitude;
			float MaxZAngularDispacement;
			int32 MaxAttempts;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAttempts;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxZAngularDispacement;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDesiredAltitude;
		static void NewProp_bFoundValidResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFoundValidResult;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventFindRandomPointFromActorInNavWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_MaxAttempts = { "MaxAttempts", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventFindRandomPointFromActorInNavWorld_Parms, MaxAttempts), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_MaxZAngularDispacement = { "MaxZAngularDispacement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventFindRandomPointFromActorInNavWorld_Parms, MaxZAngularDispacement), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_MaxDesiredAltitude = { "MaxDesiredAltitude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventFindRandomPointFromActorInNavWorld_Parms, MaxDesiredAltitude), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_bFoundValidResult_SetBit(void* Obj)
	{
		((DonNavigationManager_eventFindRandomPointFromActorInNavWorld_Parms*)Obj)->bFoundValidResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_bFoundValidResult = { "bFoundValidResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonNavigationManager_eventFindRandomPointFromActorInNavWorld_Parms), &Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_bFoundValidResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventFindRandomPointFromActorInNavWorld_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventFindRandomPointFromActorInNavWorld_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_MaxAttempts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_MaxZAngularDispacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_MaxDesiredAltitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_bFoundValidResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "Comment", "// AI Utility Functions\n" },
		{ "CPP_Default_MaxAttempts", "5" },
		{ "CPP_Default_MaxDesiredAltitude", "-1.000000" },
		{ "CPP_Default_MaxZAngularDispacement", "15.000000" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "AI Utility Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "FindRandomPointFromActorInNavWorld", nullptr, nullptr, sizeof(DonNavigationManager_eventFindRandomPointFromActorInNavWorld_Parms), Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics
	{
		struct DonNavigationManager_eventHasTask_Parms
		{
			AActor* Actor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DonNavigationManager_eventHasTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonNavigationManager_eventHasTask_Parms), &Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventHasTask_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "Comment", "/** Does this actor have an active pathfinding task already scheduled with the navigation manager? */" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "Does this actor have an active pathfinding task already scheduled with the navigation manager?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "HasTask", nullptr, nullptr, sizeof(DonNavigationManager_eventHasTask_Parms), Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADonNavigationManager_HasTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics
	{
		struct DonNavigationManager_eventIsDirectPathLineSweep_Parms
		{
			UPrimitiveComponent* CollisionComponent;
			FVector Start;
			FVector End;
			FHitResult OutHit;
			bool bFindInitialOverlaps;
			float CollisionShapeInflation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionShapeInflation;
		static void NewProp_bFindInitialOverlaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFindInitialOverlaps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DonNavigationManager_eventIsDirectPathLineSweep_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonNavigationManager_eventIsDirectPathLineSweep_Parms), &Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_CollisionShapeInflation = { "CollisionShapeInflation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathLineSweep_Parms, CollisionShapeInflation), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_bFindInitialOverlaps_SetBit(void* Obj)
	{
		((DonNavigationManager_eventIsDirectPathLineSweep_Parms*)Obj)->bFindInitialOverlaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_bFindInitialOverlaps = { "bFindInitialOverlaps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonNavigationManager_eventIsDirectPathLineSweep_Parms), &Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_bFindInitialOverlaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathLineSweep_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathLineSweep_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathLineSweep_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathLineSweep_Parms, CollisionComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_CollisionComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_CollisionShapeInflation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_bFindInitialOverlaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_OutHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_CollisionComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "CPP_Default_bFindInitialOverlaps", "false" },
		{ "CPP_Default_CollisionShapeInflation", "0.000000" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "IsDirectPathLineSweep", nullptr, nullptr, sizeof(DonNavigationManager_eventIsDirectPathLineSweep_Parms), Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics
	{
		struct DonNavigationManager_eventIsDirectPathLineTrace_Parms
		{
			FVector start;
			FVector end;
			FHitResult OutHit;
			TArray<AActor*> ActorsToIgnore;
			bool bFindInitialOverlaps;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bFindInitialOverlaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFindInitialOverlaps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_end;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_start;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DonNavigationManager_eventIsDirectPathLineTrace_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonNavigationManager_eventIsDirectPathLineTrace_Parms), &Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_bFindInitialOverlaps_SetBit(void* Obj)
	{
		((DonNavigationManager_eventIsDirectPathLineTrace_Parms*)Obj)->bFindInitialOverlaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_bFindInitialOverlaps = { "bFindInitialOverlaps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonNavigationManager_eventIsDirectPathLineTrace_Parms), &Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_bFindInitialOverlaps_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathLineTrace_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathLineTrace_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_end = { "end", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathLineTrace_Parms, end), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathLineTrace_Parms, start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_bFindInitialOverlaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_OutHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_end,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_start,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "CPP_Default_bFindInitialOverlaps", "true" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "IsDirectPathLineTrace", nullptr, nullptr, sizeof(DonNavigationManager_eventIsDirectPathLineTrace_Parms), Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics
	{
		struct DonNavigationManager_eventIsDirectPathSweep_Parms
		{
			UPrimitiveComponent* CollisionComponent;
			FVector Start;
			FVector End;
			FHitResult OutHit;
			bool bFindInitialOverlaps;
			float CollisionShapeInflation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionShapeInflation;
		static void NewProp_bFindInitialOverlaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFindInitialOverlaps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DonNavigationManager_eventIsDirectPathSweep_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonNavigationManager_eventIsDirectPathSweep_Parms), &Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_CollisionShapeInflation = { "CollisionShapeInflation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathSweep_Parms, CollisionShapeInflation), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_bFindInitialOverlaps_SetBit(void* Obj)
	{
		((DonNavigationManager_eventIsDirectPathSweep_Parms*)Obj)->bFindInitialOverlaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_bFindInitialOverlaps = { "bFindInitialOverlaps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonNavigationManager_eventIsDirectPathSweep_Parms), &Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_bFindInitialOverlaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathSweep_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathSweep_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathSweep_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathSweep_Parms, CollisionComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_CollisionComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_CollisionShapeInflation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_bFindInitialOverlaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_OutHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_CollisionComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "Comment", "// Tracing utility\n" },
		{ "CPP_Default_bFindInitialOverlaps", "false" },
		{ "CPP_Default_CollisionShapeInflation", "0.000000" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "Tracing utility" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "IsDirectPathSweep", nullptr, nullptr, sizeof(DonNavigationManager_eventIsDirectPathSweep_Parms), Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics
	{
		struct DonNavigationManager_eventIsLocationBeneathLandscape_Parms
		{
			FVector Location;
			float LineTraceHeight;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineTraceHeight;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DonNavigationManager_eventIsLocationBeneathLandscape_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonNavigationManager_eventIsLocationBeneathLandscape_Parms), &Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::NewProp_LineTraceHeight = { "LineTraceHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventIsLocationBeneathLandscape_Parms, LineTraceHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventIsLocationBeneathLandscape_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::NewProp_LineTraceHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "Comment", "/* This is an edge case where the goal is beneath the landscape (and therefore can never be reached). This situation should be identified pre-emptively and dealt with to prevent a futile and expensive call*/" },
		{ "CPP_Default_LineTraceHeight", "3000.000000" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "This is an edge case where the goal is beneath the landscape (and therefore can never be reached). This situation should be identified pre-emptively and dealt with to prevent a futile and expensive call" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "IsLocationBeneathLandscape", nullptr, nullptr, sizeof(DonNavigationManager_eventIsLocationBeneathLandscape_Parms), Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics
	{
		struct DonNavigationManager_eventIsLocationWithinNavigableWorld_Parms
		{
			FVector DesiredLocation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DonNavigationManager_eventIsLocationWithinNavigableWorld_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonNavigationManager_eventIsLocationWithinNavigableWorld_Parms), &Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::NewProp_DesiredLocation = { "DesiredLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventIsLocationWithinNavigableWorld_Parms, DesiredLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::NewProp_DesiredLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "IsLocationWithinNavigableWorld", nullptr, nullptr, sizeof(DonNavigationManager_eventIsLocationWithinNavigableWorld_Parms), Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics
	{
		struct DonNavigationManager_eventIsMeshBoundsWithinNavigableWorld_Parms
		{
			UPrimitiveComponent* Mesh;
			float BoundsScaleFactor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoundsScaleFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DonNavigationManager_eventIsMeshBoundsWithinNavigableWorld_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonNavigationManager_eventIsMeshBoundsWithinNavigableWorld_Parms), &Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::NewProp_BoundsScaleFactor = { "BoundsScaleFactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventIsMeshBoundsWithinNavigableWorld_Parms, BoundsScaleFactor), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventIsMeshBoundsWithinNavigableWorld_Parms, Mesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::NewProp_BoundsScaleFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "CPP_Default_BoundsScaleFactor", "1.000000" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "IsMeshBoundsWithinNavigableWorld", nullptr, nullptr, sizeof(DonNavigationManager_eventIsMeshBoundsWithinNavigableWorld_Parms), Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics
	{
		struct DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms
		{
			UPrimitiveComponent* Mesh;
			FScriptDelegate ResultHandler;
			FName CustomCacheIdentifier;
			bool bReplaceExistingTask;
			bool bDisableCacheUsage;
			bool bReloadCollisionCache;
			bool bUseCheapBoundsCollision;
			float BoundsScaleFactor;
			bool bForceSynchronousExecution;
			bool bDrawDebug;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
		static void NewProp_bForceSynchronousExecution_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceSynchronousExecution;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoundsScaleFactor;
		static void NewProp_bUseCheapBoundsCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCheapBoundsCollision;
		static void NewProp_bReloadCollisionCache_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReloadCollisionCache;
		static void NewProp_bDisableCacheUsage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableCacheUsage;
		static void NewProp_bReplaceExistingTask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplaceExistingTask;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CustomCacheIdentifier;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms), &Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms*)Obj)->bDrawDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms), &Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bForceSynchronousExecution_SetBit(void* Obj)
	{
		((DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms*)Obj)->bForceSynchronousExecution = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bForceSynchronousExecution = { "bForceSynchronousExecution", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms), &Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bForceSynchronousExecution_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_BoundsScaleFactor = { "BoundsScaleFactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms, BoundsScaleFactor), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bUseCheapBoundsCollision_SetBit(void* Obj)
	{
		((DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms*)Obj)->bUseCheapBoundsCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bUseCheapBoundsCollision = { "bUseCheapBoundsCollision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms), &Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bUseCheapBoundsCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bReloadCollisionCache_SetBit(void* Obj)
	{
		((DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms*)Obj)->bReloadCollisionCache = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bReloadCollisionCache = { "bReloadCollisionCache", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms), &Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bReloadCollisionCache_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bDisableCacheUsage_SetBit(void* Obj)
	{
		((DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms*)Obj)->bDisableCacheUsage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bDisableCacheUsage = { "bDisableCacheUsage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms), &Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bDisableCacheUsage_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bReplaceExistingTask_SetBit(void* Obj)
	{
		((DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms*)Obj)->bReplaceExistingTask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bReplaceExistingTask = { "bReplaceExistingTask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms), &Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bReplaceExistingTask_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_CustomCacheIdentifier = { "CustomCacheIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms, CustomCacheIdentifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_ResultHandler = { "ResultHandler", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms, ResultHandler), Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms, Mesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bDrawDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bForceSynchronousExecution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_BoundsScaleFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bUseCheapBoundsCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bReloadCollisionCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bDisableCacheUsage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bReplaceExistingTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_CustomCacheIdentifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_ResultHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "Comment", "/**\n\x09*  Schedule Dynamic Collision Update For Mesh\n\x09*\n\x09*  Updates the collision status of all voxels within a mesh's visibility bounds. You should call this function whenever a dynamic obstacle in your scene \n\x09*  moves, scales or morphs in any way that affects the collision. Always remember that the DoN Navigation system does not automatically detect dynamic voxel collision\n\x09*  as that would be too expensive for the system to manage (potentially millions of voxels reside in a scene). Therefore it relies on users of the plugin to manually\n\x09*  trigger dynamic collision depending on the unique needs of a particular project. You only need this for any object that moves after the game has begun, voxel collision\n\x09*  for static objects is exempt from this as they're mananged through a different code path and lazy-loaded on demand.\n\x09*\n\x09*  This function is expensive as it samples per-voxel collision so use it with care.\n\x09*\n\x09*  @param  Mesh\x09\x09\x09\x09\x09\x09\x09\x09  The mesh (usually a movable object) whose collision influence needs to be updated around the current location of the mesh\n\x09*\n\x09*  @param  ResultHandler                      Use this delegate to be notified when the task is complete and to learn its final status\n\x09*\n\x09*  @param  CustomCacheIdentifier              Use this to share a single collision profile across multiple meshes or to fully customize what gets loaded into the collision cache.\n\x09*\n\x09*                                             Details: By default the collision cache uses the address of each mesh component as the cache key. This has two fundamental limitations:\n\x09*\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09  1. Multiple meshes with identical collision properties will end up creating individual entries in the cache despite being the same (collision wise).\n\x09*\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09  2. Any mesh that needs to change its rotation or scale cannot use the default cache value which only works for location based translations.\n\x09*\n\x09*                                             The first limitation can be easily sovled by sharing a single cache identifier across all meshes of the same type (Eg: \"SolidWall_NoRotation\").\n\x09*                                             The second limitation can be resolved either by forcibly reloading the collision cache each time using bReloadCollisionCache (not recommended, very expensive) \n\x09*                                             OR you can use the Custom Cache Identifier to define cardinal translation points for your mesh as follows:\x09\n\x09*                                             Eg: Mesh Scale = 1.5f -> CustomCacheIdentifier = \"SolidWall_NoRotation_150p\", \n\x09*                                             Eg: Mesh Scale = 2.0f -> CustomCacheIdentifier = \"SolidWall_NoRotation_200p\", etc. \n\x09*                                             Using this technique instead of forcibly reloading the cache will improve your performance. Try to keep your identifiers short though!\n\x09*\n\x09*  @param  bReplaceExistingTask               By default the scheduler will ignore new tasks for a mesh if it already has one running. Use this to forcibly repalce an existing task.\n\x09*                                             This is useful for advanced usecases where you're relying on the sequence of dynamic collision updates or triggering other events dependent on its success\n\x09*\n\x09*  @param  bReloadCollisionCache\x09\x09\x09  Default is false. The system maintains a cache of voxel collision profiles associated with a mesh. A cache entry is created for a mesh\n\x09*                                             the first time you call this function for it. If you really want to overwrite the cache value associated with a mesh\n\x09*                                             then set bReloadCollisionCache to true. However for most usecases it is recommended to use CustomCacheIdentifier instead.\n\x09*\n\x09*\n\x09*  @param  bUseCheapBoundsCollision\x09\x09\x09  Marks all voxels within the mesh's visibility bounds as collided. This is several times faster that per-voxel sampling. Great for simple meshes like walls\n\x09*\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09  whose visibility bounds closely aligns with the actual mesh itself.\n\x09*                                             \n\x09*  @param  BoundsScaleFactor\x09\x09\x09\x09  Use this multiplier to increase or decrease the size of the bounding box derived from your mesh within which voxel collisions are sampled.\n\x09*\n\x09*/" },
		{ "CPP_Default_bDisableCacheUsage", "false" },
		{ "CPP_Default_bDrawDebug", "false" },
		{ "CPP_Default_bForceSynchronousExecution", "false" },
		{ "CPP_Default_BoundsScaleFactor", "1.000000" },
		{ "CPP_Default_bReloadCollisionCache", "false" },
		{ "CPP_Default_bReplaceExistingTask", "false" },
		{ "CPP_Default_bUseCheapBoundsCollision", "false" },
		{ "CPP_Default_CustomCacheIdentifier", "None" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "Schedule Dynamic Collision Update For Mesh\n\nUpdates the collision status of all voxels within a mesh's visibility bounds. You should call this function whenever a dynamic obstacle in your scene\nmoves, scales or morphs in any way that affects the collision. Always remember that the DoN Navigation system does not automatically detect dynamic voxel collision\nas that would be too expensive for the system to manage (potentially millions of voxels reside in a scene). Therefore it relies on users of the plugin to manually\ntrigger dynamic collision depending on the unique needs of a particular project. You only need this for any object that moves after the game has begun, voxel collision\nfor static objects is exempt from this as they're mananged through a different code path and lazy-loaded on demand.\n\nThis function is expensive as it samples per-voxel collision so use it with care.\n\n@param  Mesh                                                           The mesh (usually a movable object) whose collision influence needs to be updated around the current location of the mesh\n\n@param  ResultHandler                      Use this delegate to be notified when the task is complete and to learn its final status\n\n@param  CustomCacheIdentifier              Use this to share a single collision profile across multiple meshes or to fully customize what gets loaded into the collision cache.\n\n                                           Details: By default the collision cache uses the address of each mesh component as the cache key. This has two fundamental limitations:\n                                                                                       1. Multiple meshes with identical collision properties will end up creating individual entries in the cache despite being the same (collision wise).\n                                                                                       2. Any mesh that needs to change its rotation or scale cannot use the default cache value which only works for location based translations.\n\n                                           The first limitation can be easily sovled by sharing a single cache identifier across all meshes of the same type (Eg: \"SolidWall_NoRotation\").\n                                           The second limitation can be resolved either by forcibly reloading the collision cache each time using bReloadCollisionCache (not recommended, very expensive)\n                                           OR you can use the Custom Cache Identifier to define cardinal translation points for your mesh as follows:\n                                           Eg: Mesh Scale = 1.5f -> CustomCacheIdentifier = \"SolidWall_NoRotation_150p\",\n                                           Eg: Mesh Scale = 2.0f -> CustomCacheIdentifier = \"SolidWall_NoRotation_200p\", etc.\n                                           Using this technique instead of forcibly reloading the cache will improve your performance. Try to keep your identifiers short though!\n\n@param  bReplaceExistingTask               By default the scheduler will ignore new tasks for a mesh if it already has one running. Use this to forcibly repalce an existing task.\n                                           This is useful for advanced usecases where you're relying on the sequence of dynamic collision updates or triggering other events dependent on its success\n\n@param  bReloadCollisionCache                          Default is false. The system maintains a cache of voxel collision profiles associated with a mesh. A cache entry is created for a mesh\n                                           the first time you call this function for it. If you really want to overwrite the cache value associated with a mesh\n                                           then set bReloadCollisionCache to true. However for most usecases it is recommended to use CustomCacheIdentifier instead.\n\n\n@param  bUseCheapBoundsCollision                       Marks all voxels within the mesh's visibility bounds as collided. This is several times faster that per-voxel sampling. Great for simple meshes like walls\n                                                                                       whose visibility bounds closely aligns with the actual mesh itself.\n\n@param  BoundsScaleFactor                              Use this multiplier to increase or decrease the size of the bounding box derived from your mesh within which voxel collisions are sampled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "ScheduleDynamicCollisionUpdate", nullptr, nullptr, sizeof(DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms), Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics
	{
		struct DonNavigationManager_eventSchedulePathfindingTask_Parms
		{
			AActor* Actor;
			FVector Destination;
			FDoNNavigationQueryParams QueryParams;
			FDoNNavigationDebugParams DebugParams;
			FScriptDelegate ResultHandlerDelegate;
			FScriptDelegate DynamicCollisionListener;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_DynamicCollisionListener;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultHandlerDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryParams;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Destination;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DonNavigationManager_eventSchedulePathfindingTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonNavigationManager_eventSchedulePathfindingTask_Parms), &Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_DynamicCollisionListener = { "DynamicCollisionListener", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventSchedulePathfindingTask_Parms, DynamicCollisionListener), Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_ResultHandlerDelegate = { "ResultHandlerDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventSchedulePathfindingTask_Parms, ResultHandlerDelegate), Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_DebugParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_DebugParams = { "DebugParams", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventSchedulePathfindingTask_Parms, DebugParams), Z_Construct_UScriptStruct_FDoNNavigationDebugParams, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_DebugParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_DebugParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_QueryParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_QueryParams = { "QueryParams", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventSchedulePathfindingTask_Parms, QueryParams), Z_Construct_UScriptStruct_FDoNNavigationQueryParams, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_QueryParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_QueryParams_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventSchedulePathfindingTask_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventSchedulePathfindingTask_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_DynamicCollisionListener,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_ResultHandlerDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_DebugParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_QueryParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_Destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "Comment", "/**\n\x09*  Schedule Pathfinding Task\n\x09*\n\x09*  Schedules a pathfinding task to generate the shortest available path between a given actor and a desired destination.\n\x09*  A pathfinding task can run across multiple ticks and when the results are ready the caller is immediately notified through a result handler (FDoNNavigationResultHandler)\n\x09*  The caller must bind the result handler in advance to be notified when results are ready.\n\x09*  If you're interested in listening to dynamic collisions that may have invalidated the path (for course correction, etc) then you must also bind the dynamic listener FDonNavigationDynamicCollisionDelegate\n\x09*\n\x09*  @param  Actor                    Actor which needs to navigate from one point to another. Typically (but not necessarily) a pawn. The location of this actor is treated as origin for pathfinding\n\x09*  @param  Destination              Point in the world to which the actor needs to travel\n\x09*  @param  QueryParams              Additional params for customizing the path finding query\n\x09*  @param  DebugParams              Use these debug params to enable visualization of the raw and optimized paths and other debug related activities\n\x09*  @param  ResultHandlerDelegate    You must bind a function of your choice to this delegate to be notified when pathfinding results are available for you to use\n\x09*  @param DynamicCollisionListener  This listener allows you to be notified whenever your path solution has been invalidated by dynamic obstacles that have occupied parts of your path solution\n\x09*\x09\x09\x09\x09\x09\x09\x09\x09\x09that may previously have been navigable. Typically this means you should immediately reschedule your query to obtain a revised path solution\n\x09*/" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "Schedule Pathfinding Task\n\nSchedules a pathfinding task to generate the shortest available path between a given actor and a desired destination.\nA pathfinding task can run across multiple ticks and when the results are ready the caller is immediately notified through a result handler (FDoNNavigationResultHandler)\nThe caller must bind the result handler in advance to be notified when results are ready.\nIf you're interested in listening to dynamic collisions that may have invalidated the path (for course correction, etc) then you must also bind the dynamic listener FDonNavigationDynamicCollisionDelegate\n\n@param  Actor                    Actor which needs to navigate from one point to another. Typically (but not necessarily) a pawn. The location of this actor is treated as origin for pathfinding\n@param  Destination              Point in the world to which the actor needs to travel\n@param  QueryParams              Additional params for customizing the path finding query\n@param  DebugParams              Use these debug params to enable visualization of the raw and optimized paths and other debug related activities\n@param  ResultHandlerDelegate    You must bind a function of your choice to this delegate to be notified when pathfinding results are available for you to use\n@param DynamicCollisionListener  This listener allows you to be notified whenever your path solution has been invalidated by dynamic obstacles that have occupied parts of your path solution\n                                                                     that may previously have been navigable. Typically this means you should immediately reschedule your query to obtain a revised path solution" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "SchedulePathfindingTask", nullptr, nullptr, sizeof(DonNavigationManager_eventSchedulePathfindingTask_Parms), Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics
	{
		struct DonNavigationManager_eventStopListeningToDynamicCollisionsForPath_Parms
		{
			FScriptDelegate ListenerToClear;
			FDoNNavigationQueryData QueryData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryData;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ListenerToClear;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::NewProp_QueryData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::NewProp_QueryData = { "QueryData", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventStopListeningToDynamicCollisionsForPath_Parms, QueryData), Z_Construct_UScriptStruct_FDoNNavigationQueryData, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::NewProp_QueryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::NewProp_QueryData_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::NewProp_ListenerToClear = { "ListenerToClear", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventStopListeningToDynamicCollisionsForPath_Parms, ListenerToClear), Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::NewProp_QueryData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::NewProp_ListenerToClear,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "Comment", "/** \n\x09*  Unregisters a given dynamic collision listener from a given volume. Your should always call this function whenever a particular actor or object is\n\x09*  no longer interested in listening to collisions in a particular area. This is especially important for maintaining performance as \n\x09*  accumulating unwanted collision listeners will clog up the system quickly and affect performance.\x09\n\x09*/" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "Unregisters a given dynamic collision listener from a given volume. Your should always call this function whenever a particular actor or object is\nno longer interested in listening to collisions in a particular area. This is especially important for maintaining performance as\naccumulating unwanted collision listeners will clog up the system quickly and affect performance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "StopListeningToDynamicCollisionsForPath", nullptr, nullptr, sizeof(DonNavigationManager_eventStopListeningToDynamicCollisionsForPath_Parms), Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics
	{
		struct DonNavigationManager_eventVisualizeDynamicCollisionListeners_Parms
		{
			FScriptDelegate Listener;
			FDoNNavigationQueryData QueryData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryData;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Listener;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::NewProp_QueryData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::NewProp_QueryData = { "QueryData", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventVisualizeDynamicCollisionListeners_Parms, QueryData), Z_Construct_UScriptStruct_FDoNNavigationQueryData, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::NewProp_QueryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::NewProp_QueryData_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::NewProp_Listener = { "Listener", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventVisualizeDynamicCollisionListeners_Parms, Listener), Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::NewProp_QueryData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::NewProp_Listener,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "VisualizeDynamicCollisionListeners", nullptr, nullptr, sizeof(DonNavigationManager_eventVisualizeDynamicCollisionListeners_Parms), Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics
	{
		struct DonNavigationManager_eventVisualizeNAVResult_Parms
		{
			TArray<FVector> PathSolution;
			FVector Source;
			FVector Destination;
			bool Reset;
			FDoNNavigationDebugParams DebugParams;
			FColor LineColor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugParams;
		static void NewProp_Reset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Reset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Destination;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathSolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathSolution;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathSolution_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_LineColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventVisualizeNAVResult_Parms, LineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_LineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_LineColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_DebugParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_DebugParams = { "DebugParams", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventVisualizeNAVResult_Parms, DebugParams), Z_Construct_UScriptStruct_FDoNNavigationDebugParams, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_DebugParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_DebugParams_MetaData)) };
	void Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_Reset_SetBit(void* Obj)
	{
		((DonNavigationManager_eventVisualizeNAVResult_Parms*)Obj)->Reset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_Reset = { "Reset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonNavigationManager_eventVisualizeNAVResult_Parms), &Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_Reset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventVisualizeNAVResult_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventVisualizeNAVResult_Parms, Source), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_PathSolution_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_PathSolution = { "PathSolution", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationManager_eventVisualizeNAVResult_Parms, PathSolution), METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_PathSolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_PathSolution_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_PathSolution_Inner = { "PathSolution", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_LineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_DebugParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_Reset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_Destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_PathSolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_PathSolution_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "Comment", "// Debug helpers:\n" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "Debug helpers:" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "VisualizeNAVResult", nullptr, nullptr, sizeof(DonNavigationManager_eventVisualizeNAVResult_Parms), Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADonNavigationManager_NoRegister()
	{
		return ADonNavigationManager::StaticClass();
	}
	struct Z_Construct_UClass_ADonNavigationManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRunDebugValidationsForDynamicCollisions_MetaData[];
#endif
		static void NewProp_bRunDebugValidationsForDynamicCollisions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunDebugValidationsForDynamicCollisions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugVoxelsLineThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugVoxelsLineThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayWorldBoundaryInGame_MetaData[];
#endif
		static void NewProp_bDisplayWorldBoundaryInGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayWorldBoundaryInGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayWorldBoundary_MetaData[];
#endif
		static void NewProp_bDisplayWorldBoundary_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayWorldBoundary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldBoundaryVisualizer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldBoundaryVisualizer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCollisionSolverIterationsOnThread_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCollisionSolverIterationsOnThread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPathSolverIterationsOnThread_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPathSolverIterationsOnThread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMultiThreadingEnabled_MetaData[];
#endif
		static void NewProp_bMultiThreadingEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreadingEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCollisionSolverIterationsPerTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCollisionSolverIterationsPerTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPathSolverIterationsPerTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPathSolverIterationsPerTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerformCollisionChecksOnStartup_MetaData[];
#endif
		static void NewProp_PerformCollisionChecksOnStartup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PerformCollisionChecksOnStartup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoCorrectionGuessList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AutoCorrectionGuessList;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoCorrectionGuessList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnoreForCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnoreForCollision;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnoreForCollision_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstacleQueryChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObstacleQueryChannels;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObstacleQueryChannels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZGridSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ZGridSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YGridSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_YGridSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XGridSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_XGridSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NAVVolumeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NAVVolumeData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Billboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Billboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUnbound_MetaData[];
#endif
		static void NewProp_bIsUnbound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUnbound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADonNavigationManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADonNavigationManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask, "AbortPathfindingTask" }, // 2126108402
		{ &Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld, "ClampLocationToNavigableWorld" }, // 1997231891
		{ &Z_Construct_UFunction_ADonNavigationManager_ConstructBuilder, "ConstructBuilder" }, // 2341354598
		{ &Z_Construct_UFunction_ADonNavigationManager_Debug_ClearAllVolumes, "Debug_ClearAllVolumes" }, // 3260121950
		{ &Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes, "Debug_DrawAllVolumes" }, // 2038461211
		{ &Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint, "Debug_DrawVolumesAroundPoint" }, // 4200399522
		{ &Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile, "Debug_DrawVoxelCollisionProfile" }, // 2711624461
		{ &Z_Construct_UFunction_ADonNavigationManager_Debug_ToggleWorldBoundaryInGame, "Debug_ToggleWorldBoundaryInGame" }, // 4188101498
		{ &Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting, "FindPathSolution_StressTesting" }, // 3617441648
		{ &Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld, "FindRandomPointAroundOriginInNavWorld" }, // 3297813782
		{ &Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld, "FindRandomPointFromActorInNavWorld" }, // 3211735279
		{ &Z_Construct_UFunction_ADonNavigationManager_HasTask, "HasTask" }, // 3513664656
		{ &Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep, "IsDirectPathLineSweep" }, // 1657168760
		{ &Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace, "IsDirectPathLineTrace" }, // 3264036555
		{ &Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep, "IsDirectPathSweep" }, // 595621155
		{ &Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape, "IsLocationBeneathLandscape" }, // 957666775
		{ &Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld, "IsLocationWithinNavigableWorld" }, // 2521325029
		{ &Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld, "IsMeshBoundsWithinNavigableWorld" }, // 238762633
		{ &Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate, "ScheduleDynamicCollisionUpdate" }, // 3274910593
		{ &Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask, "SchedulePathfindingTask" }, // 1880761824
		{ &Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath, "StopListeningToDynamicCollisionsForPath" }, // 1918478874
		{ &Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners, "VisualizeDynamicCollisionListeners" }, // 498533192
		{ &Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult, "VisualizeNAVResult" }, // 3252621768
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonNavigationManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DonNavigationManager.h" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bRunDebugValidationsForDynamicCollisions_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	void Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bRunDebugValidationsForDynamicCollisions_SetBit(void* Obj)
	{
		((ADonNavigationManager*)Obj)->bRunDebugValidationsForDynamicCollisions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bRunDebugValidationsForDynamicCollisions = { "bRunDebugValidationsForDynamicCollisions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADonNavigationManager), &Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bRunDebugValidationsForDynamicCollisions_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bRunDebugValidationsForDynamicCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bRunDebugValidationsForDynamicCollisions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_DebugVoxelsLineThickness_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_DebugVoxelsLineThickness = { "DebugVoxelsLineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonNavigationManager, DebugVoxelsLineThickness), METADATA_PARAMS(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_DebugVoxelsLineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_DebugVoxelsLineThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bDisplayWorldBoundaryInGame_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	void Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bDisplayWorldBoundaryInGame_SetBit(void* Obj)
	{
		((ADonNavigationManager*)Obj)->bDisplayWorldBoundaryInGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bDisplayWorldBoundaryInGame = { "bDisplayWorldBoundaryInGame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADonNavigationManager), &Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bDisplayWorldBoundaryInGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bDisplayWorldBoundaryInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bDisplayWorldBoundaryInGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bDisplayWorldBoundary_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/* This property will help you identify issues with your dynamic collision setup by performinge extra vaildations at run-time.\n\x09This can be expensive so it is disabled by default. Enable if, for example, your pawns are reacting to dynamic collisions that they shouldn't actually be interested in.*/" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "This property will help you identify issues with your dynamic collision setup by performinge extra vaildations at run-time.\n      This can be expensive so it is disabled by default. Enable if, for example, your pawns are reacting to dynamic collisions that they shouldn't actually be interested in." },
	};
#endif
	void Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bDisplayWorldBoundary_SetBit(void* Obj)
	{
		((ADonNavigationManager*)Obj)->bDisplayWorldBoundary = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bDisplayWorldBoundary = { "bDisplayWorldBoundary", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADonNavigationManager), &Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bDisplayWorldBoundary_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bDisplayWorldBoundary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bDisplayWorldBoundary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_WorldBoundaryVisualizer_MetaData[] = {
		{ "Category", "DonNavigationManager" },
		{ "Comment", "// Debug helpers:\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "Debug helpers:" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_WorldBoundaryVisualizer = { "WorldBoundaryVisualizer", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonNavigationManager, WorldBoundaryVisualizer), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_WorldBoundaryVisualizer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_WorldBoundaryVisualizer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxCollisionSolverIterationsOnThread_MetaData[] = {
		{ "Category", "Performance Settings - Multithreading" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxCollisionSolverIterationsOnThread = { "MaxCollisionSolverIterationsOnThread", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonNavigationManager, MaxCollisionSolverIterationsOnThread), METADATA_PARAMS(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxCollisionSolverIterationsOnThread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxCollisionSolverIterationsOnThread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxPathSolverIterationsOnThread_MetaData[] = {
		{ "Category", "Performance Settings - Multithreading" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxPathSolverIterationsOnThread = { "MaxPathSolverIterationsOnThread", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonNavigationManager, MaxPathSolverIterationsOnThread), METADATA_PARAMS(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxPathSolverIterationsOnThread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxPathSolverIterationsOnThread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bMultiThreadingEnabled_MetaData[] = {
		{ "Category", "Performance Settings - Multithreading" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	void Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bMultiThreadingEnabled_SetBit(void* Obj)
	{
		((ADonNavigationManager*)Obj)->bMultiThreadingEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bMultiThreadingEnabled = { "bMultiThreadingEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADonNavigationManager), &Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bMultiThreadingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bMultiThreadingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bMultiThreadingEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxCollisionSolverIterationsPerTick_MetaData[] = {
		{ "Category", "Performance Settings" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxCollisionSolverIterationsPerTick = { "MaxCollisionSolverIterationsPerTick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonNavigationManager, MaxCollisionSolverIterationsPerTick), METADATA_PARAMS(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxCollisionSolverIterationsPerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxCollisionSolverIterationsPerTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxPathSolverIterationsPerTick_MetaData[] = {
		{ "Category", "Performance Settings" },
		{ "Comment", "// Performance setings\n" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "Performance setings" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxPathSolverIterationsPerTick = { "MaxPathSolverIterationsPerTick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonNavigationManager, MaxPathSolverIterationsPerTick), METADATA_PARAMS(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxPathSolverIterationsPerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxPathSolverIterationsPerTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_PerformCollisionChecksOnStartup_MetaData[] = {
		{ "Category", "Game Startup" },
		{ "Comment", "/** If set to true, collision checks will be performed for each and every voxel when the game begins. Warning: This can slow down loading of the game significantly.\n\x09 *  Default behavior is set to false, meaning collision data will always be lazy loaded upn demand. This is the recommended approach */" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "If set to true, collision checks will be performed for each and every voxel when the game begins. Warning: This can slow down loading of the game significantly.\nDefault behavior is set to false, meaning collision data will always be lazy loaded upn demand. This is the recommended approach" },
	};
#endif
	void Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_PerformCollisionChecksOnStartup_SetBit(void* Obj)
	{
		((ADonNavigationManager*)Obj)->PerformCollisionChecksOnStartup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_PerformCollisionChecksOnStartup = { "PerformCollisionChecksOnStartup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADonNavigationManager), &Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_PerformCollisionChecksOnStartup_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_PerformCollisionChecksOnStartup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_PerformCollisionChecksOnStartup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_AutoCorrectionGuessList_MetaData[] = {
		{ "Category", "ObstacleDetection" },
		{ "Comment", "/* Some pathfinding scenarios need a special auto-correction to be applied to either origin or \n\x09* destination for pathfinding to work. Eg: If a player is hiding flush with a wall then the pathfinding origin\n\x09* must be offset slightly adjacent to the wall.\n\x09* Different games/maps will need different auto-correction values, some maps may need large correction values\n\x09* while others may need only small adjustments. Tweak this list based on your game's needs.*/" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "Some pathfinding scenarios need a special auto-correction to be applied to either origin or\n      * destination for pathfinding to work. Eg: If a player is hiding flush with a wall then the pathfinding origin\n      * must be offset slightly adjacent to the wall.\n      * Different games/maps will need different auto-correction values, some maps may need large correction values\n      * while others may need only small adjustments. Tweak this list based on your game's needs." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_AutoCorrectionGuessList = { "AutoCorrectionGuessList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonNavigationManager, AutoCorrectionGuessList), METADATA_PARAMS(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_AutoCorrectionGuessList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_AutoCorrectionGuessList_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_AutoCorrectionGuessList_Inner = { "AutoCorrectionGuessList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ActorsToIgnoreForCollision_MetaData[] = {
		{ "Category", "ObstacleDetection" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ActorsToIgnoreForCollision = { "ActorsToIgnoreForCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonNavigationManager, ActorsToIgnoreForCollision), METADATA_PARAMS(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ActorsToIgnoreForCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ActorsToIgnoreForCollision_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ActorsToIgnoreForCollision_Inner = { "ActorsToIgnoreForCollision", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ObstacleQueryChannels_MetaData[] = {
		{ "Category", "ObstacleDetection" },
		{ "Comment", "/* Any channels added here will be treated as obstacles by the path finder*/" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "Any channels added here will be treated as obstacles by the path finder" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ObstacleQueryChannels = { "ObstacleQueryChannels", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonNavigationManager, ObstacleQueryChannels), METADATA_PARAMS(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ObstacleQueryChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ObstacleQueryChannels_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ObstacleQueryChannels_Inner = { "ObstacleQueryChannels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ZGridSize_MetaData[] = {
		{ "Category", "World Dimensions" },
		{ "Comment", "/* The number of voxels to build along the Z axis (offset from NAV actor)*/" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "The number of voxels to build along the Z axis (offset from NAV actor)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ZGridSize = { "ZGridSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonNavigationManager, ZGridSize), METADATA_PARAMS(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ZGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ZGridSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_YGridSize_MetaData[] = {
		{ "Category", "World Dimensions" },
		{ "Comment", "/* The number of voxels to build along the Y axis (offset from NAV actor)*/" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "The number of voxels to build along the Y axis (offset from NAV actor)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_YGridSize = { "YGridSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonNavigationManager, YGridSize), METADATA_PARAMS(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_YGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_YGridSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_XGridSize_MetaData[] = {
		{ "Category", "World Dimensions" },
		{ "Comment", "/* The number of voxels to build along the X axis (offset from NAV actor)*/" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "The number of voxels to build along the X axis (offset from NAV actor)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_XGridSize = { "XGridSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonNavigationManager, XGridSize), METADATA_PARAMS(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_XGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_XGridSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_VoxelSize_MetaData[] = {
		{ "Category", "World Dimensions" },
		{ "Comment", "/* Represents the side of the cube used to build the voxel. Eg: a value of 300 produces a cube 300x300x300*/" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ToolTip", "Represents the side of the cube used to build the voxel. Eg: a value of 300 produces a cube 300x300x300" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonNavigationManager, VoxelSize), METADATA_PARAMS(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_VoxelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_VoxelSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_NAVVolumeData_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_NAVVolumeData = { "NAVVolumeData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonNavigationManager, NAVVolumeData), Z_Construct_UScriptStruct_FDonNavVoxelXYZ, METADATA_PARAMS(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_NAVVolumeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_NAVVolumeData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_Billboard_MetaData[] = {
		{ "Category", "Translation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_Billboard = { "Billboard", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonNavigationManager, Billboard), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_Billboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_Billboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "Translation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonNavigationManager, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bIsUnbound_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif
	void Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bIsUnbound_SetBit(void* Obj)
	{
		((ADonNavigationManager*)Obj)->bIsUnbound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bIsUnbound = { "bIsUnbound", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADonNavigationManager), &Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bIsUnbound_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bIsUnbound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bIsUnbound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADonNavigationManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bRunDebugValidationsForDynamicCollisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_DebugVoxelsLineThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bDisplayWorldBoundaryInGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bDisplayWorldBoundary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_WorldBoundaryVisualizer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxCollisionSolverIterationsOnThread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxPathSolverIterationsOnThread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bMultiThreadingEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxCollisionSolverIterationsPerTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxPathSolverIterationsPerTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_PerformCollisionChecksOnStartup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_AutoCorrectionGuessList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_AutoCorrectionGuessList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ActorsToIgnoreForCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ActorsToIgnoreForCollision_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ObstacleQueryChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ObstacleQueryChannels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ZGridSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_YGridSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_XGridSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_VoxelSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_NAVVolumeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_Billboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bIsUnbound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADonNavigationManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADonNavigationManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADonNavigationManager_Statics::ClassParams = {
		&ADonNavigationManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADonNavigationManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADonNavigationManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADonNavigationManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADonNavigationManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADonNavigationManager, 3970277072);
	template<> DONAINAVIGATION_API UClass* StaticClass<ADonNavigationManager>()
	{
		return ADonNavigationManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADonNavigationManager(Z_Construct_UClass_ADonNavigationManager, &ADonNavigationManager::StaticClass, TEXT("/Script/DonAINavigation"), TEXT("ADonNavigationManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADonNavigationManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
