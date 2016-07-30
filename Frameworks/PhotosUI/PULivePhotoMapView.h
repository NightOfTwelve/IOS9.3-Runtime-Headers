//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableSet, NSNumber;
@protocol PULivePhotoMapViewDelegate;

__attribute__((visibility("hidden")))
@interface PULivePhotoMapView : UIView
{
    NSArray *_frameViews;
    UIView *_photoView;
    UIView *_currentTimeView;
    UIView *_prePhotoGapView;
    UIView *_contentView;
    NSMutableSet *_touches;
    NSArray *_normalizedFrameTimes;
    double _normalizedPhotoTime;
    double _normalizedCurrentTime;
    double _normalizedPrePhotoGapTime;
    NSNumber *_selectedTime;
    id <PULivePhotoMapViewDelegate> _delegate;
}

@property(nonatomic) __weak id <PULivePhotoMapViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) NSNumber *selectedTime; // @synthesize selectedTime=_selectedTime;
@property(nonatomic) double normalizedPrePhotoGapTime; // @synthesize normalizedPrePhotoGapTime=_normalizedPrePhotoGapTime;
@property(nonatomic) double normalizedCurrentTime; // @synthesize normalizedCurrentTime=_normalizedCurrentTime;
@property(nonatomic) double normalizedPhotoTime; // @synthesize normalizedPhotoTime=_normalizedPhotoTime;
@property(copy, nonatomic) NSArray *normalizedFrameTimes; // @synthesize normalizedFrameTimes=_normalizedFrameTimes;
- (void).cxx_destruct;
- (void)_updateSelectedTime;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_updateFrameViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

