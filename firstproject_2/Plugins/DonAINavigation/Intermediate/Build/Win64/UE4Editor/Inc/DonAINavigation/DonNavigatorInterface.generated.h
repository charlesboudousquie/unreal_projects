// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef DONAINAVIGATION_DonNavigatorInterface_generated_h
#error "DonNavigatorInterface.generated.h already included, missing '#pragma once' in DonNavigatorInterface.h"
#endif
#define DONAINAVIGATION_DonNavigatorInterface_generated_h

#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_SPARSE_DATA
#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_RPC_WRAPPERS \
	virtual void OnNextSegment_Implementation(FVector NextPoint) {}; \
	virtual void OnLocomotionAbort_Implementation() {}; \
	virtual void OnLocomotionEnd_Implementation() {}; \
	virtual void OnLocomotionBegin_Implementation() {}; \
	virtual void AddMovementInputCustom_Implementation(FVector WorldDirection, float ScaleValue) {}; \
 \
	DECLARE_FUNCTION(execOnNextSegment) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NextPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnNextSegment_Implementation(Z_Param_NextPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLocomotionAbort) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLocomotionAbort_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLocomotionEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLocomotionEnd_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLocomotionBegin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLocomotionBegin_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddMovementInputCustom) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldDirection); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScaleValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddMovementInputCustom_Implementation(Z_Param_WorldDirection,Z_Param_ScaleValue); \
		P_NATIVE_END; \
	}


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnNextSegment_Implementation(FVector NextPoint) {}; \
	virtual void OnLocomotionAbort_Implementation() {}; \
	virtual void OnLocomotionEnd_Implementation() {}; \
	virtual void OnLocomotionBegin_Implementation() {}; \
	virtual void AddMovementInputCustom_Implementation(FVector WorldDirection, float ScaleValue) {}; \
 \
	DECLARE_FUNCTION(execOnNextSegment) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NextPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnNextSegment_Implementation(Z_Param_NextPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLocomotionAbort) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLocomotionAbort_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLocomotionEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLocomotionEnd_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLocomotionBegin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLocomotionBegin_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddMovementInputCustom) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldDirection); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScaleValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddMovementInputCustom_Implementation(Z_Param_WorldDirection,Z_Param_ScaleValue); \
		P_NATIVE_END; \
	}


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_EVENT_PARMS \
	struct DonNavigator_eventAddMovementInputCustom_Parms \
	{ \
		FVector WorldDirection; \
		float ScaleValue; \
	}; \
	struct DonNavigator_eventOnNextSegment_Parms \
	{ \
		FVector NextPoint; \
	};


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_CALLBACK_WRAPPERS
#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDonNavigator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDonNavigator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDonNavigator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDonNavigator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDonNavigator(UDonNavigator&&); \
	NO_API UDonNavigator(const UDonNavigator&); \
public:


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDonNavigator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDonNavigator(UDonNavigator&&); \
	NO_API UDonNavigator(const UDonNavigator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDonNavigator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDonNavigator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDonNavigator)


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDonNavigator(); \
	friend struct Z_Construct_UClass_UDonNavigator_Statics; \
public: \
	DECLARE_CLASS(UDonNavigator, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DonAINavigation"), NO_API) \
	DECLARE_SERIALIZER(UDonNavigator)


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_GENERATED_UINTERFACE_BODY() \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_GENERATED_UINTERFACE_BODY() \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDonNavigator() {} \
public: \
	typedef UDonNavigator UClassType; \
	typedef IDonNavigator ThisClass; \
	static void Execute_AddMovementInputCustom(UObject* O, FVector WorldDirection, float ScaleValue); \
	static void Execute_OnLocomotionAbort(UObject* O); \
	static void Execute_OnLocomotionBegin(UObject* O); \
	static void Execute_OnLocomotionEnd(UObject* O); \
	static void Execute_OnNextSegment(UObject* O, FVector NextPoint); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_INCLASS_IINTERFACE \
protected: \
	virtual ~IDonNavigator() {} \
public: \
	typedef UDonNavigator UClassType; \
	typedef IDonNavigator ThisClass; \
	static void Execute_AddMovementInputCustom(UObject* O, FVector WorldDirection, float ScaleValue); \
	static void Execute_OnLocomotionAbort(UObject* O); \
	static void Execute_OnLocomotionBegin(UObject* O); \
	static void Execute_OnLocomotionEnd(UObject* O); \
	static void Execute_OnNextSegment(UObject* O, FVector NextPoint); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_19_PROLOG \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_EVENT_PARMS


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_SPARSE_DATA \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_RPC_WRAPPERS \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_CALLBACK_WRAPPERS \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_SPARSE_DATA \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_CALLBACK_WRAPPERS \
	firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONAINAVIGATION_API UClass* StaticClass<class UDonNavigator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID firstproject_2_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
