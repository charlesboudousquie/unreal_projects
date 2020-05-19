// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DmapModule/Public/DmapFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDmapFactory() {}
// Cross Module References
	DMAPMODULE_API UClass* Z_Construct_UClass_UDmapFactory_NoRegister();
	DMAPMODULE_API UClass* Z_Construct_UClass_UDmapFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DmapModule();
// End Cross Module References
	void UDmapFactory::StaticRegisterNativesUDmapFactory()
	{
	}
	UClass* Z_Construct_UClass_UDmapFactory_NoRegister()
	{
		return UDmapFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDmapFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDmapFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DmapModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDmapFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "DmapFactory.h" },
		{ "ModuleRelativePath", "Public/DmapFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDmapFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDmapFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDmapFactory_Statics::ClassParams = {
		&UDmapFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDmapFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDmapFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDmapFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDmapFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDmapFactory, 412835029);
	template<> DMAPMODULE_API UClass* StaticClass<UDmapFactory>()
	{
		return UDmapFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDmapFactory(Z_Construct_UClass_UDmapFactory, &UDmapFactory::StaticClass, TEXT("/Script/DmapModule"), TEXT("UDmapFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDmapFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
