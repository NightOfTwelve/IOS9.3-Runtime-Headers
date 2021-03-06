//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICCryptor : NSObject
{
}

+ (void)removeItemFromTouchID:(id)arg1;
+ (void)removePassphraseForNotesInAccount:(id)arg1;
+ (void)removePassphraseForAccount:(id)arg1;
+ (void)cachedKeyClearingTimerDidFire;
+ (void)startOrExtendCachedKeyClearingTimer;
+ (double)timeIntervalBeforeClearingCachedKeys;
+ (void)rewrapKeyForObject:(id)arg1 newMasterKey:(id)arg2 salt:(id)arg3 iterationCount:(unsigned int)arg4 hint:(id)arg5;
+ (void)transferSharedPassphraseFromAccount:(id)arg1 toAccount:(id)arg2;
+ (void)rewrapNote:(id)arg1 newMasterKey:(id)arg2 salt:(id)arg3 interationCount:(unsigned int)arg4 hint:(id)arg5;
+ (_Bool)updateAllNotesWithOldPassphrase:(id)arg1 toSharedPassphrase:(id)arg2 fromAccount:(id)arg3;
+ (_Bool)setPassphrase:(id)arg1 hint:(id)arg2 forAccount:(id)arg3;
+ (_Bool)setPassphrase:(id)arg1 forAllAccountsAndNotesWithHint:(id)arg2 oldPassphrase:(id)arg3;
+ (_Bool)setPassphrase:(id)arg1 forAllAccountsAndNotesWithHint:(id)arg2;
+ (_Bool)hasAnyCachedMasterKeys;
+ (void)clearAllCachedMasterKeys;
+ (id)cachedMasterKeyForObject:(id)arg1;
+ (id)cachedMasterKeyForIdentifier:(id)arg1;
+ (void)setCachedMasterKey:(id)arg1 forObject:(id)arg2;
+ (void)setCachedMasterKey:(id)arg1 forIdentifier:(id)arg2;
+ (id)masterKeysByAccountIdentifier;
+ (void)cacheMasterKeyWithPassphrase:(id)arg1 forNote:(id)arg2;
+ (void)cacheMasterKeyWithPassphrase:(id)arg1 forAccount:(id)arg2;
+ (void)cacheMasterKeyWithPassphrase:(id)arg1 forObject:(id)arg2;
+ (void)cacheMasterKeyWithPassphrase:(id)arg1;
+ (_Bool)key:(id)arg1 decryptsObject:(id)arg2;
+ (_Bool)isPassphrase:(id)arg1 correctForNote:(id)arg2;
+ (_Bool)isPassphrase:(id)arg1 correctForAccount:(id)arg2;
+ (_Bool)isPassphrase:(id)arg1 correctForObject:(id)arg2;
+ (_Bool)authenticateWithPassphrase:(id)arg1 forNote:(id)arg2;
+ (_Bool)authenticateWithPassphrase:(id)arg1 forAccount:(id)arg2;
+ (_Bool)isAuthenticatedForNote:(id)arg1;
+ (_Bool)isAuthenticatedForAccount:(id)arg1;
+ (_Bool)isAuthenticatedForObject:(id)arg1;
+ (_Bool)userHasPassphraseSetForNote:(id)arg1;
+ (_Bool)userHasPassphraseSetForAccount:(id)arg1;
+ (_Bool)userHasPassphraseSetForObject:(id)arg1;
+ (id)encryptData:(id)arg1 forObject:(id)arg2 tag:(id *)arg3 initializationVector:(id *)arg4;
+ (_Bool)encryptFileFromURL:(id)arg1 toURL:(id)arg2 forObject:(id)arg3;
+ (_Bool)decryptFileFromURL:(id)arg1 toURL:(id)arg2 forObject:(id)arg3;
+ (id)decryptedDataFromFileURL:(id)arg1 forObject:(id)arg2;
+ (id)decryptData:(id)arg1 forObject:(id)arg2 withTag:(id)arg3 initializationVector:(id)arg4;
+ (id)decryptData:(id)arg1 forObject:(id)arg2;
+ (id)newWrappedKeyForObject:(id)arg1;
+ (id)wrapKey:(id)arg1 withMasterKey:(id)arg2;
+ (id)unwrappedKeyForObject:(id)arg1;

@end

