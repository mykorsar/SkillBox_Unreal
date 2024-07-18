// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/SnakeGameGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakeGameGameModeBase() {}
// Cross Module References
	SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeGameGameModeBase_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeGameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SnakeGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SNAKEGAME_API UClass* Z_Construct_UClass_AFood_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASnakeGameGameModeBase::execFoodGenerator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FoodGenerator();
		P_NATIVE_END;
	}
	void ASnakeGameGameModeBase::StaticRegisterNativesASnakeGameGameModeBase()
	{
		UClass* Class = ASnakeGameGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FoodGenerator", &ASnakeGameGameModeBase::execFoodGenerator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASnakeGameGameModeBase_FoodGenerator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakeGameGameModeBase_FoodGenerator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakeGameGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakeGameGameModeBase_FoodGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakeGameGameModeBase, nullptr, "FoodGenerator", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnakeGameGameModeBase_FoodGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeGameGameModeBase_FoodGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnakeGameGameModeBase_FoodGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnakeGameGameModeBase_FoodGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASnakeGameGameModeBase_NoRegister()
	{
		return ASnakeGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASnakeGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YEdge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YEdge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XEdge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_XEdge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Food_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Food;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DebugString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnakeGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASnakeGameGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASnakeGameGameModeBase_FoodGenerator, "FoodGenerator" }, // 3957977281
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SnakeGameGameModeBase.h" },
		{ "ModuleRelativePath", "SnakeGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeGameGameModeBase_Statics::NewProp_YEdge_MetaData[] = {
		{ "Category", "SnakeGameGameModeBase" },
		{ "ModuleRelativePath", "SnakeGameGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnakeGameGameModeBase_Statics::NewProp_YEdge = { "YEdge", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakeGameGameModeBase, YEdge), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ASnakeGameGameModeBase_Statics::NewProp_YEdge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameGameModeBase_Statics::NewProp_YEdge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeGameGameModeBase_Statics::NewProp_XEdge_MetaData[] = {
		{ "Category", "SnakeGameGameModeBase" },
		{ "ModuleRelativePath", "SnakeGameGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnakeGameGameModeBase_Statics::NewProp_XEdge = { "XEdge", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakeGameGameModeBase, XEdge), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ASnakeGameGameModeBase_Statics::NewProp_XEdge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameGameModeBase_Statics::NewProp_XEdge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeGameGameModeBase_Statics::NewProp_Food_MetaData[] = {
		{ "Category", "SnakeGameGameModeBase" },
		{ "ModuleRelativePath", "SnakeGameGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASnakeGameGameModeBase_Statics::NewProp_Food = { "Food", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakeGameGameModeBase, Food), Z_Construct_UClass_AFood_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASnakeGameGameModeBase_Statics::NewProp_Food_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameGameModeBase_Statics::NewProp_Food_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeGameGameModeBase_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "SnakeGameGameModeBase" },
		{ "ModuleRelativePath", "SnakeGameGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakeGameGameModeBase_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakeGameGameModeBase, Player), Z_Construct_UClass_ASnakeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnakeGameGameModeBase_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameGameModeBase_Statics::NewProp_Player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeGameGameModeBase_Statics::NewProp_DebugString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Debugging" },
		{ "ModuleRelativePath", "SnakeGameGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASnakeGameGameModeBase_Statics::NewProp_DebugString = { "DebugString", nullptr, (EPropertyFlags)0x0040000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakeGameGameModeBase, DebugString), METADATA_PARAMS(Z_Construct_UClass_ASnakeGameGameModeBase_Statics::NewProp_DebugString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameGameModeBase_Statics::NewProp_DebugString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnakeGameGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeGameGameModeBase_Statics::NewProp_YEdge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeGameGameModeBase_Statics::NewProp_XEdge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeGameGameModeBase_Statics::NewProp_Food,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeGameGameModeBase_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeGameGameModeBase_Statics::NewProp_DebugString,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnakeGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakeGameGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASnakeGameGameModeBase_Statics::ClassParams = {
		&ASnakeGameGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASnakeGameGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASnakeGameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASnakeGameGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASnakeGameGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASnakeGameGameModeBase, 2140659664);
	template<> SNAKEGAME_API UClass* StaticClass<ASnakeGameGameModeBase>()
	{
		return ASnakeGameGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASnakeGameGameModeBase(Z_Construct_UClass_ASnakeGameGameModeBase, &ASnakeGameGameModeBase::StaticClass, TEXT("/Script/SnakeGame"), TEXT("ASnakeGameGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakeGameGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
