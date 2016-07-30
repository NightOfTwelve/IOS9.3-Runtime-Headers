//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSDictionary, NSMutableDictionary, UIMovieScrubberTrackOverlayView;
@protocol UIMovieScrubberTrackViewDataSource, UIMovieScrubberTrackViewDelegate;

__attribute__((visibility("hidden")))
@interface UIMovieScrubberTrackView : UIView
{
    NSArray *_summaryThumbnailViews;
    NSArray *_summaryThumbnailTimestamps;
    NSArray *_summaryThumbnailChildTimestamps;
    NSDictionary *_thumbnailStartXValues;
    NSDictionary *_childThumbnailViews;
    NSMutableDictionary *_thumbnailViews;
    NSArray *_timestamps;
    UIMovieScrubberTrackOverlayView *_overlayView;
    UIView *_maskContainerView;
    struct CGSize _thumbnailSize;
    float _zoomOriginXDelta;
    float _zoomWidthDelta;
    float _unclampedZoomWidthDelta;
    float _zoomAnimationDuration;
    double _duration;
    double _value;
    double _startValue;
    double _endValue;
    struct {
        unsigned int delegateSizeOriginDelta:1;
        unsigned int delegateDidExpand:1;
        unsigned int delegateDidCollapse:1;
        unsigned int delegateWillRequestThumbs:1;
        unsigned int delegateDidRequestThumbs:1;
        unsigned int delegateZoomAnimationDuration:1;
        unsigned int delegateZoomAnimationDelay:1;
        unsigned int needsReload:1;
        unsigned int editing:1;
        unsigned int editingHandle;
        unsigned int zoomIsDisabled:1;
    } _trackFlags;
    id <UIMovieScrubberTrackViewDataSource> _dataSource;
    id <UIMovieScrubberTrackViewDelegate> _delegate;
}

@property(nonatomic) __weak id <UIMovieScrubberTrackViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <UIMovieScrubberTrackViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_unzoomAnimation:(id)arg1 didFinish:(id)arg2 context:(id)arg3;
- (void)_zoomAnimation:(id)arg1 didFinish:(id)arg2 context:(id)arg3;
- (void)unzoom;
- (void)_setOverlayViewIsZoomed:(_Bool)arg1 minValue:(float)arg2 maxValue:(float)arg3;
- (_Bool)zoomAtPoint:(struct CGPoint)arg1;
- (double)zoomAnimationDuration;
- (void)setZoomAnimationDuration:(double)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)_reallyReloadData;
- (void)clear;
- (id)_createImageViewForTimestamp:(id)arg1 isSummaryThumbnail:(_Bool)arg2;
- (void)setThumbnailImage:(struct CGImage *)arg1 forTimestamp:(id)arg2;
- (void)setEndValue:(double)arg1;
- (void)setStartValue:(double)arg1;
- (void)animateFillFramesAway;
- (void)setEditing:(_Bool)arg1;
- (void)setValue:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

