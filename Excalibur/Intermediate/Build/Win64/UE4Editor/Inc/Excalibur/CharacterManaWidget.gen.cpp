// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/UI/Component/CharacterManaWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterManaWidget() {}
// Cross Module References
	EXCALIBUR_API UClass* Z_Construct_UClass_UCharacterManaWidget_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UCharacterManaWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
// End Cross Module References
	void UCharacterManaWidget::StaticRegisterNativesUCharacterManaWidget()
	{
	}
	UClass* Z_Construct_UClass_UCharacterManaWidget_NoRegister()
	{
		return UCharacterManaWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterManaWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterManaWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterManaWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Component/CharacterManaWidget.h" },
		{ "ModuleRelativePath", "UI/Component/CharacterManaWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterManaWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterManaWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterManaWidget_Statics::ClassParams = {
		&UCharacterManaWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCharacterManaWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterManaWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterManaWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterManaWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterManaWidget, 1794253787);
	template<> EXCALIBUR_API UClass* StaticClass<UCharacterManaWidget>()
	{
		return UCharacterManaWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterManaWidget(Z_Construct_UClass_UCharacterManaWidget, &UCharacterManaWidget::StaticClass, TEXT("/Script/Excalibur"), TEXT("UCharacterManaWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterManaWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
