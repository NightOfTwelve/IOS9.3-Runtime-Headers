//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKEvent, NSDate;

@protocol CUIKSingleDayTimelineViewItem <NSObject>
+ (double)barToBarHorizontalDistanceIncludingBarWidth;
@property(readonly) _Bool visibleHeightLocked;
@property struct CGRect unPinnedViewFrame;
@property(readonly, nonatomic) EKEvent *event;
@property(readonly, nonatomic) double viewMaxNaturalTextHeight;
@property(readonly, nonatomic) double enoughHeightForOneLine;
@property(readonly, nonatomic) _Bool hideTravelTime;
@property(readonly, nonatomic) NSDate *end;
@property(readonly, nonatomic) NSDate *start;
@property(readonly, nonatomic) NSDate *startWithTravelTime;
- (void)setTravelTimeHeight:(double)arg1;
- (void)setVisibleHeight:(double)arg1;
- (struct CGRect)stagedFrame;
- (void)setStagedFrame:(struct CGRect)arg1;
@end

