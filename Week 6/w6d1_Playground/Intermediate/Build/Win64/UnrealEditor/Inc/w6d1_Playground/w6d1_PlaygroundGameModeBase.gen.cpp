// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "w6d1_Playground/w6d1_PlaygroundGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodew6d1_PlaygroundGameModeBase() {}
// Cross Module References
	W6D1_PLAYGROUND_API UClass* Z_Construct_UClass_Aw6d1_PlaygroundGameModeBase_NoRegister();
	W6D1_PLAYGROUND_API UClass* Z_Construct_UClass_Aw6d1_PlaygroundGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_w6d1_Playground();
// End Cross Module References
	void Aw6d1_PlaygroundGameModeBase::StaticRegisterNativesAw6d1_PlaygroundGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Aw6d1_PlaygroundGameModeBase);
	UClass* Z_Construct_UClass_Aw6d1_PlaygroundGameModeBase_NoRegister()
	{
		return Aw6d1_PlaygroundGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_Aw6d1_PlaygroundGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aw6d1_PlaygroundGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_w6d1_Playground,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aw6d1_PlaygroundGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "w6d1_PlaygroundGameModeBase.h" },
		{ "ModuleRelativePath", "w6d1_PlaygroundGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aw6d1_PlaygroundGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aw6d1_PlaygroundGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Aw6d1_PlaygroundGameModeBase_Statics::ClassParams = {
		&Aw6d1_PlaygroundGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_Aw6d1_PlaygroundGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aw6d1_PlaygroundGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aw6d1_PlaygroundGameModeBase()
	{
		if (!Z_Registration_Info_UClass_Aw6d1_PlaygroundGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aw6d1_PlaygroundGameModeBase.OuterSingleton, Z_Construct_UClass_Aw6d1_PlaygroundGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Aw6d1_PlaygroundGameModeBase.OuterSingleton;
	}
	template<> W6D1_PLAYGROUND_API UClass* StaticClass<Aw6d1_PlaygroundGameModeBase>()
	{
		return Aw6d1_PlaygroundGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aw6d1_PlaygroundGameModeBase);
	struct Z_CompiledInDeferFile_FID_w6d1_Playground_Source_w6d1_Playground_w6d1_PlaygroundGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_w6d1_Playground_Source_w6d1_Playground_w6d1_PlaygroundGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Aw6d1_PlaygroundGameModeBase, Aw6d1_PlaygroundGameModeBase::StaticClass, TEXT("Aw6d1_PlaygroundGameModeBase"), &Z_Registration_Info_UClass_Aw6d1_PlaygroundGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aw6d1_PlaygroundGameModeBase), 4053284213U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_w6d1_Playground_Source_w6d1_Playground_w6d1_PlaygroundGameModeBase_h_282283881(TEXT("/Script/w6d1_Playground"),
		Z_CompiledInDeferFile_FID_w6d1_Playground_Source_w6d1_Playground_w6d1_PlaygroundGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_w6d1_Playground_Source_w6d1_Playground_w6d1_PlaygroundGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
