// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DmapModule/Public/MapController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapController() {}
// Cross Module References
	DMAPMODULE_API UClass* Z_Construct_UClass_UMapController_NoRegister();
	DMAPMODULE_API UClass* Z_Construct_UClass_UMapController();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DmapModule();
	DMAPMODULE_API UFunction* Z_Construct_UFunction_UMapController_LoadMap();
// End Cross Module References
	void UMapController::StaticRegisterNativesUMapController()
	{
		UClass* Class = UMapController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadMap", &UMapController::execLoadMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMapController_LoadMap_Statics
	{
		struct MapController_eventLoadMap_Parms
		{
			FString p_map_name;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_p_map_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMapController_LoadMap_Statics::NewProp_p_map_name = { "p_map_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapController_eventLoadMap_Parms, p_map_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapController_LoadMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapController_LoadMap_Statics::NewProp_p_map_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapController_LoadMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "3d maps" },
		{ "ModuleRelativePath", "Public/MapController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapController_LoadMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapController, nullptr, "LoadMap", nullptr, nullptr, sizeof(MapController_eventLoadMap_Parms), Z_Construct_UFunction_UMapController_LoadMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapController_LoadMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapController_LoadMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapController_LoadMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapController_LoadMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapController_LoadMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMapController_NoRegister()
	{
		return UMapController::StaticClass();
	}
	struct Z_Construct_UClass_UMapController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DmapModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMapController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapController_LoadMap, "LoadMap" }, // 2481267442
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "// Description: This class can load in maps. \n" },
		{ "IncludePath", "MapController.h" },
		{ "ModuleRelativePath", "Public/MapController.h" },
		{ "ToolTip", "Description: This class can load in maps." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMapController_Statics::ClassParams = {
		&UMapController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMapController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMapController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMapController, 2264100293);
	template<> DMAPMODULE_API UClass* StaticClass<UMapController>()
	{
		return UMapController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMapController(Z_Construct_UClass_UMapController, &UMapController::StaticClass, TEXT("/Script/DmapModule"), TEXT("UMapController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
