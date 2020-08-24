// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonAINavigation/Classes/Legacy/DEPRECATED_DoNNavigationVolumeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDEPRECATED_DoNNavigationVolumeComponent() {}
// Cross Module References
	DONAINAVIGATION_API UClass* Z_Construct_UClass_UDoNNavigationVolumeComponent_NoRegister();
	DONAINAVIGATION_API UClass* Z_Construct_UClass_UDoNNavigationVolumeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_DonAINavigation();
// End Cross Module References
	void UDoNNavigationVolumeComponent::StaticRegisterNativesUDoNNavigationVolumeComponent()
	{
	}
	UClass* Z_Construct_UClass_UDoNNavigationVolumeComponent_NoRegister()
	{
		return UDoNNavigationVolumeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanNavigate_MetaData[];
#endif
		static void NewProp_CanNavigate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanNavigate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Z;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger" },
		{ "IncludePath", "Legacy/DEPRECATED_DoNNavigationVolumeComponent.h" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_DoNNavigationVolumeComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::NewProp_CanNavigate_MetaData[] = {
		{ "Category", "AerialNavigationVolume" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_DoNNavigationVolumeComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::NewProp_CanNavigate_SetBit(void* Obj)
	{
		((UDoNNavigationVolumeComponent*)Obj)->CanNavigate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::NewProp_CanNavigate = { "CanNavigate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDoNNavigationVolumeComponent), &Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::NewProp_CanNavigate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::NewProp_CanNavigate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::NewProp_CanNavigate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "AerialNavigation" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_DoNNavigationVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoNNavigationVolumeComponent, Z), METADATA_PARAMS(Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::NewProp_Z_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "AerialNavigation" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_DoNNavigationVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoNNavigationVolumeComponent, Y), METADATA_PARAMS(Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::NewProp_X_MetaData[] = {
		{ "Category", "AerialNavigation" },
		{ "ModuleRelativePath", "Classes/Legacy/DEPRECATED_DoNNavigationVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoNNavigationVolumeComponent, X), METADATA_PARAMS(Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::NewProp_X_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::NewProp_CanNavigate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::NewProp_Z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::NewProp_X,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoNNavigationVolumeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::ClassParams = {
		&UDoNNavigationVolumeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoNNavigationVolumeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDoNNavigationVolumeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDoNNavigationVolumeComponent, 3622589523);
	template<> DONAINAVIGATION_API UClass* StaticClass<UDoNNavigationVolumeComponent>()
	{
		return UDoNNavigationVolumeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoNNavigationVolumeComponent(Z_Construct_UClass_UDoNNavigationVolumeComponent, &UDoNNavigationVolumeComponent::StaticClass, TEXT("/Script/DonAINavigation"), TEXT("UDoNNavigationVolumeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoNNavigationVolumeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
