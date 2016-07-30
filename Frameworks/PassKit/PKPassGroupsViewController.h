//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKit/PKCodeAcquisitionDelegate-Protocol.h>
#import <PassKit/PKGroupsControllerDelegate-Protocol.h>
#import <PassKit/PKPassGroupStackViewDatasource-Protocol.h>
#import <PassKit/PKPassGroupStackViewDelegate-Protocol.h>
#import <PassKit/PKPassPersonalizationViewControllerDelegate-Protocol.h>
#import <PassKit/PKPaymentServiceDelegate-Protocol.h>
#import <PassKit/UIScrollViewDelegate-Protocol.h>

@class NSMutableArray, NSString, NSTimer, PKGroupsController, PKPassGroupStackView, PKPaymentService, UIImageView;
@protocol PKPassGroupsViewControllerDelegate;

@interface PKPassGroupsViewController : UIViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate, UIScrollViewDelegate, PKPaymentServiceDelegate, PKCodeAcquisitionDelegate, PKPassPersonalizationViewControllerDelegate>
{
    UIImageView *_statusBarGradient;
    PKPassGroupStackView *_groupStackView;
    PKGroupsController *_groupsController;
    PKPaymentService *_paymentService;
    unsigned long long _modalCardIndex;
    long long _presentationState;
    NSTimer *_allowDimmingTimer;
    NSTimer *_passViewedNotificationTimer;
    NSMutableArray *_blocksQueuedForUpdateCompletion;
    _Bool _viewAppeared;
    _Bool _viewAppearedBefore;
    _Bool _passesAreOutdated;
    _Bool _reloadingPasses;
    _Bool _backgroundMode;
    _Bool _handleFieldDetection;
    _Bool _welcomeStateEnabled;
    unsigned long long _suppressedContent;
    id <PKPassGroupsViewControllerDelegate> _delegate;
}

+ (void)endTrackingAction;
+ (void)beginTrackingAction;
+ (_Bool)isPerformingAction;
@property(nonatomic, getter=isWelcomeStateEnabled) _Bool welcomeStateEnabled; // @synthesize welcomeStateEnabled=_welcomeStateEnabled;
@property _Bool handleFieldDetection; // @synthesize handleFieldDetection=_handleFieldDetection;
@property _Bool passesAreOutdated; // @synthesize passesAreOutdated=_passesAreOutdated;
@property(nonatomic) id <PKPassGroupsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long suppressedContent; // @synthesize suppressedContent=_suppressedContent;
- (void)updateRegionSupportIfNecessary;
- (void)_regionConfigurationDidChangeNotification;
- (void)_localeDidChangeNotification:(id)arg1;
- (void)_dismissPresentedVCsWithRequirements:(unsigned long long)arg1 performAction:(CDUnknownBlockType)arg2;
- (void)_updateStatusBarGradientOpacity:(_Bool)arg1;
- (void)_applyPresentationState;
- (void)_presentWithUpdatedPasses:(CDUnknownBlockType)arg1;
- (void)_presentAddPassesControllerWithPasses:(id)arg1;
- (void)presentAutomaticPresentationControllerForPassWithUniqueID:(id)arg1;
- (void)addSimulatorPassWithURL:(id)arg1;
- (void)addVASPassWithIdentifier:(id)arg1;
- (void)startPaymentPreflight:(id)arg1;
- (void)terminateFieldDetect;
@property(readonly, retain, nonatomic) PKPassGroupStackView *groupStackView;
- (void)presentPassWithUniqueID:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentPassWithUniqueID:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setTableModalPresentationEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)presentGroupTableAnimated:(_Bool)arg1;
- (void)presentGroupTable;
- (void)presentPileOffscreen;
- (void)presentOffscreenAnimated:(_Bool)arg1 split:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)presentOffscreenAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)presentOnscreen:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)presentPaymentSetup;
- (void)presentInitialState;
- (void)updatePassesIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)reloadPasses;
- (void)reloadPassesWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentPassWithFieldProperties:(id)arg1 fieldPassUniqueIdentifiers:(id)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)presentPassWithFieldProperties:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentPassWithBulletinRecordID:(id)arg1;
- (void)_presentGroupWithIndex:(unsigned long long)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)codeAcquisitionControllerDidCancel:(id)arg1;
- (void)codeAcquisitionController:(id)arg1 didFinishWithPass:(id)arg2;
- (void)codeAcquisitionController:(id)arg1 didAddPass:(id)arg2;
- (void)codeAcquisitionController:(id)arg1 willAddPass:(id)arg2;
- (void)paymentDeviceDidEnterFieldWithProperties:(id)arg1;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)passPersonalizationViewController:(id)arg1 didFinishPersonalizingPass:(id)arg2;
- (void)groupStackView:(id)arg1 didTransitionToState:(long long)arg2 animated:(_Bool)arg3;
- (void)groupStackView:(id)arg1 transitioningToState:(long long)arg2 animated:(_Bool)arg3;
- (void)_passViewedNotificationTimerFired;
- (void)_clearPassViewedNotificationTimer;
- (void)_startPassViewedNotificationTimer;
- (void)_handleStatusBarChange:(id)arg1;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)updateLockscreenIdleTimer;
- (void)allowIdleTimer;
- (_Bool)passesGrowWhenFlipped;
- (void)groupStackView:(id)arg1 groupDidMoveFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)groupStackViewDidEndReordering:(id)arg1;
- (void)groupStackViewDidBeginReordering:(id)arg1;
- (_Bool)groupStackViewShouldAllowReordering:(id)arg1;
- (void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;
- (void)groupStackView:(id)arg1 didEndShowingPassView:(id)arg2;
- (void)groupStackView:(id)arg1 didBeginShowingPassView:(id)arg2;
- (id)groupStackView:(id)arg1 subheaderForPassType:(unsigned long long)arg2;
- (id)groupStackView:(id)arg1 headerForPassType:(unsigned long long)arg2;
- (_Bool)groupStackView:(id)arg1 requiresHeaderForPassType:(unsigned long long)arg2;
- (_Bool)groupStackViewShouldShowHeaderViews:(id)arg1;
- (unsigned long long)indexOfSeparationGroup;
- (unsigned long long)indexOfGroup:(id)arg1;
- (unsigned long long)numberOfGroups;
- (id)groupAtIndex:(unsigned long long)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)cardsChanged:(id)arg1;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)loadView;
- (void)dealloc;
- (id)initWithGroupsController:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

