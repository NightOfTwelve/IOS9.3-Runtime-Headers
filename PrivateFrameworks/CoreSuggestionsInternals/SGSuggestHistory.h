//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSUbiquitousKeyValueStore, SGNoCloudNSUbiquitousKeyValueStore;

@interface SGSuggestHistory : NSObject
{
    struct SGHistorySharedData *_privateShared;
    struct SGMutexSynchronizedObject<SGHistorySharedData> *_shared;
    NSData *_deviceSalt;
    NSUbiquitousKeyValueStore *_backingKVStore;
    SGNoCloudNSUbiquitousKeyValueStore *_noCloudFakeBackingKVStore;
}

+ (void)resetNoFlush;
+ (void)reset;
+ (id)newTestingInstanceWithSharedKVS:(id)arg1;
+ (id)sharedSuggestHistory;
- (void).cxx_destruct;
- (_Bool)hasConfirmedField:(id)arg1 value:(id)arg2 forStorageEvent:(id)arg3;
- (void)confirmFieldValues:(id)arg1 forStorageEvent:(id)arg2;
- (id)_hashesForConfirmedField:(id)arg1 value:(id)arg2 storageEvent:(id)arg3;
- (_Bool)hasContactDetail:(id)arg1 forContact:(id)arg2;
- (void)rejectEventFromExternalDevice:(id)arg1;
- (void)confirmEventFromExternalDevice:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)isValidSuggestion:(id)arg1;
- (_Bool)isRejectedEvent:(id)arg1;
- (_Bool)isRejectedEvent:(id)arg1 withScopeLock:(const SGMutexSynchronizedPtr_22985514 *)arg2;
- (_Bool)isConfirmedEvent:(id)arg1;
- (_Bool)isConfirmedEvent:(id)arg1 withScopeLock:(const SGMutexSynchronizedPtr_22985514 *)arg2;
- (_Bool)isUpdatableContact:(id)arg1;
- (_Bool)isValidNewEvent:(id)arg1;
- (_Bool)hasStorageContact:(id)arg1;
- (_Bool)hasContact:(id)arg1;
- (_Bool)_anyHash:(id)arg1 inSet:(id)arg2;
- (void)writeAndPushRejectedEventHashes:(id)arg1;
- (void)rejectStorageEvent:(id)arg1;
- (void)rejectEvent:(id)arg1;
- (void)writeAndPushConfirmedEventHashes:(id)arg1;
- (void)confirmStorageEvent:(id)arg1;
- (void)confirmEvent:(id)arg1;
- (void)confirmContact:(id)arg1;
- (void)rejectContact:(id)arg1;
- (void)confirmOrRejectRecordForContact:(id)arg1;
- (void)confirmOrRejectDetail:(id)arg1 forContact:(id)arg2;
- (void)handleSyncedDataChanged:(id)arg1;
- (void)reset;
- (void)resetNoFlush;
- (id)hashesForPseudoEventByKey:(id)arg1;
- (id)hashesForOpaqueKey:(id)arg1;
- (id)hashesForOpaqueKey:(id)arg1 withCreationTimeFromEpoch:(double)arg2;
- (id)hashesForEvent:(id)arg1;
- (id)identityBasedHashesForPseudoEvent:(id)arg1 withCreationTimeFromEpoch:(double)arg2;
- (id)hashesForContactDetail:(id)arg1 fromContact:(id)arg2;
- (id)hashesForStorageContact:(id)arg1;
- (id)hashesForContact:(id)arg1;
- (id)keysForContactDetail:(id)arg1 ofContact:(id)arg2;
- (id)keysForStorageContact:(id)arg1;
- (id)keysForContact:(id)arg1;
- (void)pushAll:(const SGMutexSynchronizedPtr_22985514 *)arg1;
- (void)setInternalStateAccordingToKVS;
- (void)pushResetInfo:(const SGMutexSynchronizedPtr_22985514 *)arg1;
- (void)pushDontUpdate:(const SGMutexSynchronizedPtr_22985514 *)arg1;
- (void)pushStorageDetails:(const SGMutexSynchronizedPtr_22985514 *)arg1;
- (void)pushContacts:(const SGMutexSynchronizedPtr_22985514 *)arg1;
- (void)pushConfirmedEventFields:(const SGMutexSynchronizedPtr_22985514 *)arg1;
- (void)pushRejectedEvents:(const SGMutexSynchronizedPtr_22985514 *)arg1;
- (void)pushConfirmedEvents:(const SGMutexSynchronizedPtr_22985514 *)arg1;
- (void)_setHashes:(id)arg1 forKey:(id)arg2;
- (void)_tellObserversHashesDidChange;
- (id)description;
- (void)dealloc;
- (id)loadResetInfo;
- (id)setForKey:(id)arg1;
- (id)mutableSetForKey:(id)arg1;
- (id)identitySalt;
- (id)initWithDeviceSalt:(id)arg1;
- (id)initWithDeviceSalt:(id)arg1 andKVS:(id)arg2;
@property(readonly, nonatomic) NSUbiquitousKeyValueStore *kvs;

@end

