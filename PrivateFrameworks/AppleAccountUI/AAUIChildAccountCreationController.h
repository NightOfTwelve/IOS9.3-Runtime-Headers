//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/RUIObjectModelDelegate-Protocol.h>

@class AAGrandSlamSigner, AASetupAssistantService, NSArray, NSHTTPURLResponse, NSMutableArray, NSString, NSURL, RUILoader, UIActivityIndicatorView, UIBarButtonItem, UINavigationController, UINavigationItem, UIToolbar;
@protocol AAUIChildAccountCreationDelegate;

@interface AAUIChildAccountCreationController : NSObject <RUIObjectModelDelegate>
{
    AASetupAssistantService *_setupService;
    AAGrandSlamSigner *_grandSlamSigner;
    NSURL *_launchingURL;
    NSMutableArray *_objectModels;
    RUILoader *_loader;
    NSHTTPURLResponse *_currentResponse;
    UIActivityIndicatorView *_spinnerView;
    UIBarButtonItem *_originalRightBarButtonItem;
    UINavigationItem *_navigationItemShowingSpinner;
    NSArray *_originalEnabledToolbarItems;
    NSArray *_originalToolbarItems;
    UIToolbar *_originalToolbar;
    _Bool _isShowingSpinner;
    _Bool _isPendingDismissal;
    id <AAUIChildAccountCreationDelegate> _delegate;
    UINavigationController *_navigationController;
}

@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak id <AAUIChildAccountCreationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_sendUserToiTunesSettings;
- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModelPressedBack:(id)arg1;
- (void)objectModelDidChange:(id)arg1;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;
- (void)_popObjectModelAnimated:(_Bool)arg1;
- (_Bool)_pressedLink:(id)arg1 comesFromBarButtonItem:(id)arg2 objectModel:(id)arg3;
- (void)_displayConnectionErrorAndCancel;
- (void)_cancel;
- (void)_createChildAccount;
- (void)_addHeadersToRequest:(id)arg1;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)_renewCredentialsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_hideActivitySpinner;
- (void)_showActivitySpinnerInNavigationBar;
- (void)_showActivitySpinnerInToolbar:(id)arg1;
- (id)_spinnerView;
- (void)_cleanupRemoteUILoader;
- (void)_startRemoteUILoaderWithRequest:(id)arg1;
- (void)loadRemoteUI;
- (id)initWithGrandSlamSigner:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

