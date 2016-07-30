//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIKeyboardCandidateGridCollectionViewControllerDelegate-Protocol.h>
#import <UIKit/UIKeyboardCandidateList-Protocol.h>
#import <UIKit/UIKeyboardCandidateListDelegate-Protocol.h>

@class NSString, TIKeyboardCandidateResultSet, UIKeyboardCandidateGridCollectionViewController, UIKeyboardCandidateSortControl;
@protocol UIKeyboardCandidateListDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateInlineFloatingView : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateGridCollectionViewControllerDelegate>
{
    _Bool _reducedWidth;
    _Bool _showHiddenCandidatesOnly;
    int _position;
    TIKeyboardCandidateResultSet *_candidateSet;
    NSString *_inlineText;
    double _maxX;
    UIKeyboardCandidateGridCollectionViewController *_collectionViewController;
    id <UIKeyboardCandidateListDelegate> _candidateListDelegate;
    UIKeyboardCandidateSortControl *_sortSelectionBar;
    struct CGRect _inlineRect;
    struct CGRect _previousCollapsedFrame;
}

@property(nonatomic) _Bool showHiddenCandidatesOnly; // @synthesize showHiddenCandidatesOnly=_showHiddenCandidatesOnly;
@property(nonatomic) struct CGRect previousCollapsedFrame; // @synthesize previousCollapsedFrame=_previousCollapsedFrame;
@property(nonatomic) int position; // @synthesize position=_position;
@property(nonatomic) id <UIKeyboardCandidateListDelegate> candidateListDelegate; // @synthesize candidateListDelegate=_candidateListDelegate;
@property(readonly, nonatomic, getter=isReducedWidth) _Bool reducedWidth; // @synthesize reducedWidth=_reducedWidth;
@property(nonatomic) double maxX; // @synthesize maxX=_maxX;
@property(nonatomic) struct CGRect inlineRect; // @synthesize inlineRect=_inlineRect;
@property(copy, nonatomic) NSString *inlineText; // @synthesize inlineText=_inlineText;
@property(retain, nonatomic) TIKeyboardCandidateResultSet *candidateSet; // @synthesize candidateSet=_candidateSet;
- (id)_inheritedRenderConfig;
@property(readonly, nonatomic) UIKeyboardCandidateSortControl *sortSelectionBar; // @synthesize sortSelectionBar=_sortSelectionBar;
@property(readonly, nonatomic) UIKeyboardCandidateGridCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
- (void)sortSelectionBarAction;
- (void)padInlineFloatingViewExpand:(id)arg1;
- (_Bool)padInlineFloatingViewIsExpanded:(id)arg1;
- (unsigned long long)gridCollectionViewNumberOfColumns:(id)arg1;
- (unsigned long long)gridCollectionViewSelectedSortMethodIndex:(id)arg1;
- (void)candidateListShouldBeDismissed:(id)arg1;
- (void)candidateListSelectionDidChange:(id)arg1;
- (void)candidateListAcceptCandidate:(id)arg1;
- (_Bool)handleTabKeyWithShift:(_Bool)arg1;
- (_Bool)handleNumberKey:(unsigned long long)arg1;
- (unsigned long long)selectedSortIndex;
- (id)statisticsIdentifier;
- (id)keyboardBehaviors;
- (_Bool)hasCandidates;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentIndex;
- (id)currentCandidate;
- (void)showPreviousRow;
- (void)showNextRow;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (_Bool)showCandidate:(id)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)layout;
- (id)candidates;
- (void)candidatesDidChange;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(double)arg4 layout:(_Bool)arg5;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect)arg4 maxX:(double)arg5 layout:(_Bool)arg6 showHiddenCandidatesOnly:(_Bool)arg7;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect)arg4 maxX:(double)arg5 layout:(_Bool)arg6;
- (void)setCandidateSet:(id)arg1 showHiddenCandidatesOnly:(_Bool)arg2;
- (void)adjustFrameForInlineText:(id)arg1 inlineRect:(struct CGRect)arg2 maxX:(double)arg3;
- (struct CGRect)adjustedFrameFromDesiredFrame:(struct CGRect)arg1 textHeight:(double)arg2;
- (_Bool)isAcceptableFrame:(struct CGRect)arg1 afterScrollBy:(double)arg2;
- (struct CGRect)adjustedInlineRectFromInlineText:(id)arg1 inlineRect:(struct CGRect)arg2;
- (void)revealHiddenCandidates;
- (_Bool)isHiddenCandidatesList;
- (_Bool)isExtendedList;
- (void)expand;
- (struct CGSize)size;
- (void)updateLayerBorderWidth;
- (void)didMoveToWindow;
- (void)setFrame:(struct CGRect)arg1;
- (id)activeCandidateList;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

