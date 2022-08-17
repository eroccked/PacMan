// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PACMAN_TeleporterActor_generated_h
#error "TeleporterActor.generated.h already included, missing '#pragma once' in TeleporterActor.h"
#endif
#define PACMAN_TeleporterActor_generated_h

#define PacMan_Source_PacMan_TeleporterActor_h_14_SPARSE_DATA
#define PacMan_Source_PacMan_TeleporterActor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define PacMan_Source_PacMan_TeleporterActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define PacMan_Source_PacMan_TeleporterActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATeleporterActor(); \
	friend struct Z_Construct_UClass_ATeleporterActor_Statics; \
public: \
	DECLARE_CLASS(ATeleporterActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacMan"), NO_API) \
	DECLARE_SERIALIZER(ATeleporterActor)


#define PacMan_Source_PacMan_TeleporterActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATeleporterActor(); \
	friend struct Z_Construct_UClass_ATeleporterActor_Statics; \
public: \
	DECLARE_CLASS(ATeleporterActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacMan"), NO_API) \
	DECLARE_SERIALIZER(ATeleporterActor)


#define PacMan_Source_PacMan_TeleporterActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATeleporterActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATeleporterActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeleporterActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeleporterActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeleporterActor(ATeleporterActor&&); \
	NO_API ATeleporterActor(const ATeleporterActor&); \
public:


#define PacMan_Source_PacMan_TeleporterActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeleporterActor(ATeleporterActor&&); \
	NO_API ATeleporterActor(const ATeleporterActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeleporterActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeleporterActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATeleporterActor)


#define PacMan_Source_PacMan_TeleporterActor_h_14_PRIVATE_PROPERTY_OFFSET
#define PacMan_Source_PacMan_TeleporterActor_h_11_PROLOG
#define PacMan_Source_PacMan_TeleporterActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacMan_Source_PacMan_TeleporterActor_h_14_PRIVATE_PROPERTY_OFFSET \
	PacMan_Source_PacMan_TeleporterActor_h_14_SPARSE_DATA \
	PacMan_Source_PacMan_TeleporterActor_h_14_RPC_WRAPPERS \
	PacMan_Source_PacMan_TeleporterActor_h_14_INCLASS \
	PacMan_Source_PacMan_TeleporterActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PacMan_Source_PacMan_TeleporterActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacMan_Source_PacMan_TeleporterActor_h_14_PRIVATE_PROPERTY_OFFSET \
	PacMan_Source_PacMan_TeleporterActor_h_14_SPARSE_DATA \
	PacMan_Source_PacMan_TeleporterActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PacMan_Source_PacMan_TeleporterActor_h_14_INCLASS_NO_PURE_DECLS \
	PacMan_Source_PacMan_TeleporterActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMAN_API UClass* StaticClass<class ATeleporterActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PacMan_Source_PacMan_TeleporterActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
