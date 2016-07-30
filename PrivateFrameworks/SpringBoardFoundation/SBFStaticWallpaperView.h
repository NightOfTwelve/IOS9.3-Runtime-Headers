//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFWallpaperView.h>

@class SBFColorBoxes, UIImage;

@interface SBFStaticWallpaperView : SBFWallpaperView
{
    UIImage *_image;
    UIImage *_displayedImage;
    UIImage *_displayedSurfaceImage;
    _Bool _sampleAndDisplayedImageAreSame;
    double _overallContrast;
    SBFColorBoxes *_colorBoxes;
}

+ (_Bool)_allowsRasterization;
+ (_Bool)_allowsParallax;
- (void).cxx_destruct;
@property(retain, nonatomic) SBFColorBoxes *colorBoxes;
- (id)_createColorBoxes;
- (id)_wallpaperImageForAnalysis;
- (void)_resetColorBoxes;
- (struct CGSize)_imageSize;
- (float)_zoomScale;
- (id)_mappedImageKeyForParameters:(CDStruct_595f0d30)arg1 includingTint:(_Bool)arg2;
- (void)_setImage:(id)arg1;
- (void)_cacheImagesIfNeeded;
- (id)_displayedSurfaceImageKey;
- (id)_displayedImageKey;
- (id)_sampleImageKey;
- (id)_variantCacheIdentifier;
- (void)_setupContentView;
- (void)setContentView:(id)arg1;
- (void)setCropRect:(struct CGRect)arg1 zoomScale:(double)arg2;
- (double)cropZoomScale;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)_averageColorInContentViewRect:(struct CGRect)arg1 smudgeRadius:(double)arg2;
- (double)contrastInRect:(struct CGRect)arg1 contrastWithinBoxes:(double *)arg2 contrastBetweenBoxes:(double *)arg3;
- (double)contrastInRect:(struct CGRect)arg1;
- (_Bool)contrastRequiresTreatments;
- (void)setContentsRect:(struct CGRect)arg1;
- (id)_displayedSurfaceImage;
- (id)_displayedImage;
- (void)_setDisplayedImage:(id)arg1;
- (id)_untintedImageForBackdropParameters:(CDStruct_595f0d30)arg1;
- (id)_imageForBackdropParameters:(CDStruct_595f0d30)arg1 includeTint:(_Bool)arg2;
- (id)_blurredImage;
- (id)snapshotImage;
- (id)_computeAverageColor;
- (id)wallpaperImage;
- (_Bool)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 wallpaperImage:(id)arg2 variant:(long long)arg3 options:(unsigned long long)arg4;
- (void)_setupWallpaperImage:(id)arg1 treated:(_Bool)arg2 forceNoTreatment:(_Bool)arg3;
- (id)_repeatingGradientImageWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (void)_setupSampleImage:(id)arg1 treated:(_Bool)arg2;
- (void)_setSampleImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 wallpaperImage:(id)arg2 variant:(long long)arg3;

@end

