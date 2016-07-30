//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotification/NSObject-Protocol.h>

@class NSArray, NSString, UNSNotificationScheduleFetchRequest;

@protocol UNSNotificationSchedulerServerProtocol <NSObject>
- (void)setObservingScheduledLocalNotifications:(_Bool)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)cancelScheduledLocalNotifications:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2 withCompletion:(void (^)(void))arg3;
- (void)snoozeScheduledLocalNotifications:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2 withCompletion:(void (^)(void))arg3;
- (void)addScheduledLocalNotifications:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2 withCompletion:(void (^)(void))arg3;
- (void)setScheduledLocalNotifications:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2 withCompletion:(void (^)(void))arg3;
- (void)scheduleForBundleIdentifier:(NSString *)arg1 fetchRequest:(UNSNotificationScheduleFetchRequest *)arg2 withResult:(void (^)(UNSNotificationSchedule *))arg3;
- (void)scheduledLocalNotificationsForBundleIdentifier:(NSString *)arg1 withResult:(void (^)(NSArray *))arg2;
@end

