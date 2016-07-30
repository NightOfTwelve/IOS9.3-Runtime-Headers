//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

@interface TKVibrationRecorderRippleRingLayer : CAShapeLayer
{
    double _creationTimestamp;
    double _ringSpeed;
    struct CGPoint _normalizedRingLocation;
}

@property(nonatomic, setter=_setRingSpeed:) double _ringSpeed; // @synthesize _ringSpeed;
@property(nonatomic, setter=_setNormalizedRingLocation:) struct CGPoint _normalizedRingLocation; // @synthesize _normalizedRingLocation;
@property(nonatomic, setter=_setCreationTimestamp:) double _creationTimestamp; // @synthesize _creationTimestamp;
- (void)reset;
- (void)configureWithTimeIntervalSinceCreation:(double)arg1 normalizedRingLocation:(struct CGPoint)arg2 ringSpeed:(double)arg3;
- (double)timeIntervalSinceCreation;
@property(readonly, nonatomic) double ringSpeed;
@property(readonly, nonatomic) struct CGPoint normalizedRingLocation;
- (id)init;

@end

