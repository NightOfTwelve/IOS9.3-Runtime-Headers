//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CIColorClamp : CIFilter
{
    CIImage *inputImage;
    CIVector *inputMinComponents;
    CIVector *inputMaxComponents;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIVector *inputMaxComponents; // @synthesize inputMaxComponents;
@property(retain, nonatomic) CIVector *inputMinComponents; // @synthesize inputMinComponents;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernel;

@end

