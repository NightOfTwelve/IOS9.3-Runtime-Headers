//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class UIColor, UIFont, UIImage, UITableView, UITableViewCell, UITableViewHeaderFooterView;

@protocol UITableViewConstants <NSObject>
+ (id)sharedConstants;
- (double)defaultMaskGradientHeightForTableView:(UITableView *)arg1;
- (double)defaultFocusedShadowRadiusForTableView:(UITableView *)arg1;
- (double)defaultFocusedHorizontalOutsetForTableView:(UITableView *)arg1;
- (_Bool)reorderingCellWantsShadows:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (double)defaultAlphaForReorderingCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (UIImage *)defaultReorderControlImageForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (struct CGSize)defaultReorderControlSizeForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (UIImage *)defaultMultiSelectHighlightedImageForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (UIImage *)defaultMultiSelectSelectedImageForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (UIImage *)defaultMultiSelectNotSelectedImageForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (UIImage *)defaultInsertImageForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (UIImage *)defaultDeleteBackgroundImageForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (UIImage *)defaultDeleteImageForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (struct CGRect)defaultDeleteMinusRectForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (double)defaultSpaceBetweenEditAndReorderControlsForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (double)defaultEditControlPaddingForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (struct CGSize)defaultEditControlSizeForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (UIImage *)defaultCheckmarkImageForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (UIImage *)defaultDisclosurePressedImageForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (UIImage *)defaultDisclosureImageForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (UIColor *)defaultFooterBackgroundColorForView:(UITableViewHeaderFooterView *)arg1 inTableView:(UITableView *)arg2;
- (UIColor *)defaultHeaderBackgroundColorForView:(UITableViewHeaderFooterView *)arg1 inTableView:(UITableView *)arg2;
- (UIColor *)defaultFooterTextColorForTableViewStyle:(long long)arg1;
- (UIColor *)defaultHeaderTextColorForTableViewStyle:(long long)arg1;
- (UIFont *)defaultFooterFontForTableViewStyle:(long long)arg1;
- (UIFont *)defaultHeaderFontForTableViewStyle:(long long)arg1;
- (UIColor *)defaultFooterTextColorForView:(UITableViewHeaderFooterView *)arg1 inTableView:(UITableView *)arg2;
- (UIColor *)defaultHeaderTextColorForView:(UITableViewHeaderFooterView *)arg1 inTableView:(UITableView *)arg2;
- (UIFont *)defaultFooterFontForView:(UITableViewHeaderFooterView *)arg1 inTableView:(UITableView *)arg2;
- (UIFont *)defaultHeaderFontForView:(UITableViewHeaderFooterView *)arg1 inTableView:(UITableView *)arg2;
- (double)defaultGroupedFooterHeightForTableView:(UITableView *)arg1;
- (double)defaultGroupedHeaderHeightForTableView:(UITableView *)arg1;
- (double)defaultPlainHeaderLabelYPositionForTableView:(UITableView *)arg1 headerBounds:(struct CGRect)arg2 textRect:(struct CGRect)arg3;
- (double)defaultPlainFirstSectionHeaderHeightForTableView:(UITableView *)arg1;
- (double)defaultPlainHeaderFooterHeightForTableView:(UITableView *)arg1;
- (double)defaultFooterBottomPaddingForTableView:(UITableView *)arg1 section:(unsigned long long)arg2;
- (double)defaultHeaderTopPaddingForTableView:(UITableView *)arg1 section:(unsigned long long)arg2;
- (double)defaultDetailTextLabelFontSizeForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (UIFont *)defaultDetailTextFontForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (UIColor *)defaultDetailTextColorForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (double)defaultTextLabelFontSizeForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (UIFont *)defaultTextLabelFontForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (UIColor *)defaultTextColorForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (UIColor *)defaultSelectionTintColorForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (UIColor *)defaultBackgroundColorForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (double)defaultMinBottomPaddingForTableView:(UITableView *)arg1;
- (double)defaultMinTopPaddingForTableView:(UITableView *)arg1;
- (double)defaultPaddingBetweenHeaderAndRowsForTableView:(UITableView *)arg1;
- (double)defaultPaddingBetweenRowsForTableView:(UITableView *)arg1;
- (double)defaultContentAccessoryPaddingForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (double)defaultContentReorderPaddingForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (double)defaultContentEditPaddingForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (_Bool)imageViewOffsetByLayoutMarginsForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (struct UIEdgeInsets)defaultLayoutMarginsForCell:(UITableViewCell *)arg1 inTableView:(UITableView *)arg2;
- (double)defaultSectionContentMarginWidthForTableView:(UITableView *)arg1;
- (double)defaultMarginWidthForTableView:(UITableView *)arg1;
- (double)defaultSectionFooterHeightForTableView:(UITableView *)arg1;
- (double)defaultSectionHeaderHeightForTableView:(UITableView *)arg1;
- (double)defaultRowHeightForTableView:(UITableView *)arg1 cellStyle:(long long)arg2;
- (double)defaultRowHeightForTableView:(UITableView *)arg1;
- (long long)defaultSeparatorStyleForTableViewStyle:(long long)arg1;
- (UIColor *)defaultSeparatorColorForTableViewStyle:(long long)arg1;
- (UIColor *)defaultBackgroundColorForTableViewStyle:(long long)arg1;
@end
