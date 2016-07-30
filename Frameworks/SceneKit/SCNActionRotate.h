//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNAction.h>

__attribute__((visibility("hidden")))
@interface SCNActionRotate : SCNAction
{
    struct SCNCActionRotate *_mycaction;
}

+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 shortestUnitArc:(_Bool)arg5;
+ (id)rotateToAxisAngle:(struct SCNVector4)arg1 duration:(double)arg2;
+ (id)rotateByAngle:(double)arg1 aroundAxis:(struct SCNVector3)arg2 duration:(double)arg3;
+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)rotateByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (_Bool)supportsSecureCoding;
- (id)parameters;
- (_Bool)isRelative;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

