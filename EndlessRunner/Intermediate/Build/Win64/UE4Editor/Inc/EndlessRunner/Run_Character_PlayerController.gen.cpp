// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunner/Run_Character_PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRun_Character_PlayerController() {}
// Cross Module References
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_ARun_Character_PlayerController_NoRegister();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_ARun_Character_PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_EndlessRunner();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_ARun_Character_NoRegister();
// End Cross Module References
	void ARun_Character_PlayerController::StaticRegisterNativesARun_Character_PlayerController()
	{
	}
	UClass* Z_Construct_UClass_ARun_Character_PlayerController_NoRegister()
	{
		return ARun_Character_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ARun_Character_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RunCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARun_Character_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARun_Character_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Run_Character_PlayerController.h" },
		{ "ModuleRelativePath", "Run_Character_PlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARun_Character_PlayerController_Statics::NewProp_RunCharacter_MetaData[] = {
		{ "Category", "Run_Character_PlayerController" },
		{ "ModuleRelativePath", "Run_Character_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARun_Character_PlayerController_Statics::NewProp_RunCharacter = { "RunCharacter", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARun_Character_PlayerController, RunCharacter), Z_Construct_UClass_ARun_Character_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARun_Character_PlayerController_Statics::NewProp_RunCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARun_Character_PlayerController_Statics::NewProp_RunCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARun_Character_PlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARun_Character_PlayerController_Statics::NewProp_RunCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARun_Character_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARun_Character_PlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARun_Character_PlayerController_Statics::ClassParams = {
		&ARun_Character_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARun_Character_PlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARun_Character_PlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARun_Character_PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARun_Character_PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARun_Character_PlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARun_Character_PlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARun_Character_PlayerController, 4079559983);
	template<> ENDLESSRUNNER_API UClass* StaticClass<ARun_Character_PlayerController>()
	{
		return ARun_Character_PlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARun_Character_PlayerController(Z_Construct_UClass_ARun_Character_PlayerController, &ARun_Character_PlayerController::StaticClass, TEXT("/Script/EndlessRunner"), TEXT("ARun_Character_PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARun_Character_PlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
