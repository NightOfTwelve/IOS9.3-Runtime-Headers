//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNNode;

__attribute__((visibility("hidden")))
@interface SCNIKJoint : NSObject
{
    SCNNode *joint;
    double maxAllowedRotationAngle;
}

@property(nonatomic) double maxAllowedRotationAngle; // @synthesize maxAllowedRotationAngle;
@property(nonatomic) __weak SCNNode *joint; // @synthesize joint;

@end

