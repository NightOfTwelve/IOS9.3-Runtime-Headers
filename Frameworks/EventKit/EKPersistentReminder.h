//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKPersistentCalendarItem.h>

@class EKObjectID, NSDate, NSTimeZone;

@interface EKPersistentReminder : EKPersistentCalendarItem
{
    EKObjectID *_parentID;
}

+ (id)generateUniqueIDWithReminder:(id)arg1 calendar:(id)arg2;
@property(copy, nonatomic) EKObjectID *parentID; // @synthesize parentID=_parentID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)validate:(id *)arg1;
@property(nonatomic, getter=isCompleted) _Bool completed;
- (id)description;
@property(nonatomic) unsigned long long displayOrder;
@property(copy, nonatomic) NSDate *firstAlertDate;
@property(copy, nonatomic) NSDate *completionDate;
@property(nonatomic) _Bool dueDateAllDay;
@property(copy, nonatomic) NSTimeZone *dueDateTimeZone;
@property(copy, nonatomic) NSDate *dueDate;
- (id)externalURI;
- (void)_sendModifiedNote;
- (int)entityType;
- (void)dealloc;

@end

