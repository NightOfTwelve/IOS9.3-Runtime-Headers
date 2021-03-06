//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/RUIObjectModelDelegate-Protocol.h>

@class ACAccount, ACAccountStore, NSMutableArray, NSString, RUILoader, UIAlertView, UINavigationController, UIViewController;
@protocol AAUIGenericTermsRemoteUIDelegate;

@interface AAUIGenericTermsRemoteUI : NSObject <RUIObjectModelDelegate>
{
    UINavigationController *_parentNavController;
    UIViewController *_originatingViewController;
    UINavigationController *_genericTermsUIViewController;
    RUILoader *_loader;
    NSMutableArray *_objectModels;
    ACAccount *_account;
    ACAccountStore *_accountStore;
    _Bool _isModal;
    UIAlertView *_tcConfirmationAlert;
    NSString *_agreeURL;
    _Bool _isPreferringPassword;
    id <AAUIGenericTermsRemoteUIDelegate> _delegate;
}

@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <AAUIGenericTermsRemoteUIDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_addHeadersToRequest:(id)arg1;
- (void)_displayConnectionErrorAndDismiss;
- (void)_popObjectModelAnimated:(_Bool)arg1;
- (void)_cleanupRUILoader;
- (void)_cleanUpAndDismissWithSuccess:(_Bool)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)objectModelPressedBack:(id)arg1;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;
- (void)_loadRequestPreferingPassword:(_Bool)arg1;
- (void)presentFromViewController:(id)arg1 modal:(_Bool)arg2;
- (id)initWithAccount:(id)arg1 inStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

