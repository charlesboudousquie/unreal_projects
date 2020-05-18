// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FIRSTPROJECT_2_firstproject_2Projectile_generated_h
#error "firstproject_2Projectile.generated.h already included, missing '#pragma once' in firstproject_2Projectile.h"
#endif
#define FIRSTPROJECT_2_firstproject_2Projectile_generated_h

#define firstproject_2_Source_firstproject_2_firstproject_2Projectile_h_12_SPARSE_DATA
#define firstproject_2_Source_firstproject_2_firstproject_2Projectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define firstproject_2_Source_firstproject_2_firstproject_2Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define firstproject_2_Source_firstproject_2_firstproject_2Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAfirstproject_2Projectile(); \
	friend struct Z_Construct_UClass_Afirstproject_2Projectile_Statics; \
public: \
	DECLARE_CLASS(Afirstproject_2Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/firstproject_2"), NO_API) \
	DECLARE_SERIALIZER(Afirstproject_2Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define firstproject_2_Source_firstproject_2_firstproject_2Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAfirstproject_2Projectile(); \
	friend struct Z_Construct_UClass_Afirstproject_2Projectile_Statics; \
public: \
	DECLARE_CLASS(Afirstproject_2Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/firstproject_2"), NO_API) \
	DECLARE_SERIALIZER(Afirstproject_2Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define firstproject_2_Source_firstproject_2_firstproject_2Projectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Afirstproject_2Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Afirstproject_2Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Afirstproject_2Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Afirstproject_2Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Afirstproject_2Projectile(Afirstproject_2Projectile&&); \
	NO_API Afirstproject_2Projectile(const Afirstproject_2Projectile&); \
public:


#define firstproject_2_Source_firstproject_2_firstproject_2Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Afirstproject_2Projectile(Afirstproject_2Projectile&&); \
	NO_API Afirstproject_2Projectile(const Afirstproject_2Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Afirstproject_2Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Afirstproject_2Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Afirstproject_2Projectile)


#define firstproject_2_Source_firstproject_2_firstproject_2Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(Afirstproject_2Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(Afirstproject_2Projectile, ProjectileMovement); }


#define firstproject_2_Source_firstproject_2_firstproject_2Projectile_h_9_PROLOG
#define firstproject_2_Source_firstproject_2_firstproject_2Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	firstproject_2_Source_firstproject_2_firstproject_2Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	firstproject_2_Source_firstproject_2_firstproject_2Projectile_h_12_SPARSE_DATA \
	firstproject_2_Source_firstproject_2_firstproject_2Projectile_h_12_RPC_WRAPPERS \
	firstproject_2_Source_firstproject_2_firstproject_2Projectile_h_12_INCLASS \
	firstproject_2_Source_firstproject_2_firstproject_2Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define firstproject_2_Source_firstproject_2_firstproject_2Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	firstproject_2_Source_firstproject_2_firstproject_2Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	firstproject_2_Source_firstproject_2_firstproject_2Projectile_h_12_SPARSE_DATA \
	firstproject_2_Source_firstproject_2_firstproject_2Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	firstproject_2_Source_firstproject_2_firstproject_2Projectile_h_12_INCLASS_NO_PURE_DECLS \
	firstproject_2_Source_firstproject_2_firstproject_2Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPROJECT_2_API UClass* StaticClass<class Afirstproject_2Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID firstproject_2_Source_firstproject_2_firstproject_2Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
