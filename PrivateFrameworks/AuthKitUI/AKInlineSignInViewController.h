//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AuthKitUI/UITextFieldDelegate-Protocol.h>

@class AKAppleIDAuthenticationController, AKAppleIDAuthenticationInAppContext, AKTextField, NSString, UIActivityIndicatorView, UIButton, UIView;
@protocol AKInlineSignInViewControllerDelegate;

@interface AKInlineSignInViewController : UIViewController <UITextFieldDelegate>
{
    _Bool _usesDarkMode;
    _Bool _isAuthInProgress;
    _Bool _usesVibrancy;
    long long _blurEffectStyle;
    AKAppleIDAuthenticationController *_authenticationController;
    NSString *_secondaryButtonTitle;
    NSString *_tertiaryButtonTitle;
    AKAppleIDAuthenticationInAppContext *_context;
    _Bool _wantsAuthenticationProgress;
    NSString *_primaryButtonTitle;
    id <AKInlineSignInViewControllerDelegate> _delegate;
    UIView *_loginFieldsContainer;
    AKTextField *_appleIDField;
    AKTextField *_passwordField;
    UIButton *_signInButton;
    UIButton *_iforgotButton;
    UIButton *_createAppleIDButton;
    UIActivityIndicatorView *_spinner;
}

@property(retain) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain) UIButton *createAppleIDButton; // @synthesize createAppleIDButton=_createAppleIDButton;
@property(retain) UIButton *iforgotButton; // @synthesize iforgotButton=_iforgotButton;
@property(retain) UIButton *signInButton; // @synthesize signInButton=_signInButton;
@property(retain) AKTextField *passwordField; // @synthesize passwordField=_passwordField;
@property(retain) AKTextField *appleIDField; // @synthesize appleIDField=_appleIDField;
@property(retain) UIView *loginFieldsContainer; // @synthesize loginFieldsContainer=_loginFieldsContainer;
@property __weak id <AKInlineSignInViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool wantsAuthenticationProgress; // @synthesize wantsAuthenticationProgress=_wantsAuthenticationProgress;
@property(readonly) NSString *primaryButtonTitle; // @synthesize primaryButtonTitle=_primaryButtonTitle;
- (void).cxx_destruct;
- (_Bool)_isAccountModificationRestricted;
- (_Bool)_isSignInAllowed;
@property(nonatomic) long long blurEffectStyle;
@property(nonatomic) _Bool usesVibrancy;
@property(readonly) AKAppleIDAuthenticationController *authenticationController;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)_updateFonts:(id)arg1;
- (void)_updateSignInButtonState;
- (void)_passwordTextFieldDidChange:(id)arg1;
- (void)_appleIDTextFieldDidChange:(id)arg1;
- (void)_hidebusyWorkUI;
- (void)_startBusyWorkUI;
- (void)provideDelegateWithAuthResults:(id)arg1 error:(id)arg2;
- (void)_beginAuthenticationIfPossibleWithOption:(unsigned long long)arg1;
- (_Bool)_canBeginAuthenticationWithOption:(unsigned long long)arg1;
- (void)createAppleIDButtonWasTapped:(id)arg1;
- (void)iForgotButtonWasTapped:(id)arg1;
- (void)signInButtonWasTapped:(id)arg1;
- (void)_updateVibrancyAndBlurInTextFields;
- (void)_prefillAuthFields;
- (void)_updateSignInFieldStatuses;
- (void)viewDidLoad;
@property(retain) AKAppleIDAuthenticationInAppContext *context;
- (void)setTertiaryButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)setSecondaryButtonTarget:(id)arg1 action:(SEL)arg2;
@property(copy) NSString *tertiaryButtonTitle;
@property(copy) NSString *secondaryButtonTitle;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (id)init;
@property(nonatomic) _Bool usesDarkMode; // @dynamic usesDarkMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

