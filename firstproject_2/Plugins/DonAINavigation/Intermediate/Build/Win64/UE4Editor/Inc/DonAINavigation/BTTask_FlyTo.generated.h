// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDonNavigationDynamicCollisionPayload;
struct FDoNNavigationQueryData;
#ifdef DONAINAVIGATION_BTTask_FlyTo_generated_h
#error "BTTask_FlyTo.generated.h already included, missing '#pragma once' in BTTask_FlyTo.h"
#endif
#define DONAINAVIGATION_BTTask_FlyTo_generated_h

#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics; \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct(); \
	typedef FDoNNavigationDebugParams Super;


template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<struct FBT_FlyToTarget_DebugParams>();

#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_78_SPARSE_DATA
#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_78_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPathfinding_OnDynamicCollisionAlert) \
	{ \
		P_GET_STRUCT_REF(FDonNavigationDynamicCollisionPayload,Z_Param_Out_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Pathfinding_OnDynamicCollisionAlert(Z_Param_Out_Data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPathfinding_OnFinish) \
	{ \
		P_GET_STRUCT_REF(FDoNNavigationQueryData,Z_Param_Out_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Pathfinding_OnFinish(Z_Param_Out_Data); \
		P_NATIVE_END; \
	}


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPathfinding_OnDynamicCollisionAlert) \
	{ \
		P_GET_STRUCT_REF(FDonNavigationDynamicCollisionPayload,Z_Param_Out_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Pathfinding_OnDynamicCollisionAlert(Z_Param_Out_Data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPathfinding_OnFinish) \
	{ \
		P_GET_STRUCT_REF(FDoNNavigationQueryData,Z_Param_Out_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Pathfinding_OnFinish(Z_Param_Out_Data); \
		P_NATIVE_END; \
	}


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTTask_FlyTo(); \
	friend struct Z_Construct_UClass_UBTTask_FlyTo_Statics; \
public: \
	DECLARE_CLASS(UBTTask_FlyTo, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DonAINavigation"), NO_API) \
	DECLARE_SERIALIZER(UBTTask_FlyTo)


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_78_INCLASS \
private: \
	static void StaticRegisterNativesUBTTask_FlyTo(); \
	friend struct Z_Construct_UClass_UBTTask_FlyTo_Statics; \
public: \
	DECLARE_CLASS(UBTTask_FlyTo, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DonAINavigation"), NO_API) \
	DECLARE_SERIALIZER(UBTTask_FlyTo)


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_78_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTTask_FlyTo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_FlyTo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTask_FlyTo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_FlyTo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTTask_FlyTo(UBTTask_FlyTo&&); \
	NO_API UBTTask_FlyTo(const UBTTask_FlyTo&); \
public:


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_78_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTTask_FlyTo(UBTTask_FlyTo&&); \
	NO_API UBTTask_FlyTo(const UBTTask_FlyTo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTask_FlyTo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_FlyTo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_FlyTo)


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_78_PRIVATE_PROPERTY_OFFSET
#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_75_PROLOG
#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_78_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_78_PRIVATE_PROPERTY_OFFSET \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_78_SPARSE_DATA \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_78_RPC_WRAPPERS \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_78_INCLASS \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_78_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_78_PRIVATE_PROPERTY_OFFSET \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_78_SPARSE_DATA \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_78_INCLASS_NO_PURE_DECLS \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONAINAVIGATION_API UClass* StaticClass<class UBTTask_FlyTo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
