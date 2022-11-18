// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/CreadorCapsula.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreadorCapsula() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_ACreadorCapsula_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_ACreadorCapsula();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
// End Cross Module References
	void ACreadorCapsula::StaticRegisterNativesACreadorCapsula()
	{
	}
	UClass* Z_Construct_UClass_ACreadorCapsula_NoRegister()
	{
		return ACreadorCapsula::StaticClass();
	}
	struct Z_Construct_UClass_ACreadorCapsula_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACreadorCapsula_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreadorCapsula_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CreadorCapsula.h" },
		{ "ModuleRelativePath", "CreadorCapsula.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACreadorCapsula_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACreadorCapsula>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACreadorCapsula_Statics::ClassParams = {
		&ACreadorCapsula::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACreadorCapsula_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACreadorCapsula_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACreadorCapsula()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACreadorCapsula_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACreadorCapsula, 3173487781);
	template<> ARCANOID_API UClass* StaticClass<ACreadorCapsula>()
	{
		return ACreadorCapsula::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACreadorCapsula(Z_Construct_UClass_ACreadorCapsula, &ACreadorCapsula::StaticClass, TEXT("/Script/Arcanoid"), TEXT("ACreadorCapsula"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACreadorCapsula);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
