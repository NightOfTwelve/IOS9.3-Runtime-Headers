//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class MusicMediaDetailTintInformation;
@protocol MusicMediaDetailHeaderViewControllerDelegate;

@protocol MusicMediaDetailHeaderViewController <NSObject>
@property(nonatomic) __weak id <MusicMediaDetailHeaderViewControllerDelegate> mediaHeaderViewControllerDelegate;
- (void)setMediaDetailHeaderHeight:(double)arg1 withMaximumHeaderHeight:(double)arg2 headerVerticalOffset:(double)arg3 transitionProgress:(double)arg4;
- (double)maximumMediaDetailHeaderHeightForBoundsHeight:(double)arg1 returningShouldDeferToContentViewController:(_Bool *)arg2;

@optional
- (void)setMediaDetailTintInformation:(MusicMediaDetailTintInformation *)arg1;
@end

