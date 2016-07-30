//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKPlayerPickerViewController.h>

@class GKInvitePickerDataSource, NSSet;

@interface GKInvitePickerViewController : GKPlayerPickerViewController
{
    GKInvitePickerDataSource *_invitePickerDataSource;
    NSSet *_hiddenPlayers;
}

@property(retain, nonatomic) NSSet *hiddenPlayers; // @synthesize hiddenPlayers=_hiddenPlayers;
@property(retain, nonatomic) GKInvitePickerDataSource *invitePickerDataSource; // @synthesize invitePickerDataSource=_invitePickerDataSource;
- (void)dataSource:(id)arg1 didUpdatePlaceholderVisibility:(_Bool)arg2;
- (void)didEnterNoContentState;
- (void)didEnterLoadedState;
- (void)segmentedSectionDataSource:(id)arg1 inSection:(unsigned long long)arg2 didSelectDataSourceWithIndex:(long long)arg3;
- (void)updateNoContentTitles;
- (void)configureNearbyDataSource;
- (void)setSupportsNearby:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)configureDataSource;
- (id)splitingDataSource;
- (void)dealloc;
- (id)initWithGame:(id)arg1 hiddenPlayers:(id)arg2;

@end

