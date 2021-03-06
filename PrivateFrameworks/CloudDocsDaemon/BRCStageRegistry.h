//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCLowDiskDelegate-Protocol.h>
#import <CloudDocsDaemon/BRCModule-Protocol.h>

@class BRCAccountSession, BRCStagePersistedState, NSMutableDictionary, NSMutableSet, NSString, brc_task_tracker;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BRCStageRegistry : NSObject <BRCModule, BRCLowDiskDelegate>
{
    BRCAccountSession *_session;
    NSString *_stageDirectoryPath[6];
    unsigned long long _stageDirectoryFileID[6];
    NSMutableSet *_unflushedStagedFileIDs;
    NSMutableSet *_containersWithUnflushedFileIDs;
    NSMutableSet *_activeUploadStageIDs;
    NSMutableSet *_activeDownloadStageIDs;
    NSMutableDictionary *_lockedFileIDs;
    NSObject<OS_dispatch_source> *_lockedTestTimer;
    NSObject<OS_dispatch_queue> *_flushingQueue;
    BRCStagePersistedState *_persistedState;
    _Bool _lowDiskSpace;
    // Error parsing type: Ai, name: _suspendCount
    NSObject<OS_dispatch_queue> *_queue;
    brc_task_tracker *_tracker;
    _Bool _isCancelled;
    int _deviceID;
}

+ (void)migrateStageToVersion2_0WithSession:(id)arg1;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, nonatomic) int deviceID; // @synthesize deviceID=_deviceID;
- (void).cxx_destruct;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (void)disarmLockedTestTimer;
- (void)close;
- (long long)garbageCollectSpace:(long long)arg1 withUrgency:(int)arg2;
- (long long)purgeGraveyardSpace:(long long)arg1 withUrgency:(int)arg2;
- (long long)purgableSpace;
- (void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(_Bool)arg2;
- (long long)purgeSpace:(long long)arg1 withUrgency:(int)arg2;
- (long long)_purgeSpaceUnderQueue:(long long)arg1 withUrgency:(int)arg2;
- (_Bool)transferDocumentID:(unsigned int)arg1 fromOldVersionStage:(unsigned long long)arg2 toStage:(unsigned long long)arg3;
- (_Bool)existsInOldVersionStage:(unsigned long long)arg1 generationID:(unsigned int *)arg2;
- (_Bool)existsInStage:(unsigned long long)arg1 generationID:(unsigned int *)arg2;
- (_Bool)moveToGraveyardFromPath:(id)arg1 forItemID:(id)arg2 error:(id *)arg3;
- (_Bool)moveOldVersionFromPath:(id)arg1 error:(id *)arg2;
- (_Bool)moveFromStageToGraveyard:(unsigned long long)arg1 forItemID:(id)arg2;
- (_Bool)_graveyardAt:(int)arg1 path:(id)arg2 forItemID:(id)arg3;
- (void)cleanupStagedDownloadWithID:(id)arg1 forItemID:(id)arg2;
- (_Bool)rememberStagedDownloadWithID:(id)arg1 gatherFileID:(unsigned long long *)arg2 generationID:(unsigned int *)arg3 documentID:(unsigned int *)arg4 container:(id)arg5 error:(id *)arg6;
- (id)createURLForDownloadWithStageID:(id)arg1 name:(id)arg2;
- (void)associateDownloadStageID:(id)arg1 withOperation:(id)arg2;
- (void)cleanupStagedUploadWithID:(id)arg1;
- (id)createURLForUploadWithStageID:(id)arg1 name:(id)arg2;
- (void)associateUploadStageID:(id)arg1 withOperation:(id)arg2;
- (void)applyMetadataOnFileDescriptor:(int)arg1 liveFileDescriptor:(int)arg2 container:(id)arg3 statInfo:(id)arg4 version:(id)arg5;
- (_Bool)moveFromStage:(unsigned long long)arg1 toPath:(id)arg2 fileName:(id)arg3 error:(id *)arg4;
- (id)_pathInStage:(unsigned long long)arg1 index:(unsigned char *)arg2 generationID:(unsigned int *)arg3;
- (_Bool)copyPackageFileWithPackageFd:(int)arg1 toStageFd:(int)arg2 relpath:(id)arg3;
- (_Bool)makeSideFaultInStageGatherFileID:(unsigned long long *)arg1 generationID:(unsigned int *)arg2 documentID:(unsigned int *)arg3 properties:(id)arg4 inContainer:(id)arg5 forCreation:(_Bool)arg6 error:(id *)arg7;
- (id)makeNonLocalVersionSideFaultWithAdditionName:(id)arg1 container:(id)arg2 statInfo:(id)arg3 version:(id)arg4 error:(id *)arg5;
- (id)nonLocalFaultURLForAdditionName:(id)arg1;
- (_Bool)makeDirectoryInStageGatherFileID:(unsigned long long *)arg1 generationID:(unsigned int *)arg2 inContainer:(id)arg3 error:(id *)arg4;
- (int)_performInStageDirectory:(unsigned char)arg1 block:(CDUnknownBlockType)arg2;
- (int)_openStageDirectory:(unsigned char)arg1;
- (_Bool)mayLockFileID:(unsigned long long)arg1;
- (void)forgetWatchedLockedFileIDsForContainer:(id)arg1;
- (void)forgetWatchedLockedFileID:(unsigned long long)arg1;
- (void)_watchLockedRelpath:(id)arg1;
- (void)_testLockedFiles;
- (void)willFlushAllStagedFileIDs;
- (_Bool)didFlushStagedFileID:(unsigned long long)arg1;
- (void)open;
- (void)dealloc;
- (id)initWithAccountSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

