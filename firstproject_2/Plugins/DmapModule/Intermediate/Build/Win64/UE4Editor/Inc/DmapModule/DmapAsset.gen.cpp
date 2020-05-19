// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DmapModule/Public/DmapAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDmapAsset() {}
// Cross Module References
	DMAPMODULE_API UClass* Z_Construct_UClass_UDmapAsset_NoRegister();
	DMAPMODULE_API UClass* Z_Construct_UClass_UDmapAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DmapModule();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_data;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_data_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDmapAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DmapModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDmapAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "DmapAsset.h" },
		{ "ModuleRelativePath", "Public/DmapAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDmapAsset_Statics::NewProp_m_data_MetaData[] = {
		{ "Category", "DmapAsset" },
		{ "ModuleRelativePath", "Public/DmapAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDmapAsset_Statics::NewProp_m_data = { "m_data", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDmapAsset, m_data), METADATA_PARAMS(Z_Construct_UClass_UDmapAsset_Statics::NewProp_m_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDmapAsset_Statics::NewProp_m_data_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDmapAsset_Statics::NewProp_m_data_Inner = { "m_data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDmapAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDmapAsset_Statics::NewProp_m_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDmapAsset_Statics::NewProp_m_data_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDmapAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDmapAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDmapAsset_Statics::ClassParams = {
		&UDmapAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDmapAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDmapAsset_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UDmapAsset, 852125858);
	template<> DMAPMODULE_API UClass* StaticClass<UDmapAsset>()
	{
		return UDmapAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDmapAsset(Z_Construct_UClass_UDmapAsset, &UDmapAsset::StaticClass, TEXT("/Script/DmapModule"), TEXT("UDmapAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDmapAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
