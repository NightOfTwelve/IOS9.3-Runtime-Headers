//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPVideoView.h>

@interface UIMovieView : MPVideoView
{
}

- (void)stop;
- (void)setRepeatMode:(unsigned long long)arg1;
- (void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned long long)arg2;
- (void)setCurrentTime:(double)arg1;
- (void)play;
- (void)pause;
- (unsigned long long)playbackState;
- (unsigned long long)playableContentType;
- (double)duration;
- (double)currentTime;
- (unsigned long long)bufferingStatusMask;
- (id)avPlayer;
- (id)mpavController;

@end

