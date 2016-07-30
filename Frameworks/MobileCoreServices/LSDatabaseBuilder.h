//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface LSDatabaseBuilder : NSObject
{
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_queue> *_dbQueue;
}

- (void)setSeedingComplete:(_Bool)arg1;
- (void)createAndSeedLocalDatabase:(_Bool *)arg1;
- (void)dealloc;
- (id)initWithIOQueue:(id)arg1 registrationQueue:(id)arg2;

@end
