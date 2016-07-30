//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNAvatarCardActionsViewDelegate-Protocol.h>
#import <ContactsUI/CNCardTransitioning-Protocol.h>
#import <ContactsUI/UIGestureRecognizerDelegate-Protocol.h>

@class CNAvatarCardActionsView, CNAvatarCardController, NSArray, NSString, UIImage, UIView;
@protocol CNAvatarCardViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNAvatarCardViewController : UIViewController <CNAvatarCardActionsViewDelegate, CNCardTransitioning, UIGestureRecognizerDelegate>
{
    _Bool _visible;
    _Bool _hasBackgroundColor;
    _Bool _hasHeader;
    _Bool _headerOnTop;
    CNAvatarCardController *_cardController;
    id <CNAvatarCardViewControllerDelegate> _delegate;
    CNAvatarCardActionsView *_actionsView;
    UIView *_sourceView;
    UIView *_headerContainerView;
    UIView *_effectView;
    NSArray *_verticalConstraints;
}

@property(retain, nonatomic) NSArray *verticalConstraints; // @synthesize verticalConstraints=_verticalConstraints;
@property(retain, nonatomic) UIView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) UIView *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) CNAvatarCardActionsView *actionsView; // @synthesize actionsView=_actionsView;
@property(nonatomic) _Bool headerOnTop; // @synthesize headerOnTop=_headerOnTop;
@property(nonatomic) _Bool hasHeader; // @synthesize hasHeader=_hasHeader;
@property(nonatomic) _Bool hasBackgroundColor; // @synthesize hasBackgroundColor=_hasBackgroundColor;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) __weak id <CNAvatarCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak CNAvatarCardController *cardController; // @synthesize cardController=_cardController;
- (void).cxx_destruct;
@property _Bool transitioningImageVisible;
@property(readonly, nonatomic) struct CGRect transitioningImageFrame;
@property(readonly, nonatomic) UIImage *transitioningImage;
@property(readonly, nonatomic) struct CGRect transitioningContentFrame;
@property(readonly, nonatomic) struct CGRect transitioningFrame;
@property(readonly, nonatomic) UIView *transitioningView;
- (void)dismissViewControllerForCardActionsView:(id)arg1 animated:(_Bool)arg2;
- (id)viewControllerForCardActionsView:(id)arg1;
- (void)cardActionsView:(id)arg1 didShowActions:(id)arg2;
- (void)cardActionsView:(id)arg1 willShowActions:(id)arg2;
- (id)cardActionsView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (void)refreshActions;
- (void)_updatePreferredSize;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
@property(nonatomic) _Bool bypassActionValidation;
@property(copy, nonatomic) NSArray *actionCategories;
@property(retain, nonatomic) NSArray *contacts;
- (struct CGRect)_photoFrameInView:(id)arg1;
@property(nonatomic) _Bool dismissesBeforePerforming;
@property(nonatomic) _Bool actionsReversed;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView *transitioningContentView;

@end

