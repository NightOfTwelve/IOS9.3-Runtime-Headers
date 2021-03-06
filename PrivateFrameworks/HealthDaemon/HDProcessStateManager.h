//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, HDDaemon, NSHashTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface HDProcessStateManager : NSObject
{
    NSMutableDictionary *_processObserversByBundleID;
    NSHashTable *_generalProcessObservers;
    BKSApplicationStateMonitor *_applicationMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
    NSMutableDictionary *_currentProcessStateByBundleID;
    HDDaemon *_daemon;
}

+ (id)bundleVersionStringForProcessIdentifier:(int)arg1;
@property(nonatomic) __weak HDDaemon *daemon; // @synthesize daemon=_daemon;
- (void).cxx_destruct;
- (void)_queue_stateChangeHandler:(id)arg1;
- (long long)countOfForegroundObservedApplications;
- (_Bool)isApplicationStateSuspendedForBundleIdentifier:(id)arg1;
- (void)unregisterAllProcessObserver:(id)arg1;
- (void)registerAllProcessObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (_Bool)registerObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)initWithDaemon:(id)arg1;
- (id)init;

@end

