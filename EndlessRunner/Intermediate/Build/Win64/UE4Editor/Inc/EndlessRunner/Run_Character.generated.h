// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ARun_Character;
#ifdef ENDLESSRUNNER_Run_Character_generated_h
#error "Run_Character.generated.h already included, missing '#pragma once' in Run_Character.h"
#endif
#define ENDLESSRUNNER_Run_Character_generated_h

#define EndlessRunner_Source_EndlessRunner_Run_Character_h_9_DELEGATE \
struct _Script_EndlessRunner_eventOnDeathSignature_Parms \
{ \
	ARun_Character* RunCharacter; \
}; \
static inline void FOnDeathSignature_DelegateWrapper(const FMulticastScriptDelegate& OnDeathSignature, ARun_Character* RunCharacter) \
{ \
	_Script_EndlessRunner_eventOnDeathSignature_Parms Parms; \
	Parms.RunCharacter=RunCharacter; \
	OnDeathSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define EndlessRunner_Source_EndlessRunner_Run_Character_h_16_SPARSE_DATA
#define EndlessRunner_Source_EndlessRunner_Run_Character_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetIsDead); \
	DECLARE_FUNCTION(execDie);


#define EndlessRunner_Source_EndlessRunner_Run_Character_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetIsDead); \
	DECLARE_FUNCTION(execDie);


#define EndlessRunner_Source_EndlessRunner_Run_Character_h_16_EVENT_PARMS \
	struct Run_Character_eventdeathEffects_Parms \
	{ \
		ARun_Character* RunCharacter; \
	};


#define EndlessRunner_Source_EndlessRunner_Run_Character_h_16_CALLBACK_WRAPPERS
#define EndlessRunner_Source_EndlessRunner_Run_Character_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARun_Character(); \
	friend struct Z_Construct_UClass_ARun_Character_Statics; \
public: \
	DECLARE_CLASS(ARun_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EndlessRunner"), NO_API) \
	DECLARE_SERIALIZER(ARun_Character)


#define EndlessRunner_Source_EndlessRunner_Run_Character_h_16_INCLASS \
private: \
	static void StaticRegisterNativesARun_Character(); \
	friend struct Z_Construct_UClass_ARun_Character_Statics; \
public: \
	DECLARE_CLASS(ARun_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EndlessRunner"), NO_API) \
	DECLARE_SERIALIZER(ARun_Character)


#define EndlessRunner_Source_EndlessRunner_Run_Character_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARun_Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARun_Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARun_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARun_Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARun_Character(ARun_Character&&); \
	NO_API ARun_Character(const ARun_Character&); \
public:


#define EndlessRunner_Source_EndlessRunner_Run_Character_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARun_Character(ARun_Character&&); \
	NO_API ARun_Character(const ARun_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARun_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARun_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARun_Character)


#define EndlessRunner_Source_EndlessRunner_Run_Character_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ARun_Character, Camera); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ARun_Character, SpringArm); } \
	FORCEINLINE static uint32 __PPO__isDead() { return STRUCT_OFFSET(ARun_Character, isDead); }


#define EndlessRunner_Source_EndlessRunner_Run_Character_h_13_PROLOG \
	EndlessRunner_Source_EndlessRunner_Run_Character_h_16_EVENT_PARMS


#define EndlessRunner_Source_EndlessRunner_Run_Character_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EndlessRunner_Source_EndlessRunner_Run_Character_h_16_PRIVATE_PROPERTY_OFFSET \
	EndlessRunner_Source_EndlessRunner_Run_Character_h_16_SPARSE_DATA \
	EndlessRunner_Source_EndlessRunner_Run_Character_h_16_RPC_WRAPPERS \
	EndlessRunner_Source_EndlessRunner_Run_Character_h_16_CALLBACK_WRAPPERS \
	EndlessRunner_Source_EndlessRunner_Run_Character_h_16_INCLASS \
	EndlessRunner_Source_EndlessRunner_Run_Character_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EndlessRunner_Source_EndlessRunner_Run_Character_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EndlessRunner_Source_EndlessRunner_Run_Character_h_16_PRIVATE_PROPERTY_OFFSET \
	EndlessRunner_Source_EndlessRunner_Run_Character_h_16_SPARSE_DATA \
	EndlessRunner_Source_EndlessRunner_Run_Character_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	EndlessRunner_Source_EndlessRunner_Run_Character_h_16_CALLBACK_WRAPPERS \
	EndlessRunner_Source_EndlessRunner_Run_Character_h_16_INCLASS_NO_PURE_DECLS \
	EndlessRunner_Source_EndlessRunner_Run_Character_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENDLESSRUNNER_API UClass* StaticClass<class ARun_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EndlessRunner_Source_EndlessRunner_Run_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
