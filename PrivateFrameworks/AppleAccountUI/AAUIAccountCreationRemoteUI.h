//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/RUIObjectModelDelegate-Protocol.h>

@class AAAutoAccountVerifier, AASetupAssistantService, NSMutableArray, NSString, RUILoader, UIAlertView, UINavigationController;
@protocol AAUIAccountCreationDelegate;

@interface AAUIAccountCreationRemoteUI : NSObject <RUIObjectModelDelegate>
{
    _Bool _isModal;
    RUILoader *_loader;
    NSMutableArray *_objectModels;
    UINavigationController *_parentNavController;
    UINavigationController *_createAccountNavController;
    UIAlertView *_tcConfirmationAlert;
    UIAlertView *_failedToCreateAccountAlert;
    _Bool _over13;
    AASetupAssistantService *_aaService;
    AAAutoAccountVerifier *_verifier;
    id <AAUIAccountCreationDelegate> _delegate;
}

@property(nonatomic) __weak id <AAUIAccountCreationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)objectModelPressedBack:(id)arg1;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)objectModelDidChange:(id)arg1;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;
- (void)_popObjectModelAnimated:(_Bool)arg1;
- (void)_displayConnectionErrorAndDismiss;
- (void)_cleanupCreateAppleID:(id)arg1;
- (void)_cleanupLoader;
- (void)_userAgreedToTCs:(_Bool)arg1;
- (void)_createAppleAccount;
- (void)_addHeadersToRequest:(id)arg1;
- (void)loadURLRequest:(id)arg1;
- (void)loadURLRequest:(id)arg1 addHeaders:(_Bool)arg2;
- (void)dealloc;
- (id)initWithNavController:(id)arg1 isModal:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

