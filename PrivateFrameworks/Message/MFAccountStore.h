//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore;

@interface MFAccountStore : NSObject
{
    int _accountStoreLock;
    ACAccountStore *_accountStore;
}

+ (_Bool)_shouldUpdateAccountsInPlace;
+ (id)_accountWithAccountClass:(Class)arg1 persistentAccount:(id)arg2 useExisting:(_Bool)arg3;
+ (id)sharedAccountStore;
- (void)_accountsStoreChanged:(id)arg1;
- (void)removePersistentAccountWithAccount:(id)arg1;
- (void)savePersistentAccountWithAccount:(id)arg1;
- (id)_accountWithPersistentAccount:(id)arg1 useExisting:(_Bool)arg2;
- (id)existingAccountWithPersistentAccount:(id)arg1;
- (id)accountsWithTypeIdentifiers:(id)arg1 error:(id *)arg2;
- (id)supportedDataclassesWithAccountTypeIdentifier:(id)arg1;
- (id)newPersistentAccountWithAccountTypeIdentifier:(id)arg1;
- (void)setPersistentStore:(id)arg1;
@property(readonly) ACAccountStore *persistentStore;
- (void)dealloc;
- (id)init;

@end

