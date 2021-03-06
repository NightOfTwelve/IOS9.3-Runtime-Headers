//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ContactsUI/ABStyleProvider-Protocol.h>

@class NSString, UIColor, UIFont, UIImage, UIView, _UIGraphicsLetterpressStyle;

@interface CNStyleProvider : NSObject <ABStyleProvider>
{
}

+ (_Bool)supportsSecureCoding;
+ (double)memberTextBaseline;
+ (double)memberRowHeight;
+ (double)memberHeaderTextBaseline;
+ (double)memberHeaderRowHeight;
+ (id)preferredContentSizeCategoryName;
+ (id)defaultStyleProviderForStyle:(int)arg1;
+ (id)defaultStyleProvider;
- (_Bool)reloadCallAction;
- (_Bool)refreshTinyActionCell;
- (void)customSetEmphasized:(_Bool)arg1 onCell:(id)arg2;
- (id)newCustomCardTableScrollingBackgroundView;
- (Class)customCardCellClass;
- (Class)customCardActionCellClass;
@property(readonly, nonatomic) long long groupCellSelectionStyle;
@property(readonly, nonatomic) struct CGSize groupCellShadowOffset;
@property(readonly, nonatomic) UIColor *groupCellShadowColor;
@property(readonly, nonatomic) UIColor *groupCellHighlightedTextColor;
@property(readonly, nonatomic) UIColor *groupCellTextColor;
@property(readonly, nonatomic) UIColor *groupHeaderBackgroudColor;
@property(readonly, nonatomic) UIColor *groupCellBackgroundColor;
@property(readonly, nonatomic) _Bool groupSectionDrawsDefaultTopShadow;
@property(readonly, nonatomic) double groupSectionHeaderHorizontalPadding;
@property(readonly, nonatomic) double groupSectionHeaderHeight;
@property(readonly, nonatomic) struct CGSize groupAccountNameShadowOffset;
@property(readonly, nonatomic) UIColor *groupAccountNameShadowColor;
@property(readonly, nonatomic) UIColor *groupAccountNameColor;
@property(readonly, nonatomic) UIFont *groupAccountNameFont;
@property(readonly, nonatomic) UIColor *groupsTableBackgroundColor;
@property(readonly, nonatomic) _Bool groupsTableShouldRemoveBackgroundView;
@property(readonly, nonatomic) _Bool peoplePickerBarStyleIsTranslucent;
@property(readonly, nonatomic) long long peoplePickerBarStyle;
@property(readonly, nonatomic) _Bool shouldUsePeoplePickerBarStyle;
- (int)dialogStyleForDeleteConfirmation;
@property(readonly, nonatomic) _Bool presentDatePickerInPopover;
@property(readonly, nonatomic) _Bool presentNewContactsControllersInPopover;
@property(readonly, nonatomic) _Bool presentModalViewInPopover;
@property(readonly, nonatomic) long long unknownModalPresentationStyle;
@property(readonly, nonatomic) long long composeModalPresentationStyle;
@property(readonly, nonatomic) _Bool shouldDefinePickerTransitionStyle;
@property(readonly, nonatomic) long long pickerTransitionStyle;
@property(readonly, nonatomic) _Bool shouldPropagateStylesToPickers;
@property(readonly, nonatomic) _Bool shouldPropagateStylesThroughUnknownPersonActions;
@property(readonly, nonatomic) _Bool linkedPhotoLabelStringsDescribeSourceOnly;
@property(readonly, nonatomic) _Bool linkedPhotoPickerIncludesCurrentPhoto;
@property(readonly, nonatomic) _Bool labelPickerUsesOpaqueBackground;
@property(readonly, nonatomic) _Bool labelPickerShouldPushCustomLabelCreator;
- (void)unselectAllCellParts:(id)arg1;
- (void)selectCustomPartWithFrame:(struct CGRect)arg1 occupiedCorners:(unsigned long long)arg2 forCell:(id)arg3;
- (void)selectWholePartForCell:(id)arg1;
- (void)selectValuePartForCell:(id)arg1;
- (void)selectLabelPartForCell:(id)arg1;
- (id)cardTableView:(id)arg1 prepareCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)cardTableView:(id)arg1 wantsHeaderForProperty:(int)arg2 inSection:(long long)arg3 whenEditing:(_Bool)arg4;
- (_Bool)personTableHeaderViewScrollsWhenEditing:(_Bool)arg1;
- (double)cardHeaderSpacingFromCardBodyWhenEditing:(_Bool)arg1;
- (double)cardTableViewLinkingHeaderBottomPaddingWhenEditing:(_Bool)arg1;
- (double)cardTableViewLinkingHeaderTopPaddingWhenEditing:(_Bool)arg1;
@property(readonly, nonatomic) double cardSectionHeaderHeightForFollowingCardActions;
@property(readonly, nonatomic) double cardSectionHeaderHeightForFirstCardActions;
@property(readonly, nonatomic) _Bool cardShouldUseSeparateSectionsForUnknownCardActions;
@property(readonly, nonatomic) double cardSectionHeaderHeightForBottomActions;
- (double)cardTableViewSectionFooterHeightWhenEditing:(_Bool)arg1;
- (double)cardTableViewSectionHeaderHeightWhenEditing:(_Bool)arg1;
- (double)cardMaxHeightForSwellTextViewWhenEditing:(_Bool)arg1;
@property(readonly, nonatomic) _Bool datePickerHasNavigationTitle;
@property(readonly, nonatomic) _Bool linkedCardsShouldAllowDeletion;
@property(readonly, nonatomic) _Bool cardTableUsesRowFadeAnimation;
@property(readonly, nonatomic) double cardLinkingHeaderLabelHeight;
- (double)cardNotesMinimumHeightWhenEditing:(_Bool)arg1;
@property(readonly, nonatomic) UIView *cardNotesHeaderView;
@property(readonly, nonatomic) double cardNotesHeaderViewHeight;
@property(readonly, nonatomic) _Bool cardNotesLabelIncludesSource;
@property(readonly, nonatomic) _Bool cardAlwaysShowsNotes;
@property(readonly, nonatomic) long long cardCellSelectionStyle;
- (id)cardCellDividerShadowColorVertical:(_Bool)arg1;
- (id)cardCellDividerColorVertical:(_Bool)arg1;
@property(readonly, nonatomic) UIColor *cardCellDisabledBackgroundColor;
@property(readonly, nonatomic) UIColor *cardCellBackgroundColor;
- (id)cardDeleteButtonImagePressed;
- (id)cardDeleteButtonImage;
- (struct UIEdgeInsets)cardDeleteButtonInsets;
- (double)cardDeleteButtonHeight;
- (struct UIEdgeInsets)cardCellBackgroundInsetsWhenEditing:(_Bool)arg1;
@property(readonly, nonatomic) double cardContentOccluderDefaultBottomFadingHeight;
@property(readonly, nonatomic) double cardContentOccluderDefaultTopFadingHeight;
@property(readonly, nonatomic) UIColor *cardValueHighlightedTextColor;
- (void)setIndicatesFaceTimeHistory:(_Bool)arg1 onActionButton:(id)arg2;
@property(readonly, nonatomic) _Bool cardActionsAllowFaceTimeFavorites;
@property(readonly, nonatomic) _Bool cardActionsAllowVoiceFavorites;
@property(readonly, nonatomic) UIImage *cardActionConferenceIconPressed;
@property(readonly, nonatomic) UIImage *cardActionConferenceIcon;
- (id)newCardActionButton;
@property(readonly, nonatomic) double cardActionButtonHeight;
@property(readonly, nonatomic) double cardActionButtonSpacing;
@property(readonly, nonatomic) struct UIEdgeInsets cardActionButtonsInsets;
@property(readonly, nonatomic) struct UIEdgeInsets cardActionButtonImageInsets;
@property(readonly, nonatomic) struct UIEdgeInsets cardActionButtonTitleDoubleLineInsets;
@property(readonly, nonatomic) struct UIEdgeInsets cardActionButtonTitleSingleLineInsets;
@property(readonly, nonatomic) UIImage *cardActionButtonBackgroundHighlighted;
@property(readonly, nonatomic) UIImage *cardActionButtonBackgroundNormal;
@property(readonly, nonatomic) long long cardActionButtonType;
@property(readonly, nonatomic) double cardCellVerticalSpacingBetweenAlertsOfSimilarType;
@property(readonly, nonatomic) UIImage *cardCellFacebookBadge;
@property(readonly, nonatomic) double cardCellBadgePaddingLeft;
@property(readonly, nonatomic) long long cardCellAccessoryTypeEditRingtone;
@property(readonly, nonatomic) long long cardCellAccessoryTypeRingtone;
@property(readonly, nonatomic) long long cardCellAccessoryTypeEdit;
@property(readonly, nonatomic) long long cardCellAccessoryType;
@property(readonly, nonatomic) _Bool cardSectionDrawsDefaultTopShadow;
@property(readonly, nonatomic) struct CGSize cardSectionHeaderShadowOffset;
@property(readonly, nonatomic) UIColor *cardSectionHeaderShadowColor;
@property(readonly, nonatomic) UIColor *cardSectionHeaderTextColor;
@property(readonly, nonatomic) UIFont *cardSectionHeaderFont;
@property(readonly, nonatomic) double cardSectionHeaderHorizontalPadding;
@property(readonly, nonatomic) _Bool cardSectionAlwaysWantsHeader;
@property(readonly, nonatomic) UIImage *cardValueClearButtonImage;
@property(readonly, nonatomic) UIColor *cardValueTappableColor;
@property(readonly, nonatomic) UIColor *cardValueBackgroundColor;
@property(readonly, nonatomic) struct UIEdgeInsets cardValueEditingInsets;
- (struct UIEdgeInsets)cardValueInsetsWhenEditing:(_Bool)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets cardValueInsets;
@property(readonly, nonatomic) UIFont *cardValueTextFont;
@property(readonly, nonatomic) struct CGSize cardValueShadowOffset;
@property(readonly, nonatomic) UIColor *cardValueHighlightedShadowColor;
@property(readonly, nonatomic) UIColor *cardValueShadowColor;
@property(readonly, nonatomic) UIColor *cardValueDisabledTextColor;
@property(readonly, nonatomic) UIColor *cardValueTextColor;
@property(readonly, nonatomic) struct UIEdgeInsets cardLabelInsets;
@property(readonly, nonatomic) UIColor *cardLabelBackgroundColor;
@property(readonly, nonatomic) double cardLabelWidth;
@property(readonly, nonatomic) UIFont *cardLabelEditingTextFont;
@property(readonly, nonatomic) UIFont *cardLabelTextFont;
@property(readonly, nonatomic) _Bool cardValueHighlightsWhenTouched;
@property(readonly, nonatomic) struct CGSize cardLabelShadowOffset;
@property(readonly, nonatomic) UIColor *cardLabelHighlightedShadowColor;
@property(readonly, nonatomic) UIColor *cardLabelShadowColor;
@property(readonly, nonatomic) UIColor *cardLabelImportantHighlightedTextColor;
@property(readonly, nonatomic) UIColor *cardLabelEmphasizedHighlightedTextColor;
@property(readonly, nonatomic) UIColor *cardLabelHighlightedTextColor;
@property(readonly, nonatomic) UIColor *cardLabelEditingTextColor;
@property(readonly, nonatomic) UIColor *cardLabelDisabledTextColor;
@property(readonly, nonatomic) UIColor *cardLabelTextColor;
- (_Bool)shouldAdjustTableView:(id)arg1 forKeyboardOrdering:(_Bool)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
@property(readonly, nonatomic) _Bool shouldUseCardContentProviderWhenAvailable;
- (id)editorViewColor;
- (id)editorViewSmallFont;
- (id)editorViewLargeFont;
- (double)personEditorFieldVerticalInset;
- (struct CGSize)personActionShadowOffset;
- (id)personActionShadowColor;
- (id)personActionHighlightedColor;
- (id)personActionColor;
- (id)personActionFont;
- (struct CGSize)personNoValueLabelShadowOffset;
- (id)personNoValueLabelShadowColor;
- (id)personNoValueLabelTextColor;
- (id)personNoValueLabelFont;
- (id)personValueBackgroundColor;
- (id)personValueImportantHighlightColor;
- (id)personValueImportantColor;
- (id)personValueEmphasizedHighlightColor;
- (id)personValueEmphasizedColor;
- (id)personValueHighlightColor;
- (id)personValueColor;
- (id)personValueFont;
- (double)personValueFontMinSize;
- (id)copyLocalizedPropertyName:(int)arg1 lowercase:(_Bool)arg2;
- (id)copyLocalizedLabel:(id)arg1;
- (struct CGSize)personLabelShadowOffset;
- (id)personLabelShadowColor;
- (id)personLabelHighlightedColor;
- (id)personLabelColor;
- (id)personLabelFont;
- (double)personLabelFontMinSize;
- (double)personViewVerticalCellInset;
- (double)personViewHorizontalCellInset;
- (double)personViewDefaultRowHeight;
- (double)personViewRowHeightWhenEditing:(_Bool)arg1;
- (struct CGSize)personHeaderShadowOffset;
- (id)personHeaderShadowColor;
- (id)personHeaderPasteboardColor;
- (double)personViewHeaderNameViewTextVerticalInset;
- (double)personViewHeaderNameViewTextHorizontalInset;
- (double)personViewHeaderImageHeight;
- (double)personViewHeaderImageWidth;
@property(readonly, nonatomic) _Bool cardHeaderNameViewAlignOnBottom;
- (double)personViewVerticalSpacing;
- (double)personViewHeaderMinimumHeight;
- (double)personViewHeaderRightMargin;
- (id)personViewGetNameViewAccessoryImageSelected;
- (id)personViewGetNameViewAccessoryImage;
- (id)personViewGetFavoritesBadgeHighlighted;
- (id)personViewGetFavoritesBadge;
- (id)accessoryButtonForRelatedNames;
- (id)accessoryViewForVideoBadge;
- (id)accessoryViewForFavoritesBadge;
- (id)accessoryViewForMailVIPBadge;
- (_Bool)usesPhoneCardMetrics;
@property(readonly, nonatomic) UIColor *cardHeaderDefaultLabelTextColor;
@property(readonly, nonatomic) double cardHeaderEditingImageLeftMargin;
@property(readonly, nonatomic) double cardHeaderEditingImageTopMargin;
@property(readonly, nonatomic) double cardHeaderDisplayImageTopMargin;
@property(readonly, nonatomic) double cardHeaderDisplayImageLeftMargin;
@property(readonly, nonatomic) double cardHeaderViewLeftMargin;
@property(readonly, nonatomic) double cardHeaderViewTopMargin;
@property(readonly, nonatomic) UIColor *cardHeaderBackgroundColor;
@property(readonly, nonatomic) double cardHeaderImageNameEditorSpacing;
@property(readonly, nonatomic) double cardHeaderImageNameSpacing;
@property(readonly, nonatomic) UIColor *cardClippingImageLabelBevelColor;
@property(readonly, nonatomic) UIColor *cardClippingImageLabelColor;
@property(readonly, nonatomic) struct CGSize cardPhotoShadowOffset;
- (id)cardPhotoShadowImage;
@property(readonly, nonatomic) struct CGSize cardPhotoOffset;
@property(readonly, nonatomic) double cardPhotoFrameBorderSize;
@property(readonly, nonatomic) _Bool shouldApplyMaskImage;
@property(readonly, nonatomic) _Bool cardPhotoShouldApplyOverlayImageWhenLabelPresent;
@property(readonly, nonatomic) _Bool cardPhotoShouldApplyOverlayImageWhenPersonImagePresent;
@property(readonly, nonatomic) _Bool cardPlaceholderImageShouldApplyMaskAndOverlay;
@property(readonly, nonatomic) _Bool shouldShowCardPhotoPlaceholder;
@property(readonly, nonatomic) unsigned long long cardTagNumberOfLines;
@property(readonly, nonatomic) unsigned long long cardNameNumberOfLines;
@property(readonly, nonatomic) UIFont *cardTaglineTextFont;
@property(readonly, nonatomic) UIColor *cardTaglineShadowColor;
@property(readonly, nonatomic) UIColor *cardTaglineTextColor;
@property(readonly, nonatomic) UIFont *cardHeadlineTextFont;
@property(readonly, nonatomic) UIColor *cardHeadlineShadowColor;
@property(readonly, nonatomic) UIColor *cardHeadlineTextColor;
- (id)cardNameDividerColor;
@property(readonly, nonatomic) UIColor *cardTableCellBorderColor;
@property(readonly, nonatomic) _UIGraphicsLetterpressStyle *letterpressStyle;
@property(readonly, nonatomic) _Bool cardTableShouldAdjustForKeyboard;
@property(readonly, nonatomic) UIColor *cardSectionBackgroundColor;
@property(readonly, nonatomic) UIColor *cardTableBackgroundColor;
@property(readonly, nonatomic) _Bool cardTableShouldRemoveBackgroundView;
@property(readonly, nonatomic) UIImage *memberSectionListHeaderImage;
@property(readonly, nonatomic) _Bool searchControllerForceKeyboardDisplayEnabled;
@property(readonly, nonatomic) _Bool serverSearchNavigationBarHidingEnabled;
@property(readonly, nonatomic) _Bool searchIsAlwaysActive;
@property(readonly, nonatomic) double memberScrollBarInset;
@property(readonly, nonatomic) UIColor *cardLabelSelectedBackgroundColor;
@property(readonly, nonatomic) UIColor *membersSearchCellBackgroundColor;
@property(readonly, nonatomic) UIColor *membersSearchBackgroundColor;
@property(readonly, nonatomic) UIColor *membersBackgroundColor;
@property(readonly, nonatomic) UIView *memberHeaderBackgroundView;
@property(readonly, nonatomic) UIColor *membersHeaderBackgroundColor;
@property(readonly, nonatomic) UIColor *membersHeaderContentViewBackgroundColor;
@property(readonly, nonatomic) UIColor *memberSelectedBackgroundColor;
@property(readonly, nonatomic) _Bool memberShowContactPhoto;
@property(readonly, nonatomic) struct CGSize memberNameShadowOffset;
@property(readonly, nonatomic) UIColor *memberSearchFieldBackgroundColor;
@property(readonly, nonatomic) UIColor *memberNameSelectedShadowColor;
@property(readonly, nonatomic) UIColor *memberNameShadowColor;
@property(readonly, nonatomic) UIImage *memberNameMeCardDisabledImage;
@property(readonly, nonatomic) UIImage *memberNameMeCardSelectedImage;
@property(readonly, nonatomic) UIImage *memberNameMeCardImage;
@property(readonly, nonatomic) UIColor *memberNameMeCardShadowColor;
@property(readonly, nonatomic) UIColor *memberNameMeCardTextColor;
@property(readonly, nonatomic) UIColor *memberNameSelectedColor;
@property(readonly, nonatomic) UIColor *memberNameDisabledTextColor;
@property(readonly, nonatomic) UIColor *memberNameTextColor;
@property(readonly, nonatomic) UIFont *memberNameBoldFontForSectionHeader;
@property(readonly, nonatomic) UIFont *memberNameRegularFontForSectionHeader;
@property(readonly, nonatomic) UIFont *memberNameBoldFont;
@property(readonly, nonatomic) UIFont *memberNamePlaceholderFont;
@property(readonly, nonatomic) UIFont *memberNameRegularFont;
- (double)memberNameFontSize;
- (id)_fontForTextStyle:(id)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets memberNameInsets;
@property(readonly, nonatomic) double memberNameInterComponentSpacing;
@property(readonly, nonatomic) _Bool membersSearchBarIsInTableHeader;
@property(readonly, nonatomic) UIColor *membersIndexTrackingBackgroundColor;
@property(readonly, nonatomic) UIColor *membersIndexTextColor;
@property(readonly, nonatomic) double membersIndexMaximumHeight;
@property(readonly, nonatomic) unsigned long long membersCountToShowIndex;
@property(readonly, nonatomic) unsigned long long membersCountToShowSections;
@property(readonly, nonatomic) long long membersSelectionStyle;
- (id)newTableFooterViewForCellStyle:(int)arg1;
- (id)newAccessoryDisclosureIndicatorForCellStyle:(int)arg1;
- (id)separatorBottomShadowColorForCellStyle:(int)arg1;
- (id)separatorTopShadowColorForCellStyle:(int)arg1;
- (id)separatorColorForCellStyle:(int)arg1;
- (long long)separatorStyleForCellStyle:(int)arg1;
- (id)shadowColorForCellStyle:(int)arg1;
- (int)abCellStyleForCardTableLinkingUI;
- (int)abCellStyleForCardTableWhenEditing:(_Bool)arg1;
- (int)abCellStyleForMembersTable;
- (int)abCellStyleForGroupsTablePlain;
- (int)abCellStyleForGroupsTableGrouped;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

