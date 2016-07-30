//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKSegmentedSectionDataSource.h>

@class GKFriendsSplittingDataSource, GKGameRecentPlayersDataSource, GKNearbyPlayersDataSource, NSSet;

@interface GKInvitePickerDataSource : GKSegmentedSectionDataSource
{
    GKFriendsSplittingDataSource *_friendsSplittingDataSource;
    GKGameRecentPlayersDataSource *_recentPlayersDataSource;
    GKNearbyPlayersDataSource *_nearbyPlayersDataSource;
    NSSet *_hiddenPlayers;
}

@property(retain, nonatomic) NSSet *hiddenPlayers; // @synthesize hiddenPlayers=_hiddenPlayers;
@property(retain, nonatomic) GKNearbyPlayersDataSource *nearbyPlayersDataSource; // @synthesize nearbyPlayersDataSource=_nearbyPlayersDataSource;
@property(retain, nonatomic) GKGameRecentPlayersDataSource *recentPlayersDataSource; // @synthesize recentPlayersDataSource=_recentPlayersDataSource;
@property(retain, nonatomic) GKFriendsSplittingDataSource *friendsSplittingDataSource; // @synthesize friendsSplittingDataSource=_friendsSplittingDataSource;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)itemAtIndexPath:(id)arg1;
- (_Bool)canSelectIndexPath:(id)arg1;
- (void)toggleSelectionAtIndexPath:(id)arg1;
- (void)toggleSelectionForPlayer:(id)arg1;
- (void)refreshSelectionState;
- (_Bool)hasPlayer:(id)arg1;
- (void)notifyPickerItemsChanged:(id)arg1;
- (id)indexPathsForPlayer:(id)arg1;
- (void)collectionViewWillBecomeActive:(id)arg1;
- (void)dealloc;
- (id)init;

@end

