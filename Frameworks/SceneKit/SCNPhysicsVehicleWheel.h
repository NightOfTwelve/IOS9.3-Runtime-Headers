//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>

@class SCNNode, SCNPhysicsVehicle;

@interface SCNPhysicsVehicleWheel : NSObject <NSCopying, NSSecureCoding>
{
    SCNNode *_node;
    SCNPhysicsVehicle *_vehicle;
    int _wheelIndex;
    double _suspensionStiffness;
    double _suspensionCompression;
    double _suspensionDamping;
    double _maximumSuspensionTravel;
    double _frictionSlip;
    double _maximumSuspensionForce;
    struct SCNVector3 _connectionPosition;
    struct SCNVector3 _steeringAxis;
    struct SCNVector3 _axle;
    double _radius;
    double _suspensionRestLength;
    _Bool _isFront;
}

+ (_Bool)supportsSecureCoding;
+ (id)wheelWithNode:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setIsFront:(_Bool)arg1;
- (_Bool)isFront;
@property double suspensionRestLength;
@property double radius;
@property struct SCNVector3 axle;
@property struct SCNVector3 steeringAxis;
@property struct SCNVector3 connectionPosition;
@property double maximumSuspensionForce;
@property double frictionSlip;
@property double maximumSuspensionTravel;
@property double suspensionDamping;
@property double suspensionCompression;
@property double suspensionStiffness;
@property(readonly) SCNNode *node;
- (void)_setWheelIndex:(int)arg1;
- (void)_setVehicle:(id)arg1;
- (void)setNode:(id)arg1;
- (void)dealloc;
- (id)init;

@end

