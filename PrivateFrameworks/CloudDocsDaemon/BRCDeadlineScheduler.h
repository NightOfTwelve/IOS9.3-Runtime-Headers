//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCLifeCycle-Protocol.h>

@class BRCMinHeap, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCDeadlineScheduler : NSObject <BRCLifeCycle>
{
    NSObject<OS_dispatch_queue> *_queue;
    BRCMinHeap *_minHeap;
    NSString *_name;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_source> *_delay;
    long long _leeway;
    long long _lastSchedule;
    _Bool _isResumed;
    _Bool _isCancelled;
    CDUnknownBlockType _computeNextAdmissibleDateForScheduling;
}

@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(copy, nonatomic) CDUnknownBlockType computeNextAdmissibleDateForScheduling; // @synthesize computeNextAdmissibleDateForScheduling=_computeNextAdmissibleDateForScheduling;
@property(nonatomic) long long coalescingLeeway; // @synthesize coalescingLeeway=_leeway;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)dealloc;
- (void)close;
- (void)_close;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (void)_addToken:(id)arg1 deadline:(long long)arg2;
- (void)_schedule;
- (void)signal;
- (_Bool)_isSleepingRequiredForDeadline:(long long)arg1 now:(long long)arg2;
- (id)initWithName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

