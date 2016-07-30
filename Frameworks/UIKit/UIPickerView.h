//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/NSCoding-Protocol.h>
#import <UIKit/UIPickerTableViewContainerDelegate-Protocol.h>
#import <UIKit/UIPickerViewScrollTesting-Protocol.h>
#import <UIKit/UITableViewDataSource-Protocol.h>
#import <UIKit/UITableViewDelegate-Protocol.h>

@class CALayer, NSMutableArray, NSString, UIColor, UIImageView, _UIPickerViewTestParameters;
@protocol UIPickerViewDataSource, UIPickerViewDelegate;

@interface UIPickerView : UIView <UIPickerTableViewContainerDelegate, UITableViewDelegate, UIPickerViewScrollTesting, NSCoding, UITableViewDataSource>
{
    NSMutableArray *_tables;
    UIView *_topFrame;
    NSMutableArray *_dividers;
    NSMutableArray *_selectionBars;
    id <UIPickerViewDataSource> _dataSource;
    id <UIPickerViewDelegate> _delegate;
    UIView *_backgroundView;
    long long _numberOfComponents;
    UIImageView *_topGradient;
    UIImageView *_bottomGradient;
    UIView *_foregroundView;
    CALayer *_maskGradientLayer;
    UIView *_topLineView;
    UIView *_bottomLineView;
    struct {
        unsigned int needsLayout:1;
        unsigned int delegateRespondsToNumberOfComponentsInPickerView:1;
        unsigned int delegateRespondsToNumberOfRowsInComponent:1;
        unsigned int delegateRespondsToDidSelectRow:1;
        unsigned int delegateRespondsToViewForRow:1;
        unsigned int delegateRespondsToTitleForRow:1;
        unsigned int delegateRespondsToAttributedTitleForRow:1;
        unsigned int delegateRespondsToWidthForComponent:1;
        unsigned int delegateRespondsToRowHeightForComponent:1;
        unsigned int showsSelectionBar:1;
        unsigned int allowsMultipleSelection:1;
        unsigned int allowSelectingCells:1;
        unsigned int soundsDisabled:1;
        unsigned int usesCheckedSelection:1;
        unsigned int skipsBackground:1;
    } _pickerViewFlags;
    _Bool _usesModernStyle;
    UIColor *_textColor;
    UIColor *_textShadowColor;
    _UIPickerViewTestParameters *_currentTestParameters;
    _Bool _isInLayoutSubviews;
    _Bool _magnifierEnabled;
}

+ (id)_modernNonCenterCellFont;
+ (id)_modernCenterCellFont;
+ (struct CGSize)defaultSizeForCurrentOrientation;
+ (struct CGSize)defaultSizeForMainScreenTraits;
+ (struct CGSize)defaultSizeForTraits:(id)arg1;
+ (struct CGSize)sizeForMainScreenTraitsThatFits:(struct CGSize)arg1;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 forTraits:(id)arg2;
@property(nonatomic, setter=_setMagnifierEnabled:) _Bool _magnifierEnabled; // @synthesize _magnifierEnabled;
@property(nonatomic, setter=_setInLayoutSubviews:) _Bool _isInLayoutSubviews; // @synthesize _isInLayoutSubviews;
@property(nonatomic) __weak id <UIPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <UIPickerViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_noteScrollingFinishedForComponent:(long long)arg1;
- (void)_completeCurrentTest;
- (void)_iterateOnCurrentTest;
- (void)_performScrollTest:(id)arg1 withIterations:(long long)arg2 rowsToScroll:(long long)arg3 inComponent:(long long)arg4;
- (id)_scalarStatisticsForUserValueChangedEvent;
- (void)_willPlayClickSound;
- (struct CATransform3D)_perspectiveTransform;
- (_Bool)_shouldDrawWithModernStyle;
@property(retain, nonatomic, getter=_textShadowColor, setter=_setTextShadowColor:) UIColor *textShadowColor;
@property(retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *textColor;
@property(retain, nonatomic, getter=_highlightColor, setter=_setHighlightColor:) UIColor *highlightColor;
@property(getter=_usesModernStyle, setter=_setUsesModernStyle:) _Bool usesModernStyle;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)selectRow:(int)arg1 inColumn:(int)arg2 animated:(_Bool)arg3;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(_Bool)arg3;
- (void)_selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(_Bool)arg3 notify:(_Bool)arg4;
- (struct CGRect)_effectiveTableViewFrameForColumn:(long long)arg1;
- (id)tableViewForColumn:(long long)arg1;
- (long long)columnForTableView:(id)arg1;
- (int)selectedRowForColumn:(int)arg1;
- (long long)selectedRowInComponent:(long long)arg1;
- (struct _NSRange)visibleRowsForColumn:(int)arg1;
- (_Bool)_drawsBackground;
- (void)_setDrawsBackground:(_Bool)arg1;
- (_Bool)_usesCheckedSelection;
- (void)_setUsesCheckedSelection:(_Bool)arg1;
- (void)_sendSelectionChangedFromTable:(id)arg1 notify:(_Bool)arg2;
- (_Bool)_usesCheckSelection;
- (_Bool)allowsMultipleSelection;
- (void)setAllowsMultipleSelection:(_Bool)arg1;
- (void)_sendSelectionChangedForComponent:(long long)arg1 notify:(_Bool)arg2;
@property(nonatomic) _Bool showsSelectionIndicator;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_updateWithOldSize:(struct CGSize)arg1 newSize:(struct CGSize)arg2;
- (void)_resetSelectionOfTables;
- (void)layoutSubviews;
- (id)_contentView;
- (double)_wheelShift;
- (void)reloadAllPickerPieces;
- (id)viewForRow:(long long)arg1 forComponent:(long long)arg2;
@property(readonly, nonatomic) long long numberOfComponents; // @synthesize numberOfComponents=_numberOfComponents;
- (long long)numberOfColumns;
- (long long)numberOfRowsInColumn:(long long)arg1;
- (long long)numberOfRowsInComponent:(long long)arg1;
- (struct CGSize)rowSizeForComponent:(long long)arg1;
- (id)_createTableWithFrame:(struct CGRect)arg1 forComponent:(long long)arg2;
- (id)_createColumnWithTableFrame:(struct CGRect)arg1 rowHeight:(double)arg2;
- (void)_addMagnifierLinesForRowHeight:(double)arg1;
- (double)_delegateRowHeightForComponent:(long long)arg1;
- (double)_delegateWidthForComponent:(long long)arg1 ofCount:(int)arg2 withSizeLeft:(double)arg3;
- (id)_delegateAttributedTitleForRow:(long long)arg1 forComponent:(long long)arg2;
- (id)_delegateTitleForRow:(long long)arg1 forComponent:(long long)arg2;
- (long long)_delegateNumberOfRowsInComponent:(long long)arg1;
- (long long)_delegateNumberOfComponents;
- (double)scrollAnimationDuration;
- (void)_sendCheckedRow:(long long)arg1 inTableView:(id)arg2 checked:(_Bool)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (_Bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (id)createDividerWithFrame:(struct CGRect)arg1;
- (id)_createViewForPickerPiece:(int)arg1;
- (struct CGRect)_selectionBarRectForHeight:(double)arg1;
- (id)imageForPickerPiece:(int)arg1;
- (id)_popoverSuffix;
- (id)_selectionBarSuffix;
- (id)pickerImageNamePrefix;
- (void)reloadComponent:(long long)arg1;
- (void)reloadDataForColumn:(int)arg1;
- (void)reloadAllComponents;
- (void)reloadData;
- (void)reload;
- (void)didMoveToWindow;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)_updateSelectedRows;
- (void)_updateSound;
- (void)setNeedsLayout;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (_Bool)_soundsEnabled;
- (void)setSoundsEnabled:(_Bool)arg1;
- (id)_orientationImageSuffix;
- (double)_tableRowHeight;
- (_Bool)_isLandscapeOrientation;
- (struct CGSize)defaultSize;
- (void)setBackgroundColor:(id)arg1;
- (_Bool)isAccessibilityElementByDefault;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

