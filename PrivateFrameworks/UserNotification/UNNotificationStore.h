//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface UNNotificationStore : NSObject
{
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    NSObject<OS_dispatch_queue> *_settingsQueue;
    NSMutableDictionary *_observersByBundleID;
}

+ (id)uniqueIdentifierForNotification:(id)arg1;
+ (void)migratePushStore;
+ (id)sharedInstance;
+ (void)initialize;
- (id)lastUpdateDateForBundleID:(id)arg1;
- (id)bundleIDsWithUpdatesSince:(id)arg1;
- (id)savedNotificationsForBundleID:(id)arg1;
- (id)savedNotificationDataForBundleID:(id)arg1;
- (void)makeTestNotificationStores;
- (id)removeNotificationsPassingTest:(CDUnknownBlockType)arg1 forBundleID:(id)arg2;
- (void)removeAllNotificationsForBundleID:(id)arg1;
- (void)removeAllLocalNotificationsForBundleID:(id)arg1;
- (void)removeLocalNotification:(id)arg1 forBundleID:(id)arg2;
- (void)saveLocalNotification:(id)arg1 forBundleID:(id)arg2;
- (void)saveRemoteNotificationWithTitle:(id)arg1 message:(id)arg2 soundName:(id)arg3 actionText:(id)arg4 badge:(id)arg5 userInfo:(id)arg6 launchImage:(id)arg7 category:(id)arg8 forBundleID:(id)arg9;
- (void)_saveNotificationWithTitle:(id)arg1 message:(id)arg2 soundName:(id)arg3 actionText:(id)arg4 badge:(id)arg5 userInfo:(id)arg6 launchImage:(id)arg7 fullDetails:(id)arg8 soundIsRingtone:(_Bool)arg9 isRemoteNotification:(_Bool)arg10 category:(id)arg11 forBundleID:(id)arg12;
- (id)pathForSoundName:(id)arg1 forBundleID:(id)arg2;
- (void)clearNotificationsForBundleID:(id)arg1;
- (void)unregisterAppForNotificationsWithBundleID:(id)arg1;
- (_Bool)_removeNotificationsForBundleID:(id)arg1;
- (void)registerAppForNotificationsWithBundleID:(id)arg1;
- (_Bool)_saveNotificationList:(id)arg1 toPath:(id)arg2;
- (id)_allNotificationsFromPath:(id)arg1;
- (id)_allNotificationDataFromPath:(id)arg1;
- (_Bool)_notificationDataExistsAtPath:(id)arg1;
- (id)_notificationStoreFilenameForBundleID:(id)arg1;
- (void)_notifyObserversNotificationsDidChangeForBundleID:(id)arg1;
- (void)_enumerateObserversForBundleID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)removeObserver:(id)arg1 forBundleID:(id)arg2;
- (void)addObserver:(id)arg1 forBundleID:(id)arg2;
- (id)_observersForBundleID:(id)arg1;
- (void)dealloc;
- (id)init;

@end

