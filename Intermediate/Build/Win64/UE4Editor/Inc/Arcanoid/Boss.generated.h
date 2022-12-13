// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCANOID_Boss_generated_h
#error "Boss.generated.h already included, missing '#pragma once' in Boss.h"
#endif
#define ARCANOID_Boss_generated_h

#define SIS457_LAB07_main_Source_Arcanoid_Boss_h_14_SPARSE_DATA
#define SIS457_LAB07_main_Source_Arcanoid_Boss_h_14_RPC_WRAPPERS
#define SIS457_LAB07_main_Source_Arcanoid_Boss_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define SIS457_LAB07_main_Source_Arcanoid_Boss_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoss(); \
	friend struct Z_Construct_UClass_ABoss_Statics; \
public: \
	DECLARE_CLASS(ABoss, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcanoid"), NO_API) \
	DECLARE_SERIALIZER(ABoss) \
	virtual UObject* _getUObject() const override { return const_cast<ABoss*>(this); }


#define SIS457_LAB07_main_Source_Arcanoid_Boss_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABoss(); \
	friend struct Z_Construct_UClass_ABoss_Statics; \
public: \
	DECLARE_CLASS(ABoss, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcanoid"), NO_API) \
	DECLARE_SERIALIZER(ABoss) \
	virtual UObject* _getUObject() const override { return const_cast<ABoss*>(this); }


#define SIS457_LAB07_main_Source_Arcanoid_Boss_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoss(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoss) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoss); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoss); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoss(ABoss&&); \
	NO_API ABoss(const ABoss&); \
public:


#define SIS457_LAB07_main_Source_Arcanoid_Boss_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoss(ABoss&&); \
	NO_API ABoss(const ABoss&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoss); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoss); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoss)


#define SIS457_LAB07_main_Source_Arcanoid_Boss_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_Boss() { return STRUCT_OFFSET(ABoss, SM_Boss); }


#define SIS457_LAB07_main_Source_Arcanoid_Boss_h_11_PROLOG
#define SIS457_LAB07_main_Source_Arcanoid_Boss_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SIS457_LAB07_main_Source_Arcanoid_Boss_h_14_PRIVATE_PROPERTY_OFFSET \
	SIS457_LAB07_main_Source_Arcanoid_Boss_h_14_SPARSE_DATA \
	SIS457_LAB07_main_Source_Arcanoid_Boss_h_14_RPC_WRAPPERS \
	SIS457_LAB07_main_Source_Arcanoid_Boss_h_14_INCLASS \
	SIS457_LAB07_main_Source_Arcanoid_Boss_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SIS457_LAB07_main_Source_Arcanoid_Boss_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SIS457_LAB07_main_Source_Arcanoid_Boss_h_14_PRIVATE_PROPERTY_OFFSET \
	SIS457_LAB07_main_Source_Arcanoid_Boss_h_14_SPARSE_DATA \
	SIS457_LAB07_main_Source_Arcanoid_Boss_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SIS457_LAB07_main_Source_Arcanoid_Boss_h_14_INCLASS_NO_PURE_DECLS \
	SIS457_LAB07_main_Source_Arcanoid_Boss_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCANOID_API UClass* StaticClass<class ABoss>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SIS457_LAB07_main_Source_Arcanoid_Boss_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
