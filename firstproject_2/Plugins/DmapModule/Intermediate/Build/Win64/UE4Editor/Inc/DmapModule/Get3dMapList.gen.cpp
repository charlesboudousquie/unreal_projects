// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DmapModule/Public/Get3dMapList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGet3dMapList() {}
// Cross Module References
	DMAPMODULE_API UClass* Z_Construct_UClass_UGet3dMapList_NoRegister();
	DMAPMODULE_API UClass* Z_Construct_UClass_UGet3dMapList();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DmapModule();
	DMAPMODULE_API UFunction* Z_Construct_UFunction_UGet3dMapList_getList();
// End Cross Module References
	void UGet3dMapList::StaticRegisterNativesUGet3dMapList()
	{
		UClass* Class = UGet3dMapList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getList", &UGet3dMapList::execgetList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGet3dMapList_getList_Statics
	{
		struct Get3dMapList_eventgetList_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGet3dMapList_getList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Get3dMapList_eventgetList_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGet3dMapList_getList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGet3dMapList_getList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGet3dMapList_getList_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGet3dMapList_getList_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGet3dMapList_getList_Statics::Function_MetaDataParams[] = {
		{ "Category", "3d maps" },
		{ "ModuleRelativePath", "Public/Get3dMapList.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGet3dMapList_getList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGet3dMapList, nullptr, "getList", nullptr, nullptr, sizeof(Get3dMapList_eventgetList_Parms), Z_Construct_UFunction_UGet3dMapList_getList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGet3dMapList_getList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGet3dMapList_getList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGet3dMapList_getList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGet3dMapList_getList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGet3dMapList_getList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGet3dMapList_NoRegister()
	{
		return UGet3dMapList::StaticClass();
	}
	struct Z_Construct_UClass_UGet3dMapList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGet3dMapList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DmapModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGet3dMapList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGet3dMapList_getList, "getList" }, // 3597565658
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGet3dMapList_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Get3dMapList.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Get3dMapList.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGet3dMapList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGet3dMapList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGet3dMapList_Statics::ClassParams = {
		&UGet3dMapList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGet3dMapList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGet3dMapList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGet3dMapList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGet3dMapList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGet3dMapList, 1520219574);
	template<> DMAPMODULE_API UClass* StaticClass<UGet3dMapList>()
	{
		return UGet3dMapList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGet3dMapList(Z_Construct_UClass_UGet3dMapList, &UGet3dMapList::StaticClass, TEXT("/Script/DmapModule"), TEXT("UGet3dMapList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGet3dMapList);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
