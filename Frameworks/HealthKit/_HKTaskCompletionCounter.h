//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface _HKTaskCompletionCounter : NSObject
{
    CDUnknownBlockType _completion;
    NSObject<OS_dispatch_queue> *_queue;
    long long _target;
}

+ (id)counterWithTargetCount:(long long)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)decrementCounter;

@end

