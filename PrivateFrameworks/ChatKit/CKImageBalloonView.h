//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKBalloonView.h>

#import <ChatKit/CKAnimationTimerObserver-Protocol.h>

@class CKAnimatedImage, CKBalloonImageView, NSArray, NSString, UIImageView;

@interface CKImageBalloonView : CKBalloonView <CKAnimationTimerObserver>
{
    _Bool _isIrisAsset;
    CKAnimatedImage *_animatedImage;
    NSArray *_frames;
    CKBalloonImageView *_tailMask;
    UIImageView *_irisBadgeView;
}

@property(retain, nonatomic) UIImageView *irisBadgeView; // @synthesize irisBadgeView=_irisBadgeView;
@property(retain, nonatomic) CKBalloonImageView *tailMask; // @synthesize tailMask=_tailMask;
@property(copy, nonatomic) NSArray *frames; // @synthesize frames=_frames;
@property(nonatomic) _Bool isIrisAsset; // @synthesize isIrisAsset=_isIrisAsset;
@property(retain, nonatomic) CKAnimatedImage *animatedImage; // @synthesize animatedImage=_animatedImage;
- (void)updateAnimationTimerObserving;
- (void)animationTimerFired:(unsigned long long)arg1;
- (_Bool)needsGroupOpacity;
- (void)setCanUseOpaqueMask:(_Bool)arg1;
- (void)setHasTail:(_Bool)arg1;
- (void)prepareForReuse;
- (id)overlayColor;
- (void)prepareForDisplay;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (void)configureForMessagePart:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

