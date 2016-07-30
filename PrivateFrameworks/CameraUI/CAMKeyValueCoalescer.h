//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CAMKeyValueCoalescer : NSObject
{
    double __interval;
    CDUnknownBlockType __handler;
    NSObject<OS_dispatch_source> *_coalescingTimer;
    NSMutableDictionary *__values;
    NSMutableDictionary *__previousValues;
    NSObject<OS_dispatch_queue> *__coalescingQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_coalescingQueue; // @synthesize _coalescingQueue=__coalescingQueue;
@property(readonly, nonatomic) NSMutableDictionary *_previousValues; // @synthesize _previousValues=__previousValues;
@property(readonly, nonatomic) NSMutableDictionary *_values; // @synthesize _values=__values;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *coalescingTimer; // @synthesize coalescingTimer=_coalescingTimer;
@property(readonly, copy, nonatomic) CDUnknownBlockType _handler; // @synthesize _handler=__handler;
@property(readonly, nonatomic) double _interval; // @synthesize _interval=__interval;
- (void).cxx_destruct;
- (void)_pushCoalescedValues;
- (void)flush;
- (void)coalesceValue:(id)arg1 forKeyPath:(id)arg2;
- (id)initWithInterval:(double)arg1 handler:(CDUnknownBlockType)arg2;

@end
