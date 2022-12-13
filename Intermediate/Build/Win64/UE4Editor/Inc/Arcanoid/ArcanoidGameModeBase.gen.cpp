// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/ArcanoidGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcanoidGameModeBase() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_AArcanoidGameModeBase_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_AArcanoidGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
	ARCANOID_API UClass* Z_Construct_UClass_AReinaBossBuilder_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_ADirector_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AArcanoidGameModeBase::execDestruir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Destruir();
		P_NATIVE_END;
	}
	void AArcanoidGameModeBase::StaticRegisterNativesAArcanoidGameModeBase()
	{
		UClass* Class = AArcanoidGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Destruir", &AArcanoidGameModeBase::execDestruir },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AArcanoidGameModeBase_Destruir_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArcanoidGameModeBase_Destruir_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ArcanoidGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArcanoidGameModeBase_Destruir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArcanoidGameModeBase, nullptr, "Destruir", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArcanoidGameModeBase_Destruir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AArcanoidGameModeBase_Destruir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArcanoidGameModeBase_Destruir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArcanoidGameModeBase_Destruir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AArcanoidGameModeBase_NoRegister()
	{
		return AArcanoidGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AArcanoidGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReinaBuilder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReinaBuilder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Engineer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Engineer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReinaBuilder1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReinaBuilder1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Engineer1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Engineer1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArcanoidGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AArcanoidGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AArcanoidGameModeBase_Destruir, "Destruir" }, // 1129479163
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcanoidGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ArcanoidGameModeBase.h" },
		{ "ModuleRelativePath", "ArcanoidGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcanoidGameModeBase_Statics::NewProp_ReinaBuilder_MetaData[] = {
		{ "Category", "Main" },
		{ "Comment", "//The Builder Actor\n" },
		{ "ModuleRelativePath", "ArcanoidGameModeBase.h" },
		{ "ToolTip", "The Builder Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArcanoidGameModeBase_Statics::NewProp_ReinaBuilder = { "ReinaBuilder", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcanoidGameModeBase, ReinaBuilder), Z_Construct_UClass_AReinaBossBuilder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArcanoidGameModeBase_Statics::NewProp_ReinaBuilder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcanoidGameModeBase_Statics::NewProp_ReinaBuilder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcanoidGameModeBase_Statics::NewProp_Engineer_MetaData[] = {
		{ "Category", "Main" },
		{ "Comment", "//The Engineer Actor\n" },
		{ "ModuleRelativePath", "ArcanoidGameModeBase.h" },
		{ "ToolTip", "The Engineer Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArcanoidGameModeBase_Statics::NewProp_Engineer = { "Engineer", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcanoidGameModeBase, Engineer), Z_Construct_UClass_ADirector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArcanoidGameModeBase_Statics::NewProp_Engineer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcanoidGameModeBase_Statics::NewProp_Engineer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcanoidGameModeBase_Statics::NewProp_ReinaBuilder1_MetaData[] = {
		{ "Category", "Main" },
		{ "ModuleRelativePath", "ArcanoidGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArcanoidGameModeBase_Statics::NewProp_ReinaBuilder1 = { "ReinaBuilder1", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcanoidGameModeBase, ReinaBuilder1), Z_Construct_UClass_AReinaBossBuilder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArcanoidGameModeBase_Statics::NewProp_ReinaBuilder1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcanoidGameModeBase_Statics::NewProp_ReinaBuilder1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcanoidGameModeBase_Statics::NewProp_Engineer1_MetaData[] = {
		{ "Category", "Main" },
		{ "Comment", "//The Engineer Actor\n" },
		{ "ModuleRelativePath", "ArcanoidGameModeBase.h" },
		{ "ToolTip", "The Engineer Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArcanoidGameModeBase_Statics::NewProp_Engineer1 = { "Engineer1", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcanoidGameModeBase, Engineer1), Z_Construct_UClass_ADirector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArcanoidGameModeBase_Statics::NewProp_Engineer1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcanoidGameModeBase_Statics::NewProp_Engineer1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArcanoidGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcanoidGameModeBase_Statics::NewProp_ReinaBuilder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcanoidGameModeBase_Statics::NewProp_Engineer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcanoidGameModeBase_Statics::NewProp_ReinaBuilder1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcanoidGameModeBase_Statics::NewProp_Engineer1,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArcanoidGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArcanoidGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArcanoidGameModeBase_Statics::ClassParams = {
		&AArcanoidGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AArcanoidGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AArcanoidGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AArcanoidGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArcanoidGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArcanoidGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArcanoidGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArcanoidGameModeBase, 196038280);
	template<> ARCANOID_API UClass* StaticClass<AArcanoidGameModeBase>()
	{
		return AArcanoidGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArcanoidGameModeBase(Z_Construct_UClass_AArcanoidGameModeBase, &AArcanoidGameModeBase::StaticClass, TEXT("/Script/Arcanoid"), TEXT("AArcanoidGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArcanoidGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
