// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonAINavigation/Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDEPRECATED_VolumeAdaptiveBuilder() {}
// Cross Module References
	DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FNAVMapContainer();
	UPackage* Z_Construct_UPackage__Script_DonAINavigation();
	DONAINAVIGATION_API UClass* Z_Construct_UClass_UDoNNavigationVolumeComponent_NoRegister();
	DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationGraphAerial();
	DONAINAVIGATION_API UClass* Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_NoRegister();
	DONAINAVIGATION_API UClass* Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_BuildNAVNetwork();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CleanUp();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_ConstructBuilder();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GenerateAdaptiveNavigationVolumeSeeds();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FNAVMapContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DONAINAVIGATION_API uint32 Get_Z_Construct_UScriptStruct_FNAVMapContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNAVMapContainer, Z_Construct_UPackage__Script_DonAINavigation(), TEXT("NAVMapContainer"), sizeof(FNAVMapContainer), Get_Z_Construct_UScriptStruct_FNAVMapContainer_Hash());
	}
	return Singleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FNAVMapContainer>()
{
	return FNAVMapContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNAVMapContainer(FNAVMapContainer::StaticStruct, TEXT("/Script/DonAINavigation"), TEXT("NAVMapContainer"), false, nullptr, nullptr);
static struct FScriptStruct_DonAINavigation_StaticRegisterNativesFNAVMapContainer
{
	FScriptStruct_DonAINavigation_StaticRegisterNativesFNAVMapContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NAVMapContainer")),new UScriptStruct::TCppStructOps<FNAVMapContainer>);
	}
} ScriptStruct_DonAINavigation_StaticRegisterNativesFNAVMapContainer;
	struct Z_Construct_UScriptStruct_FNAVMapContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_neighbors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_neighbors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_neighbors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_volume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNAVMapContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNAVMapContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNAVMapContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNAVMapContainer_Statics::NewProp_neighbors_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNAVMapContainer_Statics::NewProp_neighbors = { "neighbors", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNAVMapContainer, neighbors), METADATA_PARAMS(Z_Construct_UScriptStruct_FNAVMapContainer_Statics::NewProp_neighbors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNAVMapContainer_Statics::NewProp_neighbors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNAVMapContainer_Statics::NewProp_neighbors_Inner = { "neighbors", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDoNNavigationVolumeComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNAVMapContainer_Statics::NewProp_volume_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNAVMapContainer_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNAVMapContainer, volume), Z_Construct_UClass_UDoNNavigationVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNAVMapContainer_Statics::NewProp_volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNAVMapContainer_Statics::NewProp_volume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNAVMapContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNAVMapContainer_Statics::NewProp_neighbors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNAVMapContainer_Statics::NewProp_neighbors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNAVMapContainer_Statics::NewProp_volume,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNAVMapContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
		nullptr,
		&NewStructOps,
		"NAVMapContainer",
		sizeof(FNAVMapContainer),
		alignof(FNAVMapContainer),
		Z_Construct_UScriptStruct_FNAVMapContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNAVMapContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNAVMapContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNAVMapContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNAVMapContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNAVMapContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DonAINavigation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NAVMapContainer"), sizeof(FNAVMapContainer), Get_Z_Construct_UScriptStruct_FNAVMapContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNAVMapContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNAVMapContainer_Hash() { return 1226389080U; }
class UScriptStruct* FNavigationGraphAerial::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DONAINAVIGATION_API uint32 Get_Z_Construct_UScriptStruct_FNavigationGraphAerial_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavigationGraphAerial, Z_Construct_UPackage__Script_DonAINavigation(), TEXT("NavigationGraphAerial"), sizeof(FNavigationGraphAerial), Get_Z_Construct_UScriptStruct_FNavigationGraphAerial_Hash());
	}
	return Singleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FNavigationGraphAerial>()
{
	return FNavigationGraphAerial::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavigationGraphAerial(FNavigationGraphAerial::StaticStruct, TEXT("/Script/DonAINavigation"), TEXT("NavigationGraphAerial"), false, nullptr, nullptr);
static struct FScriptStruct_DonAINavigation_StaticRegisterNativesFNavigationGraphAerial
{
	FScriptStruct_DonAINavigation_StaticRegisterNativesFNavigationGraphAerial()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavigationGraphAerial")),new UScriptStruct::TCppStructOps<FNavigationGraphAerial>);
	}
} ScriptStruct_DonAINavigation_StaticRegisterNativesFNavigationGraphAerial;
	struct Z_Construct_UScriptStruct_FNavigationGraphAerial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationGraphAerial_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavigationGraphAerial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavigationGraphAerial>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavigationGraphAerial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
		nullptr,
		&NewStructOps,
		"NavigationGraphAerial",
		sizeof(FNavigationGraphAerial),
		alignof(FNavigationGraphAerial),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationGraphAerial_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationGraphAerial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavigationGraphAerial()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavigationGraphAerial_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DonAINavigation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavigationGraphAerial"), sizeof(FNavigationGraphAerial), Get_Z_Construct_UScriptStruct_FNavigationGraphAerial_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNavigationGraphAerial_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavigationGraphAerial_Hash() { return 3208348478U; }
	void ADEPRECATED_VolumeAdaptiveBuilder::StaticRegisterNativesADEPRECATED_VolumeAdaptiveBuilder()
	{
		UClass* Class = ADEPRECATED_VolumeAdaptiveBuilder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildNAVNetwork", &ADEPRECATED_VolumeAdaptiveBuilder::execBuildNAVNetwork },
			{ "CleanUp", &ADEPRECATED_VolumeAdaptiveBuilder::execCleanUp },
			{ "ConstructBuilder", &ADEPRECATED_VolumeAdaptiveBuilder::execConstructBuilder },
			{ "CreateNAVVolume", &ADEPRECATED_VolumeAdaptiveBuilder::execCreateNAVVolume },
			{ "GenerateAdaptiveNavigationVolumeSeeds", &ADEPRECATED_VolumeAdaptiveBuilder::execGenerateAdaptiveNavigationVolumeSeeds },
			{ "GetNAVVolumeFromComponent", &ADEPRECATED_VolumeAdaptiveBuilder::execGetNAVVolumeFromComponent },
			{ "GetNAVVolumeFromObject", &ADEPRECATED_VolumeAdaptiveBuilder::execGetNAVVolumeFromObject },
			{ "GetShortestPathToDestination", &ADEPRECATED_VolumeAdaptiveBuilder::execGetShortestPathToDestination },
			{ "GetShortestPathToDestination_DebugRealtime", &ADEPRECATED_VolumeAdaptiveBuilder::execGetShortestPathToDestination_DebugRealtime },
			{ "GrowNAVVolumeByIndex", &ADEPRECATED_VolumeAdaptiveBuilder::execGrowNAVVolumeByIndex },
			{ "NavEntryPointFromPath", &ADEPRECATED_VolumeAdaptiveBuilder::execNavEntryPointFromPath },
			{ "NavEntryPointsForTraversal", &ADEPRECATED_VolumeAdaptiveBuilder::execNavEntryPointsForTraversal },
			{ "NavigaitonEntryPoint", &ADEPRECATED_VolumeAdaptiveBuilder::execNavigaitonEntryPoint },
			{ "NavigaitonEntryPointFromVector", &ADEPRECATED_VolumeAdaptiveBuilder::execNavigaitonEntryPointFromVector },
			{ "VisualizeNAVResult", &ADEPRECATED_VolumeAdaptiveBuilder::execVisualizeNAVResult },
			{ "VisualizeNAVResultRealTime", &ADEPRECATED_VolumeAdaptiveBuilder::execVisualizeNAVResultRealTime },
			{ "VisualizeSolution", &ADEPRECATED_VolumeAdaptiveBuilder::execVisualizeSolution },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_BuildNAVNetwork_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_BuildNAVNetwork_Statics::Function_MetaDataParams[] = {
		{ "Category", "NAVBuilder" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_BuildNAVNetwork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder, nullptr, "BuildNAVNetwork", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_BuildNAVNetwork_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_BuildNAVNetwork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_BuildNAVNetwork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_BuildNAVNetwork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CleanUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CleanUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "NAVBuilder" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CleanUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder, nullptr, "CleanUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CleanUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CleanUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CleanUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CleanUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_ConstructBuilder_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_ConstructBuilder_Statics::Function_MetaDataParams[] = {
		{ "Category", "NAVBuilder" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_ConstructBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder, nullptr, "ConstructBuilder", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_ConstructBuilder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_ConstructBuilder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_ConstructBuilder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_ConstructBuilder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume_Statics
	{
		struct VolumeAdaptiveBuilder_eventCreateNAVVolume_Parms
		{
			FVector Location;
			FName VolumeName;
			int32 SeedX;
			int32 SeedY;
			int32 SeedZ;
			UDoNNavigationVolumeComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SeedZ;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SeedY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SeedX;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VolumeName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventCreateNAVVolume_Parms, ReturnValue), Z_Construct_UClass_UDoNNavigationVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume_Statics::NewProp_SeedZ = { "SeedZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventCreateNAVVolume_Parms, SeedZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume_Statics::NewProp_SeedY = { "SeedY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventCreateNAVVolume_Parms, SeedY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume_Statics::NewProp_SeedX = { "SeedX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventCreateNAVVolume_Parms, SeedX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume_Statics::NewProp_VolumeName = { "VolumeName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventCreateNAVVolume_Parms, VolumeName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventCreateNAVVolume_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume_Statics::NewProp_SeedZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume_Statics::NewProp_SeedY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume_Statics::NewProp_SeedX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume_Statics::NewProp_VolumeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "NAVBuilder" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder, nullptr, "CreateNAVVolume", nullptr, nullptr, sizeof(VolumeAdaptiveBuilder_eventCreateNAVVolume_Parms), Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GenerateAdaptiveNavigationVolumeSeeds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GenerateAdaptiveNavigationVolumeSeeds_Statics::Function_MetaDataParams[] = {
		{ "Category", "NAVBuilder" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GenerateAdaptiveNavigationVolumeSeeds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder, nullptr, "GenerateAdaptiveNavigationVolumeSeeds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GenerateAdaptiveNavigationVolumeSeeds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GenerateAdaptiveNavigationVolumeSeeds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GenerateAdaptiveNavigationVolumeSeeds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GenerateAdaptiveNavigationVolumeSeeds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromComponent_Statics
	{
		struct VolumeAdaptiveBuilder_eventGetNAVVolumeFromComponent_Parms
		{
			UPrimitiveComponent* Component;
			FVector ComponentAt;
			UDoNNavigationVolumeComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventGetNAVVolumeFromComponent_Parms, ReturnValue), Z_Construct_UClass_UDoNNavigationVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromComponent_Statics::NewProp_ComponentAt = { "ComponentAt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventGetNAVVolumeFromComponent_Parms, ComponentAt), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventGetNAVVolumeFromComponent_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromComponent_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromComponent_Statics::NewProp_ComponentAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromComponent_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AerialNavigation" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder, nullptr, "GetNAVVolumeFromComponent", nullptr, nullptr, sizeof(VolumeAdaptiveBuilder_eventGetNAVVolumeFromComponent_Parms), Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromObject_Statics
	{
		struct VolumeAdaptiveBuilder_eventGetNAVVolumeFromObject_Parms
		{
			UObject* Actor;
			UDoNNavigationVolumeComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromObject_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventGetNAVVolumeFromObject_Parms, ReturnValue), Z_Construct_UClass_UDoNNavigationVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromObject_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromObject_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromObject_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventGetNAVVolumeFromObject_Parms, Actor), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromObject_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "AerialNavigation" },
		{ "Comment", "// Utility functions\n" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
		{ "ToolTip", "Utility functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder, nullptr, "GetNAVVolumeFromObject", nullptr, nullptr, sizeof(VolumeAdaptiveBuilder_eventGetNAVVolumeFromObject_Parms), Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics
	{
		struct VolumeAdaptiveBuilder_eventGetShortestPathToDestination_Parms
		{
			FVector origin;
			FVector destination;
			UDoNNavigationVolumeComponent* originVolume;
			UDoNNavigationVolumeComponent* destinationVolume;
			TArray<FVector> PathSolutionRaw;
			TArray<FVector> PathSolutionOptimized;
			bool DrawDebugVolumes;
			bool VisualizeRawPath;
			bool VisualizeOptimizedPath;
			bool VisualizeInRealTime;
			float LineThickness;
			TArray<UDoNNavigationVolumeComponent*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
		static void NewProp_VisualizeInRealTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisualizeInRealTime;
		static void NewProp_VisualizeOptimizedPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisualizeOptimizedPath;
		static void NewProp_VisualizeRawPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisualizeRawPath;
		static void NewProp_DrawDebugVolumes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawDebugVolumes;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathSolutionOptimized;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathSolutionOptimized_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathSolutionRaw;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathSolutionRaw_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_destinationVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_destinationVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_originVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_originVolume;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_destination;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_origin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventGetShortestPathToDestination_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDoNNavigationVolumeComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventGetShortestPathToDestination_Parms, LineThickness), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_VisualizeInRealTime_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventGetShortestPathToDestination_Parms*)Obj)->VisualizeInRealTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_VisualizeInRealTime = { "VisualizeInRealTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventGetShortestPathToDestination_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_VisualizeInRealTime_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_VisualizeOptimizedPath_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventGetShortestPathToDestination_Parms*)Obj)->VisualizeOptimizedPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_VisualizeOptimizedPath = { "VisualizeOptimizedPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventGetShortestPathToDestination_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_VisualizeOptimizedPath_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_VisualizeRawPath_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventGetShortestPathToDestination_Parms*)Obj)->VisualizeRawPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_VisualizeRawPath = { "VisualizeRawPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventGetShortestPathToDestination_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_VisualizeRawPath_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_DrawDebugVolumes_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventGetShortestPathToDestination_Parms*)Obj)->DrawDebugVolumes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_DrawDebugVolumes = { "DrawDebugVolumes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventGetShortestPathToDestination_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_DrawDebugVolumes_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_PathSolutionOptimized = { "PathSolutionOptimized", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventGetShortestPathToDestination_Parms, PathSolutionOptimized), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_PathSolutionOptimized_Inner = { "PathSolutionOptimized", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_PathSolutionRaw = { "PathSolutionRaw", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventGetShortestPathToDestination_Parms, PathSolutionRaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_PathSolutionRaw_Inner = { "PathSolutionRaw", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_destinationVolume_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_destinationVolume = { "destinationVolume", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventGetShortestPathToDestination_Parms, destinationVolume), Z_Construct_UClass_UDoNNavigationVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_destinationVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_destinationVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_originVolume_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_originVolume = { "originVolume", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventGetShortestPathToDestination_Parms, originVolume), Z_Construct_UClass_UDoNNavigationVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_originVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_originVolume_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_destination = { "destination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventGetShortestPathToDestination_Parms, destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventGetShortestPathToDestination_Parms, origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_LineThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_VisualizeInRealTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_VisualizeOptimizedPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_VisualizeRawPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_DrawDebugVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_PathSolutionOptimized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_PathSolutionOptimized_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_PathSolutionRaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_PathSolutionRaw_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_destinationVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_originVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::NewProp_origin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::Function_MetaDataParams[] = {
		{ "Category", "AerialNavigation" },
		{ "Comment", "/* Returns path solution using a dense network of UDoNNavigationVolumeComponent. Maps using the Adaptive Navigation Builder should use this function.*/" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated, please use FindPathSolution instead." },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
		{ "ToolTip", "Returns path solution using a dense network of UDoNNavigationVolumeComponent. Maps using the Adaptive Navigation Builder should use this function." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder, nullptr, "GetShortestPathToDestination", nullptr, nullptr, sizeof(VolumeAdaptiveBuilder_eventGetShortestPathToDestination_Parms), Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics
	{
		struct VolumeAdaptiveBuilder_eventGetShortestPathToDestination_DebugRealtime_Parms
		{
			bool Reset;
			FVector origin;
			FVector destination;
			UDoNNavigationVolumeComponent* originVolume;
			UDoNNavigationVolumeComponent* destinationVolume;
			bool DrawDebug;
			TArray<FVector> PathSolutionRaw;
			TArray<FVector> PathSolutionOptimized;
			bool DrawDebugVolumes;
		};
		static void NewProp_DrawDebugVolumes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawDebugVolumes;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathSolutionOptimized;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathSolutionOptimized_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathSolutionRaw;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathSolutionRaw_Inner;
		static void NewProp_DrawDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_destinationVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_destinationVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_originVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_originVolume;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_destination;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_origin;
		static void NewProp_Reset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Reset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_DrawDebugVolumes_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventGetShortestPathToDestination_DebugRealtime_Parms*)Obj)->DrawDebugVolumes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_DrawDebugVolumes = { "DrawDebugVolumes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventGetShortestPathToDestination_DebugRealtime_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_DrawDebugVolumes_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_PathSolutionOptimized = { "PathSolutionOptimized", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventGetShortestPathToDestination_DebugRealtime_Parms, PathSolutionOptimized), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_PathSolutionOptimized_Inner = { "PathSolutionOptimized", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_PathSolutionRaw = { "PathSolutionRaw", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventGetShortestPathToDestination_DebugRealtime_Parms, PathSolutionRaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_PathSolutionRaw_Inner = { "PathSolutionRaw", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_DrawDebug_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventGetShortestPathToDestination_DebugRealtime_Parms*)Obj)->DrawDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_DrawDebug = { "DrawDebug", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventGetShortestPathToDestination_DebugRealtime_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_DrawDebug_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_destinationVolume_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_destinationVolume = { "destinationVolume", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventGetShortestPathToDestination_DebugRealtime_Parms, destinationVolume), Z_Construct_UClass_UDoNNavigationVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_destinationVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_destinationVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_originVolume_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_originVolume = { "originVolume", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventGetShortestPathToDestination_DebugRealtime_Parms, originVolume), Z_Construct_UClass_UDoNNavigationVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_originVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_originVolume_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_destination = { "destination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventGetShortestPathToDestination_DebugRealtime_Parms, destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventGetShortestPathToDestination_DebugRealtime_Parms, origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_Reset_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventGetShortestPathToDestination_DebugRealtime_Parms*)Obj)->Reset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_Reset = { "Reset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventGetShortestPathToDestination_DebugRealtime_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_Reset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_DrawDebugVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_PathSolutionOptimized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_PathSolutionOptimized_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_PathSolutionRaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_PathSolutionRaw_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_DrawDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_destinationVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_originVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::NewProp_Reset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::Function_MetaDataParams[] = {
		{ "Category", "AerialNavigation" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder, nullptr, "GetShortestPathToDestination_DebugRealtime", nullptr, nullptr, sizeof(VolumeAdaptiveBuilder_eventGetShortestPathToDestination_DebugRealtime_Parms), Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex_Statics
	{
		struct VolumeAdaptiveBuilder_eventGrowNAVVolumeByIndex_Parms
		{
			UDoNNavigationVolumeComponent* volume;
			int32 XGrowth;
			int32 YGrowth;
			int32 ZGrowth;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ZGrowth;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_YGrowth;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_XGrowth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_volume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventGrowNAVVolumeByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventGrowNAVVolumeByIndex_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex_Statics::NewProp_ZGrowth = { "ZGrowth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventGrowNAVVolumeByIndex_Parms, ZGrowth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex_Statics::NewProp_YGrowth = { "YGrowth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventGrowNAVVolumeByIndex_Parms, YGrowth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex_Statics::NewProp_XGrowth = { "XGrowth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventGrowNAVVolumeByIndex_Parms, XGrowth), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex_Statics::NewProp_volume_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventGrowNAVVolumeByIndex_Parms, volume), Z_Construct_UClass_UDoNNavigationVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex_Statics::NewProp_volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex_Statics::NewProp_volume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex_Statics::NewProp_ZGrowth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex_Statics::NewProp_YGrowth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex_Statics::NewProp_XGrowth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex_Statics::NewProp_volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "NAVBuilder" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder, nullptr, "GrowNAVVolumeByIndex", nullptr, nullptr, sizeof(VolumeAdaptiveBuilder_eventGrowNAVVolumeByIndex_Parms), Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics
	{
		struct VolumeAdaptiveBuilder_eventNavEntryPointFromPath_Parms
		{
			FVector Origin;
			FVector FinalDestination;
			int32 currentVolumeIndex;
			TArray<UDoNNavigationVolumeComponent*> path;
			bool VolumeTraversalImminent;
			int32 newVolumeIndex;
			bool DrawDebugVolumes;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_DrawDebugVolumes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawDebugVolumes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newVolumeIndex;
		static void NewProp_VolumeTraversalImminent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VolumeTraversalImminent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_path_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currentVolumeIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FinalDestination;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventNavEntryPointFromPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::NewProp_DrawDebugVolumes_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventNavEntryPointFromPath_Parms*)Obj)->DrawDebugVolumes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::NewProp_DrawDebugVolumes = { "DrawDebugVolumes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventNavEntryPointFromPath_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::NewProp_DrawDebugVolumes_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::NewProp_newVolumeIndex = { "newVolumeIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventNavEntryPointFromPath_Parms, newVolumeIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::NewProp_VolumeTraversalImminent_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventNavEntryPointFromPath_Parms*)Obj)->VolumeTraversalImminent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::NewProp_VolumeTraversalImminent = { "VolumeTraversalImminent", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventNavEntryPointFromPath_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::NewProp_VolumeTraversalImminent_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::NewProp_path_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventNavEntryPointFromPath_Parms, path), METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::NewProp_path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::NewProp_path_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::NewProp_path_Inner = { "path", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDoNNavigationVolumeComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::NewProp_currentVolumeIndex = { "currentVolumeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventNavEntryPointFromPath_Parms, currentVolumeIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::NewProp_FinalDestination = { "FinalDestination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventNavEntryPointFromPath_Parms, FinalDestination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventNavEntryPointFromPath_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::NewProp_DrawDebugVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::NewProp_newVolumeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::NewProp_VolumeTraversalImminent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::NewProp_path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::NewProp_path_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::NewProp_currentVolumeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::NewProp_FinalDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::NewProp_Origin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "AerialNavigation" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder, nullptr, "NavEntryPointFromPath", nullptr, nullptr, sizeof(VolumeAdaptiveBuilder_eventNavEntryPointFromPath_Parms), Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics
	{
		struct VolumeAdaptiveBuilder_eventNavEntryPointsForTraversal_Parms
		{
			FVector Origin;
			UDoNNavigationVolumeComponent* CurrentVolume;
			UDoNNavigationVolumeComponent* DestinationVolume;
			float SegmentDist;
			bool DrawDebug;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_DrawDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawDebug;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SegmentDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestinationVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentVolume;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventNavEntryPointsForTraversal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::NewProp_DrawDebug_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventNavEntryPointsForTraversal_Parms*)Obj)->DrawDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::NewProp_DrawDebug = { "DrawDebug", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventNavEntryPointsForTraversal_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::NewProp_DrawDebug_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::NewProp_SegmentDist = { "SegmentDist", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventNavEntryPointsForTraversal_Parms, SegmentDist), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::NewProp_DestinationVolume_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::NewProp_DestinationVolume = { "DestinationVolume", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventNavEntryPointsForTraversal_Parms, DestinationVolume), Z_Construct_UClass_UDoNNavigationVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::NewProp_DestinationVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::NewProp_DestinationVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::NewProp_CurrentVolume_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::NewProp_CurrentVolume = { "CurrentVolume", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventNavEntryPointsForTraversal_Parms, CurrentVolume), Z_Construct_UClass_UDoNNavigationVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::NewProp_CurrentVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::NewProp_CurrentVolume_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventNavEntryPointsForTraversal_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::NewProp_DrawDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::NewProp_SegmentDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::NewProp_DestinationVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::NewProp_CurrentVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::NewProp_Origin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::Function_MetaDataParams[] = {
		{ "Category", "AerialNavigation" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder, nullptr, "NavEntryPointsForTraversal", nullptr, nullptr, sizeof(VolumeAdaptiveBuilder_eventNavEntryPointsForTraversal_Parms), Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics
	{
		struct VolumeAdaptiveBuilder_eventNavigaitonEntryPoint_Parms
		{
			AActor* Actor;
			UDoNNavigationVolumeComponent* CurrentVolume;
			UDoNNavigationVolumeComponent* DestinationVolume;
			bool VolumeTraversalImminent;
			bool overlapsX;
			bool overlapsY;
			bool overlapsZ;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_overlapsZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_overlapsZ;
		static void NewProp_overlapsY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_overlapsY;
		static void NewProp_overlapsX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_overlapsX;
		static void NewProp_VolumeTraversalImminent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VolumeTraversalImminent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestinationVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentVolume;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventNavigaitonEntryPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_overlapsZ_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventNavigaitonEntryPoint_Parms*)Obj)->overlapsZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_overlapsZ = { "overlapsZ", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventNavigaitonEntryPoint_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_overlapsZ_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_overlapsY_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventNavigaitonEntryPoint_Parms*)Obj)->overlapsY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_overlapsY = { "overlapsY", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventNavigaitonEntryPoint_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_overlapsY_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_overlapsX_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventNavigaitonEntryPoint_Parms*)Obj)->overlapsX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_overlapsX = { "overlapsX", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventNavigaitonEntryPoint_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_overlapsX_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_VolumeTraversalImminent_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventNavigaitonEntryPoint_Parms*)Obj)->VolumeTraversalImminent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_VolumeTraversalImminent = { "VolumeTraversalImminent", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventNavigaitonEntryPoint_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_VolumeTraversalImminent_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_DestinationVolume_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_DestinationVolume = { "DestinationVolume", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventNavigaitonEntryPoint_Parms, DestinationVolume), Z_Construct_UClass_UDoNNavigationVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_DestinationVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_DestinationVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_CurrentVolume_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_CurrentVolume = { "CurrentVolume", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventNavigaitonEntryPoint_Parms, CurrentVolume), Z_Construct_UClass_UDoNNavigationVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_CurrentVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_CurrentVolume_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventNavigaitonEntryPoint_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_overlapsZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_overlapsY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_overlapsX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_VolumeTraversalImminent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_DestinationVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_CurrentVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "AerialNavigation" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder, nullptr, "NavigaitonEntryPoint", nullptr, nullptr, sizeof(VolumeAdaptiveBuilder_eventNavigaitonEntryPoint_Parms), Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics
	{
		struct VolumeAdaptiveBuilder_eventNavigaitonEntryPointFromVector_Parms
		{
			FVector Origin;
			UDoNNavigationVolumeComponent* CurrentVolume;
			UDoNNavigationVolumeComponent* DestinationVolume;
			bool VolumeTraversalImminent;
			bool overlapsX;
			bool overlapsY;
			bool overlapsZ;
			bool DrawDebug;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_DrawDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawDebug;
		static void NewProp_overlapsZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_overlapsZ;
		static void NewProp_overlapsY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_overlapsY;
		static void NewProp_overlapsX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_overlapsX;
		static void NewProp_VolumeTraversalImminent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VolumeTraversalImminent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestinationVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentVolume;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventNavigaitonEntryPointFromVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_DrawDebug_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventNavigaitonEntryPointFromVector_Parms*)Obj)->DrawDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_DrawDebug = { "DrawDebug", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventNavigaitonEntryPointFromVector_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_DrawDebug_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_overlapsZ_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventNavigaitonEntryPointFromVector_Parms*)Obj)->overlapsZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_overlapsZ = { "overlapsZ", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventNavigaitonEntryPointFromVector_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_overlapsZ_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_overlapsY_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventNavigaitonEntryPointFromVector_Parms*)Obj)->overlapsY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_overlapsY = { "overlapsY", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventNavigaitonEntryPointFromVector_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_overlapsY_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_overlapsX_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventNavigaitonEntryPointFromVector_Parms*)Obj)->overlapsX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_overlapsX = { "overlapsX", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventNavigaitonEntryPointFromVector_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_overlapsX_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_VolumeTraversalImminent_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventNavigaitonEntryPointFromVector_Parms*)Obj)->VolumeTraversalImminent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_VolumeTraversalImminent = { "VolumeTraversalImminent", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventNavigaitonEntryPointFromVector_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_VolumeTraversalImminent_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_DestinationVolume_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_DestinationVolume = { "DestinationVolume", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventNavigaitonEntryPointFromVector_Parms, DestinationVolume), Z_Construct_UClass_UDoNNavigationVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_DestinationVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_DestinationVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_CurrentVolume_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_CurrentVolume = { "CurrentVolume", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventNavigaitonEntryPointFromVector_Parms, CurrentVolume), Z_Construct_UClass_UDoNNavigationVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_CurrentVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_CurrentVolume_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventNavigaitonEntryPointFromVector_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_DrawDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_overlapsZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_overlapsY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_overlapsX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_VolumeTraversalImminent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_DestinationVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_CurrentVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::NewProp_Origin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "AerialNavigation" },
		{ "Comment", "// Navigation traversal functions (for Adapive Builder only)\n" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
		{ "ToolTip", "Navigation traversal functions (for Adapive Builder only)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder, nullptr, "NavigaitonEntryPointFromVector", nullptr, nullptr, sizeof(VolumeAdaptiveBuilder_eventNavigaitonEntryPointFromVector_Parms), Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics
	{
		struct VolumeAdaptiveBuilder_eventVisualizeNAVResult_Parms
		{
			TArray<FVector> PathSolution;
			FVector Source;
			FVector Destination;
			bool Reset;
			bool DrawDebugVolumes;
			FColor LineColor;
			float LineThickness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineColor;
		static void NewProp_DrawDebugVolumes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawDebugVolumes;
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventVisualizeNAVResult_Parms, LineThickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventVisualizeNAVResult_Parms, LineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::NewProp_DrawDebugVolumes_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventVisualizeNAVResult_Parms*)Obj)->DrawDebugVolumes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::NewProp_DrawDebugVolumes = { "DrawDebugVolumes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventVisualizeNAVResult_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::NewProp_DrawDebugVolumes_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::NewProp_Reset_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventVisualizeNAVResult_Parms*)Obj)->Reset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::NewProp_Reset = { "Reset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventVisualizeNAVResult_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::NewProp_Reset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventVisualizeNAVResult_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventVisualizeNAVResult_Parms, Source), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::NewProp_PathSolution_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::NewProp_PathSolution = { "PathSolution", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventVisualizeNAVResult_Parms, PathSolution), METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::NewProp_PathSolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::NewProp_PathSolution_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::NewProp_PathSolution_Inner = { "PathSolution", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::NewProp_LineThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::NewProp_LineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::NewProp_DrawDebugVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::NewProp_Reset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::NewProp_Destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::NewProp_PathSolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::NewProp_PathSolution_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "AerialNavigation" },
		{ "Comment", "// NAV Visualizer\n" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
		{ "ToolTip", "NAV Visualizer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder, nullptr, "VisualizeNAVResult", nullptr, nullptr, sizeof(VolumeAdaptiveBuilder_eventVisualizeNAVResult_Parms), Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics
	{
		struct VolumeAdaptiveBuilder_eventVisualizeNAVResultRealTime_Parms
		{
			TArray<FVector> PathSolution;
			FVector Source;
			FVector Destination;
			bool Reset;
			bool DrawDebugVolumes;
			FColor LineColor;
			float LineThickness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineColor;
		static void NewProp_DrawDebugVolumes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawDebugVolumes;
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventVisualizeNAVResultRealTime_Parms, LineThickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventVisualizeNAVResultRealTime_Parms, LineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::NewProp_DrawDebugVolumes_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventVisualizeNAVResultRealTime_Parms*)Obj)->DrawDebugVolumes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::NewProp_DrawDebugVolumes = { "DrawDebugVolumes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventVisualizeNAVResultRealTime_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::NewProp_DrawDebugVolumes_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::NewProp_Reset_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventVisualizeNAVResultRealTime_Parms*)Obj)->Reset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::NewProp_Reset = { "Reset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventVisualizeNAVResultRealTime_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::NewProp_Reset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventVisualizeNAVResultRealTime_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventVisualizeNAVResultRealTime_Parms, Source), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::NewProp_PathSolution_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::NewProp_PathSolution = { "PathSolution", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventVisualizeNAVResultRealTime_Parms, PathSolution), METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::NewProp_PathSolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::NewProp_PathSolution_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::NewProp_PathSolution_Inner = { "PathSolution", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::NewProp_LineThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::NewProp_LineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::NewProp_DrawDebugVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::NewProp_Reset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::NewProp_Destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::NewProp_PathSolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::NewProp_PathSolution_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "AerialNavigation" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder, nullptr, "VisualizeNAVResultRealTime", nullptr, nullptr, sizeof(VolumeAdaptiveBuilder_eventVisualizeNAVResultRealTime_Parms), Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics
	{
		struct VolumeAdaptiveBuilder_eventVisualizeSolution_Parms
		{
			FVector source;
			FVector destination;
			TArray<FVector> PathSolutionRaw;
			TArray<FVector> PathSolutionOptimized;
			bool VisualizeRawPath;
			bool VisualizeOptimizedPath;
			bool VisualizeInRealTime;
			bool DrawDebugVolumes;
			float LineThickness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
		static void NewProp_DrawDebugVolumes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawDebugVolumes;
		static void NewProp_VisualizeInRealTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisualizeInRealTime;
		static void NewProp_VisualizeOptimizedPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisualizeOptimizedPath;
		static void NewProp_VisualizeRawPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisualizeRawPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathSolutionOptimized_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathSolutionOptimized;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathSolutionOptimized_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathSolutionRaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathSolutionRaw;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathSolutionRaw_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_destination;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventVisualizeSolution_Parms, LineThickness), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_DrawDebugVolumes_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventVisualizeSolution_Parms*)Obj)->DrawDebugVolumes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_DrawDebugVolumes = { "DrawDebugVolumes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventVisualizeSolution_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_DrawDebugVolumes_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_VisualizeInRealTime_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventVisualizeSolution_Parms*)Obj)->VisualizeInRealTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_VisualizeInRealTime = { "VisualizeInRealTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventVisualizeSolution_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_VisualizeInRealTime_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_VisualizeOptimizedPath_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventVisualizeSolution_Parms*)Obj)->VisualizeOptimizedPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_VisualizeOptimizedPath = { "VisualizeOptimizedPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventVisualizeSolution_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_VisualizeOptimizedPath_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_VisualizeRawPath_SetBit(void* Obj)
	{
		((VolumeAdaptiveBuilder_eventVisualizeSolution_Parms*)Obj)->VisualizeRawPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_VisualizeRawPath = { "VisualizeRawPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumeAdaptiveBuilder_eventVisualizeSolution_Parms), &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_VisualizeRawPath_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_PathSolutionOptimized_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_PathSolutionOptimized = { "PathSolutionOptimized", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventVisualizeSolution_Parms, PathSolutionOptimized), METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_PathSolutionOptimized_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_PathSolutionOptimized_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_PathSolutionOptimized_Inner = { "PathSolutionOptimized", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_PathSolutionRaw_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_PathSolutionRaw = { "PathSolutionRaw", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventVisualizeSolution_Parms, PathSolutionRaw), METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_PathSolutionRaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_PathSolutionRaw_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_PathSolutionRaw_Inner = { "PathSolutionRaw", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_destination = { "destination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventVisualizeSolution_Parms, destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumeAdaptiveBuilder_eventVisualizeSolution_Parms, source), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_LineThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_DrawDebugVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_VisualizeInRealTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_VisualizeOptimizedPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_VisualizeRawPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_PathSolutionOptimized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_PathSolutionOptimized_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_PathSolutionRaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_PathSolutionRaw_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::NewProp_source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "AerialNavigation" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder, nullptr, "VisualizeSolution", nullptr, nullptr, sizeof(VolumeAdaptiveBuilder_eventVisualizeSolution_Parms), Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_NoRegister()
	{
		return ADEPRECATED_VolumeAdaptiveBuilder::StaticClass();
	}
	struct Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnoreForCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnoreForCollision;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnoreForCollision_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NAVOverlapQuery_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NAVOverlapQuery;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NAVOverlapQuery_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstacleList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObstacleList;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObstacleList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsVisibleInGame_MetaData[];
#endif
		static void NewProp_IsVisibleInGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsVisibleInGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsVisibleBlockedVolumes_MetaData[];
#endif
		static void NewProp_IsVisibleBlockedVolumes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsVisibleBlockedVolumes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsVisibleNavigableVolumes_MetaData[];
#endif
		static void NewProp_IsVisibleNavigableVolumes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsVisibleNavigableVolumes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayNAVNeighborGraph_MetaData[];
#endif
		static void NewProp_DisplayNAVNeighborGraph_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisplayNAVNeighborGraph;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CleanUpAllData_MetaData[];
#endif
		static void NewProp_CleanUpAllData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CleanUpAllData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegenerateNAVNetwork_MetaData[];
#endif
		static void NewProp_RegenerateNAVNetwork_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RegenerateNAVNetwork;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerateNavigationVolumes_MetaData[];
#endif
		static void NewProp_GenerateNavigationVolumes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GenerateNavigationVolumes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAspectRatioThreshold_MetaData[];
#endif
		static void NewProp_UseAspectRatioThreshold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAspectRatioThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XYAspectRatioThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_XYAspectRatioThreshold;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorClearance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloorClearance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffsetThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZBaseUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZBaseUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YBaseUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YBaseUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XBaseUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_XBaseUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeedVisualizer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SeedVisualizer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NAVVolumeComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NAVVolumeComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NAVVolumeComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Billboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Billboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavGraph_GCSafe_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NavGraph_GCSafe;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavGraph_GCSafe_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavGraph;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_BuildNAVNetwork, "BuildNAVNetwork" }, // 1414724446
		{ &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CleanUp, "CleanUp" }, // 3868543325
		{ &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_ConstructBuilder, "ConstructBuilder" }, // 4050252252
		{ &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_CreateNAVVolume, "CreateNAVVolume" }, // 199872478
		{ &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GenerateAdaptiveNavigationVolumeSeeds, "GenerateAdaptiveNavigationVolumeSeeds" }, // 3174053078
		{ &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromComponent, "GetNAVVolumeFromComponent" }, // 2711350088
		{ &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetNAVVolumeFromObject, "GetNAVVolumeFromObject" }, // 1030822018
		{ &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination, "GetShortestPathToDestination" }, // 511662124
		{ &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GetShortestPathToDestination_DebugRealtime, "GetShortestPathToDestination_DebugRealtime" }, // 1461659081
		{ &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_GrowNAVVolumeByIndex, "GrowNAVVolumeByIndex" }, // 3325148324
		{ &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointFromPath, "NavEntryPointFromPath" }, // 3140536120
		{ &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavEntryPointsForTraversal, "NavEntryPointsForTraversal" }, // 3489650992
		{ &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPoint, "NavigaitonEntryPoint" }, // 695398557
		{ &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_NavigaitonEntryPointFromVector, "NavigaitonEntryPointFromVector" }, // 2904123610
		{ &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResult, "VisualizeNAVResult" }, // 2909532663
		{ &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeNAVResultRealTime, "VisualizeNAVResultRealTime" }, // 735970089
		{ &Z_Construct_UFunction_ADEPRECATED_VolumeAdaptiveBuilder_VisualizeSolution, "VisualizeSolution" }, // 3277920281
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_ActorsToIgnoreForCollision_MetaData[] = {
		{ "Category", "ObstacleDetection" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_ActorsToIgnoreForCollision = { "ActorsToIgnoreForCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADEPRECATED_VolumeAdaptiveBuilder, ActorsToIgnoreForCollision), METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_ActorsToIgnoreForCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_ActorsToIgnoreForCollision_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_ActorsToIgnoreForCollision_Inner = { "ActorsToIgnoreForCollision", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_NAVOverlapQuery_MetaData[] = {
		{ "Category", "ObstacleDetection" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_NAVOverlapQuery = { "NAVOverlapQuery", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADEPRECATED_VolumeAdaptiveBuilder, NAVOverlapQuery), METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_NAVOverlapQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_NAVOverlapQuery_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_NAVOverlapQuery_Inner = { "NAVOverlapQuery", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_ObstacleList_MetaData[] = {
		{ "Category", "ObstacleDetection" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_ObstacleList = { "ObstacleList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADEPRECATED_VolumeAdaptiveBuilder, ObstacleList), METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_ObstacleList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_ObstacleList_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_ObstacleList_Inner = { "ObstacleList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_IsVisibleInGame_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	void Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_IsVisibleInGame_SetBit(void* Obj)
	{
		((ADEPRECATED_VolumeAdaptiveBuilder*)Obj)->IsVisibleInGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_IsVisibleInGame = { "IsVisibleInGame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADEPRECATED_VolumeAdaptiveBuilder), &Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_IsVisibleInGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_IsVisibleInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_IsVisibleInGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_IsVisibleBlockedVolumes_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	void Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_IsVisibleBlockedVolumes_SetBit(void* Obj)
	{
		((ADEPRECATED_VolumeAdaptiveBuilder*)Obj)->IsVisibleBlockedVolumes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_IsVisibleBlockedVolumes = { "IsVisibleBlockedVolumes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADEPRECATED_VolumeAdaptiveBuilder), &Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_IsVisibleBlockedVolumes_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_IsVisibleBlockedVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_IsVisibleBlockedVolumes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_IsVisibleNavigableVolumes_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	void Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_IsVisibleNavigableVolumes_SetBit(void* Obj)
	{
		((ADEPRECATED_VolumeAdaptiveBuilder*)Obj)->IsVisibleNavigableVolumes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_IsVisibleNavigableVolumes = { "IsVisibleNavigableVolumes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADEPRECATED_VolumeAdaptiveBuilder), &Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_IsVisibleNavigableVolumes_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_IsVisibleNavigableVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_IsVisibleNavigableVolumes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_DisplayNAVNeighborGraph_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	void Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_DisplayNAVNeighborGraph_SetBit(void* Obj)
	{
		((ADEPRECATED_VolumeAdaptiveBuilder*)Obj)->DisplayNAVNeighborGraph = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_DisplayNAVNeighborGraph = { "DisplayNAVNeighborGraph", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADEPRECATED_VolumeAdaptiveBuilder), &Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_DisplayNAVNeighborGraph_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_DisplayNAVNeighborGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_DisplayNAVNeighborGraph_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_CleanUpAllData_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	void Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_CleanUpAllData_SetBit(void* Obj)
	{
		((ADEPRECATED_VolumeAdaptiveBuilder*)Obj)->CleanUpAllData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_CleanUpAllData = { "CleanUpAllData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADEPRECATED_VolumeAdaptiveBuilder), &Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_CleanUpAllData_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_CleanUpAllData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_CleanUpAllData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_RegenerateNAVNetwork_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	void Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_RegenerateNAVNetwork_SetBit(void* Obj)
	{
		((ADEPRECATED_VolumeAdaptiveBuilder*)Obj)->RegenerateNAVNetwork = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_RegenerateNAVNetwork = { "RegenerateNAVNetwork", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADEPRECATED_VolumeAdaptiveBuilder), &Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_RegenerateNAVNetwork_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_RegenerateNAVNetwork_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_RegenerateNAVNetwork_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_GenerateNavigationVolumes_MetaData[] = {
		{ "Category", "Visualization" },
		{ "Comment", "/* wrong use of \"threshold\" here :P */" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
		{ "ToolTip", "wrong use of \"threshold\" here :P" },
	};
#endif
	void Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_GenerateNavigationVolumes_SetBit(void* Obj)
	{
		((ADEPRECATED_VolumeAdaptiveBuilder*)Obj)->GenerateNavigationVolumes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_GenerateNavigationVolumes = { "GenerateNavigationVolumes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADEPRECATED_VolumeAdaptiveBuilder), &Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_GenerateNavigationVolumes_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_GenerateNavigationVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_GenerateNavigationVolumes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_UseAspectRatioThreshold_MetaData[] = {
		{ "Category", "WorldDimensinos" },
		{ "Comment", "/* wrong use of \"threshold\" here :P */" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
		{ "ToolTip", "wrong use of \"threshold\" here :P" },
	};
#endif
	void Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_UseAspectRatioThreshold_SetBit(void* Obj)
	{
		((ADEPRECATED_VolumeAdaptiveBuilder*)Obj)->UseAspectRatioThreshold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_UseAspectRatioThreshold = { "UseAspectRatioThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADEPRECATED_VolumeAdaptiveBuilder), &Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_UseAspectRatioThreshold_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_UseAspectRatioThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_UseAspectRatioThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_XYAspectRatioThreshold_MetaData[] = {
		{ "Category", "WorldDimensinos" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_XYAspectRatioThreshold = { "XYAspectRatioThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADEPRECATED_VolumeAdaptiveBuilder, XYAspectRatioThreshold), METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_XYAspectRatioThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_XYAspectRatioThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_ZGridSize_MetaData[] = {
		{ "Category", "WorldDimensinos" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_ZGridSize = { "ZGridSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADEPRECATED_VolumeAdaptiveBuilder, ZGridSize), METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_ZGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_ZGridSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_YGridSize_MetaData[] = {
		{ "Category", "WorldDimensinos" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_YGridSize = { "YGridSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADEPRECATED_VolumeAdaptiveBuilder, YGridSize), METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_YGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_YGridSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_XGridSize_MetaData[] = {
		{ "Category", "WorldDimensinos" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_XGridSize = { "XGridSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADEPRECATED_VolumeAdaptiveBuilder, XGridSize), METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_XGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_XGridSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_FloorClearance_MetaData[] = {
		{ "Category", "PixelDimensions" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_FloorClearance = { "FloorClearance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADEPRECATED_VolumeAdaptiveBuilder, FloorClearance), METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_FloorClearance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_FloorClearance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_OffsetThickness_MetaData[] = {
		{ "Category", "PixelDimensions" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PixelDimensions)\n//float OverlapThickness;\n" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PixelDimensions)\nfloat OverlapThickness;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_OffsetThickness = { "OffsetThickness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADEPRECATED_VolumeAdaptiveBuilder, OffsetThickness), METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_OffsetThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_OffsetThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_ZBaseUnit_MetaData[] = {
		{ "Category", "PixelDimensions" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_ZBaseUnit = { "ZBaseUnit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADEPRECATED_VolumeAdaptiveBuilder, ZBaseUnit), METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_ZBaseUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_ZBaseUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_YBaseUnit_MetaData[] = {
		{ "Category", "PixelDimensions" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_YBaseUnit = { "YBaseUnit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADEPRECATED_VolumeAdaptiveBuilder, YBaseUnit), METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_YBaseUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_YBaseUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_XBaseUnit_MetaData[] = {
		{ "Category", "PixelDimensions" },
		{ "Comment", "//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = PixelDimensions)\n//FNAVSeedXyz NAVVolumeData;\x09\n" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = PixelDimensions)\nFNAVSeedXyz NAVVolumeData;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_XBaseUnit = { "XBaseUnit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADEPRECATED_VolumeAdaptiveBuilder, XBaseUnit), METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_XBaseUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_XBaseUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_SeedVisualizer_MetaData[] = {
		{ "Category", "ParticleSystem" },
		{ "Comment", "//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = PixelDimensions)\n//FNAVSeedXyz NAVSeedData;\n" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = PixelDimensions)\nFNAVSeedXyz NAVSeedData;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_SeedVisualizer = { "SeedVisualizer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADEPRECATED_VolumeAdaptiveBuilder, SeedVisualizer), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_SeedVisualizer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_SeedVisualizer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_NAVVolumeComponents_MetaData[] = {
		{ "Category", "Translation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_NAVVolumeComponents = { "NAVVolumeComponents", nullptr, (EPropertyFlags)0x001000800003001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADEPRECATED_VolumeAdaptiveBuilder, NAVVolumeComponents), METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_NAVVolumeComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_NAVVolumeComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_NAVVolumeComponents_Inner = { "NAVVolumeComponents", nullptr, (EPropertyFlags)0x00000000000a0008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDoNNavigationVolumeComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_Billboard_MetaData[] = {
		{ "Category", "Translation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_Billboard = { "Billboard", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADEPRECATED_VolumeAdaptiveBuilder, Billboard), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_Billboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_Billboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "//\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADEPRECATED_VolumeAdaptiveBuilder, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_NavGraph_GCSafe_MetaData[] = {
		{ "Category", "AerialNavigation" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_NavGraph_GCSafe = { "NavGraph_GCSafe", nullptr, (EPropertyFlags)0x0010008000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADEPRECATED_VolumeAdaptiveBuilder, NavGraph_GCSafe), METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_NavGraph_GCSafe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_NavGraph_GCSafe_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_NavGraph_GCSafe_Inner = { "NavGraph_GCSafe", nullptr, (EPropertyFlags)0x0000008000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNAVMapContainer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_NavGraph_MetaData[] = {
		{ "Category", "AerialNavigation" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_VolumeAdaptiveBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_NavGraph = { "NavGraph", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADEPRECATED_VolumeAdaptiveBuilder, NavGraph), Z_Construct_UScriptStruct_FNavigationGraphAerial, METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_NavGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_NavGraph_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_ActorsToIgnoreForCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_ActorsToIgnoreForCollision_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_NAVOverlapQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_NAVOverlapQuery_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_ObstacleList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_ObstacleList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_IsVisibleInGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_IsVisibleBlockedVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_IsVisibleNavigableVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_DisplayNAVNeighborGraph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_CleanUpAllData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_RegenerateNAVNetwork,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_GenerateNavigationVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_UseAspectRatioThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_XYAspectRatioThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_ZGridSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_YGridSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_XGridSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_FloorClearance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_OffsetThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_ZBaseUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_YBaseUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_XBaseUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_SeedVisualizer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_NAVVolumeComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_NAVVolumeComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_Billboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_NavGraph_GCSafe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_NavGraph_GCSafe_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::NewProp_NavGraph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADEPRECATED_VolumeAdaptiveBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::ClassParams = {
		&ADEPRECATED_VolumeAdaptiveBuilder::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::PropPointers),
		0,
		0x028002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADEPRECATED_VolumeAdaptiveBuilder, 2841195048);
	template<> DONAINAVIGATION_API UClass* StaticClass<ADEPRECATED_VolumeAdaptiveBuilder>()
	{
		return ADEPRECATED_VolumeAdaptiveBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADEPRECATED_VolumeAdaptiveBuilder(Z_Construct_UClass_ADEPRECATED_VolumeAdaptiveBuilder, &ADEPRECATED_VolumeAdaptiveBuilder::StaticClass, TEXT("/Script/DonAINavigation"), TEXT("ADEPRECATED_VolumeAdaptiveBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADEPRECATED_VolumeAdaptiveBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
