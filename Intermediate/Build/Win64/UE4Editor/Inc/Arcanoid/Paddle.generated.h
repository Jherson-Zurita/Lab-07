// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCANOID_Paddle_generated_h
#error "Paddle.generated.h already included, missing '#pragma once' in Paddle.h"
#endif
#define ARCANOID_Paddle_generated_h

#define SIS457_LAB07_main_Source_Arcanoid_Paddle_h_13_SPARSE_DATA
#define SIS457_LAB07_main_Source_Arcanoid_Paddle_h_13_RPC_WRAPPERS
#define SIS457_LAB07_main_Source_Arcanoid_Paddle_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define SIS457_LAB07_main_Source_Arcanoid_Paddle_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPaddle(); \
	friend struct Z_Construct_UClass_APaddle_Statics; \
public: \
	DECLARE_CLASS(APaddle, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcanoid"), NO_API) \
	DECLARE_SERIALIZER(APaddle)


#define SIS457_LAB07_main_Source_Arcanoid_Paddle_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPaddle(); \
	friend struct Z_Construct_UClass_APaddle_Statics; \
public: \
	DECLARE_CLASS(APaddle, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcanoid"), NO_API) \
	DECLARE_SERIALIZER(APaddle)


#define SIS457_LAB07_main_Source_Arcanoid_Paddle_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaddle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaddle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddle(APaddle&&); \
	NO_API APaddle(const APaddle&); \
public:


#define SIS457_LAB07_main_Source_Arcanoid_Paddle_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddle(APaddle&&); \
	NO_API APaddle(const APaddle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APaddle)


#define SIS457_LAB07_main_Source_Arcanoid_Paddle_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_Paddle() { return STRUCT_OFFSET(APaddle, SM_Paddle); } \
	FORCEINLINE static uint32 __PPO__FloatingMovement() { return STRUCT_OFFSET(APaddle, FloatingMovement); }


#define SIS457_LAB07_main_Source_Arcanoid_Paddle_h_10_PROLOG
#define SIS457_LAB07_main_Source_Arcanoid_Paddle_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SIS457_LAB07_main_Source_Arcanoid_Paddle_h_13_PRIVATE_PROPERTY_OFFSET \
	SIS457_LAB07_main_Source_Arcanoid_Paddle_h_13_SPARSE_DATA \
	SIS457_LAB07_main_Source_Arcanoid_Paddle_h_13_RPC_WRAPPERS \
	SIS457_LAB07_main_Source_Arcanoid_Paddle_h_13_INCLASS \
	SIS457_LAB07_main_Source_Arcanoid_Paddle_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SIS457_LAB07_main_Source_Arcanoid_Paddle_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SIS457_LAB07_main_Source_Arcanoid_Paddle_h_13_PRIVATE_PROPERTY_OFFSET \
	SIS457_LAB07_main_Source_Arcanoid_Paddle_h_13_SPARSE_DATA \
	SIS457_LAB07_main_Source_Arcanoid_Paddle_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SIS457_LAB07_main_Source_Arcanoid_Paddle_h_13_INCLASS_NO_PURE_DECLS \
	SIS457_LAB07_main_Source_Arcanoid_Paddle_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCANOID_API UClass* StaticClass<class APaddle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SIS457_LAB07_main_Source_Arcanoid_Paddle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
