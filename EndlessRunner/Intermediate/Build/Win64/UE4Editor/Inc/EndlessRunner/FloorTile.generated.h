// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFloorTile;
struct FTransform;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ENDLESSRUNNER_FloorTile_generated_h
#error "FloorTile.generated.h already included, missing '#pragma once' in FloorTile.h"
#endif
#define ENDLESSRUNNER_FloorTile_generated_h

#define EndlessRunner_Source_EndlessRunner_FloorTile_h_9_DELEGATE \
struct _Script_EndlessRunner_eventTileExitedSignature_Parms \
{ \
	AFloorTile* FloorTile; \
}; \
static inline void FTileExitedSignature_DelegateWrapper(const FMulticastScriptDelegate& TileExitedSignature, AFloorTile* FloorTile) \
{ \
	_Script_EndlessRunner_eventTileExitedSignature_Parms Parms; \
	Parms.FloorTile=FloorTile; \
	TileExitedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define EndlessRunner_Source_EndlessRunner_FloorTile_h_17_SPARSE_DATA
#define EndlessRunner_Source_EndlessRunner_FloorTile_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAttachPointTransform); \
	DECLARE_FUNCTION(execOnHit);


#define EndlessRunner_Source_EndlessRunner_FloorTile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAttachPointTransform); \
	DECLARE_FUNCTION(execOnHit);


#define EndlessRunner_Source_EndlessRunner_FloorTile_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFloorTile(); \
	friend struct Z_Construct_UClass_AFloorTile_Statics; \
public: \
	DECLARE_CLASS(AFloorTile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EndlessRunner"), NO_API) \
	DECLARE_SERIALIZER(AFloorTile)


#define EndlessRunner_Source_EndlessRunner_FloorTile_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAFloorTile(); \
	friend struct Z_Construct_UClass_AFloorTile_Statics; \
public: \
	DECLARE_CLASS(AFloorTile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EndlessRunner"), NO_API) \
	DECLARE_SERIALIZER(AFloorTile)


#define EndlessRunner_Source_EndlessRunner_FloorTile_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFloorTile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFloorTile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloorTile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloorTile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloorTile(AFloorTile&&); \
	NO_API AFloorTile(const AFloorTile&); \
public:


#define EndlessRunner_Source_EndlessRunner_FloorTile_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloorTile(AFloorTile&&); \
	NO_API AFloorTile(const AFloorTile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloorTile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloorTile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFloorTile)


#define EndlessRunner_Source_EndlessRunner_FloorTile_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Scene() { return STRUCT_OFFSET(AFloorTile, Scene); } \
	FORCEINLINE static uint32 __PPO__Arrow() { return STRUCT_OFFSET(AFloorTile, Arrow); } \
	FORCEINLINE static uint32 __PPO__Box() { return STRUCT_OFFSET(AFloorTile, Box); } \
	FORCEINLINE static uint32 __PPO__Floor() { return STRUCT_OFFSET(AFloorTile, Floor); } \
	FORCEINLINE static uint32 __PPO__Wall() { return STRUCT_OFFSET(AFloorTile, Wall); } \
	FORCEINLINE static uint32 __PPO__Wall2() { return STRUCT_OFFSET(AFloorTile, Wall2); }


#define EndlessRunner_Source_EndlessRunner_FloorTile_h_14_PROLOG
#define EndlessRunner_Source_EndlessRunner_FloorTile_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EndlessRunner_Source_EndlessRunner_FloorTile_h_17_PRIVATE_PROPERTY_OFFSET \
	EndlessRunner_Source_EndlessRunner_FloorTile_h_17_SPARSE_DATA \
	EndlessRunner_Source_EndlessRunner_FloorTile_h_17_RPC_WRAPPERS \
	EndlessRunner_Source_EndlessRunner_FloorTile_h_17_INCLASS \
	EndlessRunner_Source_EndlessRunner_FloorTile_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EndlessRunner_Source_EndlessRunner_FloorTile_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EndlessRunner_Source_EndlessRunner_FloorTile_h_17_PRIVATE_PROPERTY_OFFSET \
	EndlessRunner_Source_EndlessRunner_FloorTile_h_17_SPARSE_DATA \
	EndlessRunner_Source_EndlessRunner_FloorTile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	EndlessRunner_Source_EndlessRunner_FloorTile_h_17_INCLASS_NO_PURE_DECLS \
	EndlessRunner_Source_EndlessRunner_FloorTile_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENDLESSRUNNER_API UClass* StaticClass<class AFloorTile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EndlessRunner_Source_EndlessRunner_FloorTile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
