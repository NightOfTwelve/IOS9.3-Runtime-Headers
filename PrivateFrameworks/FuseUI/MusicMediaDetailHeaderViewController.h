//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FuseUI/MusicMediaDetailHeaderViewController-Protocol.h>

@class MusicInteractiveContentEffectView, MusicMediaDetailTintInformation, MusicMediaUberHeaderLegibilityOverlayView, NSArray, NSString, UIImage, UISnapshotView, UIView;
@protocol MusicMediaDetailHeaderViewControllerDelegate;

@interface MusicMediaDetailHeaderViewController : UIViewController <MusicMediaDetailHeaderViewController>
{
    MusicInteractiveContentEffectView *_contentEffectView;
    UISnapshotView *_contentEffectSnapshotView;
    UIView *_contentEffectClippingView;
    unsigned long long _contentEffectRevisionID;
    UIView *_darkeningTintView;
    struct CGRect _focusRect;
    _Bool _hasReceivedHeaderInformation;
    double _headerHeight;
    double _headerVerticalOffset;
    unsigned long long _ignoreContentEffectSnapshotCount;
    struct CGRect _lastContentEffectViewInputBounds;
    struct CGSize _lastContentEffectViewSnapshotSize;
    MusicMediaUberHeaderLegibilityOverlayView *_legibilityOverlayView;
    double _maximumHeaderHeight;
    double _originalContentViewControllerViewAlpha;
    double _transitionProgress;
    double _artworkFittingHeight;
    UIImage *_artworkImage;
    NSArray *_focusRegions;
    NSString *_legibilityBottomGradientType;
    unsigned long long _headerStyle;
    MusicMediaDetailTintInformation *_mediaDetailTintInformation;
    id <MusicMediaDetailHeaderViewControllerDelegate> _mediaHeaderViewControllerDelegate;
}

@property(nonatomic) __weak id <MusicMediaDetailHeaderViewControllerDelegate> mediaHeaderViewControllerDelegate; // @synthesize mediaHeaderViewControllerDelegate=_mediaHeaderViewControllerDelegate;
@property(copy, nonatomic) MusicMediaDetailTintInformation *mediaDetailTintInformation; // @synthesize mediaDetailTintInformation=_mediaDetailTintInformation;
@property(nonatomic) unsigned long long headerStyle; // @synthesize headerStyle=_headerStyle;
@property(copy, nonatomic) NSString *legibilityBottomGradientType; // @synthesize legibilityBottomGradientType=_legibilityBottomGradientType;
@property(copy, nonatomic) NSArray *focusRegions; // @synthesize focusRegions=_focusRegions;
@property(retain, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
@property(nonatomic) double artworkFittingHeight; // @synthesize artworkFittingHeight=_artworkFittingHeight;
- (void).cxx_destruct;
- (void)_updateHeaderProperties;
- (void)_reloadContentEffectSnapshotView;
- (double)_maximumHeaderHeightForBoundsHeight:(double)arg1;
- (id)_calculateArtworkContentBackgroundColor;
- (void)_applyHeaderLegibilityTintInformation;
- (void)_applyTintInformation;
- (void)_applyHeaderStyle;
- (void)setMediaDetailHeaderHeight:(double)arg1 withMaximumHeaderHeight:(double)arg2 headerVerticalOffset:(double)arg3 transitionProgress:(double)arg4;
- (double)maximumMediaDetailHeaderHeightForBoundsHeight:(double)arg1 returningShouldDeferToContentViewController:(_Bool *)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

