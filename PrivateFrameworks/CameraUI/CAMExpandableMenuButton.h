//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSIndexSet, NSMutableArray, NSMutableIndexSet, UIView;
@protocol CAMExpandableMenuButtonDelegate;

@interface CAMExpandableMenuButton : UIControl
{
    _Bool _expanded;
    long long _selectedIndex;
    long long _expansionOrientation;
    long long _orientation;
    id <CAMExpandableMenuButtonDelegate> _expandableMenuDelegate;
    NSMutableArray *__menuItems;
    UIView *__headerView;
    NSIndexSet *__hiddenIndexesWhileCollapsed;
    NSMutableIndexSet *__highlightedIndexesWhileCollapsed;
    struct UIEdgeInsets _tappableEdgeInsets;
}

+ (double)expansionDuration;
@property(readonly, copy, nonatomic) NSMutableIndexSet *_highlightedIndexesWhileCollapsed; // @synthesize _highlightedIndexesWhileCollapsed=__highlightedIndexesWhileCollapsed;
@property(readonly, copy, nonatomic) NSIndexSet *_hiddenIndexesWhileCollapsed; // @synthesize _hiddenIndexesWhileCollapsed=__hiddenIndexesWhileCollapsed;
@property(readonly, nonatomic) UIView *_headerView; // @synthesize _headerView=__headerView;
@property(readonly, nonatomic) NSMutableArray *_menuItems; // @synthesize _menuItems=__menuItems;
@property(nonatomic) __weak id <CAMExpandableMenuButtonDelegate> expandableMenuDelegate; // @synthesize expandableMenuDelegate=_expandableMenuDelegate;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) long long expansionOrientation; // @synthesize expansionOrientation=_expansionOrientation;
@property(readonly, nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (_Bool)shouldIgnoreMenuInteraction;
- (_Bool)shouldAllowExpansion;
- (id)hiddenIndexesWhileCollapsed;
- (void)prepareHeaderViewForExpanding:(_Bool)arg1;
- (id)headerView;
- (id)titleForMenuItemAtIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (void)updateToContentSize:(id)arg1;
@property(nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 forIndex:(long long)arg2;
- (void)_updateFromOrientationChangeAnimated:(_Bool)arg1;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_applyMenuItemTextAlignmentAndShadowForCurrentOrientation;
- (void)completeExpansionToProposedFrame:(struct CGRect)arg1;
- (void)finishExpansionAnimated:(_Bool)arg1;
- (void)startExpansionWithProposedFrame:(struct CGRect)arg1;
- (void)finishCollapsingAnimated:(_Bool)arg1;
- (void)startCollapsingWithProposedFrame:(struct CGRect)arg1;
- (void)_convertAllSubviewsToProposedFrame:(struct CGRect)arg1;
- (void)_updateFromExpansionChangeAnimated:(_Bool)arg1;
- (void)_applyMenuItemAlphaForCurrentExpansionState;
- (void)_applyMenuItemColorsForCurrentState;
- (void)_applyHeaderViewForCurrentExpansionState;
- (void)collapseMenuAnimated:(_Bool)arg1;
- (void)expandMenuAnimated:(_Bool)arg1;
- (void)reloadData;
- (void)_updateFromSelectedIndexChange;
- (id)_selectedLabel;
- (_Bool)wantsSelectedItemToBeVisible;
- (void)layoutSubviews;
- (struct CGSize)_layoutMenuButton:(_Bool)arg1 expanded:(_Bool)arg2;
- (struct CGSize)_layoutForVerticalExpansionOrientation:(_Bool)arg1 expanded:(_Bool)arg2;
- (struct CGSize)_layoutForHorizontalExpansionOrientation:(_Bool)arg1 expanded:(_Bool)arg2;
- (struct CGSize)_layoutForVerticalExpandedLandscapeButton:(_Bool)arg1;
- (struct CGSize)_layoutForHorizontalExpandedLandscapeButton:(_Bool)arg1;
- (struct CGSize)_layoutForVerticalExpandedPortraitButtonApplyToHeaderView:(_Bool)arg1 applyToSelectedItem:(_Bool)arg2 applyToOtherViews:(_Bool)arg3;
- (struct CGSize)_layoutForVerticalExpandedPortraitButton:(_Bool)arg1;
- (struct CGSize)_layoutForHorizontalExpandedPortraitButton:(_Bool)arg1;
- (struct CGSize)_layoutForVerticalCollapsedLandscapeButton:(_Bool)arg1;
- (struct CGSize)_layoutForHorizontalCollapsedLandscapeButton:(_Bool)arg1;
- (struct CGSize)_layoutForVerticalCollapsedPortraitButton:(_Bool)arg1;
- (struct CGSize)_layoutForHorizontalCollapsedPortraitButton:(_Bool)arg1;
- (double)collapsedSelectedLabelHorizontalMargin;
- (struct CGSize)intrinsicContentSize;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSizeForExpansion:(_Bool)arg1;
- (struct CGRect)frameForAlignmentRect:(struct CGRect)arg1 expanded:(_Bool)arg2;
- (struct CGRect)alignmentRectForFrame:(struct CGRect)arg1 expanded:(_Bool)arg2;
- (id)initWithExpansionOrientation:(long long)arg1;
- (id)init;

@end

