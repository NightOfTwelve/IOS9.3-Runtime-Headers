//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface ISPlaybackSpec : NSObject
{
    NSHashTable *_observers;
    _Bool _shouldScaleAndBlurForPlayback;
    _Bool _shouldSettleAutomatically;
    _Bool _allowVitality;
    _Bool _allowAudio;
    _Bool _useTransition;
    _Bool _useVitalityBuffer;
    _Bool _useForceTouchInitiatedPlayback;
    _Bool _useForceScrubPlayback;
    _Bool _useForcePlayratePlayback;
    _Bool _wantsCrossfadeLayer;
    _Bool _aggressivelyCachesVideoFrames;
    _Bool _reversesMoreVideoFramesInMemory;
    double _timeMultiplier;
    double _preCrossfadeDuration;
    double _playbackTransitionBlurRadius;
    double _playbackTransitionScale;
    double _vitalityPreDuration;
    double _vitalityPostDuration;
    double _playbackPreDuration;
    double _playbackPostDuration;
    double _playbackTransitionDuration;
    double _playbackTransitionCrossfadeDelay;
    double _settleTransitionDuration;
    double _vitalityTransitionDuration;
    double _endVitalityTransitionDuration;
    struct CGPoint _transitionBlurTimingFunctionControlPoint1;
    struct CGPoint _transitionBlurTimingFunctionControlPoint2;
    struct CGPoint _transitionScaleTimingFunctionControlPoint1;
    struct CGPoint _transitionScaleTimingFunctionControlPoint2;
    struct CGPoint _transitionFadeTimingFunctionControlPoint1;
    struct CGPoint _transitionFadeTimingFunctionControlPoint2;
}

@property(nonatomic) _Bool reversesMoreVideoFramesInMemory; // @synthesize reversesMoreVideoFramesInMemory=_reversesMoreVideoFramesInMemory;
@property(nonatomic) _Bool aggressivelyCachesVideoFrames; // @synthesize aggressivelyCachesVideoFrames=_aggressivelyCachesVideoFrames;
@property(nonatomic) _Bool wantsCrossfadeLayer; // @synthesize wantsCrossfadeLayer=_wantsCrossfadeLayer;
@property(nonatomic) _Bool useForcePlayratePlayback; // @synthesize useForcePlayratePlayback=_useForcePlayratePlayback;
@property(nonatomic) _Bool useForceScrubPlayback; // @synthesize useForceScrubPlayback=_useForceScrubPlayback;
@property(nonatomic) _Bool useForceTouchInitiatedPlayback; // @synthesize useForceTouchInitiatedPlayback=_useForceTouchInitiatedPlayback;
@property(nonatomic) _Bool useVitalityBuffer; // @synthesize useVitalityBuffer=_useVitalityBuffer;
@property(nonatomic) _Bool useTransition; // @synthesize useTransition=_useTransition;
@property(nonatomic) _Bool allowAudio; // @synthesize allowAudio=_allowAudio;
@property(nonatomic) _Bool allowVitality; // @synthesize allowVitality=_allowVitality;
@property(nonatomic) struct CGPoint transitionFadeTimingFunctionControlPoint2; // @synthesize transitionFadeTimingFunctionControlPoint2=_transitionFadeTimingFunctionControlPoint2;
@property(nonatomic) struct CGPoint transitionFadeTimingFunctionControlPoint1; // @synthesize transitionFadeTimingFunctionControlPoint1=_transitionFadeTimingFunctionControlPoint1;
@property(nonatomic) struct CGPoint transitionScaleTimingFunctionControlPoint2; // @synthesize transitionScaleTimingFunctionControlPoint2=_transitionScaleTimingFunctionControlPoint2;
@property(nonatomic) struct CGPoint transitionScaleTimingFunctionControlPoint1; // @synthesize transitionScaleTimingFunctionControlPoint1=_transitionScaleTimingFunctionControlPoint1;
@property(nonatomic) struct CGPoint transitionBlurTimingFunctionControlPoint2; // @synthesize transitionBlurTimingFunctionControlPoint2=_transitionBlurTimingFunctionControlPoint2;
@property(nonatomic) struct CGPoint transitionBlurTimingFunctionControlPoint1; // @synthesize transitionBlurTimingFunctionControlPoint1=_transitionBlurTimingFunctionControlPoint1;
@property(nonatomic) double endVitalityTransitionDuration; // @synthesize endVitalityTransitionDuration=_endVitalityTransitionDuration;
@property(nonatomic) double vitalityTransitionDuration; // @synthesize vitalityTransitionDuration=_vitalityTransitionDuration;
@property(nonatomic) double settleTransitionDuration; // @synthesize settleTransitionDuration=_settleTransitionDuration;
@property(nonatomic) double playbackTransitionCrossfadeDelay; // @synthesize playbackTransitionCrossfadeDelay=_playbackTransitionCrossfadeDelay;
@property(nonatomic) double playbackTransitionDuration; // @synthesize playbackTransitionDuration=_playbackTransitionDuration;
@property(nonatomic) double playbackPostDuration; // @synthesize playbackPostDuration=_playbackPostDuration;
@property(nonatomic) double playbackPreDuration; // @synthesize playbackPreDuration=_playbackPreDuration;
@property(nonatomic) double vitalityPostDuration; // @synthesize vitalityPostDuration=_vitalityPostDuration;
@property(nonatomic) double vitalityPreDuration; // @synthesize vitalityPreDuration=_vitalityPreDuration;
@property(nonatomic) double playbackTransitionScale; // @synthesize playbackTransitionScale=_playbackTransitionScale;
@property(nonatomic) double playbackTransitionBlurRadius; // @synthesize playbackTransitionBlurRadius=_playbackTransitionBlurRadius;
@property(nonatomic) double preCrossfadeDuration; // @synthesize preCrossfadeDuration=_preCrossfadeDuration;
@property(nonatomic) _Bool shouldSettleAutomatically; // @synthesize shouldSettleAutomatically=_shouldSettleAutomatically;
@property(nonatomic) _Bool shouldScaleAndBlurForPlayback; // @synthesize shouldScaleAndBlurForPlayback=_shouldScaleAndBlurForPlayback;
@property(nonatomic) double timeMultiplier; // @synthesize timeMultiplier=_timeMultiplier;
- (void).cxx_destruct;
- (void)setHintPlaybackValuesWithAssetOptions:(unsigned long long)arg1;
- (void)setHintPlaybackValuesWithPhotoHasColorAdjustments:(_Bool)arg1;
- (void)setDefaultValues;
- (void)_didChange;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)init;

@end

