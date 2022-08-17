// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EFoodieType : uint8;
#ifdef PACMAN_Foodie_generated_h
#error "Foodie.generated.h already included, missing '#pragma once' in Foodie.h"
#endif
#define PACMAN_Foodie_generated_h

#define PacMan_Source_PacMan_Foodie_h_18_DELEGATE \
struct _Script_PacMan_eventFoodieEatenEvent_Parms \
{ \
	EFoodieType FoodieType; \
}; \
static inline void FFoodieEatenEvent_DelegateWrapper(const FMulticastScriptDelegate& FoodieEatenEvent, EFoodieType FoodieType) \
{ \
	_Script_PacMan_eventFoodieEatenEvent_Parms Parms; \
	Parms.FoodieType=FoodieType; \
	FoodieEatenEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PacMan_Source_PacMan_Foodie_h_23_SPARSE_DATA
#define PacMan_Source_PacMan_Foodie_h_23_RPC_WRAPPERS
#define PacMan_Source_PacMan_Foodie_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define PacMan_Source_PacMan_Foodie_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFoodie(); \
	friend struct Z_Construct_UClass_AFoodie_Statics; \
public: \
	DECLARE_CLASS(AFoodie, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacMan"), NO_API) \
	DECLARE_SERIALIZER(AFoodie)


#define PacMan_Source_PacMan_Foodie_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAFoodie(); \
	friend struct Z_Construct_UClass_AFoodie_Statics; \
public: \
	DECLARE_CLASS(AFoodie, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacMan"), NO_API) \
	DECLARE_SERIALIZER(AFoodie)


#define PacMan_Source_PacMan_Foodie_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFoodie(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFoodie) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFoodie); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFoodie); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFoodie(AFoodie&&); \
	NO_API AFoodie(const AFoodie&); \
public:


#define PacMan_Source_PacMan_Foodie_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFoodie(AFoodie&&); \
	NO_API AFoodie(const AFoodie&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFoodie); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFoodie); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFoodie)


#define PacMan_Source_PacMan_Foodie_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ConsumptionSound() { return STRUCT_OFFSET(AFoodie, ConsumptionSound); }


#define PacMan_Source_PacMan_Foodie_h_20_PROLOG
#define PacMan_Source_PacMan_Foodie_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacMan_Source_PacMan_Foodie_h_23_PRIVATE_PROPERTY_OFFSET \
	PacMan_Source_PacMan_Foodie_h_23_SPARSE_DATA \
	PacMan_Source_PacMan_Foodie_h_23_RPC_WRAPPERS \
	PacMan_Source_PacMan_Foodie_h_23_INCLASS \
	PacMan_Source_PacMan_Foodie_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PacMan_Source_PacMan_Foodie_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacMan_Source_PacMan_Foodie_h_23_PRIVATE_PROPERTY_OFFSET \
	PacMan_Source_PacMan_Foodie_h_23_SPARSE_DATA \
	PacMan_Source_PacMan_Foodie_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	PacMan_Source_PacMan_Foodie_h_23_INCLASS_NO_PURE_DECLS \
	PacMan_Source_PacMan_Foodie_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMAN_API UClass* StaticClass<class AFoodie>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PacMan_Source_PacMan_Foodie_h


#define FOREACH_ENUM_EFOODIETYPE(op) \
	op(EFoodieType::Regular) \
	op(EFoodieType::PowerUp) 

enum class EFoodieType : uint8;
template<> PACMAN_API UEnum* StaticEnum<EFoodieType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
