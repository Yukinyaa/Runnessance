// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USpineSkeletonComponent;
struct FVector;
struct FTransform;
#ifdef SPINEPLUGIN_SpineSkeletonComponent_generated_h
#error "SpineSkeletonComponent.generated.h already included, missing '#pragma once' in SpineSkeletonComponent.h"
#endif
#define SPINEPLUGIN_SpineSkeletonComponent_generated_h

#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_41_DELEGATE \
struct _Script_SpinePlugin_eventSpineAfterUpdateWorldTransformDelegate_Parms \
{ \
	USpineSkeletonComponent* skeleton; \
}; \
static inline void FSpineAfterUpdateWorldTransformDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAfterUpdateWorldTransformDelegate, USpineSkeletonComponent* skeleton) \
{ \
	_Script_SpinePlugin_eventSpineAfterUpdateWorldTransformDelegate_Parms Parms; \
	Parms.skeleton=skeleton; \
	SpineAfterUpdateWorldTransformDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_40_DELEGATE \
struct _Script_SpinePlugin_eventSpineBeforeUpdateWorldTransformDelegate_Parms \
{ \
	USpineSkeletonComponent* skeleton; \
}; \
static inline void FSpineBeforeUpdateWorldTransformDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineBeforeUpdateWorldTransformDelegate, USpineSkeletonComponent* skeleton) \
{ \
	_Script_SpinePlugin_eventSpineBeforeUpdateWorldTransformDelegate_Parms Parms; \
	Parms.skeleton=skeleton; \
	SpineBeforeUpdateWorldTransformDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}




#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_46_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFlipY) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetFlipY(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFlipY) \
	{ \
		P_GET_UBOOL(Z_Param_flipY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFlipY(Z_Param_flipY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFlipX) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetFlipX(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFlipX) \
	{ \
		P_GET_UBOOL(Z_Param_flipX); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFlipX(Z_Param_flipX); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSlotsToSetupPose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSlotsToSetupPose(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBonesToSetupPose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBonesToSetupPose(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetToSetupPose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetToSetupPose(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateWorldTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateWorldTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoneWorldPosition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BoneName); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBoneWorldPosition(Z_Param_BoneName,Z_Param_Out_position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneWorldTransform) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=this->GetBoneWorldTransform(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAttachment) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_slotName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_attachmentName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetAttachment(Z_Param_slotName,Z_Param_attachmentName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSkin) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SkinName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetSkin(Z_Param_SkinName); \
		P_NATIVE_END; \
	}


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFlipY) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetFlipY(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFlipY) \
	{ \
		P_GET_UBOOL(Z_Param_flipY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFlipY(Z_Param_flipY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFlipX) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetFlipX(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFlipX) \
	{ \
		P_GET_UBOOL(Z_Param_flipX); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFlipX(Z_Param_flipX); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSlotsToSetupPose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSlotsToSetupPose(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBonesToSetupPose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBonesToSetupPose(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetToSetupPose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetToSetupPose(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateWorldTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateWorldTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoneWorldPosition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BoneName); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBoneWorldPosition(Z_Param_BoneName,Z_Param_Out_position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneWorldTransform) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=this->GetBoneWorldTransform(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAttachment) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_slotName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_attachmentName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetAttachment(Z_Param_slotName,Z_Param_attachmentName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSkin) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SkinName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetSkin(Z_Param_SkinName); \
		P_NATIVE_END; \
	}


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_46_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUSpineSkeletonComponent(); \
	friend SPINEPLUGIN_API class UClass* Z_Construct_UClass_USpineSkeletonComponent(); \
	public: \
	DECLARE_CLASS(USpineSkeletonComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineSkeletonComponent) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_46_INCLASS \
	private: \
	static void StaticRegisterNativesUSpineSkeletonComponent(); \
	friend SPINEPLUGIN_API class UClass* Z_Construct_UClass_USpineSkeletonComponent(); \
	public: \
	DECLARE_CLASS(USpineSkeletonComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineSkeletonComponent) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpineSkeletonComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpineSkeletonComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineSkeletonComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineSkeletonComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineSkeletonComponent(USpineSkeletonComponent&&); \
	NO_API USpineSkeletonComponent(const USpineSkeletonComponent&); \
public:


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineSkeletonComponent(USpineSkeletonComponent&&); \
	NO_API USpineSkeletonComponent(const USpineSkeletonComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineSkeletonComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineSkeletonComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpineSkeletonComponent)


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_46_PRIVATE_PROPERTY_OFFSET
#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_44_PROLOG
#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_46_PRIVATE_PROPERTY_OFFSET \
	Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_46_RPC_WRAPPERS \
	Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_46_INCLASS \
	Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_46_PRIVATE_PROPERTY_OFFSET \
	Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_46_INCLASS_NO_PURE_DECLS \
	Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
