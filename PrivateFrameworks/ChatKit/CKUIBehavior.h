//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSAttributedString, NSDateFormatter, NSDictionary, NSString, UIColor, UIFont, UIImage;

@interface CKUIBehavior : NSObject
{
    long long _HUDStyle;
    double _waveformMaxWidth;
}

+ (id)sharedBehaviors;
@property(readonly, nonatomic) double waveformMaxWidth; // @synthesize waveformMaxWidth=_waveformMaxWidth;
@property(nonatomic) long long HUDStyle; // @synthesize HUDStyle=_HUDStyle;
@property(readonly, nonatomic) UIFont *headerFont;
@property(readonly, nonatomic) UIFont *locationSubtitleFont;
@property(readonly, nonatomic) UIFont *recipientNameFont;
@property(readonly, nonatomic) UIFont *nameFieldFont;
@property(readonly, nonatomic) UIColor *detailsBackgroundColor;
@property(readonly, nonatomic) _Bool shouldAlignRecipientGlyphsWithMargins;
@property(readonly, nonatomic) double photoPickerMaxPhotoHeight;
- (double)photoPickerMaxPopoverPhotoHeight;
- (double)photoPickerMaxZoomedPhotoHeightForAlertWidth:(double)arg1;
- (double)photoPickerMaxPhotoWidthForAlertWidth:(double)arg1;
@property(readonly, nonatomic) _Bool photoPickerUsesVitality;
@property(readonly, nonatomic) _Bool photoPickerShouldZoomOnSelection;
@property(readonly, nonatomic) UIImage *photoPickerDisabledBadge;
@property(readonly, nonatomic) UIImage *photoPickerOffBadge;
@property(readonly, nonatomic) UIImage *photoPickerOnBadge;
@property(readonly, nonatomic) UIColor *activeRecordingDotColor;
@property(readonly, nonatomic) struct UIEdgeInsets photoPickerSectionInsets;
@property(readonly, nonatomic) double photoPickerInterItemSpacing;
@property(readonly, nonatomic) unsigned long long numberOfAssetsInPhotoPicker;
@property(readonly, nonatomic) unsigned long long numberOfButtonsInPhotoPicker;
@property(readonly, nonatomic) double photoPickerPopoverWidth;
@property(readonly, nonatomic) double attachmentBrowserHeaderLabelPadding;
@property(readonly, nonatomic) struct UIEdgeInsets attachmentBrowserFeedLayoutSectionInset;
@property(readonly, nonatomic) struct UIEdgeInsets attachmentBrowserGridSectionInset;
@property(readonly, nonatomic) double attachmentBrowserGridMinimumLineSpacing;
@property(readonly, nonatomic) double attachmentBrowserGridInterItemSpacing;
@property(readonly, nonatomic) struct CGSize attachmentBrowserDefaultSizeForSquare;
@property(readonly, nonatomic) UIColor *recipientsDividerColor;
@property(readonly, nonatomic) double dividerHeight;
@property(readonly, nonatomic) _Bool shouldAnimateGifsInPhotoGrid;
@property(readonly, nonatomic) UIFont *audioHintFont;
@property(readonly, nonatomic) UIFont *characterCountFont;
@property(readonly, nonatomic) UIColor *entryFieldAudioRecordingBaloonColor;
@property(readonly, nonatomic) UIColor *entryFieldTextColor;
@property(readonly, nonatomic) UIColor *entryFieldDividerColor;
@property(readonly, nonatomic) UIColor *entryFieldBackgroundColor;
@property(readonly, nonatomic) UIColor *entryFieldCoverBorderColor;
@property(readonly, nonatomic) UIColor *entryFieldCoverFillColor;
@property(readonly, nonatomic) UIColor *entryFieldGrayColor;
@property(readonly, nonatomic) UIColor *entryFieldButtonColor;
- (id)red_sendButtonColor;
- (id)siri_sendButtonColor;
- (id)blue_sendButtonColor;
- (id)green_sendButtonColor;
- (id)gray_sendButtonColor;
- (id)sendButtonColorForColorType:(BOOL)arg1;
@property(readonly, nonatomic) double entryFieldCoverLineWidth;
@property(readonly, nonatomic) double entryFieldDividerHeight;
@property(readonly, nonatomic) _Bool entryFieldShouldUseBackdropView;
@property(readonly, nonatomic) long long keyboardAppearance;
@property(readonly, nonatomic) double maxAudioRecordingDuration;
@property(readonly, nonatomic) double minAudioRecordingDuration;
@property(readonly, nonatomic) _Bool shouldNotShowSendButton;
- (double)toFieldPreferredHeight;
- (id)red_recipientTextColor;
- (id)siri_recipientTextColor;
- (id)blue_recipientTextColor;
- (id)green_recipientTextColor;
- (id)gray_recipientTextColor;
- (id)recipientTextColorForColorType:(BOOL)arg1;
@property(readonly, nonatomic) _Bool presentsFullscreenInViewService;
@property(readonly, nonatomic) _Bool shouldRefreshAlternateAddressesSheet;
@property(readonly, nonatomic) _Bool shouldAutomaticallyCheckAvailabilityOfAlternateAddresses;
@property(readonly, nonatomic) _Bool shouldShowDisclosureChevronInRecipientAtoms;
@property(readonly, nonatomic) _Bool shouldHomogenizeAtomsForPreferredService;
@property(readonly, nonatomic) UIImage *playButtonArrowImage;
@property(readonly, nonatomic) UIImage *playButtonImage;
@property(readonly, nonatomic) UIImage *textDocumentIcon;
@property(readonly, nonatomic) UIImage *errorDocumentIcon;
@property(readonly, nonatomic) UIImage *genericDocumentIcon;
@property(readonly, nonatomic) UIFont *contactAttachmentOrgFont;
@property(readonly, nonatomic) UIFont *contactAttachmentNameFont;
@property(readonly, nonatomic) UIFont *attachmentTextFont;
@property(readonly, nonatomic) UIFont *previewTitleFont;
@property(readonly, nonatomic) UIColor *waveformDisabledColor;
@property(readonly, nonatomic) UIColor *waveformUnplayedColor;
- (id)red_progressViewColor;
- (id)siri_progressViewColor;
- (id)blue_progressViewColor;
- (id)green_progressViewColor;
- (id)gray_progressViewColor;
- (id)progressViewColorForColorType:(BOOL)arg1;
- (id)red_waveformColor;
- (id)siri_waveformColor;
- (id)blue_waveformColor;
- (id)green_waveformColor;
- (id)gray_waveformColor;
- (id)waveformColorForColorType:(BOOL)arg1;
@property(readonly, nonatomic) UIColor *attachmentBalloonSubtitleTextColor;
@property(readonly, nonatomic) UIColor *attachmentBalloonTitleTextColor;
@property(readonly, nonatomic) UIColor *attachmentBalloonActionColor;
@property(readonly, nonatomic) double photoSheetVideoIconPadding;
@property(readonly, nonatomic) struct CGSize photoSheetProgressIndicatorSize;
- (double)transcriptWaveformWidthForDuration:(double)arg1;
@property(readonly, nonatomic) unsigned long long waveformPowerLevelWidthIncrement;
@property(readonly, nonatomic) unsigned long long waveformGapWidth;
@property(readonly, nonatomic) unsigned long long waveformPowerLevelWidth;
@property(readonly, nonatomic) double waveformHeight;
- (struct UIEdgeInsets)thumbnailContentAlignmentInsetsForOrientation:(BOOL)arg1;
@property(readonly, nonatomic) double previewTitleBarHeight;
@property(readonly, nonatomic) struct UIEdgeInsets minimumPlayButtonInsets;
- (struct CGSize)mapThumbnailFillSizeForWidth:(double)arg1;
- (struct CGSize)thumbnailFillSizeForWidth:(double)arg1 imageSize:(struct CGSize)arg2;
@property(readonly, nonatomic) double contactBalloonOrgBottomSpacing;
@property(readonly, nonatomic) double contactBalloonNameOrgSpacing;
@property(readonly, nonatomic) double contactBalloonTopNameSpacing;
@property(readonly, nonatomic) double contactBalloonHeight;
@property(readonly, nonatomic) double contactBalloonMinWidth;
@property(readonly, nonatomic) double contactBalloonInnerItemSpacing;
@property(readonly, nonatomic) struct CGSize contactImageSize;
@property(readonly, nonatomic) struct CGSize attachmentBalloonSize;
@property(readonly, nonatomic) struct CGSize documentIconSize;
@property(readonly, nonatomic) long long playButtonBackdropStyle;
@property(readonly, nonatomic) double waveformMinLinearPowerLevel;
@property(readonly, nonatomic) double waveformMinDbPowerLevel;
@property(readonly, nonatomic) unsigned long long waveformMinPowerLevelsCount;
@property(readonly, nonatomic) unsigned long long waveformMaxPowerLevelsCount;
@property(readonly, nonatomic) double waveformMaxWidthDuration;
@property(readonly, nonatomic) _Bool supportsPassbookAttachments;
@property(readonly, nonatomic) _Bool playButtonPunchesOutArrow;
@property(readonly, nonatomic) _Bool useSingleLineForContactVCardNames;
@property(readonly, nonatomic) _Bool showsVCalViewer;
@property(readonly, nonatomic) _Bool showsFileSizeInSubtitle;
@property(readonly, nonatomic) _Bool calculatesWidthForAttachmentBalloons;
@property(readonly, nonatomic) _Bool shouldFillAttachmentBalloon;
@property(readonly, nonatomic) Class contactBalloonViewClass;
@property(readonly, nonatomic) Class audioBalloonCellClass;
@property(readonly, nonatomic) Class audioBalloonViewClass;
@property(readonly, nonatomic) Class attachmentViewClass;
- (struct CGSize)locationShareBalloonSizeForWidth:(double)arg1 offerState:(long long)arg2;
@property(readonly, nonatomic) double locationShareBalloonContactImageDiameter;
- (double)locationShareBalloonLabelMaxHeightForOfferState:(long long)arg1;
@property(readonly, nonatomic) double locationShareBalloonButtonHeight;
@property(readonly, nonatomic) double locationShareBalloonAdditionalVertPadding;
- (struct CGSize)locationOfferMapThumbnailFillSizeForWidth:(double)arg1;
- (id)red_chevronImage;
- (id)siri_chevronImage;
- (id)blue_chevronImage;
- (id)green_chevronImage;
- (id)gray_chevronImage;
- (id)chevronImageForColorType:(BOOL)arg1;
- (id)systemGrayChevronImage;
- (id)whiteChevronImage;
@property(readonly, nonatomic) NSString *strokedTaillessBalloonName;
@property(readonly, nonatomic) NSString *strokedBalloonName;
@property(readonly, nonatomic) NSString *skinnyTaillessBalloonName;
@property(readonly, nonatomic) NSString *skinnyBalloonName;
@property(readonly, nonatomic) NSString *taillessBallonName;
@property(readonly, nonatomic) NSString *balloonName;
@property(readonly, nonatomic) UIFont *audioBalloonTimeFont;
@property(readonly, nonatomic) UIFont *balloonSubjectFont;
@property(readonly, nonatomic) UIFont *balloonTextFont;
- (id)red_balloonOverlayColor;
- (id)siri_balloonOverlayColor;
- (id)blue_balloonOverlayColor;
- (id)green_balloonOverlayColor;
- (id)gray_balloonOverlayColor;
- (id)balloonOverlayColorForColorType:(BOOL)arg1;
- (id)red_balloonTextLinkColor;
- (id)siri_balloonTextLinkColor;
- (id)blue_balloonTextLinkColor;
- (id)green_balloonTextLinkColor;
- (id)gray_balloonTextLinkColor;
- (id)balloonTextLinkColorForColorType:(BOOL)arg1;
- (id)red_balloonTextColor;
- (id)siri_balloonTextColor;
- (id)blue_balloonTextColor;
- (id)green_balloonTextColor;
- (id)gray_balloonTextColor;
- (id)balloonTextColorForColorType:(BOOL)arg1;
- (id)red_unfilledBalloonColor;
- (id)siri_unfilledBalloonColor;
- (id)blue_unfilledBalloonColor;
- (id)green_unfilledBalloonColor;
- (id)gray_unfilledBalloonColor;
- (id)unfilledBalloonColorForColorType:(BOOL)arg1;
- (id)red_balloonColors;
- (id)siri_balloonColors;
- (id)blue_balloonColors;
- (id)green_balloonColors;
- (id)gray_balloonColors;
- (id)balloonColorsForColorType:(BOOL)arg1;
@property(readonly, nonatomic) double horizontalBalloonBadgeInset;
@property(readonly, nonatomic) double verticalBalloonBadgeInset;
@property(readonly, nonatomic) double nanoNoteSenderContentSpace;
@property(readonly, nonatomic) double audioBalloonTimeInset;
@property(readonly, nonatomic) double audioBalloonWaveformTimeSpace;
- (double)audioBalloonTimeWidthForDuration:(double)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets balloonMaskFrameInsets;
@property(readonly, nonatomic) struct UIEdgeInsets balloonMaskFrameCapInsets;
@property(readonly, nonatomic) struct UIEdgeInsets balloonLineFragmentInsets;
@property(readonly, nonatomic) double balloonLineFragmentPadding;
@property(readonly, nonatomic) struct UIEdgeInsets balloonTextContainerInset;
- (struct UIEdgeInsets)attachmentBalloonAlignmentRectInsetsWithTail:(_Bool)arg1;
- (struct UIEdgeInsets)balloonMaskAlignmentRectInsetsWithTail:(_Bool)arg1;
- (struct UIEdgeInsets)taillessAttachmentBalloonAlignmentRectInsets;
- (struct UIEdgeInsets)attachmentBalloonAlignmentRectInsets;
- (struct UIEdgeInsets)taillessBalloonMaskAlignmentRectInsets;
- (struct UIEdgeInsets)balloonMaskAlignmentRectInsets;
- (struct UIEdgeInsets)balloonMaskCapInsetsWithTail:(_Bool)arg1 skinny:(_Bool)arg2;
- (struct UIEdgeInsets)taillessSkinnyBalloonMaskCapInsets;
- (struct UIEdgeInsets)skinnyBalloonMaskCapInsets;
- (struct UIEdgeInsets)taillessBalloonMaskCapInsets;
- (struct UIEdgeInsets)balloonMaskCapInsets;
- (struct CGSize)skinnyBalloonMaskSizeWithTail:(_Bool)arg1;
- (struct CGSize)balloonMaskSizeWithTail:(_Bool)arg1;
@property(readonly, nonatomic) CDStruct_dfbaa5db typingIndicatorSpec;
- (struct CGSize)taillessSkinnyBalloonMaskSize;
- (struct CGSize)skinnyBalloonMaskSize;
- (struct CGSize)taillessBalloonMaskSize;
- (struct CGSize)balloonMaskSize;
@property(readonly, nonatomic) double skinnyBalloonWidthDifference;
@property(readonly, nonatomic) double balloonMaskTailHeight;
@property(readonly, nonatomic) double balloonMaskTailWidth;
@property(readonly, nonatomic) _Bool showsBalloonBadges;
@property(readonly, nonatomic) _Bool modifiesSingleLineBalloonLayout;
@property(readonly, nonatomic) _Bool modifiesFirstBalloonLayout;
@property(readonly, nonatomic) _Bool opensLocationsInMapsApp;
@property(readonly, nonatomic) _Bool showsPlaceCardForBalloonViewTitleTap;
@property(readonly, nonatomic) _Bool handlesBalloonViewTitleTapsSeparately;
@property(readonly, nonatomic) _Bool showsBalloonChevron;
@property(readonly, nonatomic) _Bool playsInlineVideo;
@property(readonly, nonatomic) _Bool shouldAdjustWidthForSendFailure;
@property(readonly, nonatomic) _Bool hyphenatesTextContent;
@property(readonly, nonatomic) _Bool shouldUseDynamicGradient;
@property(readonly, nonatomic) UIImage *locationShareActionIcon;
@property(readonly, nonatomic) UIFont *transcriptJunkHeaderButtonFont;
@property(readonly, nonatomic) UIFont *transcriptJunkHeaderTitleFont;
@property(readonly, nonatomic) NSDictionary *transcriptButtonTextAttributes;
@property(readonly, nonatomic) NSDictionary *drawerTranscriptTextAttributes;
@property(readonly, nonatomic) NSDictionary *datestampTranscriptBoldTextAttributes;
@property(readonly, nonatomic) NSDictionary *datestampTranscriptTextAttributes;
@property(readonly, nonatomic) NSDictionary *stampTranscriptBoldTextAttributes;
@property(readonly, nonatomic) NSDictionary *stampTranscriptTextAttributes;
@property(readonly, nonatomic) NSDictionary *senderTranscriptTextAttributes;
- (id)statusTranscriptBoldTextAttributesForOrientation:(BOOL)arg1;
- (id)statusTranscriptTextAttributesForOrientation:(BOOL)arg1;
- (id)_rightStatusTranscriptBoldTextAttributes;
- (id)_leftStatusTranscriptBoldTextAttributes;
- (id)_rightStatusTranscriptTextAttributes;
- (id)_leftStatusTranscriptTextAttributes;
- (id)transcriptDrawerFont;
@property(readonly, nonatomic) UIFont *transcriptBoldTextFont;
@property(readonly, nonatomic) UIFont *transcriptTextFont;
@property(readonly, nonatomic) long long transcriptLoadingIndicatorStyle;
@property(readonly, nonatomic) UIColor *transcriptTextColor;
@property(readonly, nonatomic) UIColor *transcriptBackgroundColor;
@property(readonly, nonatomic) double transcriptScrollToBottomThreshold;
@property(readonly, nonatomic) double transcriptJunkHeaderButtonHeight;
- (double)composeBalloonMaxWidthForEntryContentViewWidth:(double)arg1;
- (double)previewBalloonMaxWidthForBalloonMaxWidth:(double)arg1;
- (double)balloonMaxWidthForTranscriptWidth:(double)arg1 marginInsets:(struct UIEdgeInsets)arg2 shouldShowPhotoButton:(_Bool)arg3 shouldShowCharacterCount:(_Bool)arg4;
@property(readonly, nonatomic) double balloonMaxWidthPercent;
@property(readonly, nonatomic) double contactPhotoBalloonMargin;
- (double)balloonBalloonTranscriptSpace:(unsigned char)arg1;
@property(readonly, nonatomic) double largeTranscriptSpace;
@property(readonly, nonatomic) double mediumTranscriptSpace;
@property(readonly, nonatomic) double smallTranscriptSpace;
@property(readonly, nonatomic) double bottomTranscriptSpace;
@property(readonly, nonatomic) double topTranscriptSpace;
@property(readonly, nonatomic) double checkmarkHorizontalPadding;
- (void)invalidateTranscriptDrawerWidth;
- (double)transcriptDrawerMaxContentOffsetXForMarginInsets:(struct UIEdgeInsets)arg1;
- (double)transcriptDrawerWidthForMarginInsets:(struct UIEdgeInsets)arg1;
- (double)transcriptDrawerOverlapForMarginInsets:(struct UIEdgeInsets)arg1;
- (double)transcriptDrawerSpace;
@property(readonly, nonatomic) struct UIEdgeInsets contactPhotoTranscriptInsets;
@property(readonly, nonatomic) struct UIEdgeInsets stampTranscriptInsets;
@property(readonly, nonatomic) struct UIEdgeInsets senderTranscriptInsets;
@property(readonly, nonatomic) struct UIEdgeInsets balloonTranscriptInsets;
@property(readonly, nonatomic) double emojiPreviewMaxWidth;
@property(readonly, nonatomic) double previewMaxWidth;
@property(readonly, nonatomic) struct UIEdgeInsets minTranscriptMarginInsets;
@property(readonly, nonatomic) double transcriptButtonCharge;
@property(readonly, nonatomic) struct UIEdgeInsets transcriptButtonContentEdgeInsets;
@property(readonly, nonatomic) struct CGSize statusSaveButtonTranscriptTextSize;
@property(readonly, nonatomic) NSAttributedString *statusSaveButtonTranscriptText;
@property(readonly, nonatomic) double transcriptBoldTextHeight;
@property(readonly, nonatomic) struct UIEdgeInsets transcriptBoldTextAlignmentInsets;
@property(readonly, nonatomic) double transcriptDrawerContactImagePadding;
@property(readonly, nonatomic) double transcriptDrawerContactImageDiameter;
@property(readonly, nonatomic) double transcriptContactImageDiameter;
@property(readonly, nonatomic) _Bool supportsContiguousAttachments;
@property(readonly, nonatomic) _Bool scrollToBottomStopsAtTopOfLastBubble;
@property(readonly, nonatomic) _Bool transcriptCanUseOpaqueMask;
@property(readonly, nonatomic) _Bool usesDataDetectorsUI;
@property(readonly, nonatomic) _Bool shouldInsetForStatusBar;
@property(readonly, nonatomic) _Bool timestampsPushBalloons;
@property(readonly, nonatomic) _Bool shouldUseRotisserieScrolling;
@property(readonly, nonatomic) _Bool shouldUseDynamicScrolling;
@property(readonly, nonatomic) _Bool shouldShowContactPhotosInTranscript;
@property(readonly, nonatomic) _Bool supportsTypingIndicatorAnimation;
@property(readonly, nonatomic) UIImage *forwardImage;
@property(readonly, nonatomic) UIFont *readerFont;
@property(readonly, nonatomic) UIFont *transcriptHeaderTextFont;
@property(readonly, nonatomic) UIColor *progressBarTrackTintColor;
@property(readonly, nonatomic) UIColor *dimmingViewBackgroundColor;
@property(readonly, nonatomic) UIColor *transcriptSeparatorColor;
@property(readonly, nonatomic) double updateTranscriptInsetsAnimationDuration;
@property(readonly, nonatomic) double editingTransitionAnimationDuration;
@property(readonly, nonatomic) double resizeMessageEntryViewAnimationDuration;
@property(readonly, nonatomic) double throwMessageAnimationDuration;
@property(readonly, nonatomic) double scrollInNewMessageAnimationDuration;
@property(readonly, nonatomic) double fadeInBubbleAnimationDuration;
- (double)_transcriptAnimationScaleFactor;
@property(readonly, nonatomic) _Bool showsProgressInNavigationBar;
@property(readonly, nonatomic) _Bool shouldUseSendAnimation;
@property(readonly, nonatomic) _Bool shouldBackfillTranscript;
@property(readonly, nonatomic) UIImage *trashImage;
@property(readonly, nonatomic) UIImage *detailsImage;
@property(readonly, nonatomic) UIImage *unreadDNDImage;
@property(readonly, nonatomic) UIImage *readDNDImage;
@property(readonly, nonatomic) UIImage *unreadImage;
@property(readonly, nonatomic) UIFont *conversationListGroupCountFont;
@property(readonly, nonatomic) UIFont *conversationListDateFont;
@property(readonly, nonatomic) UIFont *conversationListSummaryFont;
@property(readonly, nonatomic) UIFont *conversationListGroupSenderFont;
@property(readonly, nonatomic) UIFont *conversationListSenderFont;
@property(readonly, nonatomic) UIColor *conversationListGroupCountColor;
@property(readonly, nonatomic) UIColor *conversationListDateColor;
@property(readonly, nonatomic) UIColor *conversationListSummaryColor;
@property(readonly, nonatomic) UIColor *conversationListSenderColor;
@property(readonly, nonatomic) double conversationListMultipleContactsImageDiameter;
@property(readonly, nonatomic) double conversationListContactImageDiameter;
@property(readonly, nonatomic) double conversationListMinimumWidthForHiddenContactImage;
@property(readonly, nonatomic) _Bool showsSegmentedControlForFilteredConversationList;
@property(readonly, nonatomic) _Bool showsConversationListCellChevronImage;
@property(readonly, nonatomic) _Bool hidesUnreadIndicatorWhenEditing;
@property(readonly, nonatomic) _Bool showsNoMessagesDialog;
@property(readonly, nonatomic) _Bool shouldShowSearchBarInConversationList;
@property(readonly, nonatomic) _Bool canShowContactPhotosInConversationList;
@property(readonly, nonatomic) _Bool usesPersistentConversationSelection;
@property(readonly, nonatomic) _Bool selectNewConversationOnDeletion;
@property(readonly, nonatomic) _Bool selectNewConversationOnStateRestore;
@property(readonly, nonatomic) _Bool showPendingInConversationList;
@property(readonly, nonatomic) Class navigationBarClass;
@property(readonly, nonatomic) Class conversationListNavigationControllerClass;
@property(readonly, nonatomic) Class conversationListTableViewClass;
@property(readonly, nonatomic) UIImage *chevronImage;
@property(readonly, nonatomic) UIColor *notificationSubtitleColor;
@property(readonly, nonatomic) UIColor *grayTextColor;
@property(readonly, nonatomic) UIColor *lightGrayColor;
@property(readonly, nonatomic) UIColor *darkAppTintColor;
@property(readonly, nonatomic) UIColor *messagesControllerBackgroundColor;
@property(readonly, nonatomic) UIColor *appTintColor;
@property(readonly, nonatomic) unsigned long long conversationListCellMaxSummaryLength;
@property(readonly, nonatomic) unsigned long long conversationListCellSummaryNumberOfLines;
@property(readonly, nonatomic) double conversationListCellRightMargin;
@property(readonly, nonatomic) double conversationListCellLeftMargin;
@property(readonly, nonatomic) struct UIEdgeInsets conversationListFilterSegmentInset;
@property(readonly, nonatomic) double conversationListEditingTableMarginWidth;
@property(readonly, nonatomic) double conversationListTableMarginWidth;
@property(readonly, nonatomic) double conversationListCellBackgroundPadding;
@property(readonly, nonatomic) double summaryDateConversationListSpace;
@property(readonly, nonatomic) double senderSummaryConversationListSpace;
@property(readonly, nonatomic) double bottomConversationListSpace;
@property(readonly, nonatomic) double topConversationListSpace;
- (double)conversationListSummaryBodyLeading;
- (double)conversationListSenderBodyLeading;
@property(readonly, nonatomic) double maxTranscriptPortraitWidth;
- (double)maxPrimaryColumnWidthForInterfaceOrientation:(long long)arg1;
@property(readonly, nonatomic) double maxPrimaryColumnWidth;
@property(readonly, nonatomic) _Bool showMMSSetup;
@property(readonly, nonatomic) _Bool photosIsWhitelisted;
@property(readonly, nonatomic) _Bool cameraIsWhitelisted;
@property(readonly, nonatomic) _Bool mailIsWhitelisted;
@property(readonly, nonatomic) _Bool faceTimeAudioIsWhitelisted;
@property(readonly, nonatomic) _Bool faceTimeVideoIsWhitelisted;
@property(readonly, nonatomic) _Bool phoneIsWhitelisted;
@property(readonly, nonatomic) _Bool canAccessPhotos;
@property(readonly, nonatomic) _Bool canAccessContacts;
@property(readonly, nonatomic) NSDateFormatter *timestampDateFormatter;
@property(readonly, nonatomic) unsigned long long commonRepliesLoadLimit;
@property(readonly, nonatomic) unsigned long long conversationCacheSize;
@property(readonly, nonatomic) unsigned long long initialConversationSizingMessageCount;
@property(readonly, nonatomic) unsigned long long defaultConversationSummaryMessageCount;
- (unsigned long long)minBalloonsForTranscriptHeight;
@property(readonly, nonatomic) unsigned long long initialConversationViewingMessageCount;
@property(readonly, nonatomic) _Bool shouldSizeInitialViewingMessageCount;
@property(readonly, nonatomic) _Bool shouldLoadInitialViewingMessageCount;
@property(readonly, nonatomic) unsigned long long defaultConversationViewingMessageCount;
@property(readonly, nonatomic) unsigned long long supportedInterfaceOrientations;
@property(readonly, nonatomic) double transcriptHeaderViewMaxRows;
@property(readonly, nonatomic) _Bool isAccessibilityPreferredContentSizeCategory;
@property(readonly, nonatomic) double resumeToConversationListTimeInterval;
@property(readonly, nonatomic) _Bool shouldOnlyResumeToConversationListAfterTimeout;
@property(readonly, nonatomic) _Bool hideUnreadCountInTitleBar;
@property(readonly, nonatomic) _Bool usesNavigationBarControls;
@property(readonly, nonatomic) _Bool usesEntryView;
@property(readonly, nonatomic) _Bool isProximityMonitoringSupported;
@property(readonly, nonatomic) _Bool joystickUsesWindow;
@property(readonly, nonatomic) _Bool usesActionMenu;
@property(readonly, nonatomic) _Bool presentForwardingUIModally;
@property(readonly, nonatomic) _Bool recordsRecentContact;
@property(readonly, nonatomic) _Bool showsCompositionPanel;
@property(readonly, nonatomic) _Bool showsSendAnimation;
@property(readonly, nonatomic) _Bool automaticallyShowsKeyboard;
@property(readonly, nonatomic) _Bool darkUIEnabled;
@property(readonly, nonatomic) _Bool isSizeConstrained;
@property(readonly, nonatomic) _Bool promptsForReadReceiptsSetting;
@property(readonly, nonatomic) _Bool resetsIdleTimer;
@property(readonly, nonatomic) _Bool shouldUseTranslucentBars;
@property(readonly, nonatomic) _Bool shouldGrabBackgroundAssertion;
@property(readonly, nonatomic) _Bool presentsReaderController;
@property(readonly, nonatomic) _Bool canPresentOverKeyboard;
@property(readonly, nonatomic) _Bool usesPopovers;
@property(readonly, nonatomic) _Bool presentsQuickLookController;
@property(readonly, nonatomic) _Bool lowClearanceInLandscape;
@property(readonly, nonatomic) _Bool shouldSuppressRotationInNewCompose;
@property(readonly, nonatomic) _Bool usesUncollapsedSplitview;
@property(readonly, nonatomic) double raiseToTalkErrorMaxDuration;
@property(readonly, nonatomic) double raiseToTalkAutoSendMaxDuration;
@property(readonly, nonatomic) double locationValidInterval;
@property(readonly, nonatomic) long long locationShareEODHour;
@property(readonly, nonatomic) double locationShareOneHourTimeInterval;
@property(readonly, nonatomic) double muteEightHourTimeInterval;
@property(readonly, nonatomic) double muteOneHourTimeInterval;

@end

