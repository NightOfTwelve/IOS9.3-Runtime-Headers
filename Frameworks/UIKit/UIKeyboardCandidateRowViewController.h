//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UIKit/UICollectionViewDataSource-Protocol.h>
#import <UIKit/UICollectionViewDelegate-Protocol.h>
#import <UIKit/UIKeyboardCandidateList-Protocol.h>

@class NSArray, NSString, TIKeyboardCandidateResultSet, UIKBCandidateCollectionView;
@protocol UIKeyboardCandidateListDelegate, UIKeyboardCandidateRowViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateRowViewController : UIViewController <UIKeyboardCandidateList, UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _showsHiddenCandidates;
    id <UIKeyboardCandidateRowViewControllerDelegate> _delegate;
    id <UIKeyboardCandidateListDelegate> _candidateListDelegate;
    TIKeyboardCandidateResultSet *_candidateSet;
    Class _cellClass;
}

+ (double)suggestedHeightForCellClass:(Class)arg1;
@property(retain, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
@property(nonatomic) _Bool showsHiddenCandidates; // @synthesize showsHiddenCandidates=_showsHiddenCandidates;
@property(retain, nonatomic) TIKeyboardCandidateResultSet *candidateSet; // @synthesize candidateSet=_candidateSet;
@property(nonatomic) id <UIKeyboardCandidateListDelegate> candidateListDelegate; // @synthesize candidateListDelegate=_candidateListDelegate;
@property(nonatomic) id <UIKeyboardCandidateRowViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *candidates;
@property(readonly, nonatomic) UIKBCandidateCollectionView *collectionView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)sizeOfDummyItemForCollectionView:(id)arg1 layout:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)_showCandidateAtIndex:(unsigned long long)arg1 scrollCellToVisible:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_stepSelectedCandidateInDirection:(_Bool)arg1;
- (void)_reloadCandidates;
- (unsigned long long)selectedSortIndex;
- (id)statisticsIdentifier;
- (id)keyboardBehaviors;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect)arg4 maxX:(double)arg5 layout:(_Bool)arg6;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(double)arg4 layout:(_Bool)arg5;
- (void)candidatesDidChange;
- (_Bool)hasCandidates;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentIndex;
- (id)currentCandidate;
- (void)revealHiddenCandidates;
- (void)showPreviousRow;
- (void)showNextRow;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (_Bool)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (_Bool)isExtendedList;
- (_Bool)isHiddenCandidatesList;
- (void)loadView;
- (double)suggestedHeight;
- (id)initWithCellClass:(Class)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

