//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCNetworkUsageRulesPayload : MCPayload
{
    NSArray *_applicationRules;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(copy, nonatomic) NSArray *applicationRules; // @synthesize applicationRules=_applicationRules;
- (void).cxx_destruct;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (id)description;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

