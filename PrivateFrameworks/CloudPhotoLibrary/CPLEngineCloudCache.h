//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSString;

@interface CPLEngineCloudCache : CPLEngineStorage <CPLAbstractObject>
{
}

- (id)allRecordsIsFinal:(_Bool)arg1;
- (id)recordsOfClass:(Class)arg1 isFinal:(_Bool)arg2;
- (void)getCommittedRecord:(id *)arg1 stagedRecord:(id *)arg2 forIdentifier:(id)arg3;
- (id)resourceOfType:(unsigned long long)arg1 forRecordWithIdentifier:(id)arg2 error:(id *)arg3;
@property(readonly) _Bool hasDoneAFirstSynchronization;
- (id)remainingClassesForInitialQuery;
- (_Bool)resetInitialSyncAnchorWithError:(id *)arg1;
- (id)initialSyncAnchor;
- (_Bool)setInitialSyncAnchor:(id)arg1 error:(id *)arg2;
- (_Bool)markInitialQueryIsDoneForRecordsOfClass:(Class)arg1 error:(id *)arg2;
- (Class)classOfRecordsForInitialQuery;
- (_Bool)disableInitialQueriesWithError:(id *)arg1;
- (unsigned long long)_indexOfCurrentClassForInitialQueries;
- (_Bool)resetSyncAnchorWithError:(id *)arg1;
- (_Bool)setSyncAnchor:(id)arg1 error:(id *)arg2;
- (id)syncAnchor;
- (_Bool)discardStagedChangesWithError:(id *)arg1;
- (_Bool)commitStagedChangesWithError:(id *)arg1;
- (_Bool)remapAllRecordsWithPreviousIdentifier:(id)arg1 newIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)resetWithError:(id *)arg1;
- (id)recordsWithRelatedIdentifier:(id)arg1 isFinal:(_Bool)arg2;
- (_Bool)hasRecordWithIdentifier:(id)arg1;
- (id)confirmedRecordWithIdentifier:(id)arg1;
- (id)recordWithIdentifier:(id)arg1 isFinal:(_Bool)arg2;
- (_Bool)deleteRecordWithIdentifier:(id)arg1 isFinal:(_Bool)arg2 error:(id *)arg3;
- (_Bool)confirmAllRecordsWithError:(id *)arg1;
- (id)cloudChangeBatchFromBatch:(id)arg1 usingMapping:(id)arg2 isFinal:(_Bool)arg3 withError:(id *)arg4;
- (_Bool)_remapRecord:(id)arg1 inBatch:(id)arg2 error:(id *)arg3;
- (_Bool)applyBatch:(id)arg1 isFinal:(_Bool)arg2 withError:(id *)arg3;
- (_Bool)updateRecord:(id)arg1 isFinal:(_Bool)arg2 error:(id *)arg3;
- (_Bool)addRecord:(id)arg1 isFinal:(_Bool)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

