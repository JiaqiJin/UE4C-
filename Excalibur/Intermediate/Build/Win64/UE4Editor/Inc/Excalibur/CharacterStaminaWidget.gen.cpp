// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/UI/Component/CharacterStaminaWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterStaminaWidget() {}
// Cross Module References
	EXCALIBUR_API UClass* Z_Construct_UClass_UCharacterStaminaWidget_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UCharacterStaminaWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
// End Cross Module References
	void UCharacterStaminaWidget::StaticRegisterNativesUCharacterStaminaWidget()
	{
	}
	UClass* Z_Construct_UClass_UCharacterStaminaWidget_NoRegister()
	{
		return UCharacterStaminaWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterStaminaWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterStaminaWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterStaminaWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Component/CharacterStaminaWidget.h" },
		{ "ModuleRelativePath", "UI/Component/CharacterStaminaWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterStaminaWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterStaminaWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterStaminaWidget_Statics::ClassParams = {
		&UCharacterStaminaWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterStaminaWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStaminaWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterStaminaWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterStaminaWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterStaminaWidget, 2230962156);
	template<> EXCALIBUR_API UClass* StaticClass<UCharacterStaminaWidget>()
	{
		return UCharacterStaminaWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterStaminaWidget(Z_Construct_UClass_UCharacterStaminaWidget, &UCharacterStaminaWidget::StaticClass, TEXT("/Script/Excalibur"), TEXT("UCharacterStaminaWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterStaminaWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
