//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAKeyframeAnimation.h>

@interface CAKeyframeAnimation (TSDCAAnimationAdditions)
- (double)TSD_animationPercentByApplyingTimingFunctionForKeyPath:(id)arg1 atTime:(double)arg2;
- (double)p_animationPercentByApplyingTimingFunctionForKeyPath:(id)arg1 atTime:(double)arg2 contextCache:(id)arg3;
- (id)TSD_valueAtTime:(double)arg1 initialValue:(id)arg2;
- (id)p_valueAtTime:(double)arg1 initialValue:(id)arg2 contextCache:(id)arg3;
- (void)p_getValue:(id *)arg1 animationPercent:(double *)arg2 atTime:(double)arg3 initialValue:(id)arg4 contextCache:(id)arg5;
- (id)TSDCAAnimationContextCache;
- (id)p_interpolatedValueFrom:(id)arg1 to:(id)arg2 percent:(double)arg3 contextCache:(id)arg4;
@end

