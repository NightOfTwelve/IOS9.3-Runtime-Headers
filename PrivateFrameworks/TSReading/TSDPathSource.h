//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>
#import <TSReading/TSDMixing-Protocol.h>

@interface TSDPathSource : NSObject <TSDMixing, NSCopying>
{
    _Bool mHorizontalFlip;
    _Bool mVerticalFlip;
}

+ (id)pathSourceForShapeType:(int)arg1 naturalSize:(struct CGSize)arg2;
@property _Bool hasVerticalFlip; // @synthesize hasVerticalFlip=mVerticalFlip;
@property _Bool hasHorizontalFlip; // @synthesize hasHorizontalFlip=mHorizontalFlip;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)valueForSetSelector:(SEL)arg1;
- (struct CGAffineTransform)pathFlipTransform;
- (void)scaleToNaturalSize:(struct CGSize)arg1;
- (double)uniformScaleForScalingToNaturalSize:(struct CGSize)arg1;
- (void)setNaturalSize:(struct CGSize)arg1;
- (struct CGSize)naturalSize;
- (Class)preferredControllerClass;
- (id)interiorWrapPath;
- (id)bezierPathWithoutFlips;
- (id)bezierPath;
- (_Bool)isCircular;
- (_Bool)isRectangularForever;
- (_Bool)isRectangular;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

