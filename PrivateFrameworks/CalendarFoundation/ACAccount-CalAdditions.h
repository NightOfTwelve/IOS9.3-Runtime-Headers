//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Accounts/ACAccount.h>

@class NSDictionary, NSNumber, NSString, NSURL;

@interface ACAccount (CalAdditions)
- (_Bool)_useSSLForSchemeString:(id)arg1;
- (id)_updateURL:(id)arg1 withHost:(id)arg2 port:(id)arg3 useSSL:(id)arg4;
- (void)_setValue:(id)arg1 forAccountPropertyKey:(id)arg2;
- (void)_setIsEnabled:(_Bool)arg1 forDataclass:(id)arg2;
- (id)_schemeStringForUseSSL:(_Bool)arg1;
- (id)_diffPropertiesWithAccount:(id)arg1 firstPropertyOnly:(_Bool)arg2;
- (id)_diffAccountPropertiesWithAccount:(id)arg1 firstPropertyOnly:(_Bool)arg2;
- (id)_diffWithAccount:(id)arg1 firstPropertyOnly:(_Bool)arg2;
- (_Bool)_dataclassIsEnabled:(id)arg1;
- (id)_createExchangeWebServicesURLFromURL:(id)arg1;
- (id)_accountPropertiesKeys;
- (id)valueForKey:(id)arg1 forPrincipalWithUID:(id)arg2;
- (id)valueForAccountPropertyKey:(id)arg1;
- (_Bool)setValue:(id)arg1 forKey:(id)arg2 forPrincipalWithUID:(id)arg3;
- (_Bool)removePrincipalWithUID:(id)arg1;
- (void)removeAccountPropertyForKey:(id)arg1;
- (id)firstDifferentPropertyWithAccount:(id)arg1;
- (id)diffWithAccount:(id)arg1;
- (void)createDictionaryForPrincipalWithUID:(id)arg1;
- (id)calPrincipalURLForPrincipalWithUID:(id)arg1 serverURL:(id)arg2;
- (id)calPrincipalURLForPrincipalWithUID:(id)arg1;
- (void)addPrincipal:(id)arg1 withUID:(id)arg2;
@property _Bool calUseExternalURL;
@property(copy) NSString *calRootFolderID;
@property(copy) NSString *calIdentityEmailAddress;
@property(copy) NSURL *calExternalURL;
@property(readonly) _Bool calIsDirty;
@property(readonly) NSURL *calExternalExchangeWebServicesURL;
@property(readonly) NSURL *calExchangeWebServicesURL;
@property(copy) NSString *calWebServicesRecordGUID;
@property _Bool calUseKerberos;
@property _Bool calSkipCredentialVerification;
@property _Bool calLocalDataMigrationHasTakenPlace;
@property(retain) NSString *calCollectionSetName;
@property _Bool calUseSSL;
@property(copy) NSURL *calServerURL;
@property long long calRefreshInterval;
@property _Bool calPushDisabled;
- (void)setCalPrincipals:(id)arg1;
@property(copy) NSNumber *calPort;
@property(copy) NSString *calMainPrincipalUID;
@property _Bool calIsEnabledForReminders;
@property _Bool calIsEnabledForCalendar;
@property(retain) NSString *calHostname;
@property(readonly, copy) NSDictionary *calPrincipals;
@property(readonly) _Bool calIsMissingParentAccount;
@property(readonly) _Bool calIsExchangeAccount;
@property(readonly) _Bool calIsEnabled;
@property(readonly) _Bool calIsCalDAVAccount;
@property(readonly) _Bool calIsAutoRefreshed;
@end
