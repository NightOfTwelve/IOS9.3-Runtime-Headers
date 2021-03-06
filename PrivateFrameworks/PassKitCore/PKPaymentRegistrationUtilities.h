//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PKPaymentRegistrationUtilities : NSObject
{
}

+ (void)_checkEligibilityForCredential:(id)arg1 withWebService:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_checkRequirementsForCredential:(id)arg1 withWebService:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_retrieveRemoteCredentialsWithWebService:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)registerAndRetrieveCardsWithWebService:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)registrationIsSupportedInCurrentRegionWithWebService:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

