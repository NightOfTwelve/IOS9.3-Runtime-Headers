//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, PLCloudPhotoLibraryManager, PLPhotoLibrary;

@interface PLCloudBatchDownloader : NSObject
{
    PLPhotoLibrary *_photoLibrary;
    PLCloudPhotoLibraryManager *_manager;
    NSMutableArray *_photos;
    NSMutableArray *_videos;
}

@property(retain, nonatomic) NSMutableArray *videos; // @synthesize videos=_videos;
@property(retain, nonatomic) NSMutableArray *photos; // @synthesize photos=_photos;
- (void)_triggerBackgroundDownloadFailureForResources:(id)arg1;
- (void)handleIncomingBatch:(id)arg1;
- (id)deletedRecordUuidsFromBatch:(id)arg1;
- (void)_handleRelationsForAlbumRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_handleRelationsForAssetRecords:(id)arg1 inLibrary:(id)arg2;
- (id)_debugPrintAlbumOrderForAssets:(id)arg1;
- (void)_handleExpungedRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_handleDeleteRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_handleAssetRecords:(id)arg1 inLibrary:(id)arg2 withChangeBatch:(id)arg3;
- (id)_findMaster:(id)arg1 fromAdditionalRecordInBatch:(id)arg2 inLibrary:(id)arg3;
- (void)_handleMasterRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_handleAlbumRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_handlePersonRecords:(id)arg1 inLibrary:(id)arg2;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1 withManager:(id)arg2;

@end

