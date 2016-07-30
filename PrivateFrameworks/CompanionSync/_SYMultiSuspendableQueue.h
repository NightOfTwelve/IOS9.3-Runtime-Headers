//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface _SYMultiSuspendableQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_targetQueue;
    int _resumeCount;
}

- (void).cxx_destruct;
- (void)barrierAsync:(CDUnknownBlockType)arg1;
- (void)barrierSync:(CDUnknownBlockType)arg1;
- (void)async:(CDUnknownBlockType)arg1;
- (void)sync:(CDUnknownBlockType)arg1;
- (void)resume;
- (void)suspend;
@property(readonly, nonatomic, getter=isSuspended) _Bool suspended;
@property(readonly, nonatomic) unsigned int qosClass;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithName:(id)arg1 qosClass:(unsigned int)arg2 serial:(_Bool)arg3;
- (id)init;

@end

