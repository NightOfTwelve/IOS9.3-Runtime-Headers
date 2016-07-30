//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BSDispatchSource;
@protocol OS_dispatch_queue;

@interface BSTimer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _handler;
    BSDispatchSource *_source;
    double _fireInterval;
    double _repeatInterval;
    double _leewayInterval;
}

+ (id)scheduledTimerWithFireInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)cancel;
- (void)schedule;
- (void)dealloc;
- (id)initWithFireInterval:(double)arg1 repeatInterval:(double)arg2 leewayInterval:(double)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)initWithFireInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end
