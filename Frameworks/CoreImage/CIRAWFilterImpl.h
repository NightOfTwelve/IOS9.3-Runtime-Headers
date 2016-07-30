//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSArray, NSDictionary, NSNumber, NSObject, NSString;

__attribute__((visibility("hidden")))
@interface CIRAWFilterImpl : CIFilter
{
    struct CGImageSource *_inputImageSource;
    struct CGImage *_cgImage;
    CIImage *_inputImage;
    CIImage *_transformedImage;
    struct CGSize _nativeSize;
    NSDictionary *_rawDictionary;
    NSDictionary *_rawReconstructionDefaultsDictionary;
    NSNumber *_sushiMode;
    NSArray *_supportedDecoderVersions;
    NSArray *_filters;
    NSObject *_typeIdentifierHint;
    NSNumber *_hasRawImageSource;
    NSNumber *_defaultOrientation;
    NSArray *_neutralColour;
    NSNumber *inputNeutralChromaticityX;
    NSNumber *inputNeutralChromaticityY;
    NSNumber *inputNeutralTemperature;
    NSNumber *inputNeutralTint;
    CIVector *inputNeutralLocation;
    NSDictionary *outputImageProperties;
    NSNumber *inputEV;
    NSNumber *inputBoost;
    NSNumber *inputDraftMode;
    NSNumber *inputScaleFactor;
    NSNumber *inputIgnoreOrientation;
    NSNumber *inputImageOrientation;
    NSNumber *inputEnableSharpening;
    NSNumber *inputEnableNoiseTracking;
    NSNumber *inputEnableVendorLensCorrection;
    NSNumber *inputNoiseReductionAmount;
    NSNumber *inputLuminanceNoiseReductionAmount;
    NSNumber *inputColorNoiseReductionAmount;
    NSNumber *inputNoiseReductionSharpnessAmount;
    NSNumber *inputNoiseReductionContrastAmount;
    NSNumber *inputNoiseReductionDetailAmount;
    NSString *inputDecoderVersion;
    NSNumber *inputBoostShadowAmount;
    NSNumber *inputBias;
    CIFilter *inputLinearSpaceFilter;
}

+ (id)customAttributes;
+ (id)filterWithImageURL:(id)arg1 options:(id)arg2;
+ (id)filterWithImageData:(id)arg1 options:(id)arg2;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)optionKeys;
+ (id)applyMatrix:(const double *)arg1 toCIImage:(id)arg2;
+ (struct CGColorSpace *)linearRGBColorSpace;
+ (struct CGColorSpace *)adobeLinearRGBColorSpace;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)convertNeutralTemperature:(id)arg1 tint:(id)arg2 toX:(id *)arg3 y:(id *)arg4;
+ (void)convertNeutralX:(id)arg1 y:(id)arg2 toTemperature:(id *)arg3 tint:(id *)arg4;
- (id)outputKeys;
- (void)setDefaults;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)finalize;
- (id)init;
@property(readonly) struct CGSize nativeSize;
- (void)setTempTintAtPoint:(struct CGPoint)arg1;
- (id)rawOptionsWithSubsampling:(_Bool)arg1;
- (id)rawOptions;
- (void)invalidateCoreGraphicsImage;
- (void)invalidateInputImage;
- (void)invalidateTransformedImage;
- (void)invalidateFilters;
- (struct CGAffineTransform)scaleTransform;
@property(readonly) int subsampling;
@property(readonly, retain) NSArray *filters;
@property(readonly, retain) NSArray *sourceFilters;
@property(readonly) int rawMajorVersion;
@property(readonly, retain) NSDictionary *rawDictionary;
@property(readonly, retain) NSDictionary *rawReconstructionDefaultsDictionary;
@property(readonly, retain) NSNumber *sushiMode;
@property(readonly, retain) CIImage *transformedImage;
- (struct CGAffineTransform)imageTransform;
- (id)initWithImageSource:(struct CGImageSource *)arg1 options:(id)arg2;
@property(readonly) _Bool hasRawImageSource;
- (id)outputNativeSize;
- (id)activeKeys;
- (id)outputImage;
- (id)defaultBoostShadowAmount;
- (void)setInputBoostShadowAmount:(id)arg1;
- (id)inputLinearSpaceFilter;
- (void)setInputLinearSpaceFilter:(id)arg1;
- (id)inputBias;
- (id)defaultInputBiasAmount;
- (void)setInputBias:(id)arg1;
- (id)supportedDecoderVersions;
- (id)defaultDecoderVersion;
- (id)defaultInputEnableVendorLensCorrection;
- (id)defaultInputNoiseReductionSharpnessAmount;
- (id)defaultInputNoiseReductionDetailAmount;
- (id)defaultInputNoiseReductionContrastAmount;
- (id)defaultInputColorNoiseReductionAmount;
- (id)defaultInputLuminanceNoiseReductionAmount;
- (void)setInputIgnoreOrientation:(id)arg1;
- (void)setInputImageOrientation:(id)arg1;
- (void)setInputDecoderVersion:(id)arg1;
- (void)setInputBoost:(id)arg1;
- (void)setInputEV:(id)arg1;
- (void)setInputNoiseReductionDetailAmount:(id)arg1;
- (void)setInputNoiseReductionContrastAmount:(id)arg1;
- (void)setInputNoiseReductionSharpnessAmount:(id)arg1;
- (void)setInputColorNoiseReductionAmount:(id)arg1;
- (void)setInputLuminanceNoiseReductionAmount:(id)arg1;
- (void)setInputEnableVendorLensCorrection:(id)arg1;
- (void)setInputNoiseReductionAmount:(id)arg1;
- (void)setInputEnableNoiseTracking:(id)arg1;
- (void)setInputEnableSharpening:(id)arg1;
- (void)setInputDraftMode:(id)arg1;
- (void)setInputScaleFactor:(id)arg1;
- (void)setInputNeutralLocation:(id)arg1;
- (id)inputNeutralLocation;
- (id)defaultImageOrientation;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (struct CGImage *)cgImage;
- (id)RAWFiltersValueForKeyPath:(id)arg1;
- (void)getWhitePointVectorsR:(id *)arg1 g:(id *)arg2 b:(id *)arg3;
- (id)whitePointArray;
- (id)whitePoint;
- (void)setInputNeutralChromaticityY:(id)arg1;
- (id)inputNeutralChromaticityY;
- (id)defaultNeutralChromaticityY;
- (void)setInputNeutralChromaticityX:(id)arg1;
- (id)inputNeutralChromaticityX;
- (id)defaultNeutralChromaticityX;
- (void)setInputNeutralTint:(id)arg1;
- (id)defaultNeutralTint;
- (id)inputNeutralTint;
- (void)setInputNeutralTemperature:(id)arg1;
- (id)inputNeutralTemperature;
- (id)defaultNeutralTemperature;
- (void)updateChomaticityXAndY;
- (void)updateTemperatureAndTint;

@end

