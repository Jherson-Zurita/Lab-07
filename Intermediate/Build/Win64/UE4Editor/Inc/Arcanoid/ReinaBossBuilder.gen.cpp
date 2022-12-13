// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/ReinaBossBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReinaBossBuilder() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_AReinaBossBuilder_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_AReinaBossBuilder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
	ARCANOID_API UClass* Z_Construct_UClass_ABoss_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_UConstructor_NoRegister();
// End Cross Module References
	void AReinaBossBuilder::StaticRegisterNativesAReinaBossBuilder()
	{
	}
	UClass* Z_Construct_UClass_AReinaBossBuilder_NoRegister()
	{
		return AReinaBossBuilder::StaticClass();
	}
	struct Z_Construct_UClass_AReinaBossBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boss_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Boss;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReinaBossBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReinaBossBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ReinaBossBuilder.h" },
		{ "ModuleRelativePath", "ReinaBossBuilder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReinaBossBuilder_Statics::NewProp_Boss_MetaData[] = {
		{ "Category", "Reina Boss" },
		{ "ModuleRelativePath", "ReinaBossBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReinaBossBuilder_Statics::NewProp_Boss = { "Boss", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReinaBossBuilder, Boss), Z_Construct_UClass_ABoss_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReinaBossBuilder_Statics::NewProp_Boss_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReinaBossBuilder_Statics::NewProp_Boss_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AReinaBossBuilder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReinaBossBuilder_Statics::NewProp_Boss,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AReinaBossBuilder_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UConstructor_NoRegister, (int32)VTABLE_OFFSET(AReinaBossBuilder, IConstructor), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReinaBossBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReinaBossBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AReinaBossBuilder_Statics::ClassParams = {
		&AReinaBossBuilder::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AReinaBossBuilder_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AReinaBossBuilder_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AReinaBossBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReinaBossBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReinaBossBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AReinaBossBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AReinaBossBuilder, 1746125388);
	template<> ARCANOID_API UClass* StaticClass<AReinaBossBuilder>()
	{
		return AReinaBossBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AReinaBossBuilder(Z_Construct_UClass_AReinaBossBuilder, &AReinaBossBuilder::StaticClass, TEXT("/Script/Arcanoid"), TEXT("AReinaBossBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReinaBossBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
