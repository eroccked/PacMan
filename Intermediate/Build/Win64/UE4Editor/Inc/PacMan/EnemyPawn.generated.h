// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEnemyState : uint8;
#ifdef PACMAN_EnemyPawn_generated_h
#error "EnemyPawn.generated.h already included, missing '#pragma once' in EnemyPawn.h"
#endif
#define PACMAN_EnemyPawn_generated_h

#define PacMan_Source_PacMan_EnemyPawn_h_16_DELEGATE \
struct _Script_PacMan_eventEnemyStateChangedEvent_Parms \
{ \
	EEnemyState NewState; \
}; \
static inline void FEnemyStateChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& EnemyStateChangedEvent, EEnemyState NewState) \
{ \
	_Script_PacMan_eventEnemyStateChangedEvent_Parms Parms; \
	Parms.NewState=NewState; \
	EnemyStateChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PacMan_Source_PacMan_EnemyPawn_h_21_SPARSE_DATA
#define PacMan_Source_PacMan_EnemyPawn_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIdle); \
	DECLARE_FUNCTION(execHunt);


#define PacMan_Source_PacMan_EnemyPawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIdle); \
	DECLARE_FUNCTION(execHunt);


#define PacMan_Source_PacMan_EnemyPawn_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyPawn(); \
	friend struct Z_Construct_UClass_AEnemyPawn_Statics; \
public: \
	DECLARE_CLASS(AEnemyPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacMan"), NO_API) \
	DECLARE_SERIALIZER(AEnemyPawn)


#define PacMan_Source_PacMan_EnemyPawn_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyPawn(); \
	friend struct Z_Construct_UClass_AEnemyPawn_Statics; \
public: \
	DECLARE_CLASS(AEnemyPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacMan"), NO_API) \
	DECLARE_SERIALIZER(AEnemyPawn)


#define PacMan_Source_PacMan_EnemyPawn_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyPawn(AEnemyPawn&&); \
	NO_API AEnemyPawn(const AEnemyPawn&); \
public:


#define PacMan_Source_PacMan_EnemyPawn_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyPawn(AEnemyPawn&&); \
	NO_API AEnemyPawn(const AEnemyPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyPawn)


#define PacMan_Source_PacMan_EnemyPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StateChangedEvent() { return STRUCT_OFFSET(AEnemyPawn, StateChangedEvent); }


#define PacMan_Source_PacMan_EnemyPawn_h_18_PROLOG
#define PacMan_Source_PacMan_EnemyPawn_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacMan_Source_PacMan_EnemyPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	PacMan_Source_PacMan_EnemyPawn_h_21_SPARSE_DATA \
	PacMan_Source_PacMan_EnemyPawn_h_21_RPC_WRAPPERS \
	PacMan_Source_PacMan_EnemyPawn_h_21_INCLASS \
	PacMan_Source_PacMan_EnemyPawn_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PacMan_Source_PacMan_EnemyPawn_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacMan_Source_PacMan_EnemyPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	PacMan_Source_PacMan_EnemyPawn_h_21_SPARSE_DATA \
	PacMan_Source_PacMan_EnemyPawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	PacMan_Source_PacMan_EnemyPawn_h_21_INCLASS_NO_PURE_DECLS \
	PacMan_Source_PacMan_EnemyPawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMAN_API UClass* StaticClass<class AEnemyPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PacMan_Source_PacMan_EnemyPawn_h


#define FOREACH_ENUM_EENEMYSTATE(op) \
	op(EEnemyState::Default) \
	op(EEnemyState::Idle) 

enum class EEnemyState : uint8;
template<> PACMAN_API UEnum* StaticEnum<EEnemyState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
