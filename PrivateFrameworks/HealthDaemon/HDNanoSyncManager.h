//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>
#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>
#import <HealthDaemon/HDIDSMessageCenterDelegate-Protocol.h>
#import <HealthDaemon/HDNanoSyncSessionDelegate-Protocol.h>
#import <HealthDaemon/HDNanoSyncStoreDelegate-Protocol.h>
#import <HealthDaemon/HDProcessStateObserver-Protocol.h>

@class HDDaemon, HDIDSMessageCenter, HDKeyValueDomain, HDNanoSyncStore, HDPairedSyncManager, NSArray, NSDate, NSHashTable, NSMutableDictionary, NSSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDNanoSyncManager : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver, HDNanoSyncStoreDelegate, HDNanoSyncSessionDelegate, HDDatabaseProtectedDataObserver, HDDataObserver, HDIDSMessageCenterDelegate, HDProcessStateObserver>
{
    _Bool _isMaster;
    _Bool _isPairingActivated;
    _Bool _enablePeriodicSyncTimer;
    _Bool _waitingForFirstUnlock;
    double _restoreTimeout;
    HDPairedSyncManager *_pairedSyncManager;
    HDDaemon *_daemon;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_syncQueue;
    HDIDSMessageCenter *_messageCenter;
    HDIDSMessageCenter *_legacyMessageCenter;
    NSHashTable *_observers;
    HDKeyValueDomain *_nanoSyncDomain;
    HDNanoSyncStore *_activeSyncStore;
    NSMutableDictionary *_syncStoresByDeviceIdentifier;
    NSArray *_pairedDevices;
    NSSet *_pairedWatchSourceBundleIdentifiers;
    NSObject<OS_dispatch_source> *_periodicSyncTimer;
    NSDate *_lastPeriodicSyncDate;
}

@property(retain, nonatomic) NSDate *lastPeriodicSyncDate; // @synthesize lastPeriodicSyncDate=_lastPeriodicSyncDate;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *periodicSyncTimer; // @synthesize periodicSyncTimer=_periodicSyncTimer;
@property(nonatomic) _Bool waitingForFirstUnlock; // @synthesize waitingForFirstUnlock=_waitingForFirstUnlock;
@property(copy) NSSet *pairedWatchSourceBundleIdentifiers; // @synthesize pairedWatchSourceBundleIdentifiers=_pairedWatchSourceBundleIdentifiers;
@property(retain, nonatomic) NSArray *pairedDevices; // @synthesize pairedDevices=_pairedDevices;
@property(retain, nonatomic) NSMutableDictionary *syncStoresByDeviceIdentifier; // @synthesize syncStoresByDeviceIdentifier=_syncStoresByDeviceIdentifier;
@property(retain, nonatomic) HDNanoSyncStore *activeSyncStore; // @synthesize activeSyncStore=_activeSyncStore;
@property(retain, nonatomic) HDKeyValueDomain *nanoSyncDomain; // @synthesize nanoSyncDomain=_nanoSyncDomain;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) HDIDSMessageCenter *legacyMessageCenter; // @synthesize legacyMessageCenter=_legacyMessageCenter;
@property(retain, nonatomic) HDIDSMessageCenter *messageCenter; // @synthesize messageCenter=_messageCenter;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak HDDaemon *daemon; // @synthesize daemon=_daemon;
@property(readonly, nonatomic) HDPairedSyncManager *pairedSyncManager; // @synthesize pairedSyncManager=_pairedSyncManager;
@property _Bool enablePeriodicSyncTimer; // @synthesize enablePeriodicSyncTimer=_enablePeriodicSyncTimer;
@property double restoreTimeout; // @synthesize restoreTimeout=_restoreTimeout;
- (void)_setPairingActivated:(_Bool)arg1;
@property _Bool isPairingActivated; // @synthesize isPairingActivated=_isPairingActivated;
- (void).cxx_destruct;
- (void)_foregroundStatusForClientChanged:(id)arg1;
- (void)processDidEnterForeground:(id)arg1;
- (void)processDidEnterBackground:(id)arg1;
- (void)processResumed:(id)arg1;
- (void)processSuspended:(id)arg1;
- (void)_didReceiveChangeRequest;
- (id)diagnosticDescription;
- (id)_queue_nanoSyncKeyValueDomain;
- (void)_queue_notifyObserversStateChanged;
- (void)nanoSyncStore:(id)arg1 restoreStateDidChange:(long long)arg2;
- (void)_queue_updateDeviceNameIfNecessaryWithSyncStore:(id)arg1;
- (void)nanoSyncStore:(id)arg1 deviceNameDidChange:(id)arg2;
- (void)nanoSyncStore:(id)arg1 remoteSystemBuildVersionDidChange:(id)arg2;
- (void)_sendFinalMessageForSyncSession:(id)arg1 status:(id)arg2 success:(_Bool)arg3 error:(id)arg4;
- (void)_sendFinalStatusMessageForSyncSession:(id)arg1 didFinishSuccessfully:(_Bool)arg2 error:(id)arg3;
- (void)nanoSyncSession:(id)arg1 didFinishSuccessfully:(_Bool)arg2 error:(id)arg3;
- (void)nanoSyncSession:(id)arg1 sendChanges:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_receiveAuthorizationCompleteRequest:(id)arg1 syncStore:(id)arg2;
- (void)_queue_authorizationRequestDidFailToSendWithError:(id)arg1 syncStore:(id)arg2;
- (void)_queue_receiveAuthorizationResponse:(id)arg1 syncStore:(id)arg2;
- (void)_queue_receiveAuthorizationRequest:(id)arg1 syncStore:(id)arg2;
- (void)_queue_requestAuthorizationForRequestRecord:(id)arg1 syncStore:(id)arg2 requestSentHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_queue_routineRequestDidFailToSendWithError:(id)arg1 syncStore:(id)arg2;
- (void)_queue_receiveRoutineResponse:(id)arg1 syncStore:(id)arg2;
- (void)_queue_receiveRoutineRequest:(id)arg1 syncStore:(id)arg2;
- (void)_queue_sendRoutineRequest:(id)arg1 syncStore:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_watchOffWristNotification:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)_workoutSamplesWereAssociated:(id)arg1;
- (void)_achievementsWereAdded:(id)arg1;
- (void)_userPreferencesDidChange:(id)arg1;
- (void)_userCharacteristicsDidChange:(id)arg1;
- (void)_unregisterForSyncTriggers;
- (void)_registerForSyncTriggers;
- (void)_resetSyncAnchorsForStore:(id)arg1;
- (void)_syncImmediatelyWithReason:(id)arg1 options:(unsigned long long)arg2;
- (void)_syncImmediatelyWithReason:(id)arg1;
- (void)_syncQueue_forwardSpeculativeChangeSetIfNecessaryForChanges:(id)arg1 destinationSyncStores:(id)arg2 originSyncStore:(id)arg3;
- (void)_queue_performNextProactiveSyncWithRemainingDevices:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_beginProactiveSyncWithCompletion:(CDUnknownBlockType)arg1;
- (id)_queue_eligibleInactiveSyncStores;
- (void)_queue_syncImmediatelyWithReason:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_queue_isReadyForSyncWithSyncStore:(id)arg1 error:(id *)arg2;
- (void)_queue_cancelPeriodicSyncTimer;
- (void)_queue_startPeriodicSyncTimerIfNecessary;
- (void)_queue_periodicSyncTimerFired;
- (void)_queue_receiveChangeResponse:(id)arg1 syncStore:(id)arg2;
- (void)_queue_changeResponseDidFailToSendWithError:(id)arg1 syncStore:(id)arg2;
- (void)_queue_changeRequestDidFailToSendWithError:(id)arg1 syncStore:(id)arg2;
- (void)_queue_receiveChangeRequest:(id)arg1 syncStore:(id)arg2;
- (void)_queue_sendSpeculativeChangeSet:(id)arg1 syncStore:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_sendChangeSet:(id)arg1 status:(id)arg2 session:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_syncQueue_applyActivationRestore:(id)arg1 request:(id)arg2 syncStore:(id)arg3 error:(id *)arg4;
- (void)_queue_handleRestoreResponse:(id)arg1 syncStore:(id)arg2;
- (void)_queue_handleRestoreRequest:(id)arg1 syncStore:(id)arg2;
- (void)_queue_sendRestoreMessageWithStore:(id)arg1 restoreUUID:(id)arg2 restores:(id)arg3 sequenceNumber:(long long)arg4 statusCode:(int)arg5;
- (void)_queue_beginRestoreWithStore:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_pairedSyncDidBeginForDevice:(id)arg1 messagesSentHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_generateWatchActivationSamples;
- (void)_queue_updatePairingActivated;
- (void)_deviceDidBecomeActive:(id)arg1;
- (void)_deviceDidUnpair:(id)arg1;
- (void)_deviceDidPair:(id)arg1;
- (void)_queue_resetPairingWithCompletion:(CDUnknownBlockType)arg1;
- (void)restoreTimedOutWithSyncStore:(id)arg1;
- (void)_queue_transitionToRestoreInProgressWithSyncStore:(id)arg1;
- (void)_queue_transitionToRestoreCompleteWithSyncStore:(id)arg1;
- (void)_queue_transitionToRestoreIncompleteWithSyncStore:(id)arg1 error:(id)arg2;
- (void)_showFitnessAppIfNeeded;
- (void)_queue_waitForLastChanceSyncWithPairingID:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_synchronizeWithOptions:(unsigned long long)arg1 restoreMessagesSentHandler:(CDUnknownBlockType)arg2 targetSyncStore:(id)arg3 reason:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_queue_updateSyncStoresWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_updateSyncStores;
- (void)_logOutgoingMessageError:(id)arg1;
- (void)_logIncomingResponse:(id)arg1;
- (void)_logIncomingRequest:(id)arg1;
- (void)messageCenterDidReceiveRoutineError:(id)arg1;
- (void)messageCenterDidReceiveRoutineResponse:(id)arg1;
- (void)messageCenterDidReceiveRoutineRequest:(id)arg1;
- (void)messageCenterDidReceiveAuthorizationCompleteRequest:(id)arg1;
- (void)messageCenterDidReceiveAuthorizationError:(id)arg1;
- (void)messageCenterDidReceiveAuthorizationResponse:(id)arg1;
- (void)messageCenterDidReceiveAuthorizationRequest:(id)arg1;
- (void)messageCenterChangesError:(id)arg1;
- (void)messageCenterDidReceiveChangesResponse:(id)arg1;
- (void)messageCenterDidReceiveChangesRequest:(id)arg1;
- (void)messageCenterRestoreError:(id)arg1;
- (void)messageCenterDidReceiveRestoreResponse:(id)arg1;
- (void)messageCenterDidReceiveRestoreRequest:(id)arg1;
- (void)messageCenter:(id)arg1 activeDeviceDidChange:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifierForResponse:(id)arg2;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2;
- (void)_handleOutgoingMessageError:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_queue_syncStoreForMessageCenterError:(id)arg1;
- (void)_handleIncomingResponse:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_handleIncomingRequest:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_queue_syncStoreForIDSDevice:(id)arg1 updateIfNecessary:(_Bool)arg2;
- (void)_queue_sendResponse:(id)arg1 syncStore:(id)arg2;
- (void)_queue_sendRequest:(id)arg1 syncStore:(id)arg2;
- (_Bool)_queue_permitSyncWithError:(id *)arg1;
- (id)_queue_messageCenterForSyncStore:(id)arg1;
- (void)_addCoralVersionMessageHandlersToMessageCenter:(id)arg1;
- (void)_addBondiVersionMessageHandlersToMessageCenter:(id)arg1;
- (void)_queue_setUpMessageCentersIfNecessary;
- (_Bool)_queue_finishInitializationAfterFirstUnlockIfNecessaryWithError:(id *)arg1;
- (void)sendRoutineRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestAuthorizationForRequestRecord:(id)arg1 requestSentHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updatePairedDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetPairingWithCompletion:(CDUnknownBlockType)arg1;
- (void)waitForLastChanceSyncWithDevicePairingID:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncHealthDataWithOptions:(unsigned long long)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncHealthDataWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pairedSyncDidBeginForDevice:(id)arg1 messagesSentHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)daemonReady:(id)arg1;
@property(readonly) _Bool isMaster;
- (void)dealloc;
- (id)initWithDaemon:(id)arg1 isMaster:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
