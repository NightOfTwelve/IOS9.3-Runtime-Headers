//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString;

@interface SALocalSearchGeoServicesData : SADomainObject
{
}

+ (id)geoServicesDataWithDictionary:(id)arg1 context:(id)arg2;
+ (id)geoServicesData;
@property(copy, nonatomic) NSString *environment;
@property(copy, nonatomic) NSArray *additionalEnabledTransitMarkets;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

