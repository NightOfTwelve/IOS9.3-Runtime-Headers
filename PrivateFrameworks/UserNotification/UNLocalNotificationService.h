//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UserNotification/FBProcessManagerObserver-Protocol.h>
#import <UserNotification/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class LSApplicationWorkspace, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface UNLocalNotificationService : NSObject <LSApplicationWorkspaceObserverProtocol, FBProcessManagerObserver>
{
    LSApplicationWorkspace *_appWorkspace;
    NSMutableDictionary *_clients;
    NSMutableSet *_userNotificationEnabledBundleIdentifiers;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (_Bool)_queue_isUserNotificationEnabled:(id)arg1;
- (void)_queue_userNotificationSettingsDidChange:(id)arg1;
- (void)_userNotificationSettingsDidChange:(id)arg1;
- (void)_handleMemoryWarning;
- (void)_handleLocaleChange;
- (void)_handleSignificantTimeChange;
- (void)_queue_removeNotificationClientForBundleIdentifier:(id)arg1;
- (id)_queue_addLocalNotificationClientForApplicationProxy:(id)arg1;
- (id)_queue_clientForBundleIdentifier:(id)arg1;
- (void)_queue_triggerLocationArrowForBundleIdentifier:(id)arg1;
- (_Bool)_queue_isBundleIdentifierAuthorizedForRegionMonitoring:(id)arg1;
- (id)_queue_scheduledForBundleIdentifier:(id)arg1 fetchRequest:(id)arg2;
- (id)_queue_scheduledLocalNotificationsForBundleIdentifier:(id)arg1;
- (void)_queue_snoozeLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_cancelScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_setScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_addScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)triggerLocationArrowForBundleIdentifier:(id)arg1;
- (void)bundleIdentifierAuthorizedForRegionMonitoring:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)scheduleForBundleIdentifier:(id)arg1 fetchRequest:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (id)scheduledLocalNotificationsForBundleIdentifier:(id)arg1;
- (void)scheduledLocalNotificationsForBundleIdentifier:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)snoozeLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)cancelScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)addScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

