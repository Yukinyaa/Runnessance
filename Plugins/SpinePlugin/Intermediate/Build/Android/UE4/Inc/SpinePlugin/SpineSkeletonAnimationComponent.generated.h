// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTrackEntry;
struct FSpineEvent;
#ifdef SPINEPLUGIN_SpineSkeletonAnimationComponent_generated_h
#error "SpineSkeletonAnimationComponent.generated.h already included, missing '#pragma once' in SpineSkeletonAnimationComponent.h"
#endif
#define SPINEPLUGIN_SpineSkeletonAnimationComponent_generated_h

#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_40_GENERATED_BODY \
	friend SPINEPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FSpineEvent(); \
	static class UScriptStruct* StaticStruct();


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_74_DELEGATE \
struct _Script_SpinePlugin_eventSpineAnimationDisposeDelegate_Parms \
{ \
	UTrackEntry* entry; \
}; \
static inline void FSpineAnimationDisposeDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationDisposeDelegate, UTrackEntry* entry) \
{ \
	_Script_SpinePlugin_eventSpineAnimationDisposeDelegate_Parms Parms; \
	Parms.entry=entry; \
	SpineAnimationDisposeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_73_DELEGATE \
struct _Script_SpinePlugin_eventSpineAnimationEndDelegate_Parms \
{ \
	UTrackEntry* entry; \
}; \
static inline void FSpineAnimationEndDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationEndDelegate, UTrackEntry* entry) \
{ \
	_Script_SpinePlugin_eventSpineAnimationEndDelegate_Parms Parms; \
	Parms.entry=entry; \
	SpineAnimationEndDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_72_DELEGATE \
struct _Script_SpinePlugin_eventSpineAnimationCompleteDelegate_Parms \
{ \
	UTrackEntry* entry; \
}; \
static inline void FSpineAnimationCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationCompleteDelegate, UTrackEntry* entry) \
{ \
	_Script_SpinePlugin_eventSpineAnimationCompleteDelegate_Parms Parms; \
	Parms.entry=entry; \
	SpineAnimationCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_71_DELEGATE \
struct _Script_SpinePlugin_eventSpineAnimationInterruptDelegate_Parms \
{ \
	UTrackEntry* entry; \
}; \
static inline void FSpineAnimationInterruptDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationInterruptDelegate, UTrackEntry* entry) \
{ \
	_Script_SpinePlugin_eventSpineAnimationInterruptDelegate_Parms Parms; \
	Parms.entry=entry; \
	SpineAnimationInterruptDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_70_DELEGATE \
struct _Script_SpinePlugin_eventSpineAnimationEventDelegate_Parms \
{ \
	UTrackEntry* entry; \
	FSpineEvent evt; \
}; \
static inline void FSpineAnimationEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationEventDelegate, UTrackEntry* entry, FSpineEvent evt) \
{ \
	_Script_SpinePlugin_eventSpineAnimationEventDelegate_Parms Parms; \
	Parms.entry=entry; \
	Parms.evt=evt; \
	SpineAnimationEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_69_DELEGATE \
struct _Script_SpinePlugin_eventSpineAnimationStartDelegate_Parms \
{ \
	UTrackEntry* entry; \
}; \
static inline void FSpineAnimationStartDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationStartDelegate, UTrackEntry* entry) \
{ \
	_Script_SpinePlugin_eventSpineAnimationStartDelegate_Parms Parms; \
	Parms.entry=entry; \
	SpineAnimationStartDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}




#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_78_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMixAlpha) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_mixAlpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMixAlpha(Z_Param_mixAlpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMixAlpha) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMixAlpha(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMixDuration) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_mixDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMixDuration(Z_Param_mixDuration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMixDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMixDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMixTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_mixTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMixTime(Z_Param_mixTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMixTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMixTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAlpha) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_alpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAlpha(Z_Param_alpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAlpha) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetAlpha(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimeScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_timeScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTimeScale(Z_Param_timeScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetTimeScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrackEnd) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_trackEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTrackEnd(Z_Param_trackEnd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetTrackEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNextTrackLast) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_nextTrackLast); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNextTrackLast(Z_Param_nextTrackLast); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextTrackLast) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetNextTrackLast(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrackLast) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_trackLast); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTrackLast(Z_Param_trackLast); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackLast) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetTrackLast(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrackTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_trackTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTrackTime(Z_Param_trackTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetTrackTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDelay) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDelay(Z_Param_delay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDelay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetDelay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNextAnimationLast) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_nextAnimationLast); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNextAnimationLast(Z_Param_nextAnimationLast); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextAnimationLast) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetNextAnimationLast(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimationLast) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_animationLast); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAnimationLast(Z_Param_animationLast); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationLast) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetAnimationLast(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimationEnd) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_animationEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAnimationEnd(Z_Param_animationEnd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetAnimationEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimationStart) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_animationStart); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAnimationStart(Z_Param_animationStart); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetAnimationStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDrawOrderThreshold) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_drawOrderThreshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDrawOrderThreshold(Z_Param_drawOrderThreshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDrawOrderThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetDrawOrderThreshold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAttachmentThreshold) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_attachmentThreshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAttachmentThreshold(Z_Param_attachmentThreshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttachmentThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetAttachmentThreshold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEventThreshold) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_eventThreshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEventThreshold(Z_Param_eventThreshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEventThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetEventThreshold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLoop) \
	{ \
		P_GET_UBOOL(Z_Param_loop); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLoop(Z_Param_loop); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLoop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetLoop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetTrackIndex(); \
		P_NATIVE_END; \
	}


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMixAlpha) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_mixAlpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMixAlpha(Z_Param_mixAlpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMixAlpha) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMixAlpha(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMixDuration) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_mixDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMixDuration(Z_Param_mixDuration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMixDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMixDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMixTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_mixTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMixTime(Z_Param_mixTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMixTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMixTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAlpha) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_alpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAlpha(Z_Param_alpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAlpha) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetAlpha(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimeScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_timeScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTimeScale(Z_Param_timeScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetTimeScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrackEnd) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_trackEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTrackEnd(Z_Param_trackEnd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetTrackEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNextTrackLast) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_nextTrackLast); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNextTrackLast(Z_Param_nextTrackLast); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextTrackLast) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetNextTrackLast(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrackLast) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_trackLast); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTrackLast(Z_Param_trackLast); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackLast) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetTrackLast(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrackTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_trackTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTrackTime(Z_Param_trackTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetTrackTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDelay) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDelay(Z_Param_delay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDelay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetDelay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNextAnimationLast) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_nextAnimationLast); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNextAnimationLast(Z_Param_nextAnimationLast); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextAnimationLast) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetNextAnimationLast(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimationLast) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_animationLast); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAnimationLast(Z_Param_animationLast); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationLast) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetAnimationLast(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimationEnd) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_animationEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAnimationEnd(Z_Param_animationEnd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetAnimationEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimationStart) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_animationStart); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAnimationStart(Z_Param_animationStart); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetAnimationStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDrawOrderThreshold) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_drawOrderThreshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDrawOrderThreshold(Z_Param_drawOrderThreshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDrawOrderThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetDrawOrderThreshold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAttachmentThreshold) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_attachmentThreshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAttachmentThreshold(Z_Param_attachmentThreshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttachmentThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetAttachmentThreshold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEventThreshold) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_eventThreshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEventThreshold(Z_Param_eventThreshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEventThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetEventThreshold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLoop) \
	{ \
		P_GET_UBOOL(Z_Param_loop); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLoop(Z_Param_loop); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLoop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetLoop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetTrackIndex(); \
		P_NATIVE_END; \
	}


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_78_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUTrackEntry(); \
	friend SPINEPLUGIN_API class UClass* Z_Construct_UClass_UTrackEntry(); \
	public: \
	DECLARE_CLASS(UTrackEntry, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(UTrackEntry) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_78_INCLASS \
	private: \
	static void StaticRegisterNativesUTrackEntry(); \
	friend SPINEPLUGIN_API class UClass* Z_Construct_UClass_UTrackEntry(); \
	public: \
	DECLARE_CLASS(UTrackEntry, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(UTrackEntry) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_78_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTrackEntry(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrackEntry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrackEntry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrackEntry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTrackEntry(UTrackEntry&&); \
	NO_API UTrackEntry(const UTrackEntry&); \
public:


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_78_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTrackEntry(UTrackEntry&&); \
	NO_API UTrackEntry(const UTrackEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrackEntry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrackEntry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTrackEntry)


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_78_PRIVATE_PROPERTY_OFFSET
#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_76_PROLOG
#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_78_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_78_PRIVATE_PROPERTY_OFFSET \
	Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_78_RPC_WRAPPERS \
	Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_78_INCLASS \
	Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_78_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_78_PRIVATE_PROPERTY_OFFSET \
	Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_78_INCLASS_NO_PURE_DECLS \
	Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_205_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearTrack) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearTrack(Z_Param_trackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearTracks) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearTracks(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrent) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTrackEntry**)Z_Param__Result=this->GetCurrent(Z_Param_trackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddEmptyAnimation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_mixDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTrackEntry**)Z_Param__Result=this->AddEmptyAnimation(Z_Param_trackIndex,Z_Param_mixDuration,Z_Param_delay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEmptyAnimation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_mixDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTrackEntry**)Z_Param__Result=this->SetEmptyAnimation(Z_Param_trackIndex,Z_Param_mixDuration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAnimation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackIndex); \
		P_GET_PROPERTY(UStrProperty,Z_Param_animationName); \
		P_GET_UBOOL(Z_Param_loop); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTrackEntry**)Z_Param__Result=this->AddAnimation(Z_Param_trackIndex,Z_Param_animationName,Z_Param_loop,Z_Param_delay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackIndex); \
		P_GET_PROPERTY(UStrProperty,Z_Param_animationName); \
		P_GET_UBOOL(Z_Param_loop); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTrackEntry**)Z_Param__Result=this->SetAnimation(Z_Param_trackIndex,Z_Param_animationName,Z_Param_loop); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetTimeScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimeScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_timeScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTimeScale(Z_Param_timeScale); \
		P_NATIVE_END; \
	}


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_205_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearTrack) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearTrack(Z_Param_trackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearTracks) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearTracks(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrent) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTrackEntry**)Z_Param__Result=this->GetCurrent(Z_Param_trackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddEmptyAnimation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_mixDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTrackEntry**)Z_Param__Result=this->AddEmptyAnimation(Z_Param_trackIndex,Z_Param_mixDuration,Z_Param_delay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEmptyAnimation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_mixDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTrackEntry**)Z_Param__Result=this->SetEmptyAnimation(Z_Param_trackIndex,Z_Param_mixDuration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAnimation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackIndex); \
		P_GET_PROPERTY(UStrProperty,Z_Param_animationName); \
		P_GET_UBOOL(Z_Param_loop); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTrackEntry**)Z_Param__Result=this->AddAnimation(Z_Param_trackIndex,Z_Param_animationName,Z_Param_loop,Z_Param_delay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackIndex); \
		P_GET_PROPERTY(UStrProperty,Z_Param_animationName); \
		P_GET_UBOOL(Z_Param_loop); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTrackEntry**)Z_Param__Result=this->SetAnimation(Z_Param_trackIndex,Z_Param_animationName,Z_Param_loop); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetTimeScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimeScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_timeScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTimeScale(Z_Param_timeScale); \
		P_NATIVE_END; \
	}


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_205_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUSpineSkeletonAnimationComponent(); \
	friend SPINEPLUGIN_API class UClass* Z_Construct_UClass_USpineSkeletonAnimationComponent(); \
	public: \
	DECLARE_CLASS(USpineSkeletonAnimationComponent, USpineSkeletonComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineSkeletonAnimationComponent) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_205_INCLASS \
	private: \
	static void StaticRegisterNativesUSpineSkeletonAnimationComponent(); \
	friend SPINEPLUGIN_API class UClass* Z_Construct_UClass_USpineSkeletonAnimationComponent(); \
	public: \
	DECLARE_CLASS(USpineSkeletonAnimationComponent, USpineSkeletonComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineSkeletonAnimationComponent) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_205_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpineSkeletonAnimationComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpineSkeletonAnimationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineSkeletonAnimationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineSkeletonAnimationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineSkeletonAnimationComponent(USpineSkeletonAnimationComponent&&); \
	NO_API USpineSkeletonAnimationComponent(const USpineSkeletonAnimationComponent&); \
public:


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_205_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineSkeletonAnimationComponent(USpineSkeletonAnimationComponent&&); \
	NO_API USpineSkeletonAnimationComponent(const USpineSkeletonAnimationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineSkeletonAnimationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineSkeletonAnimationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpineSkeletonAnimationComponent)


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_205_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__trackEntries() { return STRUCT_OFFSET(USpineSkeletonAnimationComponent, trackEntries); }


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_203_PROLOG
#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_205_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_205_PRIVATE_PROPERTY_OFFSET \
	Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_205_RPC_WRAPPERS \
	Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_205_INCLASS \
	Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_205_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_205_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_205_PRIVATE_PROPERTY_OFFSET \
	Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_205_RPC_WRAPPERS_NO_PURE_DECLS \
	Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_205_INCLASS_NO_PURE_DECLS \
	Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_205_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Runnessance_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS