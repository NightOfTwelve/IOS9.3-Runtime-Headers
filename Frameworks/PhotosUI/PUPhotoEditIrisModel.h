//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUViewModel.h>

#import <PhotosUI/NSCopying-Protocol.h>

@class PHAsset, PLPhotoEditModel, PUPhotoEditIrisModelChange;

@interface PUPhotoEditIrisModel : PUViewModel <NSCopying>
{
    _Bool _videoEnabled;
    _Bool _ignoresUpdates;
    unsigned short __visibilityState;
    PHAsset *_asset;
    PLPhotoEditModel *_photoEditModel;
}

+ (void)updateChangeRequestForRevert:(id)arg1;
@property(nonatomic, setter=_setVisibilityState:) unsigned short _visibilityState; // @synthesize _visibilityState=__visibilityState;
@property(nonatomic) _Bool ignoresUpdates; // @synthesize ignoresUpdates=_ignoresUpdates;
@property(nonatomic, getter=isVideoEnabled) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(retain, nonatomic) PLPhotoEditModel *photoEditModel; // @synthesize photoEditModel=_photoEditModel;
- (void)_setAsset:(id)arg1;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)_setVideoEnabled:(_Bool)arg1 explicitly:(_Bool)arg2;
- (id)newViewModelChange;
@property(readonly, nonatomic) PUPhotoEditIrisModelChange *currentChange;
- (void)_updateAutoDisableStateIfNeeded;
- (void)_photoEditModelDidChange:(id)arg1;
- (void)_setPhotoEditModel:(id)arg1;
- (void)updateChangeRequestForSave:(id)arg1;
@property(readonly, nonatomic) _Bool hasUnsavedChanges;
- (_Bool)shouldWarnIrisRemovesEdits;
- (_Bool)presentWarningForVideoAutoDisableIfNeededInViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notifyPluginDidEdit;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAsset:(id)arg1 editModel:(id)arg2;
- (id)init;

@end
