//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Accounts/ACAccount.h>

@class NSArray, NSDictionary, NSString;

@interface ACAccount (AppleAccount)
+ (id)aa_dataclassesBoundToSingleAppleAccount;
+ (id)aa_dataclassesBoundToPrimaryAppleAccount;
- (_Bool)aa_needsPCSRepairWithAuthToken:(id)arg1;
- (_Bool)aa_needsPCSRepair;
@property(readonly, nonatomic) int aa_repairerPID;
@property(nonatomic, setter=aa_setUndergoingRepair:) _Bool aa_isUndergoingRepair;
@property(nonatomic, setter=aa_setCloudDocsMigrationComplete:) _Bool aa_isCloudDocsMigrationComplete;
@property(nonatomic, setter=aa_setUsesCloudDocs:) _Bool aa_isUsingCloudDocs;
@property(readonly, nonatomic) ACAccount *aa_cloudKitAccount;
@property(readonly, nonatomic) NSString *aa_syncStoreIdentifier;
- (int)mobileMeAccountStatus;
@property(readonly, nonatomic) _Bool aa_needsEmailConfiguration;
@property(readonly, nonatomic) ACAccount *aa_childMailAccount;
- (void)aa_setUseCellular:(_Bool)arg1 forDataclass:(id)arg2;
- (_Bool)aa_useCellularForDataclass:(id)arg1;
@property(readonly, nonatomic) _Bool aa_needsRegistration;
@property(nonatomic, setter=aa_setSyncedAccount:) _Bool aa_isSyncedAccount;
@property(readonly, nonatomic) NSDictionary *aa_serviceUnavailableInfo;
@property(readonly, nonatomic) _Bool aa_serviceUnavailable;
- (void)aa_updateWithProvisioningResponse:(id)arg1;
@property(readonly, nonatomic) _Bool aa_isManagedAppleID;
@property(readonly, nonatomic) NSDictionary *aa_accountFirstDisplayAlert;
@property(readonly, nonatomic) NSDictionary *aa_accountFooterButton;
@property(readonly, nonatomic) NSString *aa_accountFooterText;
@property(copy, nonatomic, setter=aa_setPassword:) NSString *aa_password;
- (void)aa_setHSAToken:(id)arg1;
- (id)aa_hsaTokenWithError:(id *)arg1;
@property(readonly, nonatomic) NSString *aa_hsaToken;
- (void)aa_setMapsToken:(id)arg1;
@property(readonly, nonatomic) NSString *aa_mapsToken;
@property(readonly, nonatomic) NSString *aa_fmipToken;
@property(copy, nonatomic, setter=aa_setAuthToken:) NSString *aa_authToken;
- (id)aa_authTokenWithError:(id *)arg1;
@property(readonly, nonatomic) ACAccount *aa_fmipAccount;
@property(readonly, nonatomic) ACAccount *aa_fmfAccount;
@property(nonatomic, setter=aa_setNeedsToVerifyTerms:) _Bool aa_needsToVerifyTerms;
@property(readonly, nonatomic) NSArray *aa_appleIDAliases;
@property(readonly, nonatomic) NSString *aa_protocolVersion;
@property(readonly, nonatomic) NSString *aa_primaryEmail;
@property(readonly, nonatomic) NSString *aa_appleId;
@property(nonatomic, setter=aa_setPrimaryEmailVerified:) _Bool aa_isPrimaryEmailVerified;
@property(nonatomic, setter=aa_setPrimaryAccount:) _Bool aa_isPrimaryAccount;
@property(readonly, nonatomic) _Bool aa_isUsingiCloud;
@property(readonly, nonatomic) NSString *aa_accountTypeString;
@property(readonly, nonatomic) NSString *aa_personID;
@property(copy, nonatomic, setter=aa_setLastName:) NSString *aa_lastName;
@property(copy, nonatomic, setter=aa_setFirstName:) NSString *aa_firstName;
@property(readonly, nonatomic) NSString *aa_displayName;
@property(readonly, nonatomic) NSString *aa_altDSID;
@end

