//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppSupport/InvocationTrampoline.h>

@class NSOperationQueue;

@interface OperationQueueInvocationTrampoline : InvocationTrampoline
{
    NSOperationQueue *_queue;
    long long _priority;
}

- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 operationQueue:(id)arg2 priority:(long long)arg3;

@end

