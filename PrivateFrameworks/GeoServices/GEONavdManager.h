//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEONavdServerProxy, NSLock, NSMutableArray;

@interface GEONavdManager : NSObject
{
    GEONavdServerProxy *_proxy;
    NSMutableArray *_openers;
    NSLock *_openersLock;
}

+ (id)navdManagerClientIdentifier:(id)arg1;
+ (void)setProxyClass:(Class)arg1;
+ (id)navdManager;
- (void)forceNone;
- (void)forceWork;
- (void)forceHome;
- (void)forceCacheRefresh;
- (void)stopMonitoringSuggestionsForClient:(id)arg1;
- (void)startMonitoringSuggestionsForClient:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 fromClient:(id)arg3;
- (void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2;
- (void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)statusWithCallback:(CDUnknownBlockType)arg1;
- (void)closeForClient:(id)arg1;
- (void)openForClient:(id)arg1;
- (void)dealloc;
- (void)shouldPostDarwinNotificationForNextUpdate:(_Bool)arg1;
- (id)init;

@end

