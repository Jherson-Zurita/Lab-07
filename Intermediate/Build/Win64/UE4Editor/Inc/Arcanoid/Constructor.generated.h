// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCANOID_Constructor_generated_h
#error "Constructor.generated.h already included, missing '#pragma once' in Constructor.h"
#endif
#define ARCANOID_Constructor_generated_h

#define SIS457_LAB07_main_Source_Arcanoid_Constructor_h_13_SPARSE_DATA
#define SIS457_LAB07_main_Source_Arcanoid_Constructor_h_13_RPC_WRAPPERS
#define SIS457_LAB07_main_Source_Arcanoid_Constructor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define SIS457_LAB07_main_Source_Arcanoid_Constructor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARCANOID_API UConstructor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConstructor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARCANOID_API, UConstructor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstructor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARCANOID_API UConstructor(UConstructor&&); \
	ARCANOID_API UConstructor(const UConstructor&); \
public:


#define SIS457_LAB07_main_Source_Arcanoid_Constructor_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARCANOID_API UConstructor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARCANOID_API UConstructor(UConstructor&&); \
	ARCANOID_API UConstructor(const UConstructor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARCANOID_API, UConstructor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstructor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConstructor)


#define SIS457_LAB07_main_Source_Arcanoid_Constructor_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUConstructor(); \
	friend struct Z_Construct_UClass_UConstructor_Statics; \
public: \
	DECLARE_CLASS(UConstructor, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Arcanoid"), ARCANOID_API) \
	DECLARE_SERIALIZER(UConstructor)


#define SIS457_LAB07_main_Source_Arcanoid_Constructor_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SIS457_LAB07_main_Source_Arcanoid_Constructor_h_13_GENERATED_UINTERFACE_BODY() \
	SIS457_LAB07_main_Source_Arcanoid_Constructor_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SIS457_LAB07_main_Source_Arcanoid_Constructor_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SIS457_LAB07_main_Source_Arcanoid_Constructor_h_13_GENERATED_UINTERFACE_BODY() \
	SIS457_LAB07_main_Source_Arcanoid_Constructor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SIS457_LAB07_main_Source_Arcanoid_Constructor_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IConstructor() {} \
public: \
	typedef UConstructor UClassType; \
	typedef IConstructor ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SIS457_LAB07_main_Source_Arcanoid_Constructor_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IConstructor() {} \
public: \
	typedef UConstructor UClassType; \
	typedef IConstructor ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SIS457_LAB07_main_Source_Arcanoid_Constructor_h_10_PROLOG
#define SIS457_LAB07_main_Source_Arcanoid_Constructor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SIS457_LAB07_main_Source_Arcanoid_Constructor_h_13_SPARSE_DATA \
	SIS457_LAB07_main_Source_Arcanoid_Constructor_h_13_RPC_WRAPPERS \
	SIS457_LAB07_main_Source_Arcanoid_Constructor_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SIS457_LAB07_main_Source_Arcanoid_Constructor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SIS457_LAB07_main_Source_Arcanoid_Constructor_h_13_SPARSE_DATA \
	SIS457_LAB07_main_Source_Arcanoid_Constructor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SIS457_LAB07_main_Source_Arcanoid_Constructor_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCANOID_API UClass* StaticClass<class UConstructor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SIS457_LAB07_main_Source_Arcanoid_Constructor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
