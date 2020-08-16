// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class AActor;
#ifdef DMAPMODULE_MapController_generated_h
#error "MapController.generated.h already included, missing '#pragma once' in MapController.h"
#endif
#define DMAPMODULE_MapController_generated_h

#define firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_MapController_h_26_SPARSE_DATA
#define firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_MapController_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execprintOctreeInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->printOctreeInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetMeshScalar) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->getMeshScalar(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetOctreePos) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->getOctreePos(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execoctreeExists) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->octreeExists(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execprintTree) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->printTree(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadMap) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_p_map_name); \
		P_GET_OBJECT(AActor,Z_Param_p_asteroid_archetype); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadMap(Z_Param_p_map_name,Z_Param_p_asteroid_archetype); \
		P_NATIVE_END; \
	}


#define firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_MapController_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execprintOctreeInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->printOctreeInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetMeshScalar) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->getMeshScalar(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetOctreePos) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->getOctreePos(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execoctreeExists) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->octreeExists(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execprintTree) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->printTree(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadMap) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_p_map_name); \
		P_GET_OBJECT(AActor,Z_Param_p_asteroid_archetype); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadMap(Z_Param_p_map_name,Z_Param_p_asteroid_archetype); \
		P_NATIVE_END; \
	}


#define firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_MapController_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapController(); \
	friend struct Z_Construct_UClass_UMapController_Statics; \
public: \
	DECLARE_CLASS(UMapController, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DmapModule"), NO_API) \
	DECLARE_SERIALIZER(UMapController)


#define firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_MapController_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUMapController(); \
	friend struct Z_Construct_UClass_UMapController_Statics; \
public: \
	DECLARE_CLASS(UMapController, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DmapModule"), NO_API) \
	DECLARE_SERIALIZER(UMapController)


#define firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_MapController_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapController(UMapController&&); \
	NO_API UMapController(const UMapController&); \
public:


#define firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_MapController_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapController(UMapController&&); \
	NO_API UMapController(const UMapController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMapController)


#define firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_MapController_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_mesh_scalar() { return STRUCT_OFFSET(UMapController, m_mesh_scalar); } \
	FORCEINLINE static uint32 __PPO__m_use_unit_test() { return STRUCT_OFFSET(UMapController, m_use_unit_test); } \
	FORCEINLINE static uint32 __PPO__m_draw_leaves() { return STRUCT_OFFSET(UMapController, m_draw_leaves); } \
	FORCEINLINE static uint32 __PPO__m_draw_internal_nodes() { return STRUCT_OFFSET(UMapController, m_draw_internal_nodes); } \
	FORCEINLINE static uint32 __PPO__m_wireframe_material() { return STRUCT_OFFSET(UMapController, m_wireframe_material); }


#define firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_MapController_h_23_PROLOG
#define firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_MapController_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_MapController_h_26_PRIVATE_PROPERTY_OFFSET \
	firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_MapController_h_26_SPARSE_DATA \
	firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_MapController_h_26_RPC_WRAPPERS \
	firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_MapController_h_26_INCLASS \
	firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_MapController_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_MapController_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_MapController_h_26_PRIVATE_PROPERTY_OFFSET \
	firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_MapController_h_26_SPARSE_DATA \
	firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_MapController_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_MapController_h_26_INCLASS_NO_PURE_DECLS \
	firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_MapController_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DMAPMODULE_API UClass* StaticClass<class UMapController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID firstproject_2_Plugins_DmapModule_Source_DmapModule_Public_MapController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
