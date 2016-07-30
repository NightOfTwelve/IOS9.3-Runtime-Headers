//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ContactsUI/CNQuickActionsManagerDelegate-Protocol.h>
#import <ContactsUI/UIGestureRecognizerDelegate-Protocol.h>
#import <ContactsUI/UITableViewDataSource-Protocol.h>
#import <ContactsUI/UITableViewDelegate-Protocol.h>

@class CNAvatarCardActionsTableView, CNQuickActionsManager, NSArray, NSIndexPath, NSString, UIGestureRecognizer;
@protocol CNAvatarCardActionsViewDelegate;

__attribute__((visibility("hidden")))
@interface CNAvatarCardActionsView : UIView <UITableViewDataSource, UITableViewDelegate, CNQuickActionsManagerDelegate, UIGestureRecognizerDelegate>
{
    _Bool _actionsReversed;
    _Bool _bypassActionValidation;
    _Bool _dismissesBeforePerforming;
    _Bool _expanded;
    NSArray *_contacts;
    NSArray *_actionCategories;
    id <CNAvatarCardActionsViewDelegate> _delegate;
    CNQuickActionsManager *_actionsManager;
    NSArray *_actions;
    CNAvatarCardActionsTableView *_tableView;
    NSIndexPath *_highlightedIndexPath;
    UIGestureRecognizer *_rolloverGestureRecognizer;
    UIGestureRecognizer *_selectionGestureRecognizer;
    struct CGPoint _initialLocation;
    struct CGRect _actionsImageFrame;
}

+ (_Bool)requiresConstraintBasedLayout;
+ (_Bool)performActionsOnDeepPress;
@property(nonatomic) struct CGPoint initialLocation; // @synthesize initialLocation=_initialLocation;
@property(retain, nonatomic) UIGestureRecognizer *selectionGestureRecognizer; // @synthesize selectionGestureRecognizer=_selectionGestureRecognizer;
@property(retain, nonatomic) UIGestureRecognizer *rolloverGestureRecognizer; // @synthesize rolloverGestureRecognizer=_rolloverGestureRecognizer;
@property(retain, nonatomic) NSIndexPath *highlightedIndexPath; // @synthesize highlightedIndexPath=_highlightedIndexPath;
@property(retain, nonatomic) CNAvatarCardActionsTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) CNQuickActionsManager *actionsManager; // @synthesize actionsManager=_actionsManager;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) _Bool dismissesBeforePerforming; // @synthesize dismissesBeforePerforming=_dismissesBeforePerforming;
@property(nonatomic) __weak id <CNAvatarCardActionsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect actionsImageFrame; // @synthesize actionsImageFrame=_actionsImageFrame;
@property(nonatomic) _Bool bypassActionValidation; // @synthesize bypassActionValidation=_bypassActionValidation;
@property(nonatomic) _Bool actionsReversed; // @synthesize actionsReversed=_actionsReversed;
@property(copy, nonatomic) NSArray *actionCategories; // @synthesize actionCategories=_actionCategories;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (void).cxx_destruct;
- (_Bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)actionsManager:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (id)actionsManager:(id)arg1 presentingViewControllerForAction:(id)arg2;
- (void)_updateCellSeparator:(id)arg1 forIndexPath:(id)arg2;
- (void)_updateAllSeparators;
- (void)_dismissCardAnimated:(_Bool)arg1;
- (void)_configureCell:(id)arg1 forAction:(id)arg2;
- (void)_updateFromActions:(id)arg1 toActions:(id)arg2 matchingOldIndex:(long long)arg3 toNewActionIndex:(long long)arg4 invertedAnimation:(_Bool)arg5;
- (void)_performActionAtIndexPath:(id)arg1;
- (void)_stopTrackingRolloverOnCellAtIndexPath:(id)arg1 withGestureRecognizer:(id)arg2;
- (void)_startTrackingRolloverOnCellAtIndexPath:(id)arg1 withGestureRecognizer:(id)arg2;
- (void)updateRollover:(id)arg1;
- (id)_indexPathForGestureRecognizer:(id)arg1;
@property(readonly, nonatomic, getter=isPerformingAction) _Bool performingAction;
- (void)stopTrackingRollover;
- (void)startTrackingRolloverWithGestureRecognizer:(id)arg1;
- (_Bool)performHighlightedAction;
- (void)resetWithBlock:(CDUnknownBlockType)arg1;
- (void)reset;
- (void)refreshActions;
- (void)reloadDataWithBlock:(CDUnknownBlockType)arg1;
- (void)reloadData;
- (id)_actionAtIndexPath:(id)arg1;
- (id)_effectiveManagerActions;
- (void)_updateWithActions:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_updateActionsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

