//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayerUI/MPUExtrasViewElementViewController.h>

@class IKLockupElement, MPUContentSizeLayoutConstraint, MPUExtrasConstrainedArtworkContainerView, NSLayoutConstraint, NSString, UILabel, UIView;

@interface MPUExtrasLockupElementViewController : MPUExtrasViewElementViewController
{
    MPUExtrasConstrainedArtworkContainerView *_artworkContainerView;
    UIView *_textContainmentView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_descriptionLabel;
    NSLayoutConstraint *_artworkContainerTopConstraint;
    NSLayoutConstraint *_artworkContainerXConstraint;
    NSLayoutConstraint *_artworkContainerWidthConstraint;
    NSLayoutConstraint *_artworkContainerHeightConstraint;
    struct CGSize _artworkSize;
    NSLayoutConstraint *_textTopConstraint;
    NSLayoutConstraint *_textHeightConstraint;
    NSLayoutConstraint *_textCenterYConstraint;
    NSLayoutConstraint *_textLeadingConstraint;
    NSLayoutConstraint *_textTrailingConstraint;
    NSLayoutConstraint *_textBottomConstraint;
    NSLayoutConstraint *_titleVerticalConstraint;
    MPUContentSizeLayoutConstraint *_subtitleBaselineConstraint;
    MPUContentSizeLayoutConstraint *_descriptionBaselineConstraint;
}

- (void).cxx_destruct;
- (void)_handlePress:(id)arg1;
@property(readonly) NSString *descriptionTextStyle;
- (void)_configureDescriptionLabelForTextElement:(id)arg1;
- (void)_configureSubtitleLabelForTextElement:(id)arg1;
- (void)_configureTitleLabelForTextElement:(id)arg1;
- (void)_configureArtworkViewForImageElement:(id)arg1 overlays:(id)arg2;
- (void)_prepareLayout;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewElement:(id)arg1;

// Remaining properties
@property(readonly) IKLockupElement *viewElement; // @dynamic viewElement;

@end

