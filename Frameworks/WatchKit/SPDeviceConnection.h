//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchKit/SPLocalApplicationProtocol-Protocol.h>

@class NSHashTable, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, SPDeviceConnectionDelegate;

@interface SPDeviceConnection : NSObject <SPLocalApplicationProtocol>
{
    id <SPDeviceConnectionDelegate> _delegate;
    NSXPCConnection *_serverConnection;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedDeviceConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain) NSXPCConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
@property(nonatomic) __weak id <SPDeviceConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)receiveData:(id)arg1;
- (long long)appInstallStateForAppConduitInstallState:(long long)arg1;
- (void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 forPairedDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchProvisioningProfilesForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchProvisioningProfilesWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeProvisioningProfileWithID:(id)arg1 fromPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeProvisioningProfileWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installProvisioningProfileWithURL:(id)arg1 onPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)installProvisioningProfileWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 onPairedDevice:(id)arg3 completionWithError:(CDUnknownBlockType)arg4;
- (void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 completionWithError:(CDUnknownBlockType)arg3;
- (void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 onPairedDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_enumerateObserversSafely:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)wakeExtensionForWatchApp:(id)arg1;
- (id)localeForUserNotification;
- (void)hideUserNotification;
- (void)showUserNotification:(long long)arg1 applicationName:(id)arg2 extensionBundleID:(id)arg3;
- (void)showUserNotification:(long long)arg1 bundleID:(id)arg2;
- (void)getAlwaysInstallForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAlwaysInstallWithCompletion:(CDUnknownBlockType)arg1;
- (void)setAlwaysInstall:(id)arg1 forDevice:(id)arg2;
- (void)setAlwaysInstall:(id)arg1;
- (void)setLogLevel:(id)arg1;
- (void)fetchWatchAppBundleIDForCompanionAppBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInfoForApplicationWithContainingApplicationBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInfoForApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchInfoForApplicationWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchApplicationWithContainingApplicationBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeApplication:(id)arg1 fromPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installApplication:(id)arg1 onPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)installApplication:(id)arg1 completionWithError:(CDUnknownBlockType)arg2;
- (void)installApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelPendingInstallations;
- (void)installAllApplications;
- (void)activeComplicationsForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)activeComplicationsWithErrorCompletion:(CDUnknownBlockType)arg1;
- (void)activeComplicationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchInstalledComplicationsForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInstalledComplicationsWithErrorCompletion:(CDUnknownBlockType)arg1;
- (void)fetchInstalledComplicationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchInstalledGlancesForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInstalledGlancesWithErrorCompletion:(CDUnknownBlockType)arg1;
- (void)fetchInstalledGlancesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchInstalledCompatibleApplicationsWithDevice:(id)arg1 withErrorCompletion:(CDUnknownBlockType)arg2;
- (void)fetchInstalledCompatibleApplicationsWithDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchInstalledApplicationsForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInstalledApplicationsWithErrorCompletion:(CDUnknownBlockType)arg1;
- (void)fetchInstalledApplicationsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)hasEntitlement:(CDUnknownBlockType)arg1 caller:(const char *)arg2;
- (id)connectionProxy:(CDUnknownBlockType)arg1 caller:(const char *)arg2;
- (void)invalidateXPCConnection;
- (void)createXPCConnectionIfNecessary;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

