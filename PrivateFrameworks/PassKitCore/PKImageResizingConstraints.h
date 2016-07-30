//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PKImageResizingConstraints : NSObject
{
    int _constraintType;
    double _fixedDimension;
    struct CGSize _size;
    double _minAspectRatio;
    double _maxAspectRatio;
    _Bool _respectAspectRatioRange;
    _Bool _outputMirrored;
    double _outputScale;
    double _outputBorderTrim;
}

+ (id)constraintsWithFixedSize:(struct CGSize)arg1;
+ (id)constraintsWithMinSize:(struct CGSize)arg1;
+ (id)constraintsWithMaxSize:(struct CGSize)arg1;
+ (id)constraintsWithMinSize:(struct CGSize)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3;
+ (id)constraintsWithMaxSize:(struct CGSize)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3;
+ (id)constraintsWithFixedSmallDimenstion:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3;
+ (id)constraintsWithFixedLargeDimenstion:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3;
+ (id)constraintsWithFixedHeight:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3;
+ (id)constraintsWithFixedWidth:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3;
@property(nonatomic) _Bool outputMirrored; // @synthesize outputMirrored=_outputMirrored;
@property(nonatomic) double outputBorderTrim; // @synthesize outputBorderTrim=_outputBorderTrim;
@property(nonatomic) double outputScale; // @synthesize outputScale=_outputScale;
- (id)_flippedConstraints;
- (_Bool)_reasonable;
- (_Bool)_getPixelCropRect:(struct CGRect *)arg1 pixelOutputSize:(struct CGSize *)arg2 forImageSize:(struct CGSize)arg3 scale:(double)arg4;
- (_Bool)getPixelCropRect:(struct CGRect *)arg1 pixelOutputSize:(struct CGSize *)arg2 forImage:(id)arg3;
- (id)resizedImage:(id)arg1;
- (id)init;

@end

