//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSKAccessController;
@protocol OS_dispatch_group, OS_dispatch_semaphore;

@interface TSDTilingBackgroundQueue : NSObject
{
    NSObject<OS_dispatch_semaphore> *mCanEnqueueReaders;
    NSObject<OS_dispatch_group> *mInFlightReaders;
    int mReaderSpinLock;
    unsigned long long mReaderCount;
    NSObject<OS_dispatch_semaphore> *mReadLockSignal;
    long long mShutdownToken;
    _Bool mShuttingDown;
    TSKAccessController *mAccessController;
}

+ (_Bool)isHoldingReadLockFromBackgroundQueue;
+ (id)p_sharedLimitedQueue;
@property(getter=isShuttingDown) _Bool shuttingDown; // @synthesize shuttingDown=mShuttingDown;
- (void)p_readUnlock;
- (void)p_readLock;
- (void)drainAndPerformSync:(CDUnknownBlockType)arg1;
- (void)performAsync:(CDUnknownBlockType)arg1;
- (void)shutdown;
- (void)dealloc;
- (id)initWithAccessController:(id)arg1;
- (id)init;

@end

