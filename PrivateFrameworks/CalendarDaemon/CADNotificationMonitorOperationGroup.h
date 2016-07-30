//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/CADNotificationMonitorInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADNotificationMonitorOperationGroup : CADOperationGroup <CADNotificationMonitorInterface>
{
}

+ (id)whitelistedBundles;
+ (_Bool)requiresEventOrReminderAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventAccess;
- (void)CADEventSetInvitationStatus:(int)arg1 forEvent:(CDStruct_1ef3fb1f)arg2 error:(CDUnknownBlockType)arg3;
- (void)CADInviteReplyNotification:(CDStruct_1ef3fb1f)arg1 setAlertedWithError:(CDUnknownBlockType)arg2;
- (void)CADResourceChange:(CDStruct_1ef3fb1f)arg1 setAlertedWithError:(CDUnknownBlockType)arg2;
- (void)CADCalendar:(CDStruct_1ef3fb1f)arg1 setAlertedWithError:(CDUnknownBlockType)arg2;
- (void)CADEvent:(CDStruct_1ef3fb1f)arg1 setAlertedWithError:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetInboxRepliedSectionItems:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetReminderNotificationItems:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetEventNotificationItems:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetInviteReplyNotifications:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetResourceChanges:(CDUnknownBlockType)arg1;
- (void)CADCalendarSetClearedFromNotificationCenter:(CDStruct_1ef3fb1f)arg1 error:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetSharedCalendarInvitationsWithReply:(CDUnknownBlockType)arg1;

@end

