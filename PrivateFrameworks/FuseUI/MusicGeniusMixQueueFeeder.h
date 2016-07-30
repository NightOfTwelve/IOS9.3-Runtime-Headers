//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicQueryQueueFeeder.h>

#import <FuseUI/NSSecureCoding-Protocol.h>

@protocol MusicGeniusMixQueueFeederDataSource;

@interface MusicGeniusMixQueueFeeder : MusicQueryQueueFeeder <NSSecureCoding>
{
    unsigned long long _currentPlaylistOffset;
    id <MusicGeniusMixQueueFeederDataSource> _dataSource;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) id <MusicGeniusMixQueueFeederDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)shuffleItemsWithAnchor:(unsigned long long *)arg1;
- (id)mediaItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfMediaItem:(id)arg1;
- (id)query;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)shuffleType;
- (unsigned long long)realRepeatType;
- (_Bool)userCanChangeShuffleAndRepeatType;
- (id)localizedPositionInPlaylistString:(id)arg1;
- (id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
- (id)pathAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfPaths;
- (unsigned long long)itemCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

