//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUViewModel.h>

#import <PhotosUI/PUAssetSharedViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PUBrowsingIrisPlayerChangeObserver-Protocol.h>
#import <PhotosUI/PUBrowsingVideoPlayerChangeObserver-Protocol.h>
#import <PhotosUI/PUIrisBadgeVisibilityControllerDelegate-Protocol.h>

@class NSNumber, NSString, PUAssetReference, PUAssetSharedViewModel, PUAssetViewModelChange, PUBadgeInfo, PUBrowsingIrisPlayer, PUBrowsingVideoPlayer, PUIrisBadgeVisibilityController, PUMediaProvider, PUModelTileTransform, PUOperationStatus;
@protocol PUDisplayAsset;

@interface PUAssetViewModel : PUViewModel <PUBrowsingIrisPlayerChangeObserver, PUIrisBadgeVisibilityControllerDelegate, PUAssetSharedViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver>
{
    PUBrowsingVideoPlayer *_videoPlayer;
    PUBrowsingIrisPlayer *_irisPlayer;
    PUIrisBadgeVisibilityController *_irisBadgeVisibilityController;
    _Bool _isUserTransformingTile;
    _Bool _isInFocus;
    _Bool _forceBadgesVisible;
    _Bool _wantsIrisBadgeVisible;
    _Bool _isFavorite;
    _Bool _areCommentsVisible;
    _Bool _isInEditMode;
    _Bool __needsUpdateVideoPlayers;
    id <PUDisplayAsset> _asset;
    PUModelTileTransform *_modelTileTransform;
    double _focusValue;
    PUOperationStatus *_loadingStatus;
    PUBadgeInfo *_badgeInfo;
    long long _lastCommentsVisibilityChangeReason;
    PUMediaProvider *_mediaProvider;
    NSNumber *_isFavoriteOverride;
    PUAssetReference *_assetReference;
    PUAssetSharedViewModel *_assetSharedViewModel;
    long long __currentFavoriteOverrideRequest;
    struct CGPoint _commentsOffset;
}

@property(nonatomic, setter=_setCurrentFavoriteOverrideRequest:) long long _currentFavoriteOverrideRequest; // @synthesize _currentFavoriteOverrideRequest=__currentFavoriteOverrideRequest;
@property(nonatomic, setter=_setNeedsUpdateVideoPlayers:) _Bool _needsUpdateVideoPlayers; // @synthesize _needsUpdateVideoPlayers=__needsUpdateVideoPlayers;
@property(retain, nonatomic) PUAssetSharedViewModel *assetSharedViewModel; // @synthesize assetSharedViewModel=_assetSharedViewModel;
@property(retain, nonatomic) PUAssetReference *assetReference; // @synthesize assetReference=_assetReference;
@property(copy, nonatomic) NSNumber *isFavoriteOverride; // @synthesize isFavoriteOverride=_isFavoriteOverride;
@property(retain, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(nonatomic) _Bool isInEditMode; // @synthesize isInEditMode=_isInEditMode;
- (void)_setLastCommentsVisibilityChangeReason:(long long)arg1;
@property(nonatomic) long long lastCommentsVisibilityChangeReason; // @synthesize lastCommentsVisibilityChangeReason=_lastCommentsVisibilityChangeReason;
@property(nonatomic) _Bool areCommentsVisible; // @synthesize areCommentsVisible=_areCommentsVisible;
@property(nonatomic) struct CGPoint commentsOffset; // @synthesize commentsOffset=_commentsOffset;
@property(nonatomic) _Bool isFavorite; // @synthesize isFavorite=_isFavorite;
@property(copy, nonatomic) PUBadgeInfo *badgeInfo; // @synthesize badgeInfo=_badgeInfo;
@property(readonly, copy, nonatomic) PUOperationStatus *loadingStatus; // @synthesize loadingStatus=_loadingStatus;
@property(nonatomic) _Bool wantsIrisBadgeVisible; // @synthesize wantsIrisBadgeVisible=_wantsIrisBadgeVisible;
@property(nonatomic) _Bool forceBadgesVisible; // @synthesize forceBadgesVisible=_forceBadgesVisible;
@property(nonatomic) double focusValue; // @synthesize focusValue=_focusValue;
@property(nonatomic) _Bool isInFocus; // @synthesize isInFocus=_isInFocus;
@property(nonatomic, setter=setUserTransformingTile:) _Bool isUserTransformingTile; // @synthesize isUserTransformingTile=_isUserTransformingTile;
@property(copy, nonatomic) PUModelTileTransform *modelTileTransform; // @synthesize modelTileTransform=_modelTileTransform;
@property(retain, nonatomic) id <PUDisplayAsset> asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)irisBadgeTileInfo:(id)arg1 didTransitionToAppearanceState:(unsigned long long)arg2;
- (id)debugDetailedDescription;
- (void)_handleBrowsingIrisPlayer:(id)arg1 didChange:(id)arg2;
- (void)_handleBrowsingVideoPlayer:(id)arg1 didChange:(id)arg2;
- (void)_handleAssetSharedViewModel:(id)arg1 didChange:(id)arg2;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)setCommentsVisible:(_Bool)arg1;
- (void)setCommentsVisible:(_Bool)arg1 changeReason:(long long)arg2;
- (void)_setWantsIrisBadgeVisible:(_Bool)arg1;
@property(readonly, nonatomic) PUBrowsingIrisPlayer *irisPlayer;
@property(readonly, nonatomic) PUBrowsingVideoPlayer *videoPlayer;
- (void)_updateWantsIrisBadgeVisible;
- (void)_updateVideoPlayersIfNeeded;
- (void)_invalidateVideoPlayers;
- (void)_updateVideoPlayersLoadingAllowed;
- (void)_setLoadingStatus:(id)arg1;
- (void)_setFavorite:(_Bool)arg1;
- (void)_updateFavoriteState;
- (void)_pauseAndRewindVideoIfNeeded;
- (_Bool)_shouldPauseAndRewindVideo;
- (void)setInFocus:(_Bool)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
@property(readonly, nonatomic) PUAssetViewModelChange *currentChange;
- (id)newViewModelChange;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

