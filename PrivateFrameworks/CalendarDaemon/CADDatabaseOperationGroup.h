//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/CADDatabaseInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADDatabaseOperationGroup : CADOperationGroup <CADDatabaseInterface>
{
}

+ (_Bool)requiresEventOrReminderAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventAccess;
- (void)CADDatabaseResetWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseRollbackWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseCommitWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseSaveWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseSetShowsDeclinedEvents:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseImportICSData:(id)arg1 intoCalendarWithID:(int)arg2 optionsMask:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)CADDatabaseSetAutomaticLocationGeocodingAllowed:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseIsAutomaticLocationGeocodingAllowed:(CDUnknownBlockType)arg1;
- (_Bool)_CADDatabaseCanModifyCalendarDatabase;
- (void)CADDatabaseCanModifyCalendarDatabase:(CDUnknownBlockType)arg1;
- (void)CADDatabaseSetSourceAccountManagement:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetNextAssignableColorWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetChangedEntityIDsSinceTimestamp:(double)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetChangesSinceSequenceNumber:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetSequenceNumber:(CDUnknownBlockType)arg1;
- (void)CADDatabaseMarkChangedObjectIDsConsumedUpToSequenceNumber:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseFetchChangedObjectIDsSinceSequenceNumber:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseRegisterForDetailedChangeTracking:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetUUID:(CDUnknownBlockType)arg1;
- (void)CADDatabaseSetPath:(id)arg1 andInitOptions:(int)arg2 reply:(CDUnknownBlockType)arg3;

@end

