//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSString;

@interface SAClockObject : SADomainObject
{
    NSNumber *_latitude;
    NSNumber *_longitude;
}

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)object;
@property(copy, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *unlocalizedCountryName;
@property(copy, nonatomic) NSString *unlocalizedCityName;
@property(copy, nonatomic) NSString *timezoneId;
@property(copy, nonatomic) NSString *countryName;
@property(copy, nonatomic) NSString *countryCode;
@property(copy, nonatomic) NSString *cityName;
@property(copy, nonatomic) NSNumber *alCityId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

