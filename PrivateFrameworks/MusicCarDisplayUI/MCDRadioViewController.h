//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicCarDisplayUI/MCD_OLD_TableViewController.h>

#import <MusicCarDisplayUI/RURadioDataSourceDelegate-Protocol.h>

@class MusicSimpleRadioStationInfo, NSArray, NSIndexPath, NSString, NSTimer, RURadioDataSource, RadioRecentStationsController, UIActivityIndicatorView, UINavigationController, UIView;

@interface MCDRadioViewController : MCD_OLD_TableViewController <RURadioDataSourceDelegate>
{
    RURadioDataSource *_dataSource;
    NSArray *_featuredStations;
    NSArray *_myStations;
    MusicSimpleRadioStationInfo *_prominentRadioStation;
    NSString *_featuredStationNamesBrief;
    UIView *_placeholderView;
    UIView *_MCD_tableView;
    _Bool _loadingRadioStation;
    _Bool _radioStationsLoaded;
    RadioRecentStationsController *_recentStationsController;
    NSIndexPath *_selectedIndexPath;
    UINavigationController *_nowPlayingNavigationController;
    UIActivityIndicatorView *_activityIndicator;
    id _currentlyPlayingRadioStation;
    unsigned long long _featuredStationsIndex;
    unsigned long long _genresStationsIndex;
    MCD_OLD_TableViewController *_viewController;
    NSTimer *_loadingTimer;
}

@property(retain, nonatomic) NSTimer *loadingTimer; // @synthesize loadingTimer=_loadingTimer;
@property(nonatomic) _Bool radioStationsLoaded; // @synthesize radioStationsLoaded=_radioStationsLoaded;
@property(retain, nonatomic) MCD_OLD_TableViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) unsigned long long genresStationsIndex; // @synthesize genresStationsIndex=_genresStationsIndex;
@property(nonatomic) unsigned long long featuredStationsIndex; // @synthesize featuredStationsIndex=_featuredStationsIndex;
@property(retain, nonatomic) id currentlyPlayingRadioStation; // @synthesize currentlyPlayingRadioStation=_currentlyPlayingRadioStation;
@property(nonatomic) _Bool loadingRadioStation; // @synthesize loadingRadioStation=_loadingRadioStation;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UINavigationController *nowPlayingNavigationController; // @synthesize nowPlayingNavigationController=_nowPlayingNavigationController;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) __weak RadioRecentStationsController *recentStationsController; // @synthesize recentStationsController=_recentStationsController;
- (void).cxx_destruct;
- (id)_stationFromIndexPath:(id)arg1;
- (id)_filteredRadioStations:(id)arg1;
- (void)_categorizeStations;
- (void)_updateViewForNetworkType:(long long)arg1;
- (_Bool)_isNetworkTypeAllowed:(long long)arg1;
- (id)viewControllerForRowAtIndexPath:(id)arg1;
- (void)didStartPlaying:(id)arg1;
- (void)_presentStationUnavailableAlertForError:(id)arg1 stationName:(id)arg2;
- (void)_startPlayingStation:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)radioDataSourceDidInvalidate:(id)arg1;
- (void)_limitedUIDidChange;
- (void)dealloc;
- (void)_setCurrentTableView;
- (void)_showLoadingScreen;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_reloadRadioStations;
- (id)initWithPlayer:(id)arg1 serviceProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

