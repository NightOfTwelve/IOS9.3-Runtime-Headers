//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CDPRemoteDeviceSecretValidatorProtocol;

@interface CDPRemoteDeviceSecretValidator : NSObject
{
    id <CDPRemoteDeviceSecretValidatorProtocol> _validator;
    unsigned long long _failedAttempts;
}

@property(readonly, nonatomic) unsigned long long failedAttempts; // @synthesize failedAttempts=_failedAttempts;
- (void).cxx_destruct;
- (void)cancelValidationWithError:(id)arg1;
- (void)resetAccountCDPState;
- (void)cancelApproveFromAnotherDevice;
- (void)approveFromAnotherDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)initWithContext:(id)arg1 validator:(id)arg2;

@end

