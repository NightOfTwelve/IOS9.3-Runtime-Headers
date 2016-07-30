//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUClientController.h>

#import <iTunesStoreUI/SKUIPassbookLoaderDelegate-Protocol.h>
#import <iTunesStoreUI/SUTabBarControllerDelegate-Protocol.h>

@class ISOperation, NSString, NSURL, SKUIPassbookLoader, SKUIURL, SUMediaPlayerViewController, SUPlaceholderViewController, SUPreviewOverlayViewController, SUSectionsResponse, SUTabBarController, UINavigationController;

@interface SUClientApplicationController : SUClientController <SKUIPassbookLoaderDelegate, SUTabBarControllerDelegate>
{
    SUMediaPlayerViewController *_activeMediaPlayer;
    NSString *_exitStoreButtonTitle;
    SUPlaceholderViewController *_fetchSectionsPlaceholder;
    long long _ignoreDownloadQueueChangeCount;
    SKUIURL *_launchURL;
    SUSectionsResponse *_lastBackgroundSectionsResponse;
    SUSectionsResponse *_lastSectionsResponse;
    ISOperation *_loadSectionsOperation;
    id _locationObserver;
    SKUIPassbookLoader *_passbookLoader;
    NSString *_preMediaDefaultPNG;
    SUPreviewOverlayViewController *_previewOverlay;
    _Bool _reloadForStorefrontChangeAfterAccountSetup;
    _Bool _reloadSectionsOnNextLaunch;
    _Bool _shouldPrepareUserInterfaceWhenActivated;
    SUTabBarController *_tabBarController;
}

+ (id)sharedController;
+ (void)setSharedController:(id)arg1;
@property(nonatomic) _Bool shouldPrepareUserInterfaceWhenActivated; // @synthesize shouldPrepareUserInterfaceWhenActivated=_shouldPrepareUserInterfaceWhenActivated;
@property(copy, nonatomic) NSString *exitStoreButtonTitle; // @synthesize exitStoreButtonTitle=_exitStoreButtonTitle;
@property(retain, nonatomic, getter=_activeMediaPlayer, setter=_setActiveMediaPlayer:) SUMediaPlayerViewController *_activeMediaPlayer; // @synthesize _activeMediaPlayer;
- (_Bool)_showWildcatAccountViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_showPreviewOverlayAnimated:(_Bool)arg1;
- (void)_setupTabBarController;
- (id)_resumableViewController;
- (id)_previewOverlayViewController;
- (void)_openClientURL:(id)arg1;
- (_Bool)_displayClientURL:(id)arg1;
- (void)_cancelSuspendAfterDialogsDismissed;
- (id)_accountViewController;
- (void)_handleSearchURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3;
- (void)_handleDonationURL:(id)arg1;
- (void)_handleAddPassbookPassURL:(id)arg1;
- (void)_handleAccountURL:(id)arg1;
- (void)_defaultHandleApplicationURLRequestProperties:(id)arg1;
- (void)_retrySectionsAfterNetworkTransition;
- (void)_reloadWithSectionsResponse:(id)arg1;
- (_Bool)_reloadForStorefrontChange;
- (void)_presentSectionFetchUI;
- (_Bool)_loadSectionsAllowingCache:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_handleSectionsLoadFailedWithError:(id)arg1;
- (void)_handleFinishedLoadSectionsOperation:(id)arg1;
- (void)_handleFinishedBackgroundLoadSectionsOperation:(id)arg1;
- (void)_cancelSectionFetchPlaceholder;
- (void)_cancelLoadSectionsOperation;
- (void)_storeFrontChangedNotification:(id)arg1;
- (void)_selectFooterSectionNotification:(id)arg1;
- (void)_restrictionsChangedNotification:(id)arg1;
- (void)_reloadForNetworkTypeChange:(id)arg1;
- (void)_dialogDidFinishNotification:(id)arg1;
- (void)bagDidLoadNotification:(id)arg1;
- (void)_accountControllerDisappearedNotification:(id)arg1;
- (_Bool)tabBarController:(id)arg1 shouldShowSection:(id)arg2;
- (id)presentationViewControllerForPassbookLoader:(id)arg1;
- (void)passbookLoaderDidFinish:(id)arg1;
- (id)tabBarControllerForClientInterface:(id)arg1;
- (void)returnToLibraryForClientInterface:(id)arg1;
- (id)previewOverlayForClientInterface:(id)arg1;
- (void)clientInterface:(id)arg1 showPreviewOverlayAnimated:(_Bool)arg2;
- (void)clientInterface:(id)arg1 hidePreviewOverlayAnimated:(_Bool)arg2;
- (id)_showPageForExternalOriginatedURLBagKey:(id)arg1;
- (void)_restorePreMediaPlayerSettings;
- (id)_newTabBarController;
- (void)resignActive;
- (_Bool)presentOverlayBackgroundViewController:(id)arg1;
- (void)presentExternalURLViewController:(id)arg1;
- (_Bool)presentAccountViewController:(id)arg1 showNavigationBar:(_Bool)arg2 animated:(_Bool)arg3;
- (id)overlayBackgroundViewController;
- (_Bool)openClientURL:(id)arg1 withSourceApplication:(id)arg2 sourceURLString:(id)arg3;
- (_Bool)displayClientURL:(id)arg1 withSourceApplication:(id)arg2 sourceURLString:(id)arg3;
- (_Bool)dismissTopViewControllerAnimated:(_Bool)arg1;
- (void)dismissOverlayBackgroundViewController;
- (void)cancelAllOperations;
- (void)becomeActive;
@property(readonly, nonatomic, getter=wasLaunchedFromLibrary) _Bool launchedFromLibrary;
@property(readonly, nonatomic) UINavigationController *topNavigationController;
- (void)tearDownUI;
@property(readonly, nonatomic) SUTabBarController *tabBarController;
- (id)showMainPageForItemKind:(id)arg1 sectionIdentifiers:(id)arg2;
- (void)setupUI;
- (_Bool)selectSectionWithIdentifier:(id)arg1;
- (void)returnToLibrary;
- (_Bool)reloadSectionWithIdentifier:(id)arg1 url:(id)arg2;
- (void)prepareUserInterface;
@property(readonly, nonatomic) NSURL *launchURL;
@property(readonly, nonatomic, getter=isTabBarControllerLoaded) _Bool tabBarControllerLoaded;
@property(readonly, nonatomic, getter=isIgnoringDownloadQueueChanges) _Bool ignoringDownloadQueueChanges;
- (void)exitStoreAfterDialogsDismiss;
- (void)endIgnoringDownloadQueueChanges;
@property(readonly, nonatomic) NSString *defaultPNGNameForSuspend;
- (double)defaultImageSnapshotExpiration;
- (id)copySuspendSettings;
- (void)beginIgnoringDownloadQueueChanges;
- (void)dealloc;
- (id)initWithClientInterface:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

