//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerItem, ISAsset, ISCrossfadeItem, NSError, NSHashTable;
@protocol OS_dispatch_queue;

@interface ISPlayerItem : NSObject
{
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
    float _videoCropFactor;
    _Bool __needsToLoadVideoPlayerItem;
    _Bool __needsToLoadCrossfadeItem;
    _Bool __loadingCancelled;
    _Bool _reversesMoreVideoFramesInMemory;
    _Bool _aggressivelyCacheVideoFrames;
    _Bool _shouldLoadCrossfadeContent;
    _Bool _preparesForVitalityOnLoad;
    ISAsset *_asset;
    long long _status;
    NSError *_error;
    long long _loadingTarget;
    AVPlayerItem *_videoPlayerItem;
    ISCrossfadeItem *_crossfadeItem;
    double _photoTime;
    struct CGImage *_photo;
    long long __crossfadeItemRequestID;
    long long __videoPlayerItemRequestID;
    struct CGSize _targetSize;
    CDStruct_e83c9415 _trimmedTimeRange;
}

+ (id)playerItemWithAsset:(id)arg1 targetSize:(struct CGSize)arg2 trimmedTimeRange:(CDStruct_e83c9415)arg3;
+ (id)playerItemWithAsset:(id)arg1 targetSize:(struct CGSize)arg2;
@property(nonatomic, setter=_setVideoPlayerItemRequestID:) long long _videoPlayerItemRequestID; // @synthesize _videoPlayerItemRequestID=__videoPlayerItemRequestID;
@property(nonatomic, setter=_setCrossfadeItemRequestID:) long long _crossfadeItemRequestID; // @synthesize _crossfadeItemRequestID=__crossfadeItemRequestID;
@property(nonatomic) _Bool preparesForVitalityOnLoad; // @synthesize preparesForVitalityOnLoad=_preparesForVitalityOnLoad;
@property(nonatomic) _Bool shouldLoadCrossfadeContent; // @synthesize shouldLoadCrossfadeContent=_shouldLoadCrossfadeContent;
@property(nonatomic) _Bool aggressivelyCacheVideoFrames; // @synthesize aggressivelyCacheVideoFrames=_aggressivelyCacheVideoFrames;
@property(nonatomic) _Bool reversesMoreVideoFramesInMemory; // @synthesize reversesMoreVideoFramesInMemory=_reversesMoreVideoFramesInMemory;
@property(nonatomic, getter=_isLoadingCancelled, setter=_setLoadingCancelled:) _Bool _loadingCancelled; // @synthesize _loadingCancelled=__loadingCancelled;
@property(nonatomic, setter=_setNeedsToLoadCrossfadeItem:) _Bool _needsToLoadCrossfadeItem; // @synthesize _needsToLoadCrossfadeItem=__needsToLoadCrossfadeItem;
@property(nonatomic, setter=_setNeedsToLoadVideoPlayerItem:) _Bool _needsToLoadVideoPlayerItem; // @synthesize _needsToLoadVideoPlayerItem=__needsToLoadVideoPlayerItem;
@property(readonly, nonatomic) struct CGImage *photo; // @synthesize photo=_photo;
@property(readonly, nonatomic) double photoTime; // @synthesize photoTime=_photoTime;
@property(retain, nonatomic, setter=_setCrossfadeItem:) ISCrossfadeItem *crossfadeItem; // @synthesize crossfadeItem=_crossfadeItem;
@property(retain, nonatomic, setter=_setVideoPlayerItem:) AVPlayerItem *videoPlayerItem; // @synthesize videoPlayerItem=_videoPlayerItem;
@property(readonly, nonatomic) float videoCropFactor; // @synthesize videoCropFactor=_videoCropFactor;
@property(readonly, nonatomic) CDStruct_e83c9415 trimmedTimeRange; // @synthesize trimmedTimeRange=_trimmedTimeRange;
@property(nonatomic) long long loadingTarget; // @synthesize loadingTarget=_loadingTarget;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(readonly) ISAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)dealloc;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)_enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)_setStatus:(long long)arg1;
- (void)_updateStatus;
- (void)_setError:(id)arg1;
- (void)_configureVideoPlayerItem;
- (void)_setVideoPlayerItem:(id)arg1 cropFactor:(float)arg2;
- (void)_handleCrossfadeLoadingResultWithSuccess:(_Bool)arg1 crossfadeItem:(id)arg2 error:(id)arg3;
- (void)_loadCrossfadeItemIfNeeded;
- (void)_handleVideoPlayerItemLoadResultWithSuccess:(_Bool)arg1 playerItem:(id)arg2 videoCropFactor:(float)arg3 error:(id)arg4;
- (void)_loadVideoPlayerItemIfNeeded;
- (void)_loadNextResourceIfNeeded;
- (_Bool)_needsToLoadContent;
- (void)resetAVObjects;
- (void)cancelLoading;
- (id)initWithAsset:(id)arg1 targetSize:(struct CGSize)arg2 trimmedTimeRange:(CDStruct_e83c9415)arg3;
- (id)initWithAsset:(id)arg1 targetSize:(struct CGSize)arg2;
- (id)init;

@end

