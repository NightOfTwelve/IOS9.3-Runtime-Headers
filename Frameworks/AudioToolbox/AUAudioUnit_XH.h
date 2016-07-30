//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AudioToolbox/AUAudioUnit.h>

@class AUAudioUnitBusArray_XH, AUParameterTree, NSExtension, NSObject, NSUUID;
@protocol AUAudioUnitXPCProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AUAudioUnit_XH : AUAudioUnit
{
    NSExtension *_extension;
    struct OpaqueAudioComponentInstance *_componentInstance;
    NSUUID *_requestIdentifier;
    int _remotePID;
    _Bool _canRender;
    _Bool _canProcess;
    AUAudioUnitBusArray_XH *_inputBusses;
    AUAudioUnitBusArray_XH *_outputBusses;
    struct unique_ptr<AUProcAndUserData, std::__1::default_delete<AUProcAndUserData>> _elementCountListenerToken;
    struct unique_ptr<AUSyncCaller, std::__1::default_delete<AUSyncCaller>> _syncCaller;
    NSObject<OS_dispatch_queue> *_propListenerQueue;
    struct vector<AUAudioUnit_XH_PropListener, std::__1::allocator<AUAudioUnit_XH_PropListener>> _propListeners;
    struct IPCAURenderingClient _renderClient;
    AUParameterTree *_cachedParameterTree;
    NSObject<OS_dispatch_queue> *_viewControllerRequestQueue;
    id <AUAudioUnitXPCProtocol> _remote;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)instantiateWithExtension:(id)arg1 componentDescription:(struct AudioComponentDescription)arg2 instance:(struct OpaqueAudioComponentInstance *)arg3 options:(unsigned int)arg4 completionHandler:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) id <AUAudioUnitXPCProtocol> remote; // @synthesize remote=_remote;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)requestViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeRemoteParameterObserver:(struct AURemoteParameterObserver *)arg1;
- (struct AURemoteParameterObserver *)addRemoteParameterObserver:(_Bool)arg1;
- (id)parametersForOverviewWithCount:(long long)arg1;
- (id)parameterTree;
- (void)propertiesChanged:(id)arg1;
- (id)_getBus:(unsigned int)arg1 scope:(unsigned int)arg2 error:(id *)arg3;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)_refreshBusses:(unsigned int)arg1;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (id)_getValueForKey:(id)arg1;
- (id)_getValueForProperty:(id)arg1;
- (CDUnknownBlockType)internalRenderBlock;
- (void)reset;
- (void)deallocateRenderResources;
- (_Bool)allocateRenderResourcesAndReturnError:(id *)arg1;
- (_Bool)_setBusCount:(unsigned long long)arg1 scope:(unsigned int)arg2 error:(id *)arg3;
- (id)outputBusses;
- (id)inputBusses;
- (void)dealloc;
- (void)internalInitWithExtension:(id)arg1 componentDescription:(struct AudioComponentDescription)arg2 instance:(struct OpaqueAudioComponentInstance *)arg3 completion:(CDUnknownBlockType)arg4;
- (void)didCrash;
- (void)doOpen:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

