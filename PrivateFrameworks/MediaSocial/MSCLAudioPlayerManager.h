//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaSocial/MSCLAudioPlayerDelegate-Protocol.h>

@class MSCLAudioPlayer, NSString;
@protocol MSCLAudioPlayerManagerDataSource;

@interface MSCLAudioPlayerManager : NSObject <MSCLAudioPlayerDelegate>
{
    id <MSCLAudioPlayerManagerDataSource> _dataSource;
    MSCLAudioPlayer *_player;
}

@property(nonatomic) __weak id <MSCLAudioPlayerManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_showPlaybackStatus:(id)arg1 usingPlayButton:(id)arg2 animated:(_Bool)arg3;
- (id)_playButtonForPlayer:(id)arg1;
- (void)audioPlayer:(id)arg1 didFailWithError:(id)arg2;
- (void)audioPlayer:(id)arg1 didChangeStatus:(id)arg2;
- (void)stopPlayback;
- (void)playAsset:(id)arg1 withRepresentedObject:(id)arg2;
- (void)personalizePlayButton:(id)arg1 withRepresentedObject:(id)arg2 animated:(_Bool)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

