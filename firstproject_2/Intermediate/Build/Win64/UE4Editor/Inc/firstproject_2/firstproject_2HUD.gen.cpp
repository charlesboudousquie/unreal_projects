// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "firstproject_2/firstproject_2HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodefirstproject_2HUD() {}
// Cross Module References
	FIRSTPROJECT_2_API UClass* Z_Construct_UClass_Afirstproject_2HUD_NoRegister();
	FIRSTPROJECT_2_API UClass* Z_Construct_UClass_Afirstproject_2HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_firstproject_2();
// End Cross Module References
	void Afirstproject_2HUD::StaticRegisterNativesAfirstproject_2HUD()
	{
	}
	UClass* Z_Construct_UClass_Afirstproject_2HUD_NoRegister()
	{
		return Afirstproject_2HUD::StaticClass();
	}
	struct Z_Construct_UClass_Afirstproject_2HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Afirstproject_2HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_firstproject_2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afirstproject_2HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "firstproject_2HUD.h" },
		{ "ModuleRelativePath", "firstproject_2HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Afirstproject_2HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Afirstproject_2HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Afirstproject_2HUD_Statics::ClassParams = {
		&Afirstproject_2HUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_Afirstproject_2HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Afirstproject_2HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Afirstproject_2HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Afirstproject_2HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Afirstproject_2HUD, 2237201940);
	template<> FIRSTPROJECT_2_API UClass* StaticClass<Afirstproject_2HUD>()
	{
		return Afirstproject_2HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Afirstproject_2HUD(Z_Construct_UClass_Afirstproject_2HUD, &Afirstproject_2HUD::StaticClass, TEXT("/Script/firstproject_2"), TEXT("Afirstproject_2HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Afirstproject_2HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
