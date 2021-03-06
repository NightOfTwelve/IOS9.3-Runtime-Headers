//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UserNotificationServices/UNSNotificationSchedulerClientProtocol-Protocol.h>
#import <UserNotificationServices/UNSNotificationSchedulerServerProtocol-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface UNSNotificationSchedulerConnection : NSObject <UNSNotificationSchedulerClientProtocol, UNSNotificationSchedulerServerProtocol>
{
    NSMutableDictionary *_observersByBundleIdentifier;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSMutableDictionary *observersByBundleIdentifier; // @synthesize observersByBundleIdentifier=_observersByBundleIdentifier;
- (void)_queue_removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_didChangeScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_didFireLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_invalidatedConnection;
- (void)_queue_interruptedConnection;
- (void)_queue_ensureConnection;
- (void)_invalidate;
- (void)didChangeScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)didFireLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setObservingScheduledLocalNotifications:(_Bool)arg1 forBundleIdentifier:(id)arg2;
- (void)cancelScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)snoozeScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)addScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)scheduleForBundleIdentifier:(id)arg1 fetchRequest:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)scheduledLocalNotificationsForBundleIdentifier:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

