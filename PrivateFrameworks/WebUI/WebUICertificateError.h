//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WebUICertificateError : NSObject
{
}

+ (_Bool)isClientCertificateError:(long long)arg1;
+ (_Bool)isServerCertificateError:(long long)arg1;
+ (_Bool)proceedWithClientCertificateIdentity:(struct __SecIdentity *)arg1 context:(id)arg2;
+ (id)newAlertToListPossibleClientSideCertificatesWithContext:(id)arg1;
+ (id)newAlertToHandleClientSideCertificateErrorCode:(long long)arg1 context:(id)arg2;
+ (_Bool)canAuthenticateAgainstProtectionSpace:(id)arg1;
+ (_Bool)userAllowsCertificateTrust:(struct __SecTrust *)arg1 host:(id)arg2 applicationDisplayName:(id)arg3;

@end

