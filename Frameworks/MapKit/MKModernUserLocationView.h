//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKUserLocationView.h>

@class CALayer, UIImage;

@interface MKModernUserLocationView : MKUserLocationView
{
    CALayer *_innerCircleLayer;
    _Bool _isShowingStaleColor;
    _Bool _shouldInnerPulse;
    struct UIImage *_innerImageMask;
    _Bool _rotateInnerImageToMatchCourse;
    CALayer *_baseLayer;
    CALayer *_baseDimmingLayer;
}

+ (double)innerDiameter;
+ (double)baseDiameter;
@property(nonatomic) _Bool rotateInnerImageToMatchCourse; // @synthesize rotateInnerImageToMatchCourse=_rotateInnerImageToMatchCourse;
@property(retain, nonatomic) UIImage *innerImageMask; // @synthesize innerImageMask=_innerImageMask;
@property(nonatomic) _Bool shouldInnerPulse; // @synthesize shouldInnerPulse=_shouldInnerPulse;
- (void).cxx_destruct;
- (void)_setPresentationCourse:(double)arg1;
- (void)_setMapRotationRadians:(double)arg1;
- (void)_updateInnerCourseRotation;
- (void)tintColorDidChange;
- (void)_updateAccuracyColors;
- (void)_updateLayers;
- (void)setEffectsEnabled:(_Bool)arg1;
- (void)_setupLayers;
- (void)_updateInnerImage;
- (void)_updateBaseImage;
- (void)_resetLayerToMatchAccuracyRing;
- (id)_layerToMatchAccuracyRing;
- (id)_pulseAnimation;
- (void)_setMapDisplayStyle:(CDStruct_f0cfbbbb)arg1;
- (void)_setMapType:(unsigned long long)arg1;
- (id)_pulseLayer;
- (void)_updatePulseColor;
- (void)_updateInnerMaskLayer;
- (void)didMoveToWindow;
- (id)_animationToSynchronizePulse:(id *)arg1;
- (void)_updatePulseAnimation;
- (id)_innerPulseAnimation;
- (id)_baseDimmingLayer;
- (id)_baseLayer;
- (void)_dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (struct CGColor *)_accuracyFillColor;

@end

