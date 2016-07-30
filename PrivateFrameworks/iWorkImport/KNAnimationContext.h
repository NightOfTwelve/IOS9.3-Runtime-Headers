//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CALayer, KNAnimationRegistryWithFallbacks, TSDCapabilities;

__attribute__((visibility("hidden")))
@interface KNAnimationContext : NSObject
{
    struct CGRect mSlideRect;
    struct CGRect mUnscaledSlideRect;
    double mViewScale;
    CALayer *mBaseLayer;
    double mFOVInRadians;
    struct CATransform3D mSlideProjectionMatrix;
    double mPixelAspectRatio;
    KNAnimationRegistryWithFallbacks *mRegistry;
    TSDCapabilities *mCapabilities;
    _Bool mBaseLayerVisible;
    struct CGColorSpace *mColorSpace;
}

@property(readonly, nonatomic) double viewScale; // @synthesize viewScale=mViewScale;
@property(readonly, nonatomic) struct CGRect unscaledSlideRect; // @synthesize unscaledSlideRect=mUnscaledSlideRect;
@property(readonly, nonatomic) struct CGRect slideRect; // @synthesize slideRect=mSlideRect;
@property(readonly, nonatomic) struct CATransform3D slideProjectionMatrix; // @synthesize slideProjectionMatrix=mSlideProjectionMatrix;
@property(readonly, nonatomic) KNAnimationRegistryWithFallbacks *registry; // @synthesize registry=mRegistry;
@property(nonatomic) double pixelAspectRatio; // @synthesize pixelAspectRatio=mPixelAspectRatio;
@property(readonly, nonatomic) double fieldOfViewInRadians; // @synthesize fieldOfViewInRadians=mFOVInRadians;
@property(nonatomic) struct CGColorSpace *colorSpace; // @synthesize colorSpace=mColorSpace;
@property(readonly, nonatomic) TSDCapabilities *capabilities; // @synthesize capabilities=mCapabilities;
@property(readonly, nonatomic, getter=isBaseLayerVisible) _Bool baseLayerVisible; // @synthesize baseLayerVisible=mBaseLayerVisible;
@property(readonly, nonatomic) CALayer *baseLayer; // @synthesize baseLayer=mBaseLayer;
- (void)updateGeometryToFitBaseLayerAtViewScale:(double)arg1;
@property(readonly, nonatomic) double showScale;
- (void)dealloc;
- (id)initWithShowSize:(struct CGSize)arg1 viewScale:(double)arg2 baseLayer:(id)arg3 isBaseLayerVisible:(_Bool)arg4;

@end
