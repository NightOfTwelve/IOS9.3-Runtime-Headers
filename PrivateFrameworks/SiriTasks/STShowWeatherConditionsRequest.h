//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class STCity, STWeatherAttributes;

@interface STShowWeatherConditionsRequest : AFSiriRequest
{
    STWeatherAttributes *_attributes;
    STCity *_city;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)city;
- (id)attributes;
- (id)createResponse;
- (id)_initWithAttributes:(id)arg1 city:(id)arg2;

@end

