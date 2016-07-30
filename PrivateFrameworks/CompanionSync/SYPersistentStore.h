//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSError, NSMutableDictionary, NSMutableSet, NSSet, NSString, _SYSharedServiceDB;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface SYPersistentStore : NSObject
{
    NSString *_path;
    struct __CFString *_loggingFacility;
    double _timeToLiveCache;
    NSObject<OS_os_transaction> *_transaction;
    _Bool _changeTrackingEnabled;
    NSMutableDictionary *_peerSeqnoSets;
    NSMutableSet *_ignoringMessageIDs;
    NSObject<OS_dispatch_queue> *_syncQ;
    struct sqlite3 *_db;
    struct sqlite3_stmt *_getInFullSync;
    struct sqlite3_stmt *_getChangeCount;
    struct sqlite3_stmt *_getNextExpireTime;
    struct sqlite3_stmt *_purgeExpiredChanges;
    struct sqlite3_stmt *_insertChange;
    struct sqlite3_stmt *_getFullsyncSent;
    struct sqlite3_stmt *_setFullsyncSent;
    struct sqlite3_stmt *_logSyncComplete;
    struct sqlite3_stmt *_getChangeIDsSinceVersion;
    struct sqlite3_stmt *_getLocalVersion;
    struct sqlite3_stmt *_getOldestVersion;
    struct sqlite3_stmt *_setVectorClock;
    struct sqlite3_stmt *_setPeerSeqNo;
    struct sqlite3_stmt *_getPeerSeqNo;
    struct sqlite3_stmt *_setPeerSeqNoSet;
    struct sqlite3_stmt *_enterFullSync;
    struct sqlite3_stmt *_exitFullSync;
    struct sqlite3_stmt *_getIgnoringSyncID;
    struct sqlite3_stmt *_getCurrentSyncID;
    struct sqlite3_stmt *_getCurrentSyncStartTime;
    struct sqlite3_stmt *_getLastEndedSyncID;
    struct sqlite3_stmt *_getWaitingForSyncID;
    struct sqlite3_stmt *_setWaitingForSyncID;
    struct sqlite3_stmt *_setAllSentForSyncID;
    struct sqlite3_stmt *_getAllSentForCurrentSync;
    struct sqlite3_stmt *_getLastSyncError;
    struct sqlite3_stmt *_setSyncUserInfo;
    struct sqlite3_stmt *_getSyncUserInfo;
    struct sqlite3_stmt *_setSyncIDSOptions;
    struct sqlite3_stmt *_getSyncIDSOptions;
    _Bool _cachedVersionStale;
    NSString *_peerID;
    double _unfinishedSyncTimeout;
    NSSet *_cachedChangedSyncIDs;
    unsigned long long _cachedChangedSyncIDsVersion;
    _SYSharedServiceDB *_sharedDB;
}

+ (id)sharedPersistentStoreForService:(id)arg1;
@property(retain, nonatomic) _SYSharedServiceDB *sharedDB; // @synthesize sharedDB=_sharedDB;
@property(nonatomic) _Bool cachedVersionStale; // @synthesize cachedVersionStale=_cachedVersionStale;
@property(nonatomic) unsigned long long cachedChangedSyncIDsVersion; // @synthesize cachedChangedSyncIDsVersion=_cachedChangedSyncIDsVersion;
@property(retain, nonatomic) NSSet *cachedChangedSyncIDs; // @synthesize cachedChangedSyncIDs=_cachedChangedSyncIDs;
@property(nonatomic) double unfinishedSyncTimeout; // @synthesize unfinishedSyncTimeout=_unfinishedSyncTimeout;
@property(readonly, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;
- (void).cxx_destruct;
- (void)changeTrackingToggled:(_Bool)arg1;
- (void)clearAllChanges;
- (_Bool)objectChanged:(id)arg1 sinceVersion:(unsigned long long)arg2;
- (unsigned long long)_oldestVersion;
- (_Bool)logSyncCompletionToRemoteVersion:(unsigned long long)arg1;
- (_Bool)logChanges:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned long long lastSeenRemoteVersion;
@property(readonly, nonatomic) unsigned long long currentLocalVersion;
@property(readonly, nonatomic) double durationOfLastFullSync;
@property(nonatomic) _Bool completedSync;
@property(copy, nonatomic) NSDictionary *fullSyncIDSOptions;
@property(copy, nonatomic) NSDictionary *fullSyncUserInfo;
@property(copy, nonatomic) NSString *waitingForSyncEndID;
@property(readonly, nonatomic) NSString *lastSyncEndID;
@property(readonly, nonatomic) _Bool inFullSync;
@property(readonly, nonatomic) NSString *currentFullSyncID;
- (void)_verifyInTransactionForFullSync;
@property(readonly, nonatomic) NSError *lastSyncError;
@property(readonly, nonatomic) _Bool lastSyncFailed;
@property(readonly, nonatomic) _Bool currentSyncSendComplete;
- (void)sendCompletedForSyncWithID:(id)arg1;
- (_Bool)ignoringFullSyncWithID:(id)arg1;
- (_Bool)reassignCurrentSyncID:(id)arg1;
- (void)exitFullSyncWithID:(id)arg1 error:(id)arg2;
- (void)enterFullSyncWithID:(id)arg1 ignoring:(_Bool)arg2;
@property(readonly, nonatomic) _Bool canStartNewSyncSession;
@property(copy, nonatomic) NSDate *lastMessageReceived;
@property(copy, nonatomic) NSDate *overflowResyncTime;
@property(retain, nonatomic) NSString *vectorClockJSON;
@property(readonly, nonatomic) unsigned long long changeCount;
@property(nonatomic) double timeToLive;
@property(readonly, nonatomic) NSString *path;
- (void)removeMessageIDFromIgnoreList:(id)arg1;
- (_Bool)shouldIgnoreMessageID:(id)arg1;
- (void)addMessageIDsToIgnore:(id)arg1;
- (void)_saveIgnoreList_LOCKED:(struct sqlite3 *)arg1;
- (void)_loadIgnoreList_LOCKED:(struct sqlite3 *)arg1;
@property(nonatomic, getter=isPerformingDeltaSync) _Bool performingDeltaSync;
- (void)resetSequenceNumbersForPeer:(id)arg1;
- (_Bool)sequenceNumberIsDuplicate:(unsigned long long)arg1 forPeer:(id)arg2;
- (unsigned long long)lastSequenceNumberForPeerID:(id)arg1;
- (unsigned long long)_lastSequenceNumberForPeerID_LOCKED:(id)arg1 db:(struct sqlite3 *)arg2;
- (void)setLastSequenceNumber:(unsigned long long)arg1 fromPeer:(id)arg2;
- (_Bool)setLastSequenceNumber:(unsigned long long)arg1 fromPeer:(id)arg2 error:(id *)arg3;
- (unsigned long long)nextSequenceNumber;
- (void)resetSequenceNumber:(unsigned long long)arg1;
- (void)_cacheTTL;
- (void)_storeSequenceNumberSet:(id)arg1 forPeerID:(id)arg2;
- (_Bool)_LOCKED_storeSequenceNumberSet:(id)arg1 forPeerID:(id)arg2 db:(struct sqlite3 *)arg3 error:(id *)arg4;
- (id)_sequenceNumberSetForPeerID:(id)arg1 inDB:(struct sqlite3 *)arg2;
- (id)_decodeIndexSet:(id)arg1;
- (id)_encodeIndexSet:(id)arg1;
- (void)_fixPeerInfo;
- (_Bool)_inTransaction:(_Bool)arg1 do:(CDUnknownBlockType)arg2;
- (void)_withDB:(CDUnknownBlockType)arg1;
- (void)_convertTimestamps;
- (void)_prepareStatements;
- (void)_setupSharedDB;
- (_Bool)_openDBAtPath:(id)arg1;
- (int)_getSchemaVersion;
- (_Bool)_tableEmpty:(id)arg1 db:(struct sqlite3 *)arg2;
- (struct sqlite3 *)_dbRef;
- (void)dealloc;
- (id)initWithPath:(id)arg1 loggingFacility:(const struct __CFString *)arg2 changeTrackingEnabled:(_Bool)arg3;
- (id)initWithSharedDatabase:(id)arg1;
- (id)init;
- (id)dbPath;
- (id)lastDBErrorInfo;

@end

