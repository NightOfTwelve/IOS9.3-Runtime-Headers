//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSCLAccountStore, NSMutableDictionary;

@interface MSCLFacebookAccountsRequest : NSObject
{
    MSCLAccountStore *_accountStore;
    CDUnknownBlockType _responseBlock;
    NSMutableDictionary *_services;
}

- (void).cxx_destruct;
- (void)_updateCredentialsForAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_pagesWithResponseDictionary:(id)arg1;
- (void)_getPagesWithAccessToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_finishWithPages:(id)arg1 accessToken:(id)arg2 error:(id)arg3;
- (void)startWithResponseBlock:(CDUnknownBlockType)arg1;
- (id)initWithAccountStore:(id)arg1;

@end

