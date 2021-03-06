//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNAction.h>

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SCNActionRunBlock : SCNAction
{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)runBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
+ (_Bool)supportsSecureCoding;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (_Bool)isCustom;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

