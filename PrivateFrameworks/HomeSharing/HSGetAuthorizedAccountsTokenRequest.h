//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeSharing/HSRequest.h>

@interface HSGetAuthorizedAccountsTokenRequest : HSRequest
{
}

+ (id)requestWithDSID:(unsigned long long)arg1 deviceGUID:(id)arg2;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithDSID:(unsigned long long)arg1 deviceGUID:(id)arg2;

@end

