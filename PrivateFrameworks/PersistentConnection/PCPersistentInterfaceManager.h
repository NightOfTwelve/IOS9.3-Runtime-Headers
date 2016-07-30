//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PersistentConnection/PCInterfaceMonitorDelegate-Protocol.h>

@class NSMapTable, NSRecursiveLock, NSString, NSTimer, PCSimpleTimer;

@interface PCPersistentInterfaceManager : NSObject <PCInterfaceMonitorDelegate>
{
    NSRecursiveLock *_lock;
    NSMapTable *_delegatesAndQueues;
    struct __CFSet *_WiFiAutoAssociationDelegates;
    PCSimpleTimer *_WiFiAutoAssociationDisableTimer;
    struct __CFSet *_wakeOnWiFiDelegates;
    PCSimpleTimer *_wakeOnWiFiDisableTimer;
    void *_ctServerConnection;
    void *_interfaceAssertion;
    int _WWANContextIdentifier;
    NSString *_WWANInterfaceName;
    _Bool _isWWANInterfaceUp;
    NSTimer *_inCallWWANOverrideTimer;
    _Bool _isWWANInterfaceDataActive;
    _Bool _ctIsWWANInHomeCountry;
    _Bool _hasWWANStatusIndicator;
    _Bool _isPowerStateDetectionSupported;
    _Bool _isWWANInterfaceInProlongedHighPowerState;
    _Bool _isWWANInterfaceActivationPermitted;
    double _lastActivationTime;
    int _wwanRSSI;
    _Bool _isInCall;
    _Bool _isWakeOnWiFiSupported;
    _Bool _isWakeOnWiFiEnabled;
    _Bool _shouldOverrideOnCallBehavior;
}

+ (id)sharedInstance;
- (id)urlConnectionBoundToWWANInterfaceWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(_Bool)arg3 maxContentLength:(long long)arg4 startImmediately:(_Bool)arg5 connectionProperties:(id)arg6;
- (id)urlConnectionBoundToWWANInterface:(_Bool)arg1 withRequest:(id)arg2 delegate:(id)arg3 usesCache:(_Bool)arg4 maxContentLength:(long long)arg5 startImmediately:(_Bool)arg6 connectionProperties:(id)arg7;
- (void)bindCFStreamToWWANInterface:(struct __CFReadStream *)arg1;
- (void)bindCFStream:(struct __CFReadStream *)arg1 toWWANInterface:(_Bool)arg2;
- (_Bool)_allowBindingToWWAN;
- (void)_adjustWakeOnWiFiLocked;
- (void)_adjustWakeOnWiFi;
- (_Bool)_wantsWakeOnWiFiEnabled;
- (void)enableWakeOnWiFi:(_Bool)arg1 forDelegate:(id)arg2;
- (void)_adjustWiFiAutoAssociationLocked;
- (void)_adjustWiFiAutoAssociation;
- (void)enableWiFiAutoAssociation:(_Bool)arg1 forDelegate:(id)arg2;
- (void)_updateWWANInterfaceAssertionsLocked;
- (void)_updateWWANInterfaceAssertions;
- (_Bool)_wantsWWANInterfaceAssertion;
- (void)cutWiFiManagerDeviceAttached:(id)arg1;
@property(readonly) _Bool areAllNetworkInterfacesDisabled;
@property(readonly) _Bool isWakeOnWiFiSupported;
- (_Bool)_isWiFiUsable;
@property(readonly) _Bool isInternetReachableViaWiFi;
@property(readonly) _Bool isInternetReachable;
- (_Bool)_isInternetReachableLocked;
@property(readonly) _Bool isInCall;
@property(readonly) _Bool isWWANInHomeCountry;
- (_Bool)_isWWANInHomeCountryLocked;
@property(readonly) _Bool isWWANInterfaceActivationPermitted;
@property(readonly) _Bool isWWANInterfaceInProlongedHighPowerState;
@property(readonly) _Bool isPowerStateDetectionSupported;
@property(readonly) _Bool doesWWANInterfaceExist;
@property(readonly) NSString *WWANInterfaceName;
@property(readonly) _Bool isWWANInterfaceUp;
@property(readonly) _Bool isWWANBetterThanWiFi;
- (void)_scheduleCalloutsForSelector:(SEL)arg1;
- (_Bool)_wifiIsPoorLinkQuality;
- (_Bool)_wwanIsPoorLinkQuality;
@property(readonly, retain, nonatomic) NSString *currentLinkQualityString;
- (void)_updateCTIsWWANInHomeCountry:(_Bool)arg1 isWWANInterfaceDataActive:(_Bool)arg2;
- (void)_updateWWANInterfaceUpState;
- (void)_updateWWANInterfaceUpStateLocked;
- (void)_clearInCallWWANOverrideTimerLocked;
- (void)_inCallWWANOverrideTimerFired;
- (void)handleMachMessage:(void *)arg1;
- (void)interfaceReachabilityChanged:(id)arg1;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)_ctConnectionAttempt;
- (void)_mainThreadCTConnectionAttempt;
- (void)_createCTConnection;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

