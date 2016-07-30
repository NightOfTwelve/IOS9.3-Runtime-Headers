//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

#import <SAObjects/SAAlarmAlarmAction-Protocol.h>

@class NSArray, NSNumber, NSString, NSURL;

@interface SAAlarmUpdate : SADomainCommand <SAAlarmAlarmAction>
{
}

+ (id)updateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)update;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *removedFrequency;
@property(copy, nonatomic) NSArray *modifications;
@property(copy, nonatomic) NSNumber *minute;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSNumber *hour;
@property(copy, nonatomic) NSNumber *enabled;
@property(copy, nonatomic) NSURL *alarmId;
@property(copy, nonatomic) NSArray *addedFrequency;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

