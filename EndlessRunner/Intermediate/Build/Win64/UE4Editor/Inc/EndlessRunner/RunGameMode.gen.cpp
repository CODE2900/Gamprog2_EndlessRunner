// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunner/RunGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunGameMode() {}
// Cross Module References
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_ARunGameMode_NoRegister();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_ARunGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_EndlessRunner();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_AFloorTile_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(ARunGameMode::execAddFloorTile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFloorTile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunGameMode::execCreateInitialFloorTiles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateInitialFloorTiles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunGameMode::execDestroyTile)
	{
		P_GET_OBJECT(AFloorTile,Z_Param_tile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyTile(Z_Param_tile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunGameMode::execOnHitCollider)
	{
		P_GET_OBJECT(AFloorTile,Z_Param_tile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHitCollider(Z_Param_tile);
		P_NATIVE_END;
	}
	void ARunGameMode::StaticRegisterNativesARunGameMode()
	{
		UClass* Class = ARunGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFloorTile", &ARunGameMode::execAddFloorTile },
			{ "CreateInitialFloorTiles", &ARunGameMode::execCreateInitialFloorTiles },
			{ "DestroyTile", &ARunGameMode::execDestroyTile },
			{ "OnHitCollider", &ARunGameMode::execOnHitCollider },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARunGameMode_AddFloorTile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunGameMode_AddFloorTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RunGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunGameMode_AddFloorTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunGameMode, nullptr, "AddFloorTile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunGameMode_AddFloorTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunGameMode_AddFloorTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunGameMode_AddFloorTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARunGameMode_AddFloorTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunGameMode_CreateInitialFloorTiles_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunGameMode_CreateInitialFloorTiles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RunGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunGameMode_CreateInitialFloorTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunGameMode, nullptr, "CreateInitialFloorTiles", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunGameMode_CreateInitialFloorTiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunGameMode_CreateInitialFloorTiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunGameMode_CreateInitialFloorTiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARunGameMode_CreateInitialFloorTiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunGameMode_DestroyTile_Statics
	{
		struct RunGameMode_eventDestroyTile_Parms
		{
			AFloorTile* tile;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARunGameMode_DestroyTile_Statics::NewProp_tile = { "tile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RunGameMode_eventDestroyTile_Parms, tile), Z_Construct_UClass_AFloorTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARunGameMode_DestroyTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunGameMode_DestroyTile_Statics::NewProp_tile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunGameMode_DestroyTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RunGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunGameMode_DestroyTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunGameMode, nullptr, "DestroyTile", nullptr, nullptr, sizeof(RunGameMode_eventDestroyTile_Parms), Z_Construct_UFunction_ARunGameMode_DestroyTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunGameMode_DestroyTile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunGameMode_DestroyTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunGameMode_DestroyTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunGameMode_DestroyTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARunGameMode_DestroyTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunGameMode_OnHitCollider_Statics
	{
		struct RunGameMode_eventOnHitCollider_Parms
		{
			AFloorTile* tile;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARunGameMode_OnHitCollider_Statics::NewProp_tile = { "tile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RunGameMode_eventOnHitCollider_Parms, tile), Z_Construct_UClass_AFloorTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARunGameMode_OnHitCollider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunGameMode_OnHitCollider_Statics::NewProp_tile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunGameMode_OnHitCollider_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RunGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunGameMode_OnHitCollider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunGameMode, nullptr, "OnHitCollider", nullptr, nullptr, sizeof(RunGameMode_eventOnHitCollider_Parms), Z_Construct_UFunction_ARunGameMode_OnHitCollider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunGameMode_OnHitCollider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunGameMode_OnHitCollider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunGameMode_OnHitCollider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunGameMode_OnHitCollider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARunGameMode_OnHitCollider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARunGameMode_NoRegister()
	{
		return ARunGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARunGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorTileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FloorTileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumInitialFloorTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumInitialFloorTiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextSpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NextSpawnPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARunGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARunGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARunGameMode_AddFloorTile, "AddFloorTile" }, // 1891324791
		{ &Z_Construct_UFunction_ARunGameMode_CreateInitialFloorTiles, "CreateInitialFloorTiles" }, // 1085645504
		{ &Z_Construct_UFunction_ARunGameMode_DestroyTile, "DestroyTile" }, // 1202439292
		{ &Z_Construct_UFunction_ARunGameMode_OnHitCollider, "OnHitCollider" }, // 2989453906
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RunGameMode.h" },
		{ "ModuleRelativePath", "RunGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunGameMode_Statics::NewProp_FloorTileClass_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "RunGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARunGameMode_Statics::NewProp_FloorTileClass = { "FloorTileClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunGameMode, FloorTileClass), Z_Construct_UClass_AFloorTile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARunGameMode_Statics::NewProp_FloorTileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunGameMode_Statics::NewProp_FloorTileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunGameMode_Statics::NewProp_NumInitialFloorTiles_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "RunGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARunGameMode_Statics::NewProp_NumInitialFloorTiles = { "NumInitialFloorTiles", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunGameMode, NumInitialFloorTiles), METADATA_PARAMS(Z_Construct_UClass_ARunGameMode_Statics::NewProp_NumInitialFloorTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunGameMode_Statics::NewProp_NumInitialFloorTiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunGameMode_Statics::NewProp_NextSpawnPoint_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "RunGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARunGameMode_Statics::NewProp_NextSpawnPoint = { "NextSpawnPoint", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunGameMode, NextSpawnPoint), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ARunGameMode_Statics::NewProp_NextSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunGameMode_Statics::NewProp_NextSpawnPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARunGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunGameMode_Statics::NewProp_FloorTileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunGameMode_Statics::NewProp_NumInitialFloorTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunGameMode_Statics::NewProp_NextSpawnPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARunGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARunGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARunGameMode_Statics::ClassParams = {
		&ARunGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARunGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARunGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARunGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARunGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARunGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARunGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARunGameMode, 3204124724);
	template<> ENDLESSRUNNER_API UClass* StaticClass<ARunGameMode>()
	{
		return ARunGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARunGameMode(Z_Construct_UClass_ARunGameMode, &ARunGameMode::StaticClass, TEXT("/Script/EndlessRunner"), TEXT("ARunGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARunGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
