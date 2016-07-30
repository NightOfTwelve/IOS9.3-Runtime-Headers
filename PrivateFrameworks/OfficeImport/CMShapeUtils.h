//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CMShapeUtils : NSObject
{
}

+ (int)radToFixedPointDeg:(double)arg1;
+ (double)fixedPointDegToRad:(int)arg1;
+ (float)fontSizeForText:(id)arg1 insideRectangle:(struct CGSize)arg2;
+ (float)intersectionAngleNextToAngle:(float)arg1 isAfter:(_Bool)arg2 nodeSize:(struct CGSize)arg3;
+ (double)getFormulaResultFromCustomGeometry:(id)arg1 atIndex:(unsigned long long)arg2;
+ (double)mapFormulaOfType:(int)arg1 argValues:(double *)arg2 isEscher:(_Bool)arg3;
+ (double)mapAdjustCoord:(struct OADAdjustCoord)arg1 geometry:(id)arg2;
+ (id)transformedBoundsWithBounds:(id)arg1 transform:(id)arg2;
+ (id)relatvieBoundsWithAbsoluteInnerBounds:(id)arg1 parentBounds:(id)arg2;
+ (id)internalBoundsWithBounds:(id)arg1 scaleBounds:(struct CGRect)arg2;
+ (id)inscribedBoundsWithBounds:(id)arg1 logicalBounds:(struct CGRect)arg2;
+ (id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)arg1 parentOrientedBounds:(id)arg2 parentLogicalBounds:(struct CGRect)arg3;
+ (id)transformFromBounds:(struct CGRect)arg1 toOrientedBounds:(id)arg2;
+ (struct CGRect)transformRect:(struct CGRect)arg1 scale:(float)arg2 offsetX:(float)arg3 offsetY:(float)arg4;
+ (float)scaleFactorFromLength:(float)arg1 toLength:(float)arg2;
+ (void)setCoordSpaceForCustomeGeometry:(id)arg1 fromSize:(struct CGSize)arg2;
+ (_Bool)isShapeALine:(id)arg1;
+ (int)mapFormulaKeywordValue:(int)arg1 geometry:(id)arg2;
+ (float)normalizedAngle:(float)arg1;
+ (int)radToMilliMinutes:(double)arg1;
+ (double)milliMinutesToRad:(int)arg1;
+ (int)radToNativeAngle:(double)arg1 isEscher:(_Bool)arg2;
+ (double)nativeAngleToRad:(int)arg1 isEscher:(_Bool)arg2;

@end

