// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/DmapAsset/Public/DMAPAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMAPAsset() {}
// Cross Module References
	DMAPASSET_API UClass* Z_Construct_UClass_UDmapAsset_NoRegister();
	DMAPASSET_API UClass* Z_Construct_UClass_UDmapAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DmapAsset();
// End Cross Module References
	void UDmapAsset::StaticRegisterNativesUDmapAsset()
	{
	}
	UClass* Z_Construct_UClass_UDmapAsset_NoRegister()
	{
		return UDmapAsset::StaticClass();
	}
	struct Z_Construct_UClass_UDmapAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDmapAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DmapAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDmapAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "DmapAsset/Public/DMAPAsset.h" },
		{ "ModuleRelativePath", "DmapAsset/Public/DMAPAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDmapAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDmapAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDmapAsset_Statics::ClassParams = {
		&UDmapAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDmapAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDmapAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDmapAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDmapAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDmapAsset, 306633757);
	template<> DMAPASSET_API UClass* StaticClass<UDmapAsset>()
	{
		return UDmapAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDmapAsset(Z_Construct_UClass_UDmapAsset, &UDmapAsset::StaticClass, TEXT("/Script/DmapAsset"), TEXT("UDmapAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDmapAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
