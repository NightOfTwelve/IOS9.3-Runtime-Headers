//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUVideoScrubberController;

@protocol PUVideoScrubberControllerDelegate <NSObject>

@optional
- (void)videoScrubberController:(PUVideoScrubberController *)arg1 desiredSeekTime:(CDStruct_1b6d18a9)arg2;
- (void)videoScrubberControllerDidUpdate:(PUVideoScrubberController *)arg1;
- (double)videoScrubberController:(PUVideoScrubberController *)arg1 lengthForDuration:(double)arg2;
@end

