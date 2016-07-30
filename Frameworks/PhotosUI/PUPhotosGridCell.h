//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSArray, NSNumber, PUPhotoView, PUProgressIndicatorView, UIImageView, UIView;

@interface PUPhotosGridCell : UICollectionViewCell
{
    UIView *_selectionOverlayView;
    UIImageView *_selectionBadgeImageView;
    UIImageView *_cloudIconImageView;
    PUProgressIndicatorView *_progressIndicatorView;
    UIView *_highlightOverlayView;
    NSArray *_progressIndicatorViewConstraints;
    _Bool _selectionBadgeVisible;
    _Bool _cloudIconVisible;
    _Bool _transitionFillerViewEnabled;
    _Bool _transitionIsAppearing;
    int _currentImageRequestID;
    UIView *_transitionFillerView;
    NSNumber *_progress;
    PUPhotoView *_photoContentView;
    PUPhotoView *_temporaryPhotoContentView;
    struct UIEdgeInsets _fillerEdgeInsets;
}

+ (Class)_contentViewClass;
@property(nonatomic) int currentImageRequestID; // @synthesize currentImageRequestID=_currentImageRequestID;
@property(nonatomic) _Bool transitionIsAppearing; // @synthesize transitionIsAppearing=_transitionIsAppearing;
@property(nonatomic) struct UIEdgeInsets fillerEdgeInsets; // @synthesize fillerEdgeInsets=_fillerEdgeInsets;
@property(nonatomic) _Bool transitionFillerViewEnabled; // @synthesize transitionFillerViewEnabled=_transitionFillerViewEnabled;
@property(retain, nonatomic) PUPhotoView *temporaryPhotoContentView; // @synthesize temporaryPhotoContentView=_temporaryPhotoContentView;
@property(retain, nonatomic) PUPhotoView *photoContentView; // @synthesize photoContentView=_photoContentView;
@property(retain, nonatomic) NSNumber *progress; // @synthesize progress=_progress;
@property(nonatomic, getter=isCloudIconVisible) _Bool cloudIconVisible; // @synthesize cloudIconVisible=_cloudIconVisible;
@property(nonatomic, getter=isSelectionBadgeVisible) _Bool selectionBadgeVisible; // @synthesize selectionBadgeVisible=_selectionBadgeVisible;
@property(readonly, nonatomic) UIView *transitionFillerView; // @synthesize transitionFillerView=_transitionFillerView;
- (void).cxx_destruct;
- (void)setProgress:(id)arg1 immediately:(_Bool)arg2;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @dynamic highlighted;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateConstraints;
- (void)_layoutTransitionFillerView;
- (void)layoutSubviews;
- (void)_updateContentViewClipsToBounds;
- (void)_updateSubviewOrdering;
- (void)_updateProgressImmediately:(_Bool)arg1;
- (void)_updateCloudIcon;
- (void)_updateSelectionBadge;
- (void)_updateHighlight;
- (void)setTemporaryPhotoImage:(id)arg1 with:(long long)arg2;
- (void)removeTemporaryPhotoContentView;
- (void)addTemporaryPhotoContentView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

