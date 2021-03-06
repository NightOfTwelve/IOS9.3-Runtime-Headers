//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <PreferencesUI/DevicePINControllerDelegate-Protocol.h>
#import <PreferencesUI/PSSearchControllerDelegate-Protocol.h>
#import <PreferencesUI/RadiosPreferencesDelegate-Protocol.h>

@class ACAccountStore, EAAccessory, HMHomeManager, NSArray, NSDictionary, NSObject, NSSet, NSString, PSSearchController, PSSpecifier, UIViewController;
@protocol OS_dispatch_queue, PSController;

@interface PSUIPrefsListController : PSListController <PSSearchControllerDelegate, RadiosPreferencesDelegate, DevicePINControllerDelegate>
{
    _Bool _didFirstLoad;
    EAAccessory *_speakerAccessory;
    PSSpecifier *_eqSpecifier;
    NSArray *_thirdPartySpecifiers;
    NSDictionary *_movedThirdPartySpecifiers;
    _Bool _initiallyLoadingThirdPartySpecifiers;
    _Bool _refreshingThirdPartySpecifiers;
    PSSpecifier *_notificationsSpecifier;
    PSSpecifier *_wallpaperSpecifier;
    PSSpecifier *_passcodeSpecifier;
    PSSpecifier *_castleSpecifier;
    PSSpecifier *_twitterSpecifier;
    PSSpecifier *_facebookSpecifier;
    PSSpecifier *_flickrSpecifier;
    PSSpecifier *_vimeoSpecifier;
    PSSpecifier *_weiboSpecifier;
    PSSpecifier *_tencentweiboSpecifier;
    PSSpecifier *_messagesSpecifier;
    PSSpecifier *_faceTimeSpecifier;
    PSSpecifier *_gameCenterSpecifier;
    PSSpecifier *_carrierSelectionSpecifier;
    PSSpecifier *_personalHotspotSpecifier;
    PSSpecifier *_homeKitSpecifier;
    _Bool _wifiValueIsClean;
    _Bool _bluetoothValueIsClean;
    NSArray *_originalSpecifiers;
    NSSet *_originalDisplayIdentifiers;
    NSObject<OS_dispatch_queue> *_iconCacheQueue;
    NSDictionary *_iconCache;
    ACAccountStore *_accountStore;
    NSString *_pendingOffsetItemName;
    HMHomeManager *_homeManager;
    _Bool _skipSelectingGeneralOnLaunch;
    PSSearchController *_searchController;
    NSString *_searchText;
    NSString *_wifiString;
    NSString *_bluetoothString;
}

+ (void)formatSearchEntries:(id)arg1 parent:(id)arg2;
+ (void)setAirplaneMode:(_Bool)arg1;
+ (_Bool)airplaneMode;
+ (id)radiosPreferences;
@property(copy, nonatomic) NSString *bluetoothString; // @synthesize bluetoothString=_bluetoothString;
@property(copy, nonatomic) NSString *wifiString; // @synthesize wifiString=_wifiString;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic) _Bool skipSelectingGeneralOnLaunch; // @synthesize skipSelectingGeneralOnLaunch=_skipSelectingGeneralOnLaunch;
@property(readonly, nonatomic) PSSearchController *searchController; // @synthesize searchController=_searchController;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)rootSpecifiersForSearchController:(id)arg1;
- (void)searchController:(id)arg1 openURL:(id)arg2;
- (_Bool)shouldDeferPushForSpecifierID:(id)arg1;
- (void)suspend;
- (id)configurePasscodeSpecifierFromSpecifiers:(id)arg1;
- (void)didCancelEnteringPIN;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)bluetoothPowerChanged:(id)arg1;
- (id)bluetoothValue:(id)arg1;
- (void)bluetoothValueFetch:(id)arg1;
- (void)iMessageSupportMayHaveChanged;
- (void)lazyLoadSpecialBundleForSpecifier:(id)arg1;
- (id)cellularDataStatusForSpecifier:(id)arg1;
- (void)airplaneModeChanged;
- (id)phoneStatusForSpecifier:(id)arg1;
- (id)cellularDisabledStatusForSpecifier:(id)arg1;
- (void)reloadCellularRelatedSpecifiers;
- (id)getAirplaneMode:(id)arg1;
- (void)confirmationSpecifierCancelled:(id)arg1;
- (void)confirmationSpecifierConfirmed:(id)arg1;
- (void)_setAirplaneMode:(_Bool)arg1;
- (void)setAirplaneMode:(id)arg1 specifier:(id)arg2;
- (void)_beginObservingAccountStoreDidChangeNotification;
- (id)_accountStore;
- (void)appleAccountsDidChange;
- (void)_setupiCloudSpecifier:(id)arg1 withPrimaryAccount:(id)arg2;
- (void)_setupiCloudSpecifierAsync:(id)arg1;
- (void)_setupiCloudSpecifier:(id)arg1;
- (void)setupAppleAccountCategory:(id)arg1;
- (id)getTetheringStatus:(id)arg1;
- (id)wifiNetwork:(id)arg1;
- (void)wifiNetworkFetch:(id)arg1;
- (void)updateWifi;
- (void)willBecomeActive;
- (void)willEnterForeground;
- (void)updateShowsCarrierSettingsMenuVisibility;
- (void)setShowsCarrierSettingsMenu:(_Bool)arg1;
- (void)networkChanged;
- (id)currentNetwork:(id)arg1;
- (void)_insertOrRemovePaymentSpecifierAsNeededCompletion:(CDUnknownBlockType)arg1;
- (_Bool)deviceSupportsApplePay;
- (void)_localeChanged;
- (void)_newCarrierNotification;
- (void)_simStatusChanged:(struct __CFString *)arg1;
@property(readonly, nonatomic) __weak UIViewController<PSController> *categoryController;
- (id)specifierForBundle:(id)arg1;
- (void)loadPPTTestSpecifiers:(int)arg1;
- (void)_reallyLoadThirdPartySpecifiersForProxies:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)loadThirdPartySpecifierForBundleID:(id)arg1;
- (void)_loadThirdPartySpecifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)_loadThirdPartySpecifiersIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)setDesiredVerticalContentOffsetItemNamed:(id)arg1;
- (id)dndGlobalState:(id)arg1;
- (_Bool)handlePendingURL;
- (id)specifiers;
- (id)passbookSpecifier;
- (void)updateWeiboState;
- (void)updateAccountSpecifiers;
- (void)updateHomeKitSpecifier;
- (_Bool)isHomeKitInUse;
- (void)updateRestrictedSettings;
- (_Bool)isSpecifierHiddenDueToRestrictions:(id)arg1;
- (_Bool)isBundleIDHiddenDueToRestrictions:(id)arg1;
- (void)displayIdentifiersChanged;
- (_Bool)shouldReloadSpecifiersOnResume;
- (void)refresh3rdPartyBundles;
- (void)popToRoot;
- (void)insertMovedThirdPartySpecifiersAnimated:(_Bool)arg1;
- (id)_specifierDictionaryForDeveloperBundlePath:(id)arg1 identifier:(id)arg2;
- (id)_specifierDictionaryForBundlePath:(id)arg1 identifier:(id)arg2 internalIcon:(_Bool)arg3 searchPlist:(id)arg4;
- (_Bool)_showCarrier;
- (void)_showControllerFromSpecifier:(id)arg1;
- (id)_sidebarSpecifierForCategoryController;
- (void)showPINSheet:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)identifierForSelectedIndex;
- (id)generalViewController;
- (void)selectGeneralCategoryForced:(_Bool)arg1 showController:(_Bool)arg2;
- (void)selectGeneralCategoryForced:(_Bool)arg1;
- (void)selectGeneralCategory;
- (void)checkDeveloperSettingsState;
- (void)loadView;
- (void)dealloc;
- (id)init;
- (void)_showDetailTargetDidChange:(id)arg1;
- (void)insertOrderedSpecifier:(id)arg1 animated:(_Bool)arg2;
- (id)_primarySpecifierOrdering;
- (void)rerootNavigationController;
- (void)reloadSpecifiers;
- (void)clearCache;
- (void)setSpeakerAccessory:(id)arg1 eqAvailable:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

