//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RKResponseCollection;

@interface RKMessageResponseManager : NSObject
{
    RKResponseCollection *_collection;
}

+ (id)sharedManager;
@property(retain) RKResponseCollection *collection; // @synthesize collection=_collection;
- (void).cxx_destruct;
- (void)flushDynamicData;
- (void)resetRegisteredResponses;
- (void)registerResponse:(id)arg1 forMessage:(id)arg2 forContext:(id)arg3 withEffectiveDate:(id)arg4 withLanguage:(id)arg5;
- (void)registerResponse:(id)arg1 forMessage:(id)arg2 forContext:(id)arg3 withLanguage:(id)arg4;
- (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forContext:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5;
- (id)initWithDynamicDataURL:(id)arg1 displayStringsProvider:(id)arg2;
- (id)initWithDynamicDataURL:(id)arg1;
- (id)init;

@end

