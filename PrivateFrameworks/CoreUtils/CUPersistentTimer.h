//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString, PCPersistentTimer;
@protocol OS_dispatch_queue;

@interface CUPersistentTimer : NSObject
{
    NSDate *_cachedDate;
    double _cachedInterval;
    double _cachedLeeway;
    _Bool _cachedRepeating;
    _Bool _cachedUseXPC;
    _Bool _cachedWakeSystem;
    NSString *_identifier;
    _Bool _invalidateCalled;
    PCPersistentTimer *_pcPersistentTimer;
    struct LogCategory *_ucat;
    _Bool _xpcRegistered;
    _Bool _repeating;
    _Bool _useXPC;
    _Bool _wakeSystem;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSDate *_date;
    double _interval;
    double _leeway;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _timerHandler;
}

@property(nonatomic) _Bool wakeSystem; // @synthesize wakeSystem=_wakeSystem;
@property(nonatomic) _Bool useXPC; // @synthesize useXPC=_useXPC;
@property(copy, nonatomic) CDUnknownBlockType timerHandler; // @synthesize timerHandler=_timerHandler;
@property(nonatomic) _Bool repeating; // @synthesize repeating=_repeating;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(nonatomic) double leeway; // @synthesize leeway=_leeway;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_xpcTimerFired:(id)arg1;
- (void)_pcTimerFired:(id)arg1;
- (void)_startXPCActivity;
- (void)_startPCPersistentTimer;
- (void)_start;
- (void)start;
- (void)_invalidate;
- (void)invalidate;
- (void)dealloc;
- (id)init;
- (id)initWithIdentifier:(id)arg1;

@end

