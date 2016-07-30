//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFWallpaperView.h>

#import <SpringBoardFoundation/SBFProceduralWallpaperDelegate-Protocol.h>

@class NSDictionary, NSString, NSTimer, UIImage;
@protocol SBFProceduralWallpaper;

@interface SBFProceduralWallpaperView : SBFWallpaperView <SBFProceduralWallpaperDelegate>
{
    id <SBFProceduralWallpaper> _proceduralWallpaper;
    NSDictionary *_options;
    NSTimer *_colorSampleTimer;
    int _thermalNotificationToken;
    _Bool _pausedForThermalReasons;
    struct _CAImageQueue *_blurQueue;
    UIImage *_blur;
}

+ (_Bool)_allowsRasterization;
+ (_Bool)_allowsParallax;
- (void).cxx_destruct;
- (id)options;
- (void)prepareToAppear;
- (void)prepareToDisappear;
- (void)_updateAnimating;
- (_Bool)_isVisible;
- (void)_sample;
- (_Bool)_shouldSampleContinuously;
- (void)_updateSampleTimer;
- (id)_newImageFromBlurSurface:(void *)arg1 rect:(struct CGRect)arg2;
- (void)wallpaper:(id)arg1 didComputeAverageColor:(id)arg2 forRect:(struct CGRect)arg3;
- (void)wallpaper:(id)arg1 didGenerateBlur:(void *)arg2 forRect:(struct CGRect)arg3;
- (id)_blurredImage;
- (id)snapshotImage;
- (void)_stopGeneratingBlurredImages;
- (void)_startGeneratingBlurredImages;
- (id)_computeAverageColor;
- (void)_handleVariantChange;
- (void)_handleVisibilityChange;
- (_Bool)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2;
- (void)layoutSubviews;
- (_Bool)_deviceMayRotate;
- (_Bool)needsImmediateLayoutBeforeRotation;
- (void)setRotating:(_Bool)arg1;
- (void)setWallpaperAnimationEnabled:(_Bool)arg1;
- (void)setContinuousColorSamplingEnabled:(_Bool)arg1;
- (_Bool)hasBeenInvalidated;
- (void)invalidate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 proceduralWallpaper:(id)arg2 options:(id)arg3 variant:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

