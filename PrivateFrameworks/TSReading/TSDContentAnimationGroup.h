//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDContentAnimation.h>

@class CAMediaTimingFunction, NSArray;

@interface TSDContentAnimationGroup : TSDContentAnimation
{
    NSArray *_animations;
    CAMediaTimingFunction *_timingFunction;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(copy, nonatomic) NSArray *animations; // @synthesize animations=_animations;
- (id)i_endLocation;
- (id)i_animationWithTransformBlock:(CDUnknownBlockType)arg1;
- (_Bool)i_canProduceAnimation;
- (void)dealloc;

@end

