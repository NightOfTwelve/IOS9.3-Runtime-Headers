//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreRoutine/NSObject-Protocol.h>

@class GEOAddress, GEOMapRegion, NSArray, NSData, NSDate, NSDictionary, NSString, NSTimeZone;

@protocol GEOMapItem <NSObject>
@property(readonly, nonatomic) _Bool isEventAllDay;
@property(readonly, nonatomic) NSDate *eventDate;
@property(readonly, nonatomic) NSString *eventName;
@property(readonly, nonatomic) _Bool contactIsMe;
@property(readonly, nonatomic) NSString *contactSpokenName;
@property(readonly, nonatomic) NSString *contactName;
@property(readonly, nonatomic) int contactAddressType;
@property(readonly, nonatomic) GEOMapRegion *displayMapRegionOrNil;
@property(readonly, nonatomic) NSTimeZone *timezone;
@property(readonly, nonatomic) NSArray *areasOfInterest;
@property(readonly, nonatomic) NSDictionary *addressDictionary;
@property(readonly, nonatomic) GEOAddress *geoAddress;
@property(readonly, nonatomic) GEOMapRegion *geoFenceMapRegion;
@property(readonly, nonatomic) GEOMapRegion *displayMapRegion;
@property(readonly, nonatomic) int referenceFrame;
@property(readonly, nonatomic) CDStruct_c3b9c2ee centerCoordinate;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, nonatomic, getter=isDisputed) _Bool disputed;
@property(readonly, nonatomic) NSData *encodedData;
@property(readonly, nonatomic) NSString *name;
- (NSString *)spokenNameForLocale:(NSString *)arg1;
@end
