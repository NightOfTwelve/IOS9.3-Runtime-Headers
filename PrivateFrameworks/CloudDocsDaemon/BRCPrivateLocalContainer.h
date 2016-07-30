//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCLocalContainer.h>

@class BRCPrivateServerZone, BRCRelativePath, BRContainer, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRCPrivateLocalContainer : BRCLocalContainer
{
    NSMutableArray *_syncBarriers;
    _Bool _containerMetadataNeedsSyncUp;
    BRContainer *_containerMetadata;
    NSString *_containerMetadataEtag;
}

@property(nonatomic) _Bool containerMetadataNeedsSyncUp; // @synthesize containerMetadataNeedsSyncUp=_containerMetadataNeedsSyncUp;
@property(retain, nonatomic) NSString *containerMetadataEtag; // @synthesize containerMetadataEtag=_containerMetadataEtag;
@property(readonly, nonatomic) BRContainer *containerMetadata; // @synthesize containerMetadata=_containerMetadata;
- (void).cxx_destruct;
- (_Bool)validateItemsLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (_Bool)validateStructureLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (void)_checkResultSetIsEmpty:(id)arg1 logToFile:(struct __sFILE *)arg2 reason:(id)arg3 result:(_Bool *)arg4;
- (_Bool)dumpActivityToContext:(id)arg1 error:(id *)arg2;
- (id)resolveClashOfAlias:(id)arg1 atPath:(id)arg2 withAlias:(id)arg3 atPath:(id)arg4;
- (id)createAliasWithTarget:(id)arg1 parentPath:(id)arg2 error:(id *)arg3;
- (_Bool)removeSyncDownForAliasData:(id)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 whenSyncDownCompletesLookingForAliasWithBookmarkData:(id)arg2;
- (_Bool)itemID:(id)arg1 isStrictChildOfItemID:(id)arg2;
- (_Bool)existsByParentID:(id)arg1 andName:(id)arg2;
- (id)faultByParentID:(id)arg1 andDisplayName:(id)arg2;
- (id)reservedItemByParentID:(id)arg1 andDisplayName:(id)arg2;
- (id)aliasByUnsaltedBookmarkData:(id)arg1;
- (id)serverAliasByUnsaltedBookmarkData:(id)arg1;
- (id)itemByParentID:(id)arg1 andName:(id)arg2;
- (id)serverItemByParentID:(id)arg1 andName:(id)arg2;
- (void)signalFaultingWatchers:(id)arg1;
- (void)notifyClient:(id)arg1 whenFaultingIsDone:(CDUnknownBlockType)arg2;
- (_Bool)recomputeAppSyncBlockState;
- (_Bool)checkIfAppSyncShouldBeEnabled;
- (void)scheduleContainerMetadataSyncUp;
- (void)updateWithPlist:(id)arg1;
- (id)plist;
- (void)resume;
- (void)setServerZone:(id)arg1;
- (unsigned int)_activateState:(unsigned int)arg1 origState:(unsigned int)arg2;
- (_Bool)dumpTablesToContext:(id)arg1 error:(id *)arg2;
- (id)initWithContainerID:(id)arg1 dbRowID:(id)arg2 db:(id)arg3 session:(id)arg4 initialCreation:(_Bool)arg5;
- (id)pathRelativeToRoot;
@property(readonly, nonatomic) BRCRelativePath *documentsPath;
@property(readonly, nonatomic) BRCPrivateServerZone *privateZone;
- (id)asPrivateContainer;
@property(readonly, nonatomic) _Bool isSharedContainer;
@property(readonly, nonatomic) _Bool isPrivateContainer;
- (void)_updateContainerMetadataFromRecord:(id)arg1 stripIcons:(_Bool)arg2;

@end

