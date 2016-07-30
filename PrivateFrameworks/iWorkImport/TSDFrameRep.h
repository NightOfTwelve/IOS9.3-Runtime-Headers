//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CALayer, NSArray, TSDBitmapImageProvider, TSDFrame;

__attribute__((visibility("hidden")))
@interface TSDFrameRep : NSObject
{
    TSDFrame *mFrame;
    NSArray *mImages;
    NSArray *mMasks;
    TSDBitmapImageProvider *mAdornment;
    CALayer *mMaskLayer;
    _Bool mShouldEnableBlendMode;
}

- (void)p_adjustRepeatingLayer:(id)arg1 withImageRect:(struct CGRect)arg2 start:(double)arg3 end:(double)arg4 vertical:(_Bool)arg5;
- (void)p_setRepeatingLayerWithIndex:(unsigned int)arg1 sublayers:(id)arg2 maskLayers:(id)arg3 toRect:(struct CGRect)arg4 start:(double)arg5 end:(double)arg6;
- (void)p_setUnreplicatedLayerWithIndex:(unsigned int)arg1 sublayers:(id)arg2 maskLayers:(id)arg3 toRect:(struct CGRect)arg4;
- (id)p_createRepeatingLayerWithImage:(struct CGImage *)arg1 vertical:(_Bool)arg2 screenScale:(double)arg3;
- (void)p_addEdgeLayerForIndex:(unsigned int)arg1 toLayer:(id)arg2 maskLayer:(id)arg3;
- (void)p_addUnreplicatedLayerForIndex:(unsigned int)arg1 toLayer:(id)arg2 maskLayer:(id)arg3;
- (void)p_drawTiles:(id)arg1 inContext:(struct CGContext *)arg2 rect:(struct CGRect)arg3 start:(double)arg4 end:(double)arg5 vertical:(_Bool)arg6;
- (void)p_drawFrameIntoRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 withImages:(id)arg3 atViewScale:(double)arg4 isMask:(_Bool)arg5;
- (struct CGImage *)p_newRenderedFrameForMask:(_Bool)arg1 size:(struct CGSize)arg2 forCALayer:(_Bool)arg3 viewScale:(double)arg4;
- (struct CGImage *)newFrameForMask:(_Bool)arg1 size:(struct CGSize)arg2 forCALayer:(_Bool)arg3 viewScale:(double)arg4;
- (void)updateCALayer:(id)arg1 toRect:(struct CGRect)arg2 withRepLayer:(id)arg3 maskLayer:(id)arg4 viewScale:(double)arg5 maskLayerTransform:(struct CGAffineTransform)arg6;
- (id)applyToCALayer:(id)arg1 withRepLayer:(id)arg2 maskLayer:(id)arg3 viewScale:(double)arg4;
- (void)blendMaskBeforeRenderingImageInContext:(struct CGContext *)arg1;
- (void)applyMaskForRectWithCoverage:(struct CGRect)arg1 toContext:(struct CGContext *)arg2;
- (void)frameRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 withTotalScale:(double)arg3;
- (id)frame;
- (void)dealloc;
- (id)initWithTSDFrame:(id)arg1;

@end

