// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/BoundaryWall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoundaryWall() {}
// Cross Module References
	SNAKEGAME_API UClass* Z_Construct_UClass_ABoundaryWall_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_ABoundaryWall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SnakeGame();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABoundaryWall::StaticRegisterNativesABoundaryWall()
	{
	}
	UClass* Z_Construct_UClass_ABoundaryWall_NoRegister()
	{
		return ABoundaryWall::StaticClass();
	}
	struct Z_Construct_UClass_ABoundaryWall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WallMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoundaryWall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoundaryWall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BoundaryWall.h" },
		{ "ModuleRelativePath", "BoundaryWall.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoundaryWall_Statics::NewProp_WallMesh_MetaData[] = {
		{ "Category", "BoundaryWall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoundaryWall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoundaryWall_Statics::NewProp_WallMesh = { "WallMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoundaryWall, WallMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoundaryWall_Statics::NewProp_WallMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABoundaryWall_Statics::NewProp_WallMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoundaryWall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoundaryWall_Statics::NewProp_WallMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoundaryWall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoundaryWall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoundaryWall_Statics::ClassParams = {
		&ABoundaryWall::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABoundaryWall_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ABoundaryWall_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABoundaryWall_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABoundaryWall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoundaryWall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoundaryWall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoundaryWall, 1089612071);
	template<> SNAKEGAME_API UClass* StaticClass<ABoundaryWall>()
	{
		return ABoundaryWall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoundaryWall(Z_Construct_UClass_ABoundaryWall, &ABoundaryWall::StaticClass, TEXT("/Script/SnakeGame"), TEXT("ABoundaryWall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoundaryWall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
