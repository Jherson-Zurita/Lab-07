// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/Equipo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipo() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_UEquipo_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_UEquipo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
// End Cross Module References
	void UEquipo::StaticRegisterNativesUEquipo()
	{
	}
	UClass* Z_Construct_UClass_UEquipo_NoRegister()
	{
		return UEquipo::StaticClass();
	}
	struct Z_Construct_UClass_UEquipo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipo_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEquipo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEquipo_Statics::ClassParams = {
		&UEquipo::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEquipo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEquipo, 613612161);
	template<> ARCANOID_API UClass* StaticClass<UEquipo>()
	{
		return UEquipo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEquipo(Z_Construct_UClass_UEquipo, &UEquipo::StaticClass, TEXT("/Script/Arcanoid"), TEXT("UEquipo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
