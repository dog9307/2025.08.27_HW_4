// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW_4/RandomMoveActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomMoveActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
HW_4_API UClass* Z_Construct_UClass_ARandomMoveActor();
HW_4_API UClass* Z_Construct_UClass_ARandomMoveActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW_4();
// End Cross Module References

// Begin Class ARandomMoveActor
void ARandomMoveActor::StaticRegisterNativesARandomMoveActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARandomMoveActor);
UClass* Z_Construct_UClass_ARandomMoveActor_NoRegister()
{
	return ARandomMoveActor::StaticClass();
}
struct Z_Construct_UClass_ARandomMoveActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RandomMoveActor.h" },
		{ "ModuleRelativePath", "RandomMoveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveTime_MetaData[] = {
		{ "Category", "RandomMoveActor" },
		{ "ModuleRelativePath", "RandomMoveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMoveCount_MetaData[] = {
		{ "Category", "RandomMoveActor" },
		{ "ModuleRelativePath", "RandomMoveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveRange_MetaData[] = {
		{ "Category", "RandomMoveActor" },
		{ "ModuleRelativePath", "RandomMoveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Explosion_MetaData[] = {
		{ "Category", "RandomMoveActor" },
		{ "ModuleRelativePath", "RandomMoveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fire_MetaData[] = {
		{ "Category", "RandomMoveActor" },
		{ "ModuleRelativePath", "RandomMoveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Smoke_MetaData[] = {
		{ "Category", "RandomMoveActor" },
		{ "ModuleRelativePath", "RandomMoveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spark_MetaData[] = {
		{ "Category", "RandomMoveActor" },
		{ "ModuleRelativePath", "RandomMoveActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMoveCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveRange;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Explosion;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Fire;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Smoke;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Spark;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARandomMoveActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARandomMoveActor_Statics::NewProp_MoveTime = { "MoveTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomMoveActor, MoveTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveTime_MetaData), NewProp_MoveTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARandomMoveActor_Statics::NewProp_MaxMoveCount = { "MaxMoveCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomMoveActor, MaxMoveCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMoveCount_MetaData), NewProp_MaxMoveCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARandomMoveActor_Statics::NewProp_MoveRange = { "MoveRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomMoveActor, MoveRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveRange_MetaData), NewProp_MoveRange_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARandomMoveActor_Statics::NewProp_Explosion = { "Explosion", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomMoveActor, Explosion), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Explosion_MetaData), NewProp_Explosion_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARandomMoveActor_Statics::NewProp_Fire = { "Fire", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomMoveActor, Fire), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fire_MetaData), NewProp_Fire_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARandomMoveActor_Statics::NewProp_Smoke = { "Smoke", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomMoveActor, Smoke), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Smoke_MetaData), NewProp_Smoke_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARandomMoveActor_Statics::NewProp_Spark = { "Spark", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomMoveActor, Spark), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spark_MetaData), NewProp_Spark_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARandomMoveActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomMoveActor_Statics::NewProp_MoveTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomMoveActor_Statics::NewProp_MaxMoveCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomMoveActor_Statics::NewProp_MoveRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomMoveActor_Statics::NewProp_Explosion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomMoveActor_Statics::NewProp_Fire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomMoveActor_Statics::NewProp_Smoke,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomMoveActor_Statics::NewProp_Spark,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomMoveActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARandomMoveActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HW_4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomMoveActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARandomMoveActor_Statics::ClassParams = {
	&ARandomMoveActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARandomMoveActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARandomMoveActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomMoveActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ARandomMoveActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARandomMoveActor()
{
	if (!Z_Registration_Info_UClass_ARandomMoveActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARandomMoveActor.OuterSingleton, Z_Construct_UClass_ARandomMoveActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARandomMoveActor.OuterSingleton;
}
template<> HW_4_API UClass* StaticClass<ARandomMoveActor>()
{
	return ARandomMoveActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARandomMoveActor);
ARandomMoveActor::~ARandomMoveActor() {}
// End Class ARandomMoveActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaCoding_JustC___25_08_27_HW_4_2025_08_27_HW_4_25_08_27_HW_4_HW_4_Source_HW_4_RandomMoveActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARandomMoveActor, ARandomMoveActor::StaticClass, TEXT("ARandomMoveActor"), &Z_Registration_Info_UClass_ARandomMoveActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARandomMoveActor), 2031584851U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaCoding_JustC___25_08_27_HW_4_2025_08_27_HW_4_25_08_27_HW_4_HW_4_Source_HW_4_RandomMoveActor_h_2836444965(TEXT("/Script/HW_4"),
	Z_CompiledInDeferFile_FID_SpartaCoding_JustC___25_08_27_HW_4_2025_08_27_HW_4_25_08_27_HW_4_HW_4_Source_HW_4_RandomMoveActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaCoding_JustC___25_08_27_HW_4_2025_08_27_HW_4_25_08_27_HW_4_HW_4_Source_HW_4_RandomMoveActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
