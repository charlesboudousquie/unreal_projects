// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DmapModule/Public/DmapFactoryDragDrop.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDmapFactoryDragDrop() {}
// Cross Module References
	DMAPMODULE_API UClass* Z_Construct_UClass_UDmapFactoryDragDrop_NoRegister();
	DMAPMODULE_API UClass* Z_Construct_UClass_UDmapFactoryDragDrop();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DmapModule();
// End Cross Module References
	void UDmapFactoryDragDrop::StaticRegisterNativesUDmapFactoryDragDrop()
	{
	}
	UClass* Z_Construct_UClass_UDmapFactoryDragDrop_NoRegister()
	{
		return UDmapFactoryDragDrop::StaticClass();
	}
	struct Z_Construct_UClass_UDmapFactoryDragDrop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDmapFactoryDragDrop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DmapModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDmapFactoryDragDrop_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "DmapFactoryDragDrop.h" },
		{ "ModuleRelativePath", "Public/DmapFactoryDragDrop.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDmapFactoryDragDrop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDmapFactoryDragDrop>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDmapFactoryDragDrop_Statics::ClassParams = {
		&UDmapFactoryDragDrop::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDmapFactoryDragDrop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDmapFactoryDragDrop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDmapFactoryDragDrop()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDmapFactoryDragDrop_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDmapFactoryDragDrop, 1776525603);
	template<> DMAPMODULE_API UClass* StaticClass<UDmapFactoryDragDrop>()
	{
		return UDmapFactoryDragDrop::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDmapFactoryDragDrop(Z_Construct_UClass_UDmapFactoryDragDrop, &UDmapFactoryDragDrop::StaticClass, TEXT("/Script/DmapModule"), TEXT("UDmapFactoryDragDrop"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDmapFactoryDragDrop);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
