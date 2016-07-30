//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotoLibrary/PLTilePlaceholderView-Protocol.h>

@class NSString, UIActivityIndicatorView, UILabel;

@interface PLPhotoTilePlaceholderView : UIView <PLTilePlaceholderView>
{
    UIActivityIndicatorView *_loadingIndicatorView;
    UILabel *_loadingLabel;
    UIView *_loadingContainerView;
    double _lastViewPhaseChangeDate;
    _Bool _indicatorIsVisible;
}

- (void)layoutSubviews;
- (void)setImageRect:(struct CGRect)arg1;
- (void)setToolbarVisible:(_Bool)arg1;
- (void)showLoadingIndicator;
- (void)showErrorIndicator;
- (void)showLoadingIndicatorWhenReady;
- (void)updateCloudDownloadProgress:(double)arg1;
- (void)fadeOutSoonIfNeededAndRemoveFromSuperview:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

