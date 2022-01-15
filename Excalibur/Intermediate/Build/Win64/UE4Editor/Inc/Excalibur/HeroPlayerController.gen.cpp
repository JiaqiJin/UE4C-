// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/Character/HeroPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroPlayerController() {}
// Cross Module References
	EXCALIBUR_API UClass* Z_Construct_UClass_AHeroPlayerController_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_AHeroPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
// End Cross Module References
	void AHeroPlayerController::StaticRegisterNativesAHeroPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AHeroPlayerController_NoRegister()
	{
		return AHeroPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AHeroPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHeroPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Character/HeroPlayerController.h" },
		{ "ModuleRelativePath", "Character/HeroPlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHeroPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeroPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHeroPlayerController_Statics::ClassParams = {
		&AHeroPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHeroPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHeroPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHeroPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHeroPlayerController, 2009112276);
	template<> EXCALIBUR_API UClass* StaticClass<AHeroPlayerController>()
	{
		return AHeroPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHeroPlayerController(Z_Construct_UClass_AHeroPlayerController, &AHeroPlayerController::StaticClass, TEXT("/Script/Excalibur"), TEXT("AHeroPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeroPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
