// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/CreadorCapsulaPoder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreadorCapsulaPoder() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_ACreadorCapsulaPoder_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_ACreadorCapsulaPoder();
	ARCANOID_API UClass* Z_Construct_UClass_ACreadorCapsula();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
// End Cross Module References
	void ACreadorCapsulaPoder::StaticRegisterNativesACreadorCapsulaPoder()
	{
	}
	UClass* Z_Construct_UClass_ACreadorCapsulaPoder_NoRegister()
	{
		return ACreadorCapsulaPoder::StaticClass();
	}
	struct Z_Construct_UClass_ACreadorCapsulaPoder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACreadorCapsulaPoder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACreadorCapsula,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreadorCapsulaPoder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CreadorCapsulaPoder.h" },
		{ "ModuleRelativePath", "CreadorCapsulaPoder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACreadorCapsulaPoder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACreadorCapsulaPoder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACreadorCapsulaPoder_Statics::ClassParams = {
		&ACreadorCapsulaPoder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACreadorCapsulaPoder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACreadorCapsulaPoder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACreadorCapsulaPoder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACreadorCapsulaPoder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACreadorCapsulaPoder, 2581625317);
	template<> ARCANOID_API UClass* StaticClass<ACreadorCapsulaPoder>()
	{
		return ACreadorCapsulaPoder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACreadorCapsulaPoder(Z_Construct_UClass_ACreadorCapsulaPoder, &ACreadorCapsulaPoder::StaticClass, TEXT("/Script/Arcanoid"), TEXT("ACreadorCapsulaPoder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACreadorCapsulaPoder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
