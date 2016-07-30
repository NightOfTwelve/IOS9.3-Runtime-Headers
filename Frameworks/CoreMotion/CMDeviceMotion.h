//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMotion/CMLogItem.h>

@class CMAttitude;

@interface CMDeviceMotion : CMLogItem
{
    id _internal;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool doingBiasEstimation;
@property(readonly, nonatomic) _Bool doingYawCorrection;
@property(readonly, nonatomic) int magneticFieldCalibrationLevel;
@property(readonly, nonatomic) CDStruct_27fd20ed magneticField;
@property(readonly, nonatomic) CDStruct_31142d93 userAcceleration;
@property(readonly, nonatomic) CDStruct_31142d93 gravity;
@property(readonly, nonatomic) CDStruct_31142d93 rotationRate;
@property(readonly, nonatomic) CMAttitude *attitude;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceMotion:(CDStruct_7fb6ae47)arg1 andTimestamp:(double)arg2;

@end

