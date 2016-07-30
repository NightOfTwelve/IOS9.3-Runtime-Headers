//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTimerDelegate-Protocol.h>
#import <HomeKitDaemon/HMIDSMessageTransport-Protocol.h>
#import <HomeKitDaemon/HMMessageTransport-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class HAPTimer, HMMessageDispatcher, IDSService, NSArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface HMDIDSMessageTransport : NSObject <IDSServiceDelegate, HAPTimerDelegate, HMMessageTransport, HMIDSMessageTransport>
{
    _Bool _proxy;
    IDSService *_idsService;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_pendingResponses;
    NSMutableDictionary *_receivedResponses;
    NSMutableDictionary *_requestedCapabilities;
    NSMutableDictionary *_destinationAddress;
    NSMutableDictionary *_pendingSentMessages;
    NSMutableDictionary *_pendingResponseTimers;
    HMMessageDispatcher *_messageDispatcher;
    NSMutableSet *_peerTransientDeviceAddresses;
    NSMutableSet *_peerResidentDeviceAddresses;
    NSMutableSet *_pairedWatchDeviceAddresses;
    NSMutableSet *_reachableCompanionDeviceAddresses;
    NSMutableSet *_reachableWatchDeviceAddresses;
    NSString *_pairedWatchDestination;
    NSString *_pairedCompanionDestination;
    HAPTimer *_devicesChangedNotificationDebounceTimer;
}

+ (void)messageElementsFromDictionary:(id)arg1 messageName:(id *)arg2 messageIdentifier:(id *)arg3 messagePayload:(id *)arg4 target:(id *)arg5 transactionID:(id *)arg6 isRequest:(_Bool *)arg7 isResponse:(_Bool *)arg8 isNotification:(_Bool *)arg9;
+ (id)dictionaryForMessageName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 transactionID:(id)arg5 msgType:(unsigned long long)arg6;
+ (id)idsMessageTypeDescription:(unsigned long long)arg1;
@property(readonly, nonatomic) HAPTimer *devicesChangedNotificationDebounceTimer; // @synthesize devicesChangedNotificationDebounceTimer=_devicesChangedNotificationDebounceTimer;
@property(readonly, nonatomic) _Bool proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) NSString *pairedCompanionDestination; // @synthesize pairedCompanionDestination=_pairedCompanionDestination;
@property(retain, nonatomic) NSString *pairedWatchDestination; // @synthesize pairedWatchDestination=_pairedWatchDestination;
@property(retain, nonatomic) NSMutableSet *reachableWatchDeviceAddresses; // @synthesize reachableWatchDeviceAddresses=_reachableWatchDeviceAddresses;
@property(retain, nonatomic) NSMutableSet *reachableCompanionDeviceAddresses; // @synthesize reachableCompanionDeviceAddresses=_reachableCompanionDeviceAddresses;
@property(retain, nonatomic) NSMutableSet *pairedWatchDeviceAddresses; // @synthesize pairedWatchDeviceAddresses=_pairedWatchDeviceAddresses;
@property(retain, nonatomic) NSMutableSet *peerResidentDeviceAddresses; // @synthesize peerResidentDeviceAddresses=_peerResidentDeviceAddresses;
@property(retain, nonatomic) NSMutableSet *peerTransientDeviceAddresses; // @synthesize peerTransientDeviceAddresses=_peerTransientDeviceAddresses;
@property(nonatomic) __weak HMMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) NSMutableDictionary *pendingResponseTimers; // @synthesize pendingResponseTimers=_pendingResponseTimers;
@property(retain, nonatomic) NSMutableDictionary *pendingSentMessages; // @synthesize pendingSentMessages=_pendingSentMessages;
@property(readonly, nonatomic) NSMutableDictionary *destinationAddress; // @synthesize destinationAddress=_destinationAddress;
@property(readonly, nonatomic) NSMutableDictionary *requestedCapabilities; // @synthesize requestedCapabilities=_requestedCapabilities;
@property(readonly, nonatomic) NSMutableDictionary *receivedResponses; // @synthesize receivedResponses=_receivedResponses;
@property(retain, nonatomic) NSMutableDictionary *pendingResponses; // @synthesize pendingResponses=_pendingResponses;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
- (void).cxx_destruct;
- (void)_handleDevicesChangedNotificationDebounceTimer;
- (void)timerDidFire:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4;
- (void)_removePendingResponseTransaction:(id)arg1;
- (void)_removePendingResponseTimerForTransaction:(id)arg1;
- (void)_startPendingResponseTimer:(id)arg1 responseTimeout:(double)arg2 identifier:(id)arg3;
- (void)_pendingResponseTimeoutFor:(id)arg1;
- (void)_restartPendingResponseTimerFor:(id)arg1 withReducedFactor:(unsigned long long)arg2;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 destination:(id)arg5 responseTimeout:(double)arg6 responseHandler:(CDUnknownBlockType)arg7;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 destination:(id)arg5;
- (id)sendMessage:(id)arg1 destinations:(id)arg2 msgType:(unsigned long long)arg3 error:(id *)arg4;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4;
- (void)_setDestinationAddress;
- (void)_updateReachableDeviceAddresses:(id)arg1;
- (id)_compatibleDevices:(id)arg1;
- (_Bool)_isCompatibleCompanionDevice:(id)arg1;
- (_Bool)_isCompatibleWatchDevice:(id)arg1;
- (void)updatePeerDeviceAddresses:(id)arg1;
- (void)configure:(id)arg1;
- (_Bool)_rerouteDestinationIfCompanion:(id)arg1 newDestination:(id *)arg2 isConnected:(_Bool *)arg3;
- (_Bool)rerouteDestinationIfCompanion:(id)arg1 newDestination:(id *)arg2 isConnected:(_Bool *)arg3;
- (_Bool)_rerouteDestinationIfWatch:(id)arg1 isConnected:(_Bool *)arg2;
- (_Bool)rerouteDestinationIfWatch:(id)arg1 isConnected:(_Bool *)arg2;
@property(readonly, nonatomic) NSArray *reachableWatchDevices;
@property(readonly, nonatomic) NSArray *reachableCompanionDevices;
@property(readonly, nonatomic) NSSet *pairedWatchAddresses;
- (id)transientDevices;
- (id)residentDevices;
@property(readonly, nonatomic, getter=isAccountActive) _Bool accountActive;
- (void)start;
- (id)initWithIDSService:(id)arg1 proxy:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

