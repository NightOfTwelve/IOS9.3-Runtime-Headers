//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKSMSCompose-Protocol.h>
#import <ChatKit/CKSMSComposeRemoteViewControllerDelegate-Protocol.h>

@class CKSMSComposeQueuingRemoteViewControllerProxy, CKSMSComposeRemoteViewController, NSString, UINavigationController, _UIAsyncInvocation;

@interface CKSMSComposeController : UIViewController <CKSMSCompose, CKSMSComposeRemoteViewControllerDelegate>
{
    id _delegate;
    int _entryViewInvisible;
    _UIAsyncInvocation *_cancellationInvocation;
    UINavigationController *_clientNavigationController;
    _Bool _safeToAdd;
    _Bool _didChangeStatusBarStyle;
    long long _savedStatusBarStyle;
    CKSMSComposeRemoteViewController *_remoteViewController;
    CKSMSComposeQueuingRemoteViewControllerProxy *_remoteViewControllerProxy;
}

+ (_Bool)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;
+ (double)maxTrimDurationForVideo;
+ (double)maxTrimDurationForAudio;
+ (_Bool)acceptsMIMEType:(id)arg1;
@property(retain, nonatomic) CKSMSComposeQueuingRemoteViewControllerProxy *remoteViewControllerProxy; // @synthesize remoteViewControllerProxy=_remoteViewControllerProxy;
@property(retain, nonatomic) CKSMSComposeRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_addRemoteVCIfNeeded;
- (void)setTextEntryContentsVisible:(_Bool)arg1;
- (void)smsComposeControllerSendStartedWithText:(id)arg1;
- (void)smsComposeControllerCancelled;
- (void)smsComposeControllerAppeared;
- (void)smsComposeControllerDataInserted;
- (void)setUICustomizationData:(id)arg1;
- (void)forceMMS;
- (void)forceCancelComposition;
- (void)disableCameraAttachments;
- (void)setCanEditRecipients:(_Bool)arg1;
- (void)setPendingAddresses:(id)arg1;
- (void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3;
- (_Bool)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2;
- (_Bool)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (_Bool)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)dealloc;
- (id)initWithNavigationController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

