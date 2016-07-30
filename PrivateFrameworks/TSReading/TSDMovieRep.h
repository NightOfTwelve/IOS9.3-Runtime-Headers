//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDMediaRep.h>

#import <TSReading/TSKAVPlayerControllerDelegate-Protocol.h>

@class AVAsset, AVPlayerLayer, CALayer, NSString, TSDButtonKnob, TSDFrameRep, TSDMovieInfo, TSKAVPlayerController;

@interface TSDMovieRep : TSDMediaRep <TSKAVPlayerControllerDelegate>
{
    TSKAVPlayerController *mPlayerController;
    _Bool mCurrentlyObservingPlayerLayer;
    _Bool mPlayerLayerShouldBeDisplayed;
    AVPlayerLayer *mPlayerLayer;
    CALayer *mLayerToStroke;
    CALayer *mMovieReflectionLayer;
    CALayer *mMovieReflectionMaskLayer;
    AVPlayerLayer *mReflectionPlayerLayer;
    CALayer *mReflectionPlayerStrokeMaskLayer;
    _Bool mPreventDisposeOfPlayerLayer;
    CALayer *mPlayerStrokeLayer;
    CALayer *mReflectionPlayerStrokeLayer;
    TSDFrameRep *mReflectionFrameRep;
    CALayer *mReflectionFrameMaskLayer;
    AVAsset *mAssetForPlayability;
    _Bool mDidCheckPlayability;
    _Bool mIsPlayable;
    TSDButtonKnob *mPlayButtonKnob;
    _Bool mPlayButtonKnobVisible;
    _Bool mDidCancelUpdatingPlayButtonVisibility;
    _Bool mInReadMode;
    struct CGImage *mAlternatePosterImage;
    unsigned long long mIsChangingDynamicVisibleTimeCount;
    float mDynamicVolume;
    _Bool mIsChangingDynamicVolume;
    _Bool mNeedsTeardownPlayerController;
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2;
@property(nonatomic) struct CGImage *alternatePosterImage; // @synthesize alternatePosterImage=mAlternatePosterImage;
@property(readonly, nonatomic, getter=isPlayable) _Bool playable; // @synthesize playable=mIsPlayable;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dynamicVolumeChangeDidEnd;
- (void)dynamicVolumeUpdateToValue:(float)arg1;
- (void)dynamicVolumeChangeDidBegin;
@property(readonly, nonatomic) float volume;
- (void)dynamicVisibleTimeChangeDidEnd;
- (void)dynamicVisibleTimeUpdateToValue:(double)arg1 withTolerance:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dynamicVisibleTimeChangeDidBegin;
@property(readonly, nonatomic) double visibleTime;
- (_Bool)isDraggable;
- (_Bool)canResetMediaSize;
- (id)additionalLayersOverLayer;
- (id)additionalLayersUnderLayer;
- (void)p_updateEndTime;
- (void)p_updateStartTime;
- (void)p_updateVolume;
- (void)p_teardownPlayerControllerIfNeeded;
- (void)p_setNeedsTeardownPlayerControllerOnUpdateLayer;
- (void)p_teardownPlayerController;
- (void)p_setupPlayerControllerIfNecessary;
- (_Bool)p_shouldPlayerControllerExistThroughoutSelection;
- (void)p_togglePlaying;
- (void)p_playForKnob;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)playbackDidStopForPlayerController:(id)arg1;
- (void)playerController:(id)arg1 playbackDidFailWithError:(id)arg2;
- (id)playerController;
- (void)p_updatePlayButtonVisibility;
@property(readonly, nonatomic) _Bool p_playButtonFitsInFrame;
- (void)p_cancelUpdatingUIStateForMoviePlayability;
- (void)p_stopUpdatingUIStateForMoviePlayability;
- (void)p_updateUIStateForMoviePlayability;
@property(readonly, nonatomic) TSDButtonKnob *p_playButtonKnob;
- (_Bool)shouldShowMediaReplaceUI;
- (void)willEndReadMode;
- (void)willBeginReadMode;
- (void)willBeRemoved;
- (_Bool)directlyManagesVisibilityOfKnob:(id)arg1;
- (unsigned long long)enabledKnobMask;
- (void)addKnobsToArray:(id)arg1;
- (void)p_addPlayButtonToKnobs:(id)arg1;
- (void)screenScaleDidChange;
- (void)p_updateRepeatMode;
- (_Bool)handleSingleTapAtPoint:(struct CGPoint)arg1;
- (_Bool)wantsToHandleTapsWhenLocked;
@property(readonly, nonatomic) _Bool shouldSingleTapPlay;
- (void)becameNotSelected;
- (void)becameSelected;
- (void)processChangedProperty:(int)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(_Bool)arg2 withStroke:(_Bool)arg3 withOpacity:(_Bool)arg4 forAlphaOnly:(_Bool)arg5 drawChildren:(_Bool)arg6;
- (void)p_drawInContext:(struct CGContext *)arg1 withContent:(_Bool)arg2 withStroke:(_Bool)arg3 withOpacity:(double)arg4 withMask:(_Bool)arg5 forShadowOrHitTest:(_Bool)arg6;
- (void)p_drawPosterImageInContext:(struct CGContext *)arg1;
- (void)p_updateMovieReflectionMaskLayer;
- (void)p_drawReflectionGradientIntoMovieReflectionLayer:(struct CGContext *)arg1 reflectionSize:(struct CGSize)arg2;
- (void)p_updateStrokeLayerForStroke:(id)arg1 repLayer:(id)arg2;
- (void)p_applyBasicStrokeToLayer:(id)arg1 layer:(id)arg2 bounds:(struct CGRect)arg3;
- (void)p_drawStrokeInContext:(struct CGContext *)arg1;
- (void)p_drawReflectionStrokeInContext:(struct CGContext *)arg1;
- (void)p_commonDrawStrokeInContext:(struct CGContext *)arg1;
- (void)i_updateFrameRep;
- (void)p_updateReflectionFrameRep;
- (void)updateFromLayout;
- (void)updateLayerGeometryFromLayout:(id)arg1;
- (void)p_placeReflectionPlayerLayer:(struct CGRect)arg1 transform:(struct CGAffineTransform)arg2;
- (void)p_setPositionAndBoundsIfDifferent:(id)arg1 position:(struct CGPoint)arg2 bounds:(struct CGRect)arg3;
- (void)didUpdateLayer:(id)arg1;
- (void)willUpdateLayer:(id)arg1;
- (void)p_arrangeLayerVisibility:(id)arg1;
- (struct CGRect)p_strokeFrameForLayerFrame:(struct CGRect)arg1;
- (void)p_setupStrokeLayers:(_Bool)arg1 needsMaskLayer:(_Bool)arg2 isFrame:(_Bool)arg3;
- (void)p_checkAndsyncTilingLayerState:(_Bool)arg1;
- (void)p_setupPlayerStrokeLayers:(_Bool)arg1;
- (_Bool)p_needsTilingLayerForStroke:(id)arg1;
- (void)setShapeReflectionPlayerStrokeLayer:(id)arg1;
- (void)p_setupTilingReflectionPlayerStrokeLayer;
- (void)p_setupShapeReflectionPlayerStrokeLayer;
- (id)reflectionPlayerStrokeLayer;
- (id)p_tilingLayerForReflectionStroke;
- (id)p_shapeLayerForReflectionStroke;
- (void)p_setupShapePlayerStrokeLayer;
- (void)p_setupTilingPlayerStrokeLayer;
- (id)playerStrokeLayer;
- (id)p_tilingLayerForPlayerStroke;
- (id)p_shapeLayerForPlayerStroke;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)p_setupPlayerLayerIfNecessary;
- (void)p_setupReflectionPlayerLayerIfNecessary;
- (void)createReflectionLayer;
- (void)disposeReflectionLayer;
- (void)p_showReflectionLayer;
- (void)p_hideReflectionLayer;
- (void)p_disposeReflectionStrokeLayers;
- (void)p_disposeMaskLayer;
- (void)p_disposeStrokeLayer;
- (void)p_createReflectionPlayerStrokeMaskLayer;
- (void)p_createMaskLayerForLayer:(id)arg1;
- (_Bool)directlyManagesLayerContent;
- (void)dealloc;
- (id)movieLayout;
@property(readonly, nonatomic) TSDMovieInfo *movieInfo;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

