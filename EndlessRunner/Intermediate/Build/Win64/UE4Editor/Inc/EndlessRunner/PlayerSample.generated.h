// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENDLESSRUNNER_PlayerSample_generated_h
#error "PlayerSample.generated.h already included, missing '#pragma once' in PlayerSample.h"
#endif
#define ENDLESSRUNNER_PlayerSample_generated_h

#define EndlessRunner_Source_EndlessRunner_PlayerSample_h_12_SPARSE_DATA
#define EndlessRunner_Source_EndlessRunner_PlayerSample_h_12_RPC_WRAPPERS
#define EndlessRunner_Source_EndlessRunner_PlayerSample_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define EndlessRunner_Source_EndlessRunner_PlayerSample_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerSample(); \
	friend struct Z_Construct_UClass_APlayerSample_Statics; \
public: \
	DECLARE_CLASS(APlayerSample, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EndlessRunner"), NO_API) \
	DECLARE_SERIALIZER(APlayerSample)


#define EndlessRunner_Source_EndlessRunner_PlayerSample_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerSample(); \
	friend struct Z_Construct_UClass_APlayerSample_Statics; \
public: \
	DECLARE_CLASS(APlayerSample, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EndlessRunner"), NO_API) \
	DECLARE_SERIALIZER(APlayerSample)


#define EndlessRunner_Source_EndlessRunner_PlayerSample_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerSample(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerSample) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerSample); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerSample); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerSample(APlayerSample&&); \
	NO_API APlayerSample(const APlayerSample&); \
public:


#define EndlessRunner_Source_EndlessRunner_PlayerSample_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerSample(APlayerSample&&); \
	NO_API APlayerSample(const APlayerSample&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerSample); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerSample); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerSample)


#define EndlessRunner_Source_EndlessRunner_PlayerSample_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StaticMesh() { return STRUCT_OFFSET(APlayerSample, StaticMesh); } \
	FORCEINLINE static uint32 __PPO__Movement() { return STRUCT_OFFSET(APlayerSample, Movement); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(APlayerSample, Camera); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(APlayerSample, SpringArm); }


#define EndlessRunner_Source_EndlessRunner_PlayerSample_h_9_PROLOG
#define EndlessRunner_Source_EndlessRunner_PlayerSample_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EndlessRunner_Source_EndlessRunner_PlayerSample_h_12_PRIVATE_PROPERTY_OFFSET \
	EndlessRunner_Source_EndlessRunner_PlayerSample_h_12_SPARSE_DATA \
	EndlessRunner_Source_EndlessRunner_PlayerSample_h_12_RPC_WRAPPERS \
	EndlessRunner_Source_EndlessRunner_PlayerSample_h_12_INCLASS \
	EndlessRunner_Source_EndlessRunner_PlayerSample_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EndlessRunner_Source_EndlessRunner_PlayerSample_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EndlessRunner_Source_EndlessRunner_PlayerSample_h_12_PRIVATE_PROPERTY_OFFSET \
	EndlessRunner_Source_EndlessRunner_PlayerSample_h_12_SPARSE_DATA \
	EndlessRunner_Source_EndlessRunner_PlayerSample_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	EndlessRunner_Source_EndlessRunner_PlayerSample_h_12_INCLASS_NO_PURE_DECLS \
	EndlessRunner_Source_EndlessRunner_PlayerSample_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENDLESSRUNNER_API UClass* StaticClass<class APlayerSample>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EndlessRunner_Source_EndlessRunner_PlayerSample_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
