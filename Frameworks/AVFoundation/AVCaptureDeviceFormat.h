//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCaptureDeviceFormatInternal, NSArray, NSString;

@interface AVCaptureDeviceFormat : NSObject
{
    AVCaptureDeviceFormatInternal *_internal;
}

+ (void)initialize;
- (_Bool)supportsQuadraHighResolutionStillImageOutput;
@property(readonly, nonatomic) long long autoFocusSystem;
@property(readonly, nonatomic) CDStruct_1b6d18a9 maxExposureDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 minExposureDuration;
@property(readonly, nonatomic) float maxISO;
@property(readonly, nonatomic) float minISO;
- (id)figCaptureSourceFormat;
- (id)AVCaptureSessionPresets;
- (CDStruct_79c71658)previewDimensions;
- (CDStruct_79c71658)sensorDimensions;
- (id)vtScalingMode;
- (_Bool)isDefaultActiveFormat;
- (CDStruct_1b6d18a9)defaultActiveMaxFrameDuration;
- (CDStruct_1b6d18a9)defaultActiveMinFrameDuration;
- (int)supportedFormatsArrayIndex;
- (_Bool)needsPhotoPreviewDPCC;
- (_Bool)supportsHighProfileH264;
- (_Bool)isHighResPhotoFormat;
- (_Bool)isPhotoFormat;
- (id)videoZoomSupportedUpscaleStages;
- (id)videoZoomSupportedDownscaleStages;
- (_Bool)isExperimental;
- (int)rawBitDepth;
- (_Bool)isIrisSupported;
- (_Bool)isSISSupported;
- (_Bool)supportsDynamicCrop;
- (_Bool)supportsLowLightBoost;
- (_Bool)prefersVideoHDREnabledForSessionPreset:(id)arg1;
- (int)supportedStabilizationMethod;
- (_Bool)supportsHighResolutionStillImageOutput;
@property(readonly, nonatomic) CDStruct_79c71658 highResolutionStillImageDimensions;
- (_Bool)isVideoStabilizationModeSupported:(long long)arg1;
@property(readonly, nonatomic, getter=isVideoHDRSupported) _Bool videoHDRSupported;
@property(readonly, nonatomic, getter=isVideoStabilizationSupported) _Bool videoStabilizationSupported;
@property(readonly, nonatomic) double videoZoomFactorUpscaleThreshold;
@property(readonly, nonatomic) double videoMaxZoomFactor;
@property(readonly, nonatomic) float videoFieldOfView;
@property(readonly, nonatomic, getter=isVideoBinned) _Bool videoBinned;
- (CDStruct_1b6d18a9)highestSupportedVideoFrameDuration;
- (CDStruct_1b6d18a9)lowestSupportedVideoFrameDuration;
@property(readonly, nonatomic) NSArray *videoSupportedFrameRateRanges;
@property(readonly, nonatomic) struct opaqueCMFormatDescription *formatDescription;
@property(readonly, nonatomic) NSString *mediaType;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initWithFigCaptureSourceFormat:(id)arg1;
- (id)description;
- (id)_stringForFormatDescription:(struct opaqueCMFormatDescription *)arg1 frameRateRanges:(id)arg2;

@end

