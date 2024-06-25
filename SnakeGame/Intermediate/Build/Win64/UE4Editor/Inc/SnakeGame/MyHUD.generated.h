// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKEGAME_MyHUD_generated_h
#error "MyHUD.generated.h already included, missing '#pragma once' in MyHUD.h"
#endif
#define SNAKEGAME_MyHUD_generated_h

#define SnakeGame_Source_SnakeGame_MyHUD_h_15_RPC_WRAPPERS
#define SnakeGame_Source_SnakeGame_MyHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define SnakeGame_Source_SnakeGame_MyHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyHUD(); \
	friend struct Z_Construct_UClass_AMyHUD_Statics; \
public: \
	DECLARE_CLASS(AMyHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(AMyHUD)


#define SnakeGame_Source_SnakeGame_MyHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyHUD(); \
	friend struct Z_Construct_UClass_AMyHUD_Statics; \
public: \
	DECLARE_CLASS(AMyHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(AMyHUD)


#define SnakeGame_Source_SnakeGame_MyHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyHUD(AMyHUD&&); \
	NO_API AMyHUD(const AMyHUD&); \
public:


#define SnakeGame_Source_SnakeGame_MyHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyHUD(AMyHUD&&); \
	NO_API AMyHUD(const AMyHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyHUD)


#define SnakeGame_Source_SnakeGame_MyHUD_h_15_PRIVATE_PROPERTY_OFFSET
#define SnakeGame_Source_SnakeGame_MyHUD_h_12_PROLOG
#define SnakeGame_Source_SnakeGame_MyHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame_Source_SnakeGame_MyHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	SnakeGame_Source_SnakeGame_MyHUD_h_15_RPC_WRAPPERS \
	SnakeGame_Source_SnakeGame_MyHUD_h_15_INCLASS \
	SnakeGame_Source_SnakeGame_MyHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeGame_Source_SnakeGame_MyHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame_Source_SnakeGame_MyHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	SnakeGame_Source_SnakeGame_MyHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SnakeGame_Source_SnakeGame_MyHUD_h_15_INCLASS_NO_PURE_DECLS \
	SnakeGame_Source_SnakeGame_MyHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class AMyHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SnakeGame_Source_SnakeGame_MyHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS