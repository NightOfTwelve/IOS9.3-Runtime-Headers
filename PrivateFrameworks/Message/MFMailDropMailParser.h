//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFMailDropMailParser : NSObject
{
}

+ (void)_parseDirectURL:(id)arg1 intoMetadata:(id)arg2;
+ (void)_parseWrappedURL:(id)arg1 intoMetadata:(id)arg2;
+ (void)parseURL:(id)arg1 intoMetadata:(id)arg2;
+ (_Bool)_domainIsWhitelisted:(id)arg1;
+ (id)parseHeaderValue:(id)arg1 forField:(id)arg2;
+ (id)parseExpiration:(double)arg1;
+ (id)_parseURLQuery:(id)arg1;

@end

