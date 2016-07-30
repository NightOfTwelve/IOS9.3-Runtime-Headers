//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/PKPaymentSetupViewController.h>

#import <PassKit/PKPaymentSetupViewControllerDelegate-Protocol.h>

@class NSString, UIButton;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupAssistantRegistrationViewController : PKPaymentSetupViewController <PKPaymentSetupViewControllerDelegate>
{
    UIButton *_skipButton;
    id <PKPaymentSetupViewControllerDelegate> _externalDelegate;
}

+ (_Bool)bridgeSetupAssistantNeedsToRunReturningRequirements:(unsigned long long *)arg1;
+ (_Bool)setupAssistantNeedsToRunReturningRequirements:(unsigned long long *)arg1;
+ (_Bool)setupAssistantNeedsToRun;
+ (id)defaultWebServiceForContext:(long long)arg1;
- (void)viewControllerDidShowEligibilityIssue:(id)arg1;
- (void)viewController:(id)arg1 didShowProvisioningError:(id)arg2;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)_setExternalDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)_deviceSpecificLocalizedStringKeyForKey:(id)arg1;
- (void)privacyButtonTouched:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)_bridgeContextDefaultLocalCredential;
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithPaymentWebService:(id)arg1 context:(long long)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

