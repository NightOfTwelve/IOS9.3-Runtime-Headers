//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIPlayButton.h>

#import <SpotlightUI/MPUNowPlayingDelegate-Protocol.h>

@class NSString;

@interface SPUISearchPlayButton : SKUIPlayButton <MPUNowPlayingDelegate>
{
    _Bool _local;
    unsigned long long _trackID;
}

+ (void)stopListeningForPlayback;
+ (void)startListeningForPlayback;
@property(getter=isLocal) _Bool local; // @synthesize local=_local;
@property unsigned long long trackID; // @synthesize trackID=_trackID;
- (void)nowPlayingController:(id)arg1 playbackStateDidChange:(_Bool)arg2;
- (void)updateProgressForCurrentlyActiveTrackAnimated:(_Bool)arg1;
- (void)nowPlayingController:(id)arg1 elapsedTimeDidChange:(double)arg2;
- (_Bool)thisTrackIsActive;
- (void)buttonPressed;
- (void)updateWithTrackID:(unsigned long long)arg1 local:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

