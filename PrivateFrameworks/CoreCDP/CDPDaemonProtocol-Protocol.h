//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CDPContext, NSString;
@protocol CDPStateUIProviderInternal;

@protocol CDPDaemonProtocol
- (void)removeNonViewAwarePeersFromCircleWithContext:(CDPContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)setUserVisibleKeychainSyncEnabled:(_Bool)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)isUserVisibleKeychainSyncEnabledWithCompletion:(void (^)(_Bool))arg1;
- (void)hasLocalSecretWithCompletion:(void (^)(_Bool))arg1;
- (void)isICDPEnabledForDSID:(NSString *)arg1 checkWithServer:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
- (void)finishOfflineLocalSecretChangeWithContext:(CDPContext *)arg1 uiProvider:(id <CDPStateUIProviderInternal>)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)localSecretChangedTo:(NSString *)arg1 secretType:(unsigned long long)arg2 context:(CDPContext *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)repairCloudDataProtectionStateWithContext:(CDPContext *)arg1 uiProvider:(id <CDPStateUIProviderInternal>)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)handleCloudDataProtectionStateWithContext:(CDPContext *)arg1 uiProvider:(id <CDPStateUIProviderInternal>)arg2 completion:(void (^)(_Bool, _Bool, NSError *))arg3;
@end

