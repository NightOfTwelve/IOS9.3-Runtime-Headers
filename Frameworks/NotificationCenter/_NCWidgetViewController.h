//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NotificationCenter/SBUISizeObservingViewDelegate-Protocol.h>
#import <NotificationCenter/_NCWidgetViewController_Service_IPC-Protocol.h>

@class NSMapTable, NSObject, NSString, UIView, _UIViewControllerTransitionContext;
@protocol NCWidgetProviding, OS_dispatch_queue, UIViewControllerAnimatedTransitioning;

__attribute__((visibility("hidden")))
@interface _NCWidgetViewController : UIViewController <_NCWidgetViewController_Service_IPC, SBUISizeObservingViewDelegate>
{
    UIViewController<NCWidgetProviding> *_contentProvidingViewController;
    NSString *_widgetIdentifier;
    UIView *_contentView;
    struct UIEdgeInsets _clientMarginInsets;
    double _clientPreferredViewHeight;
    NSMapTable *_activeTransitionContextsByRequestID;
    NSObject<OS_dispatch_queue> *_remoteViewControllerProxyQueue;
    id <UIViewControllerAnimatedTransitioning> _transitionController;
    _UIViewControllerTransitionContext *_activeTransitionContext;
    NSMapTable *_wrappedAppearStatesToOpenTransactionIDs;
    struct {
        unsigned int implementsPerformUpdateWithCompletionHandler:1;
        unsigned int implementsMarginInsets:1;
        unsigned int implementsContentWidthDidChange:1;
    } _contentProvidingViewControllerFlags;
}

+ (void)_reduceTransparencyDidChange:(id)arg1;
+ (void)initialize;
+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@property(retain, nonatomic, getter=_contentProvidingViewController) UIViewController<NCWidgetProviding> *contentProvidingViewController; // @synthesize contentProvidingViewController=_contentProvidingViewController;
- (void)__openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2;
- (void)__performUpdateWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)__requestEncodedLayerTreeWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)__performOutstandingCompletionForRequestWithIdentifier:(id)arg1;
- (void)__performOutstandingAnimationsForRequestWithIdentifier:(id)arg1;
- (void)__viewWillTransitionToSize:(struct CGSize)arg1 requestIdentifier:(id)arg2;
- (void)__setWidgetIdentifier:(id)arg1;
- (_Bool)_disableAutomaticKeyboardBehavior;
- (void)_willAppearInRemoteViewController;
- (void)_encodeLayerTree:(CDUnknownBlockType)arg1;
- (void)sizeObservingView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)_openURL:(id)arg1;
- (void)_performUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)_requestPreferredViewHeight:(double)arg1 usingAutolayout:(_Bool)arg2;
- (id)_transitionContextForRequestIdentifier:(id)arg1;
- (id)_transitionContextForRequestIdentifier:(id)arg1 usingAutolayout:(_Bool)arg2 createIfNecessary:(_Bool)arg3;
- (id)_customAnimator:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_closeTransactionWithAppearState:(int)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLoad;
- (void)loadView;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (struct CGRect)_sanitizedClientFrameFromHostSize:(struct CGSize)arg1;
- (double)_sanitizedClientContentWidthForProposedHostWidth:(double)arg1;
- (void)_requestMarginInsets;
- (void)_setContentProvidingViewController:(id)arg1;
- (void)_enqueueProxyRequest:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

