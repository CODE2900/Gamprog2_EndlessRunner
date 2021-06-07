// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunner/Run_Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRun_Character() {}
// Cross Module References
	ENDLESSRUNNER_API UFunction* Z_Construct_UDelegateFunction_EndlessRunner_OnDeathSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_EndlessRunner();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_ARun_Character_NoRegister();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_ARun_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EndlessRunner_OnDeathSignature__DelegateSignature_Statics
	{
		struct _Script_EndlessRunner_eventOnDeathSignature_Parms
		{
			ARun_Character* RunCharacter;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RunCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_EndlessRunner_OnDeathSignature__DelegateSignature_Statics::NewProp_RunCharacter = { "RunCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_EndlessRunner_eventOnDeathSignature_Parms, RunCharacter), Z_Construct_UClass_ARun_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EndlessRunner_OnDeathSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EndlessRunner_OnDeathSignature__DelegateSignature_Statics::NewProp_RunCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EndlessRunner_OnDeathSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Run_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EndlessRunner_OnDeathSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EndlessRunner, nullptr, "OnDeathSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_EndlessRunner_eventOnDeathSignature_Parms), Z_Construct_UDelegateFunction_EndlessRunner_OnDeathSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EndlessRunner_OnDeathSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EndlessRunner_OnDeathSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EndlessRunner_OnDeathSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EndlessRunner_OnDeathSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_EndlessRunner_OnDeathSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ARun_Character::execgetIsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->getIsDead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARun_Character::execDie)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Die();
		P_NATIVE_END;
	}
	static FName NAME_ARun_Character_deathEffects = FName(TEXT("deathEffects"));
	void ARun_Character::deathEffects(ARun_Character* RunCharacter)
	{
		Run_Character_eventdeathEffects_Parms Parms;
		Parms.RunCharacter=RunCharacter;
		ProcessEvent(FindFunctionChecked(NAME_ARun_Character_deathEffects),&Parms);
	}
	void ARun_Character::StaticRegisterNativesARun_Character()
	{
		UClass* Class = ARun_Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Die", &ARun_Character::execDie },
			{ "getIsDead", &ARun_Character::execgetIsDead },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARun_Character_deathEffects_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RunCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARun_Character_deathEffects_Statics::NewProp_RunCharacter = { "RunCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Run_Character_eventdeathEffects_Parms, RunCharacter), Z_Construct_UClass_ARun_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARun_Character_deathEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARun_Character_deathEffects_Statics::NewProp_RunCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARun_Character_deathEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Run_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARun_Character_deathEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARun_Character, nullptr, "deathEffects", nullptr, nullptr, sizeof(Run_Character_eventdeathEffects_Parms), Z_Construct_UFunction_ARun_Character_deathEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARun_Character_deathEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARun_Character_deathEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARun_Character_deathEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARun_Character_deathEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARun_Character_deathEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARun_Character_Die_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARun_Character_Die_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Run_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARun_Character_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARun_Character, nullptr, "Die", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARun_Character_Die_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARun_Character_Die_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARun_Character_Die()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARun_Character_Die_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARun_Character_getIsDead_Statics
	{
		struct Run_Character_eventgetIsDead_Parms
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
	void Z_Construct_UFunction_ARun_Character_getIsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Run_Character_eventgetIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARun_Character_getIsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Run_Character_eventgetIsDead_Parms), &Z_Construct_UFunction_ARun_Character_getIsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARun_Character_getIsDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARun_Character_getIsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARun_Character_getIsDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Run_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARun_Character_getIsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARun_Character, nullptr, "getIsDead", nullptr, nullptr, sizeof(Run_Character_eventgetIsDead_Parms), Z_Construct_UFunction_ARun_Character_getIsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARun_Character_getIsDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARun_Character_getIsDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARun_Character_getIsDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARun_Character_getIsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARun_Character_getIsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARun_Character_NoRegister()
	{
		return ARun_Character::StaticClass();
	}
	struct Z_Construct_UClass_ARun_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDeath_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDead_MetaData[];
#endif
		static void NewProp_isDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDead;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARun_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARun_Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARun_Character_deathEffects, "deathEffects" }, // 772989722
		{ &Z_Construct_UFunction_ARun_Character_Die, "Die" }, // 1202352196
		{ &Z_Construct_UFunction_ARun_Character_getIsDead, "getIsDead" }, // 108031830
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARun_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Run_Character.h" },
		{ "ModuleRelativePath", "Run_Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARun_Character_Statics::NewProp_OnDeath_MetaData[] = {
		{ "ModuleRelativePath", "Run_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARun_Character_Statics::NewProp_OnDeath = { "OnDeath", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARun_Character, OnDeath), Z_Construct_UDelegateFunction_EndlessRunner_OnDeathSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ARun_Character_Statics::NewProp_OnDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARun_Character_Statics::NewProp_OnDeath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARun_Character_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Run_Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Run_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARun_Character_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARun_Character, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARun_Character_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARun_Character_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARun_Character_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Run_Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Run_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARun_Character_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARun_Character, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARun_Character_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARun_Character_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARun_Character_Statics::NewProp_isDead_MetaData[] = {
		{ "Category", "Run_Character" },
		{ "ModuleRelativePath", "Run_Character.h" },
	};
#endif
	void Z_Construct_UClass_ARun_Character_Statics::NewProp_isDead_SetBit(void* Obj)
	{
		((ARun_Character*)Obj)->isDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARun_Character_Statics::NewProp_isDead = { "isDead", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARun_Character), &Z_Construct_UClass_ARun_Character_Statics::NewProp_isDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARun_Character_Statics::NewProp_isDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARun_Character_Statics::NewProp_isDead_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARun_Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARun_Character_Statics::NewProp_OnDeath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARun_Character_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARun_Character_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARun_Character_Statics::NewProp_isDead,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARun_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARun_Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARun_Character_Statics::ClassParams = {
		&ARun_Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARun_Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARun_Character_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARun_Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARun_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARun_Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARun_Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARun_Character, 1382769979);
	template<> ENDLESSRUNNER_API UClass* StaticClass<ARun_Character>()
	{
		return ARun_Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARun_Character(Z_Construct_UClass_ARun_Character, &ARun_Character::StaticClass, TEXT("/Script/EndlessRunner"), TEXT("ARun_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARun_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
