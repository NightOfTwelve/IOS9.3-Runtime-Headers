//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/AFSiriResponse.h>

@class NSArray;

@interface AFSearchAlarmsResponse : AFSiriResponse
{
    NSArray *_results;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *results; // @synthesize results=_results;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

