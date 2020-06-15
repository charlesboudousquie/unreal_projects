// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DMAPMODULE_Get3dMapList_generated_h
#error "Get3dMapList.generated.h already included, missing '#pragma once' in Get3dMapList.h"
#endif
#define DMAPMODULE_Get3dMapList_generated_h

#define firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_Get3dMapList_h_16_SPARSE_DATA
#define firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_Get3dMapList_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UGet3dMapList::getList(); \
		P_NATIVE_END; \
	}


#define firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_Get3dMapList_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UGet3dMapList::getList(); \
		P_NATIVE_END; \
	}


#define firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_Get3dMapList_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGet3dMapList(); \
	friend struct Z_Construct_UClass_UGet3dMapList_Statics; \
public: \
	DECLARE_CLASS(UGet3dMapList, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DmapModule"), NO_API) \
	DECLARE_SERIALIZER(UGet3dMapList)


#define firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_Get3dMapList_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGet3dMapList(); \
	friend struct Z_Construct_UClass_UGet3dMapList_Statics; \
public: \
	DECLARE_CLASS(UGet3dMapList, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DmapModule"), NO_API) \
	DECLARE_SERIALIZER(UGet3dMapList)


#define firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_Get3dMapList_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGet3dMapList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGet3dMapList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGet3dMapList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGet3dMapList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGet3dMapList(UGet3dMapList&&); \
	NO_API UGet3dMapList(const UGet3dMapList&); \
public:


#define firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_Get3dMapList_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGet3dMapList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGet3dMapList(UGet3dMapList&&); \
	NO_API UGet3dMapList(const UGet3dMapList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGet3dMapList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGet3dMapList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGet3dMapList)


#define firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_Get3dMapList_h_16_PRIVATE_PROPERTY_OFFSET
#define firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_Get3dMapList_h_13_PROLOG
#define firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_Get3dMapList_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_Get3dMapList_h_16_PRIVATE_PROPERTY_OFFSET \
	firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_Get3dMapList_h_16_SPARSE_DATA \
	firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_Get3dMapList_h_16_RPC_WRAPPERS \
	firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_Get3dMapList_h_16_INCLASS \
	firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_Get3dMapList_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_Get3dMapList_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_Get3dMapList_h_16_PRIVATE_PROPERTY_OFFSET \
	firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_Get3dMapList_h_16_SPARSE_DATA \
	firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_Get3dMapList_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_Get3dMapList_h_16_INCLASS_NO_PURE_DECLS \
	firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_Get3dMapList_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DMAPMODULE_API UClass* StaticClass<class UGet3dMapList>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_Get3dMapList_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
