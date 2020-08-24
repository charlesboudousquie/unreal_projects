// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class ADonNavigationManager;
#ifdef DONAINAVIGATION_DonNavigationHelper_generated_h
#error "DonNavigationHelper.generated.h already included, missing '#pragma once' in DonNavigationHelper.h"
#endif
#define DONAINAVIGATION_DonNavigationHelper_generated_h

#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationHelper_h_28_SPARSE_DATA
#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationHelper_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDonNavigationManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ADonNavigationManager**)Z_Param__Result=UDonNavigationHelper::DonNavigationManager(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationHelper_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDonNavigationManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ADonNavigationManager**)Z_Param__Result=UDonNavigationHelper::DonNavigationManager(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationHelper_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDonNavigationHelper(); \
	friend struct Z_Construct_UClass_UDonNavigationHelper_Statics; \
public: \
	DECLARE_CLASS(UDonNavigationHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DonAINavigation"), NO_API) \
	DECLARE_SERIALIZER(UDonNavigationHelper)


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationHelper_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUDonNavigationHelper(); \
	friend struct Z_Construct_UClass_UDonNavigationHelper_Statics; \
public: \
	DECLARE_CLASS(UDonNavigationHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DonAINavigation"), NO_API) \
	DECLARE_SERIALIZER(UDonNavigationHelper)


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationHelper_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDonNavigationHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDonNavigationHelper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDonNavigationHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDonNavigationHelper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDonNavigationHelper(UDonNavigationHelper&&); \
	NO_API UDonNavigationHelper(const UDonNavigationHelper&); \
public:


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationHelper_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDonNavigationHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDonNavigationHelper(UDonNavigationHelper&&); \
	NO_API UDonNavigationHelper(const UDonNavigationHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDonNavigationHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDonNavigationHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDonNavigationHelper)


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationHelper_h_28_PRIVATE_PROPERTY_OFFSET
#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationHelper_h_25_PROLOG
#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationHelper_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationHelper_h_28_PRIVATE_PROPERTY_OFFSET \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationHelper_h_28_SPARSE_DATA \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationHelper_h_28_RPC_WRAPPERS \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationHelper_h_28_INCLASS \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationHelper_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationHelper_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationHelper_h_28_PRIVATE_PROPERTY_OFFSET \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationHelper_h_28_SPARSE_DATA \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationHelper_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationHelper_h_28_INCLASS_NO_PURE_DECLS \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationHelper_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONAINAVIGATION_API UClass* StaticClass<class UDonNavigationHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
