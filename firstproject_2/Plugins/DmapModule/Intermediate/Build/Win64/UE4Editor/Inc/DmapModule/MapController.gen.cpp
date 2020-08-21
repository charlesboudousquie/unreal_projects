// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DmapModule/Public/MapController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapController() {}
// Cross Module References
	DMAPMODULE_API UClass* Z_Construct_UClass_UMapController_NoRegister();
	DMAPMODULE_API UClass* Z_Construct_UClass_UMapController();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DmapModule();
	DMAPMODULE_API UFunction* Z_Construct_UFunction_UMapController_getMeshScalar();
	DMAPMODULE_API UFunction* Z_Construct_UFunction_UMapController_getOctreePos();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DMAPMODULE_API UFunction* Z_Construct_UFunction_UMapController_LoadMap();
	DMAPMODULE_API UFunction* Z_Construct_UFunction_UMapController_octreeExists();
	DMAPMODULE_API UFunction* Z_Construct_UFunction_UMapController_printOctreeInfo();
	DMAPMODULE_API UFunction* Z_Construct_UFunction_UMapController_printTree();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UMapController::StaticRegisterNativesUMapController()
	{
		UClass* Class = UMapController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getMeshScalar", &UMapController::execgetMeshScalar },
			{ "getOctreePos", &UMapController::execgetOctreePos },
			{ "LoadMap", &UMapController::execLoadMap },
			{ "octreeExists", &UMapController::execoctreeExists },
			{ "printOctreeInfo", &UMapController::execprintOctreeInfo },
			{ "printTree", &UMapController::execprintTree },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMapController_getMeshScalar_Statics
	{
		struct MapController_eventgetMeshScalar_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapController_getMeshScalar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapController_eventgetMeshScalar_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapController_getMeshScalar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapController_getMeshScalar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapController_getMeshScalar_Statics::Function_MetaDataParams[] = {
		{ "Category", "3d maps" },
		{ "ModuleRelativePath", "Public/MapController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapController_getMeshScalar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapController, nullptr, "getMeshScalar", nullptr, nullptr, sizeof(MapController_eventgetMeshScalar_Parms), Z_Construct_UFunction_UMapController_getMeshScalar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapController_getMeshScalar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapController_getMeshScalar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapController_getMeshScalar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapController_getMeshScalar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapController_getMeshScalar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapController_getOctreePos_Statics
	{
		struct MapController_eventgetOctreePos_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapController_getOctreePos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapController_eventgetOctreePos_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapController_getOctreePos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapController_getOctreePos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapController_getOctreePos_Statics::Function_MetaDataParams[] = {
		{ "Category", "3d maps" },
		{ "ModuleRelativePath", "Public/MapController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapController_getOctreePos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapController, nullptr, "getOctreePos", nullptr, nullptr, sizeof(MapController_eventgetOctreePos_Parms), Z_Construct_UFunction_UMapController_getOctreePos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapController_getOctreePos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapController_getOctreePos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapController_getOctreePos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapController_getOctreePos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapController_getOctreePos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapController_LoadMap_Statics
	{
		struct MapController_eventLoadMap_Parms
		{
			FString p_map_name;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_p_map_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMapController_LoadMap_Statics::NewProp_p_map_name = { "p_map_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapController_eventLoadMap_Parms, p_map_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapController_LoadMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapController_LoadMap_Statics::NewProp_p_map_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapController_LoadMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "3d maps" },
		{ "Comment", "// load in user requested map\n" },
		{ "ModuleRelativePath", "Public/MapController.h" },
		{ "ToolTip", "load in user requested map" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapController_LoadMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapController, nullptr, "LoadMap", nullptr, nullptr, sizeof(MapController_eventLoadMap_Parms), Z_Construct_UFunction_UMapController_LoadMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapController_LoadMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapController_LoadMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapController_LoadMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapController_LoadMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapController_LoadMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapController_octreeExists_Statics
	{
		struct MapController_eventoctreeExists_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMapController_octreeExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MapController_eventoctreeExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapController_octreeExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapController_eventoctreeExists_Parms), &Z_Construct_UFunction_UMapController_octreeExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapController_octreeExists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapController_octreeExists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapController_octreeExists_Statics::Function_MetaDataParams[] = {
		{ "Category", "3d maps" },
		{ "ModuleRelativePath", "Public/MapController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapController_octreeExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapController, nullptr, "octreeExists", nullptr, nullptr, sizeof(MapController_eventoctreeExists_Parms), Z_Construct_UFunction_UMapController_octreeExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapController_octreeExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapController_octreeExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapController_octreeExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapController_octreeExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapController_octreeExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapController_printOctreeInfo_Statics
	{
		struct MapController_eventprintOctreeInfo_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapController_printOctreeInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapController_eventprintOctreeInfo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapController_printOctreeInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapController_printOctreeInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapController_printOctreeInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "3d maps" },
		{ "Comment", "// print high level info about octree, mainly dimensions\n// and center\n" },
		{ "ModuleRelativePath", "Public/MapController.h" },
		{ "ToolTip", "print high level info about octree, mainly dimensions\nand center" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapController_printOctreeInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapController, nullptr, "printOctreeInfo", nullptr, nullptr, sizeof(MapController_eventprintOctreeInfo_Parms), Z_Construct_UFunction_UMapController_printOctreeInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapController_printOctreeInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapController_printOctreeInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapController_printOctreeInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapController_printOctreeInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapController_printOctreeInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapController_printTree_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapController_printTree_Statics::Function_MetaDataParams[] = {
		{ "Category", "3d maps" },
		{ "Comment", "// print out octree\n" },
		{ "ModuleRelativePath", "Public/MapController.h" },
		{ "ToolTip", "print out octree" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapController_printTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapController, nullptr, "printTree", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapController_printTree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapController_printTree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapController_printTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapController_printTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMapController_NoRegister()
	{
		return UMapController::StaticClass();
	}
	struct Z_Construct_UClass_UMapController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_wireframe_material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_wireframe_material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_draw_path_nodes_MetaData[];
#endif
		static void NewProp_m_draw_path_nodes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_draw_path_nodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_draw_path_lines_MetaData[];
#endif
		static void NewProp_m_draw_path_lines_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_draw_path_lines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_draw_neighbors_MetaData[];
#endif
		static void NewProp_m_draw_neighbors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_draw_neighbors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_draw_debug_boxes_MetaData[];
#endif
		static void NewProp_m_draw_debug_boxes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_draw_debug_boxes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_draw_internal_nodes_MetaData[];
#endif
		static void NewProp_m_draw_internal_nodes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_draw_internal_nodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_draw_leaves_MetaData[];
#endif
		static void NewProp_m_draw_leaves_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_draw_leaves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_use_unit_test_MetaData[];
#endif
		static void NewProp_m_use_unit_test_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_use_unit_test;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_debug_line_width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_debug_line_width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_mesh_scalar_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_mesh_scalar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DmapModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMapController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapController_getMeshScalar, "getMeshScalar" }, // 3909612493
		{ &Z_Construct_UFunction_UMapController_getOctreePos, "getOctreePos" }, // 4000163366
		{ &Z_Construct_UFunction_UMapController_LoadMap, "LoadMap" }, // 1054104813
		{ &Z_Construct_UFunction_UMapController_octreeExists, "octreeExists" }, // 3098360378
		{ &Z_Construct_UFunction_UMapController_printOctreeInfo, "printOctreeInfo" }, // 2171914443
		{ &Z_Construct_UFunction_UMapController_printTree, "printTree" }, // 328872593
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "// Description: This class can load in maps. \n" },
		{ "IncludePath", "MapController.h" },
		{ "ModuleRelativePath", "Public/MapController.h" },
		{ "ToolTip", "Description: This class can load in maps." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapController_Statics::NewProp_m_wireframe_material_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapController_Statics::NewProp_m_wireframe_material = { "m_wireframe_material", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapController, m_wireframe_material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapController_Statics::NewProp_m_wireframe_material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapController_Statics::NewProp_m_wireframe_material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_path_nodes_MetaData[] = {
		{ "Category", "MapController" },
		{ "ModuleRelativePath", "Public/MapController.h" },
	};
#endif
	void Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_path_nodes_SetBit(void* Obj)
	{
		((UMapController*)Obj)->m_draw_path_nodes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_path_nodes = { "m_draw_path_nodes", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapController), &Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_path_nodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_path_nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_path_nodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_path_lines_MetaData[] = {
		{ "Category", "MapController" },
		{ "ModuleRelativePath", "Public/MapController.h" },
	};
#endif
	void Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_path_lines_SetBit(void* Obj)
	{
		((UMapController*)Obj)->m_draw_path_lines = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_path_lines = { "m_draw_path_lines", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapController), &Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_path_lines_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_path_lines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_path_lines_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_neighbors_MetaData[] = {
		{ "Category", "MapController" },
		{ "ModuleRelativePath", "Public/MapController.h" },
	};
#endif
	void Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_neighbors_SetBit(void* Obj)
	{
		((UMapController*)Obj)->m_draw_neighbors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_neighbors = { "m_draw_neighbors", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapController), &Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_neighbors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_neighbors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_neighbors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_debug_boxes_MetaData[] = {
		{ "Category", "MapController" },
		{ "ModuleRelativePath", "Public/MapController.h" },
	};
#endif
	void Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_debug_boxes_SetBit(void* Obj)
	{
		((UMapController*)Obj)->m_draw_debug_boxes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_debug_boxes = { "m_draw_debug_boxes", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapController), &Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_debug_boxes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_debug_boxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_debug_boxes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_internal_nodes_MetaData[] = {
		{ "Category", "MapController" },
		{ "ModuleRelativePath", "Public/MapController.h" },
	};
#endif
	void Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_internal_nodes_SetBit(void* Obj)
	{
		((UMapController*)Obj)->m_draw_internal_nodes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_internal_nodes = { "m_draw_internal_nodes", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapController), &Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_internal_nodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_internal_nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_internal_nodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_leaves_MetaData[] = {
		{ "Category", "MapController" },
		{ "ModuleRelativePath", "Public/MapController.h" },
	};
#endif
	void Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_leaves_SetBit(void* Obj)
	{
		((UMapController*)Obj)->m_draw_leaves = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_leaves = { "m_draw_leaves", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapController), &Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_leaves_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_leaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_leaves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapController_Statics::NewProp_m_use_unit_test_MetaData[] = {
		{ "Category", "MapController" },
		{ "ModuleRelativePath", "Public/MapController.h" },
	};
#endif
	void Z_Construct_UClass_UMapController_Statics::NewProp_m_use_unit_test_SetBit(void* Obj)
	{
		((UMapController*)Obj)->m_use_unit_test = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapController_Statics::NewProp_m_use_unit_test = { "m_use_unit_test", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapController), &Z_Construct_UClass_UMapController_Statics::NewProp_m_use_unit_test_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapController_Statics::NewProp_m_use_unit_test_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapController_Statics::NewProp_m_use_unit_test_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapController_Statics::NewProp_m_debug_line_width_MetaData[] = {
		{ "Category", "MapController" },
		{ "ModuleRelativePath", "Public/MapController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapController_Statics::NewProp_m_debug_line_width = { "m_debug_line_width", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapController, m_debug_line_width), METADATA_PARAMS(Z_Construct_UClass_UMapController_Statics::NewProp_m_debug_line_width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapController_Statics::NewProp_m_debug_line_width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapController_Statics::NewProp_m_mesh_scalar_MetaData[] = {
		{ "Category", "MapController" },
		{ "ModuleRelativePath", "Public/MapController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapController_Statics::NewProp_m_mesh_scalar = { "m_mesh_scalar", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapController, m_mesh_scalar), METADATA_PARAMS(Z_Construct_UClass_UMapController_Statics::NewProp_m_mesh_scalar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapController_Statics::NewProp_m_mesh_scalar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapController_Statics::NewProp_m_wireframe_material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_path_nodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_path_lines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_neighbors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_debug_boxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_internal_nodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapController_Statics::NewProp_m_draw_leaves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapController_Statics::NewProp_m_use_unit_test,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapController_Statics::NewProp_m_debug_line_width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapController_Statics::NewProp_m_mesh_scalar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMapController_Statics::ClassParams = {
		&UMapController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMapController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMapController_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMapController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMapController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMapController, 94497344);
	template<> DMAPMODULE_API UClass* StaticClass<UMapController>()
	{
		return UMapController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMapController(Z_Construct_UClass_UMapController, &UMapController::StaticClass, TEXT("/Script/DmapModule"), TEXT("UMapController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
