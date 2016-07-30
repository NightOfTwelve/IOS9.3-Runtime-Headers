//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>
#import <FrontBoard/FBUIProcess-Protocol.h>

@class BSProcessDeathWatcher, FBProcessState, FBWorkspace, NSHashTable, NSString;
@protocol FBProcessDelegate, OS_dispatch_queue;

@interface FBProcess : NSObject <BSDescriptionProviding, FBUIProcess>
{
    NSObject<OS_dispatch_queue> *_queue;
    FBProcessState *_state;
    NSString *_name;
    NSString *_jobLabel;
    NSString *_bundleIdentifier;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    FBWorkspace *_workspace;
    NSHashTable *_observers;
    id <FBProcessDelegate> _delegate;
    int _pid;
    _Bool _running;
    BSProcessDeathWatcher *_processDeathObserver;
    _Bool _updatingState;
}

@property(readonly, retain, nonatomic) FBWorkspace *workspace; // @synthesize workspace=_workspace;
@property(readonly, nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (_Bool)isSystemApplicationProcess;
- (_Bool)isApplicationProcess;
- (_Bool)isExtensionProcess;
- (void)_queue_toggleProcessDeathObserver:(_Bool)arg1;
- (void)_queue_processDidExit;
- (void)_queue_callExitObservers;
- (void)_queue_enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (id)_createWorkspace;
- (id)_queue;
@property(nonatomic, getter=_queue_visibility, setter=_queue_setVisibility:) int queue_visibility;
- (int)_queue_effectiveVisibilityForVisibility:(int)arg1;
- (id)_queue_newWatchdogForContext:(CDStruct_1b4a36b4)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic, getter=_queue_taskState, setter=_queue_setTaskState:) int queue_taskState;
- (_Bool)_queue_isForeground;
@property(copy, nonatomic, getter=_queue_jobLabel, setter=_queue_setJobLabel:) NSString *queue_jobLabel;
@property(nonatomic, getter=_queue_isRunning, setter=_queue_setRunning:) _Bool queue_running;
@property(copy, nonatomic, getter=_queue_name, setter=_queue_setName:) NSString *queue_name;
@property(nonatomic, getter=_queue_pid, setter=_queue_setPid:) int queue_pid;
- (void)_queue_updateStateWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=_queue_delegate) id <FBProcessDelegate> delegate;
- (id)_workspace;
@property(readonly, nonatomic, getter=isForeground) _Bool foreground;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, copy, nonatomic) FBProcessState *state;
@property(readonly, copy, nonatomic) NSString *jobLabel;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithBundleID:(id)arg1 pid:(int)arg2 callOutQueue:(id)arg3;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

