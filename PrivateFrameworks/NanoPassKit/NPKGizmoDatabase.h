//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NPKGizmoDatabase : NSObject
{
    struct sqlite3 *_database;
    struct sqlite3_stmt *_deleteStatement;
    struct sqlite3_stmt *_insertStatement;
    struct sqlite3_stmt *_insertDiffStatement;
    struct sqlite3_stmt *_selectPassDataStatement;
    struct sqlite3_stmt *_selectPassDiffStatement;
    struct sqlite3_stmt *_updateDeletePendingStatment;
    struct sqlite3_stmt *_selectDeletePendingStatement;
    struct sqlite3_stmt *_updatePreferredAIDStatement;
    struct sqlite3_stmt *_selectPreferredAIDStatement;
    NSObject<OS_dispatch_queue> *_dbQueue;
    _Bool _isInTransaction;
    NSMutableDictionary *_manifest;
    NSMutableArray *_passDescriptions;
    NSArray *_libraryHashes;
    int _externallyChangedBroadcasts;
    _Bool _sendingLocalNotifyDatabaseChanged;
    _Bool _needsMoreLocalNotifyDatabaseChanged;
    _Bool _passDBIsAvailable;
}

+ (unsigned long long)latestWatchOSMajorVersion;
+ (void)setMigrationDataSource:(id)arg1;
+ (id)_migrationDataSource;
+ (id)_migrationDelegateQueue;
+ (long long)maxDatabaseVersion;
+ (id)sharedDatabase;
@property(nonatomic) _Bool passDBIsAvailable; // @synthesize passDBIsAvailable=_passDBIsAvailable;
- (void).cxx_destruct;
- (void)_attemptDatabaseOpen;
- (void)_handleHasMigrationDataSource;
- (void)_handleFirstUnlock;
- (void)_handleDatabaseChangedExternally;
- (_Bool)_preconditionsMetForDatabaseOpen;
- (void)_updateDatabaseVersionRow:(long long)arg1;
- (void)_insertDatabaseVersionRow:(long long)arg1;
- (long long)_databaseVersionExists:(_Bool *)arg1 valid:(_Bool *)arg2;
- (_Bool)_migrateDatabase:(CDUnknownBlockType)arg1;
- (void)enumerateAllPassesAndDescriptionsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAllPassesWithBlock:(CDUnknownBlockType)arg1;
- (id)manifestHashesForWatchOSMajorVersion:(unsigned long long)arg1;
@property(readonly) NSDictionary *manifestHashes; // @dynamic manifestHashes;
- (id)_libraryHashLockedForWatchOSMajorVersion:(unsigned long long)arg1;
- (id)libraryHashForWatchOSMajorVersion:(unsigned long long)arg1;
@property(readonly) NSData *libraryHash; // @dynamic libraryHash;
@property(readonly) NSArray *passDescriptions;
- (id)_getPreferredPaymentApplicationForPaymentPass:(id)arg1 aid:(id *)arg2;
- (id)preferredPaymentApplicationForPaymentPass:(id)arg1;
- (void)setPreferredPaymentApplication:(id)arg1 forPaymentPass:(id)arg2;
- (_Bool)_getDeletePendingForUniqueID:(id)arg1;
- (void)setDeletePending:(_Bool)arg1 forUniqueID:(id)arg2;
- (id)diffForUniqueID:(id)arg1;
- (id)passForUniqueID:(id)arg1;
- (void)_saveDiffLocked:(id)arg1 forPassWithUniqueID:(id)arg2;
- (id)_diffForUniqueIDLocked:(id)arg1;
- (id)_passForUniqueIDLocked:(id)arg1;
- (_Bool)_updateSettingsDuringMigration:(id)arg1;
- (_Bool)_updateHasStoredValueDuringMigration:(id)arg1;
- (_Bool)_updateEncodedPaymentPassDuringMigration:(id)arg1;
- (_Bool)_updateHasUserSelectablePaymentApplications:(id)arg1;
- (_Bool)_updateEffectivePaymentApplicationStateDuringMigration:(id)arg1;
- (_Bool)_updateCompleteHashesDuringMigration:(id)arg1;
- (_Bool)_updateIngestedDatesDuringMigration:(id)arg1;
- (_Bool)_updateDeviceAndPreferredPaymentApplicationsDuringMigration:(id)arg1;
- (_Bool)_updatePrivateLabelAndCobrandDuringMigration:(id)arg1;
- (_Bool)_updateNFCPayloadDuringMigration:(id)arg1;
- (void)_enumerateAllPassesForMigration:(CDUnknownBlockType)arg1;
- (_Bool)_removePassWithUniqueIDLocked:(id)arg1;
- (void)_savePassLocked:(id)arg1 wasUpdate:(_Bool *)arg2;
- (_Bool)_passDBIsAvailableLocked;
@property(readonly, nonatomic) unsigned long long numberOfPasses;
- (void)_notifyDatabaseChangedExternally;
- (void)_notifyDatabaseChangedWithNoop:(_Bool)arg1 firstUnlock:(_Bool)arg2;
- (void)_notifyForFirstUnlock;
- (void)_notifyDatabaseChangedWithNoop:(_Bool)arg1;
- (id)rebuildDatabaseWithPasses:(id)arg1;
- (id)removePassWithUniqueID:(id)arg1;
- (void)saveDiff:(id)arg1 forPassWithUniqueID:(id)arg2;
- (id)savePass:(id)arg1;
- (id)_decodeObjectOfClass:(Class)arg1 fromStatment:(struct sqlite3_stmt *)arg2 column:(int)arg3;
- (void)_performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void)_loadInitialManifestLocked;
@property(readonly) struct sqlite3_stmt *selectPassDiffStatement; // @dynamic selectPassDiffStatement;
@property(readonly) struct sqlite3_stmt *selectPassDataStatement; // @dynamic selectPassDataStatement;
@property(readonly) struct sqlite3_stmt *selectPreferredAIDStatement;
@property(readonly) struct sqlite3_stmt *updatePreferredAIDStatement;
- (struct sqlite3_stmt *)selectDeletePendingStatement;
@property(readonly) struct sqlite3_stmt *updateDeletePendingStatement;
@property(readonly) struct sqlite3_stmt *insertDiffStatement;
@property(readonly) struct sqlite3_stmt *insertStatement; // @dynamic insertStatement;
@property(readonly) struct sqlite3_stmt *deleteStatement; // @dynamic deleteStatement;
@property(readonly) struct sqlite3 *database; // @dynamic database;
- (void)_executeSQLQuery:(id)arg1 processResultsBlock:(CDUnknownBlockType)arg2;
- (_Bool)_executeSQL:(id)arg1;
- (void)dealloc;
- (id)init;

@end

