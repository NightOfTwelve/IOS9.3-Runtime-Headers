//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/_HKQueryServerDataObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _HKCorrelationQueryServerDataObject : _HKQueryServerDataObject
{
    NSDictionary *_filterDictionary;
    long long _version;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSDictionary *filterDictionary; // @synthesize filterDictionary=_filterDictionary;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

