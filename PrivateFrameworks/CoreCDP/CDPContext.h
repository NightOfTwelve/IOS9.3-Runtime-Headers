//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDP/NSSecureCoding-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface CDPContext : NSObject <NSSecureCoding>
{
    _Bool _isHSA2Account;
    _Bool _didUseSMSVerification;
    _Bool __useSecureBackupCachedPassphrase;
    _Bool __alwaysCreateEscrowRecord;
    NSDictionary *_authenticationResults;
    NSString *_appleID;
    NSString *_password;
    NSString *_passwordEquivToken;
    NSNumber *_dsid;
    NSString *_cachedLocalSecret;
    unsigned long long _cachedLocalSecretType;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool _alwaysCreateEscrowRecord; // @synthesize _alwaysCreateEscrowRecord=__alwaysCreateEscrowRecord;
@property(nonatomic) _Bool _useSecureBackupCachedPassphrase; // @synthesize _useSecureBackupCachedPassphrase=__useSecureBackupCachedPassphrase;
@property(nonatomic) unsigned long long cachedLocalSecretType; // @synthesize cachedLocalSecretType=_cachedLocalSecretType;
@property(copy, nonatomic) NSString *cachedLocalSecret; // @synthesize cachedLocalSecret=_cachedLocalSecret;
@property(nonatomic) _Bool didUseSMSVerification; // @synthesize didUseSMSVerification=_didUseSMSVerification;
@property(nonatomic) _Bool isHSA2Account; // @synthesize isHSA2Account=_isHSA2Account;
@property(copy, nonatomic) NSNumber *dsid; // @synthesize dsid=_dsid;
@property(copy, nonatomic) NSString *passwordEquivToken; // @synthesize passwordEquivToken=_passwordEquivToken;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(copy, nonatomic) NSDictionary *authenticationResults; // @synthesize authenticationResults=_authenticationResults;
- (void).cxx_destruct;
- (void)updateWithAuthenticationResults:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAuthenticationResults:(id)arg1;

@end
