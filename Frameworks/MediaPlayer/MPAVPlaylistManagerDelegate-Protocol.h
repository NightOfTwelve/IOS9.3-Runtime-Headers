//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPAVItem, MPAVPlaylistManager, MPAVQueueCoordinator, MPQueueFeeder;

@protocol MPAVPlaylistManagerDelegate <NSObject>
- (void)playlistManager:(MPAVPlaylistManager *)arg1 queueCoordinator:(MPAVQueueCoordinator *)arg2 willInsertItem:(MPAVItem *)arg3 afterItem:(MPAVItem *)arg4;
- (void)playlistManager:(MPAVPlaylistManager *)arg1 didFailLoadingAllItemsForQueueFeeder:(MPQueueFeeder *)arg2;
- (void)playlistManager:(MPAVPlaylistManager *)arg1 didTransitionToPlaylistFeeder:(MPQueueFeeder *)arg2;
@end

