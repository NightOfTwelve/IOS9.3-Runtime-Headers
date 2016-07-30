//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@interface CalPreferences : NSObject
{
    NSString *_domain;
    NSMutableSet *_registeredNotificationsToReflect;
}

- (void).cxx_destruct;
- (void)_preferenceChangedInternally:(id)arg1;
- (void)_preferenceChangedExternally:(id)arg1;
- (void)_synchronizePreferences;
- (void)setValueForPreference:(id)arg1 value:(id)arg2 notificationName:(id)arg3;
- (id)getValueForPreference:(id)arg1 expectedClass:(Class)arg2;
- (void)setBooleanPreference:(id)arg1 value:(_Bool)arg2 notificationName:(id)arg3;
- (_Bool)getBooleanPreference:(id)arg1 defaultValue:(_Bool)arg2;
- (void)unregisterReflectionForPreferenceWithNotificationName:(id)arg1;
- (void)registerReflectionForPreferenceWithNotificationName:(id)arg1;
- (void)dealloc;
- (id)initWithDomain:(id)arg1;
- (id)init;

@end

