//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKObject.h>

#import <EventKit/NSCopying-Protocol.h>

@class EKCalendar, EKCalendarItem, EKObjectToOneRelation, EKStructuredLocation, NSArray, NSDate, NSString, NSURL;

@interface EKAlarm : EKObject <NSCopying>
{
    EKObjectToOneRelation *_locationRelation;
    long long _type;
    NSString *_emailAddress;
    NSString *_soundName;
    NSURL *_url;
}

+ (double)defaultGeofencedReminderRadius;
+ (_Bool)areLocationsCurrentlyEnabled;
+ (_Bool)areLocationsAllowedWithAuthorizationStatus:(int)arg1;
+ (_Bool)areLocationsAllowed;
+ (int)_currentAuthorizationStatus;
+ (_Bool)areLocationsAvailable;
+ (long long)maxPublicProximity;
+ (id)alarmWithRelativeOffset:(double)arg1;
+ (id)alarmWithAbsoluteDate:(id)arg1;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *soundName; // @synthesize soundName=_soundName;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) EKObjectToOneRelation *locationRelation; // @synthesize locationRelation=_locationRelation;
- (_Bool)isTopographicallyEqualToAlarm:(id)arg1;
- (long long)compare:(id)arg1;
- (_Bool)validate:(id *)arg1;
- (id)description;
- (_Bool)rebase;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool isSnoozedAlarm;
- (void)removeSnoozedAlarm:(id)arg1;
- (void)addSnoozedAlarm:(id)arg1;
@property(copy, nonatomic) NSArray *snoozedAlarms;
- (id)_snoozedAlarmsRelation;
@property(retain, nonatomic) EKAlarm *originalAlarm;
- (id)_originalAlarmRelation;
@property(nonatomic, getter=isDefaultAlarm) _Bool defaultAlarm;
- (id)ownerUUID;
@property(copy, nonatomic) EKStructuredLocation *structuredLocation;
- (id)_locationRelation;
@property(nonatomic) long long proximity;
@property(readonly, nonatomic) _Bool isAbsolute;
@property(readonly, nonatomic) NSString *externalID;
@property(copy, nonatomic) NSDate *acknowledgedDate;
@property(copy, nonatomic) NSDate *absoluteDate;
@property(nonatomic) double relativeOffset;
@property(readonly, nonatomic) NSString *UUID;
@property(retain, nonatomic) EKCalendar *calendarOwner; // @dynamic calendarOwner;
@property(retain, nonatomic) EKCalendarItem *calendarItemOwner; // @dynamic calendarItemOwner;
@property(readonly, nonatomic) EKObject *owner;
- (id)lazyLoadRelationForKey:(id)arg1;
- (void)dealloc;
- (id)initWithRelativeOffset:(double)arg1;
- (id)initWithAbsoluteDate:(id)arg1;
- (id)init;

@end

