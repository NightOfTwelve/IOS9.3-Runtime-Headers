//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ChatKit/CKAlertControllerDelegate-Protocol.h>
#import <ChatKit/UIPopoverPresentationControllerDelegate-Protocol.h>

@class CKPresentationControllerWindow, NSString, UIPopoverPresentationController, UIViewController;

@interface CKAdaptivePresentationController : NSObject <UIPopoverPresentationControllerDelegate, CKAlertControllerDelegate>
{
    UIViewController *_presentedViewController;
    UIPopoverPresentationController *_currentPresentationController;
    CKPresentationControllerWindow *_presentationWindow;
    CDUnknownBlockType _presentationHandler;
    CDUnknownBlockType _dismissalHandler;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType dismissalHandler; // @synthesize dismissalHandler=_dismissalHandler;
@property(copy, nonatomic) CDUnknownBlockType presentationHandler; // @synthesize presentationHandler=_presentationHandler;
@property(retain, nonatomic) CKPresentationControllerWindow *presentationWindow; // @synthesize presentationWindow=_presentationWindow;
@property(retain, nonatomic) UIPopoverPresentationController *currentPresentationController; // @synthesize currentPresentationController=_currentPresentationController;
@property(retain, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
- (void)_cleanup;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 fromViewController:(id)arg2 presentationHandler:(CDUnknownBlockType)arg3 dismissalHandler:(CDUnknownBlockType)arg4 animated:(_Bool)arg5;
- (void)alertControllerViewDidDisappear:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

