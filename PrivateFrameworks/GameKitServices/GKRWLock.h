//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKRWLock : NSObject
{
    struct _opaque_pthread_rwlock_t {
        long long __sig;
        char __opaque[192];
    } _rwLock;
}

- (void)unlock;
- (void)rdlock;
- (int)tryrdlock;
- (void)wrlock;
- (void)dealloc;
- (id)init;

@end

