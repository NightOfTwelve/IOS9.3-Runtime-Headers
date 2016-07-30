//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <FuseUI/MusicEntityContentDescriptorViewConfiguring-Protocol.h>
#import <FuseUI/MusicEntityHorizontalLockupViewDelegate-Protocol.h>
#import <FuseUI/MusicEntityVerticalLockupViewDelegate-Protocol.h>
#import <FuseUI/MusicEntityViewDownloadInformationObserving-Protocol.h>
#import <FuseUI/MusicEntityViewPlaybackStatusObserving-Protocol.h>

@class MusicEntityVerticalLockupView, MusicEntityViewContentDescriptor, NSString, UIColor, UIImageView, UITraitCollection, UIView;
@protocol MusicEntityValueProviding;

@interface MusicEntityLockupContainerCollectionViewCell : UICollectionViewCell <MusicEntityVerticalLockupViewDelegate, MusicEntityHorizontalLockupViewDelegate, MusicEntityContentDescriptorViewConfiguring, MusicEntityViewDownloadInformationObserving, MusicEntityViewPlaybackStatusObserving>
{
    UITraitCollection *_cachedTraitCollection;
    struct MusicEntityDownloadInformation _downloadInformation;
    _Bool _entityDisabled;
    UIImageView *_highlightBackgroundView;
    _Bool _highlightBackgroundViewVisible;
    unsigned long long _highlightBackgroundVisibilityTransactionCount;
    MusicEntityVerticalLockupView *_lockupView;
    UIView *_hairlineView;
    double _textLateralEdgePadding;
    _Bool _showsHairline;
    UIColor *_hairlineColor;
}

+ (double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3;
@property(nonatomic) _Bool showsHairline; // @synthesize showsHairline=_showsHairline;
@property(copy, nonatomic) UIColor *hairlineColor; // @synthesize hairlineColor=_hairlineColor;
- (void).cxx_destruct;
- (void)_reloadHighlightImageViewAnimated:(_Bool)arg1;
- (id)_parentCollectionView;
- (void)_layoutHairlineView;
@property(retain, nonatomic) MusicEntityViewContentDescriptor *contentDescriptor;
@property(retain, nonatomic) id <MusicEntityValueProviding> entityValueProvider;
- (void)setPlaybackStatus:(id)arg1;
- (void)setDownloadInformation:(struct MusicEntityDownloadInformation)arg1;
- (void)updateForAsynchronousPropertyLoadCompleted;
- (void)setTextLateralEdgePadding:(double)arg1;
- (void)setEntityDisabled:(_Bool)arg1;
- (void)horizontalLockupView:(id)arg1 didSelectPlayButtonAction:(unsigned long long)arg2;
- (void)horizontalLockupViewDidSelectAddButton:(id)arg1 events:(unsigned long long)arg2;
- (void)horizontalLockupViewDidLayoutSubviews:(id)arg1;
- (void)horizontalLockupViewDidSelectContextualActionsButton:(id)arg1;
- (void)verticalLockupView:(id)arg1 didSelectPlayButtonAction:(unsigned long long)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (id)traitCollection;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

