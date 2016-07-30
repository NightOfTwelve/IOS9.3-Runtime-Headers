//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSWatchdog.h>

@class NSMutableArray, NSString;

@interface FBProcessWatchdog : BSWatchdog
{
    NSString *_crashReason;
    NSString *_processBundleID;
    long long _event;
    NSMutableArray *_crashContext;
}

@property(readonly, copy, nonatomic) NSString *crashReason; // @synthesize crashReason=_crashReason;
@property(readonly, nonatomic) long long event; // @synthesize event=_event;
- (id)description;
- (void)_watchdogTimerFired;
- (void)addCrashReportContext:(id)arg1;
- (void)dealloc;
- (id)initWithProcess:(id)arg1 event:(long long)arg2 timeout:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithTimeout:(double)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
