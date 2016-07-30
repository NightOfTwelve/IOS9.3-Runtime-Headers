//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface HMPendingRequests : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_contextLists;
}

@property(retain, nonatomic) NSMutableArray *contextLists; // @synthesize contextLists=_contextLists;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (id)removeTriggerForIdentifier:(id)arg1;
- (void)addTrigger:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3;
- (id)removeAccessoryForIdentifier:(id)arg1;
- (void)addAccessory:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3;
- (id)removeEventForIdentifier:(id)arg1;
- (void)addEvent:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3;
- (id)removeActionForIdentifier:(id)arg1;
- (void)addAction:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3;
- (id)removeCompletionBlockForIdentifier:(id)arg1;
- (void)addCompletionBlock:(id)arg1 forIdentifier:(id)arg2;
- (id)removeRequestOfType:(long long)arg1 forIdentifier:(id)arg2;
- (void)addRequest:(id)arg1 ofType:(long long)arg2 forIdentifier:(id)arg3;
- (id)_removeRequestOfType:(long long)arg1 forIdentifier:(id)arg2;
- (void)_addRequest:(id)arg1 ofType:(long long)arg2 forIdentifier:(id)arg3;
- (id)init;

@end

