//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSIndexSet, PHChange, PHFetchResultChangeDetails;

@interface PUPhotosDataSourceChange : NSObject
{
    long long _previousCollectionsCount;
    NSDictionary *_assetCollectionToSectionCache;
    PHFetchResultChangeDetails *_collectionListChangeDetails;
    NSDictionary *_assetCollectionChangeDetails;
    _Bool _prepared;
    NSIndexSet *_deletedSections;
    NSIndexSet *_insertedSections;
    NSIndexSet *_changedSections;
    NSArray *_deletedIndexPaths;
    NSArray *_insertedIndexPaths;
    NSArray *_changedIndexPaths;
    NSArray *_contentChangedIndexPaths;
    PHChange *_originatingPhotoLibraryChange;
}

@property(readonly) __weak PHChange *originatingPhotoLibraryChange; // @synthesize originatingPhotoLibraryChange=_originatingPhotoLibraryChange;
- (void).cxx_destruct;
- (id)indexPathAfterRevertingIncrementalChangeDetailsFromIndexPath:(id)arg1;
- (id)indexPathAfterApplyingIncrementalChangesToIndexPath:(id)arg1;
- (_Bool)affectsSectionsInRange:(struct _NSRange)arg1;
- (_Bool)_shouldPerformFullReloadForCollectionListChangeNotifications:(id)arg1 collectionChangeNotifications:(id)arg2;
- (void)_prepareIncrementalDetails;
- (void)prepareIfNeeded;
- (id)description;
@property(readonly, copy) NSArray *contentChangedIndexPaths;
@property(readonly, copy) NSArray *changedIndexPaths;
@property(readonly, copy) NSArray *insertedIndexPaths;
@property(readonly, copy) NSArray *deletedIndexPaths;
@property(readonly, copy) NSIndexSet *changedSections;
@property(readonly, copy) NSIndexSet *insertedSections;
@property(readonly, copy) NSIndexSet *deletedSections;
@property(readonly) _Bool hasIncrementalChanges;
- (id)initWithIncrementalChanges:(id)arg1 assetCollectionChangeDetails:(id)arg2 previousCollectionsCount:(long long)arg3 assetCollectionToSectionCache:(id)arg4 originatingPhotoLibraryChange:(id)arg5;
- (id)initWithDeletedIndexPaths:(id)arg1 changedIndexPaths:(id)arg2;
- (id)init;

@end

