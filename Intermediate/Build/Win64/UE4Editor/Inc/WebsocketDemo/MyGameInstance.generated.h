// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UMyGameInstance;
#ifdef WEBSOCKETDEMO_MyGameInstance_generated_h
#error "MyGameInstance.generated.h already included, missing '#pragma once' in MyGameInstance.h"
#endif
#define WEBSOCKETDEMO_MyGameInstance_generated_h

#define WebsocketDemo_Source_WebsocketDemo_MyGameInstance_h_15_SPARSE_DATA
#define WebsocketDemo_Source_WebsocketDemo_MyGameInstance_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRPGGameInstance);


#define WebsocketDemo_Source_WebsocketDemo_MyGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRPGGameInstance);


#define WebsocketDemo_Source_WebsocketDemo_MyGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend struct Z_Construct_UClass_UMyGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/WebsocketDemo"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance)


#define WebsocketDemo_Source_WebsocketDemo_MyGameInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend struct Z_Construct_UClass_UMyGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/WebsocketDemo"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance)


#define WebsocketDemo_Source_WebsocketDemo_MyGameInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstance(UMyGameInstance&&); \
	NO_API UMyGameInstance(const UMyGameInstance&); \
public:


#define WebsocketDemo_Source_WebsocketDemo_MyGameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstance(UMyGameInstance&&); \
	NO_API UMyGameInstance(const UMyGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyGameInstance)


#define WebsocketDemo_Source_WebsocketDemo_MyGameInstance_h_15_PRIVATE_PROPERTY_OFFSET
#define WebsocketDemo_Source_WebsocketDemo_MyGameInstance_h_12_PROLOG
#define WebsocketDemo_Source_WebsocketDemo_MyGameInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WebsocketDemo_Source_WebsocketDemo_MyGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	WebsocketDemo_Source_WebsocketDemo_MyGameInstance_h_15_SPARSE_DATA \
	WebsocketDemo_Source_WebsocketDemo_MyGameInstance_h_15_RPC_WRAPPERS \
	WebsocketDemo_Source_WebsocketDemo_MyGameInstance_h_15_INCLASS \
	WebsocketDemo_Source_WebsocketDemo_MyGameInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WebsocketDemo_Source_WebsocketDemo_MyGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WebsocketDemo_Source_WebsocketDemo_MyGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	WebsocketDemo_Source_WebsocketDemo_MyGameInstance_h_15_SPARSE_DATA \
	WebsocketDemo_Source_WebsocketDemo_MyGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	WebsocketDemo_Source_WebsocketDemo_MyGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	WebsocketDemo_Source_WebsocketDemo_MyGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEBSOCKETDEMO_API UClass* StaticClass<class UMyGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WebsocketDemo_Source_WebsocketDemo_MyGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
