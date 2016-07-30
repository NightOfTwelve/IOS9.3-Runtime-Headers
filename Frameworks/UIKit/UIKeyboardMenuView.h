//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIDimmingViewDelegate-Protocol.h>
#import <UIKit/UITableViewDataSource-Protocol.h>
#import <UIKit/UITableViewDelegate-Protocol.h>

@class NSString, NSTimer, UIDimmingView, UIInputSwitcherSelectionExtraView, UIInputSwitcherShadowView, UIInputSwitcherTableView, UIKBTree, UIKeyboardLayoutStar;

__attribute__((visibility("hidden")))
@interface UIKeyboardMenuView : UIView <UITableViewDataSource, UITableViewDelegate, UIDimmingViewDelegate>
{
    UIInputSwitcherTableView *m_table;
    UIInputSwitcherShadowView *m_shadowView;
    UIInputSwitcherSelectionExtraView *m_selExtraView;
    struct CGRect m_referenceRect;
    double m_pointerOffset;
    _Bool m_scrollable;
    _Bool m_startAutoscroll;
    _Bool m_scrolling;
    _Bool m_shouldFade;
    struct CGPoint m_point;
    double m_scrollStartTime;
    int m_scrollDirection;
    NSTimer *m_scrollTimer;
    unsigned long long m_visibleRows;
    unsigned long long m_firstVisibleRow;
    int m_mode;
    UIDimmingView *m_dimmingView;
    _Bool _usesStraightLeftEdge;
    _Bool _usesDarkTheme;
    UIKBTree *_referenceKey;
    UIKeyboardLayoutStar *_layout;
}

+ (id)viewThatContainsBaseKey;
@property(nonatomic) UIKeyboardLayoutStar *layout; // @synthesize layout=_layout;
@property(nonatomic) UIKBTree *referenceKey; // @synthesize referenceKey=_referenceKey;
@property(nonatomic) _Bool usesDarkTheme; // @synthesize usesDarkTheme=_usesDarkTheme;
@property(nonatomic) _Bool usesStraightLeftEdge; // @synthesize usesStraightLeftEdge=_usesStraightLeftEdge;
@property(nonatomic) int mode; // @synthesize mode=m_mode;
- (void)toggleKeyboardAssistantPreference;
- (void)toggleKeyboardPredictionPreference;
- (id)assistantSwitch;
- (id)predictiveSwitch;
- (id)subtitleFontForItemAtIndex:(unsigned long long)arg1;
- (id)subtitleForItemAtIndex:(unsigned long long)arg1;
- (id)fontForItemAtIndex:(unsigned long long)arg1;
- (id)localizedTitleForItemAtIndex:(unsigned long long)arg1;
- (id)titleForItemAtIndex:(unsigned long long)arg1;
- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (struct CGSize)preferredSize;
- (unsigned long long)defaultSelectedIndex;
- (unsigned long long)numberOfItems;
- (struct CGRect)popupRect;
- (void)setRenderConfig:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (unsigned long long)indexForIndexPath:(id)arg1;
- (void)setHighlightForRowAtIndexPath:(id)arg1 highlight:(_Bool)arg2;
- (void)selectItemAtPoint:(struct CGPoint)arg1;
- (void)highlightRow:(unsigned long long)arg1;
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;
- (void)autoscrollTimerFired:(id)arg1;
- (void)stopAnyAutoscrolling;
- (void)endScrolling:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayForTopBottomCells;
- (void)setNeedsDisplayForCell:(id)arg1;
- (void)fadeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)hide;
- (void)removeFromSuperview;
- (void)fadeWithDelay:(double)arg1;
- (void)fade;
- (void)_delayedFade;
- (void)showAsPopupForKey:(id)arg1 inLayout:(id)arg2;
- (int)_internationalKeyRoundedCornerInLayout:(id)arg1;
- (double)minYOfLastTableCellForSelectionExtraView;
- (id)maskForShadowViewBlurredBackground;
- (void)showAsHUD;
- (void)setupShadowViewWithSize:(struct CGSize)arg1;
- (void)show;
- (void)insertSelExtraView;
- (_Bool)usesShadowView;
- (_Bool)usesDimmingView;
- (void)dimmingViewWasTapped:(id)arg1;
- (id)dimmingView;
- (void)setKeyboardDimmed:(_Bool)arg1;
- (void)performShowAnimation;
- (_Bool)isVisible;
- (void)setFrame:(struct CGRect)arg1;
- (id)font;
- (id)subtitleFont;
- (void)applicationWillSuspend:(id)arg1;
- (_Bool)centerPopUpOverKey;
@property(readonly) _Bool usesTable;
- (id)table;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

