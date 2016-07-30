//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BBObserverClientProxy, NSMutableArray, NSMutableSet, NSString, PCPersistentTimer;
@protocol OS_dispatch_queue;

@interface BBObserverGatewayHolder : NSObject
{
    NSMutableSet *_observersByFeed[9];
    NSObject<OS_dispatch_queue> *_queue;
    PCPersistentTimer *_timeoutTimer;
    NSMutableArray *_timeouts;
    BBObserverClientProxy *_gateway;
    unsigned long long _gatewayPriority;
    unsigned long long _feed;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long feed; // @synthesize feed=_feed;
@property(nonatomic) unsigned long long gatewayPriority; // @synthesize gatewayPriority=_gatewayPriority;
@property(retain, nonatomic) BBObserverClientProxy *gateway; // @synthesize gateway=_gateway;
- (void)dealloc;
- (void)sendObserver:(id)arg1 addBulletin:(id)arg2 playLightsAndSirens:(_Bool)arg3 forFeeds:(unsigned long long)arg4 withHandler:(CDUnknownBlockType)arg5;
- (void)sendObserversAddBulletin:(id)arg1 playLightsAndSirens:(_Bool)arg2 forFeeds:(unsigned long long)arg3;
- (void)sendAddBulletin:(id)arg1 playLightsAndSirens:(_Bool)arg2 forFeeds:(unsigned long long)arg3 withTimeout:(double)arg4 handler:(CDUnknownBlockType)arg5;
- (id)_addTimeout:(double)arg1 forBulletinID:(id)arg2 inSectionID:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_handleTimeout;
- (_Bool)_invalidateTimeout:(id)arg1;
- (void)_invalidateTimer;
- (void)_startTimerWithFireDate:(id)arg1;
- (void)_startNextTimer;
- (id)initWithQueue:(id)arg1 name:(id)arg2;

@end

