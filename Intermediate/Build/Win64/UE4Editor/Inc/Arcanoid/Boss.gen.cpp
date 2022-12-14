// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/Boss.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoss() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_ABoss_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_ABoss();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_UEquipo_NoRegister();
// End Cross Module References
	void ABoss::StaticRegisterNativesABoss()
	{
	}
	UClass* Z_Construct_UClass_ABoss_NoRegister()
	{
		return ABoss::StaticClass();
	}
	struct Z_Construct_UClass_ABoss_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SM_Boss_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SM_Boss;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoss_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//class UFloatingActorMovement;\n" },
		{ "IncludePath", "Boss.h" },
		{ "ModuleRelativePath", "Boss.h" },
		{ "ToolTip", "class UFloatingActorMovement;" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Statics::NewProp_SM_Boss_MetaData[] = {
		{ "Category", "Boss" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Boss.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoss_Statics::NewProp_SM_Boss = { "SM_Boss", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoss, SM_Boss), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoss_Statics::NewProp_SM_Boss_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::NewProp_SM_Boss_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoss_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Statics::NewProp_SM_Boss,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABoss_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEquipo_NoRegister, (int32)VTABLE_OFFSET(ABoss, IEquipo), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoss_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoss>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoss_Statics::ClassParams = {
		&ABoss::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABoss_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoss_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoss()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoss_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoss, 554232151);
	template<> ARCANOID_API UClass* StaticClass<ABoss>()
	{
		return ABoss::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoss(Z_Construct_UClass_ABoss, &ABoss::StaticClass, TEXT("/Script/Arcanoid"), TEXT("ABoss"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoss);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
