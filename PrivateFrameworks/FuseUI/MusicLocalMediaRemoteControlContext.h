//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPAVItem, MusicAVPlayer;

@interface MusicLocalMediaRemoteControlContext : NSObject
{
    MusicAVPlayer *_player;
    MPAVItem *_currentlyPlayingItem;
    unsigned long long _itemPersistentID;
}

@property(readonly, nonatomic) unsigned long long itemPersistentID; // @synthesize itemPersistentID=_itemPersistentID;
@property(readonly, nonatomic) MPAVItem *currentlyPlayingItem; // @synthesize currentlyPlayingItem=_currentlyPlayingItem;
@property(readonly, nonatomic) MusicAVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (id)initWithPlayer:(id)arg1 mediaRemoteOptions:(id)arg2;

@end

