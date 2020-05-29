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
// End Cross Module References
	void UMapController::StaticRegisterNativesUMapController()
	{
	}
	UClass* Z_Construct_UClass_UMapController_NoRegister()
	{
		return UMapController::StaticClass();
	}
	struct Z_Construct_UClass_UMapController_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MapController.h" },
		{ "ModuleRelativePath", "Public/MapController.h" },
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
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(UMapController, 2061530177);
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
