//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKit/PKMicaResizableView-Protocol.h>

@class CALayer, NSArray, NSMutableArray, NSString, UIColor;

@interface PKFingerprintGlyphView : UIView <PKMicaResizableView>
{
    CALayer *_backgroundLayer;
    CALayer *_foregroundLayer;
    CALayer *_foregroundRingContainerLayer;
    NSArray *_backgroundShapeLayers;
    NSArray *_foregroundShapeLayers;
    NSArray *_foregroundRingShapeLayers;
    CALayer *_maskLayer;
    CALayer *_maskForegroundLayer;
    unsigned long long _transitionIndex;
    _Bool _transitioning;
    long long _priorState;
    NSMutableArray *_transitionCompletionHandlers;
    double _lastAnimationWillFinish;
    _Bool _rotatingRing;
    NSString *_rotationAnimationKey;
    _Bool _fadeOnRecognized;
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    long long _state;
    UIView *_contentView;
}

@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool fadeOnRecognized; // @synthesize fadeOnRecognized=_fadeOnRecognized;
@property(copy, nonatomic) UIColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(copy, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
- (id)pathStateForLayer:(id)arg1;
- (void)setPathState:(id)arg1 forLayer:(id)arg2;
- (void)setSecondaryColor:(id)arg1 animated:(_Bool)arg2;
- (void)setPrimaryColor:(id)arg1 animated:(_Bool)arg2;
- (void)_setProgress:(double)arg1 withDuration:(double)arg2 forShapeLayerAtIndex:(unsigned long long)arg3;
- (void)setProgress:(double)arg1 withDuration:(double)arg2;
- (void)setContentViewAlpha:(double)arg1 withDuration:(double)arg2;
- (void)_endRotationAnimation;
- (void)_startRotationAnimation;
- (void)_restartRotationIfNecessary;
- (void)_updateRotationAnimationsIfNecessary;
- (void)_hideNonRingShapeLayersWithTransitionIndex:(unsigned long long)arg1 withGap:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_continueHoldingStateForPathAtIndex:(unsigned long long)arg1 withTransitionIndex:(unsigned long long)arg2;
- (void)_startRecognitionHoldingStateWithTransitionIndex:(unsigned long long)arg1;
- (void)_showFingerprintWithTransitionIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_performTransitionWithTransitionIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_executeAfterMinimumAnimationDurationForStateTransition:(CDUnknownBlockType)arg1;
- (double)_minimumAnimationDurationForStateTransition;
- (void)_updateLastAnimationTimeWithAnimationOfDuration:(double)arg1;
- (void)_finishTransitionForIndex:(unsigned long long)arg1;
- (void)_executeTransitionCompletionHandlers:(_Bool)arg1;
- (void)setState:(long long)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (struct CGSize)boundsSizeToMatchPointScale:(double)arg1;
- (double)pointScaleToMatchBoundsSize:(struct CGSize)arg1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

