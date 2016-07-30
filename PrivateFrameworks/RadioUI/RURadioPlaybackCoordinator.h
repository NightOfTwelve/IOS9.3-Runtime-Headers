//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RadioUI/MPAVRoutingControllerDelegate-Protocol.h>

@class MPAVRoute, MPAVRoutingController, MPUReportingPlaybackObserver, MPUserNotification, NSDate, NSString, RUPlaybackTimeoutInfoController, RURadioAVPlayer, RadioRecentStationsController, RadioStation;
@protocol OS_dispatch_source;

@interface RURadioPlaybackCoordinator : NSObject <MPAVRoutingControllerDelegate>
{
    MPAVRoutingController *_routingController;
    MPAVRoute *_pickedRoute;
    RadioStation *_currentStation;
    _Bool _deviceIsDocked;
    _Bool _deviceIsLocked;
    _Bool _didPresentNotificationForCurrentItem;
    int _lockStateNotifyToken;
    _Bool _lockStateNotifyTokenIsValid;
    void *_mediaRemoteCommandObserver;
    NSObject<OS_dispatch_source> *_pauseTimeoutTimerSource;
    RadioStation *_playbackNotificationStation;
    _Bool _playbackIsPaused;
    NSDate *_playbackTimeoutBeginDate;
    double _playbackTimeoutDuration;
    RUPlaybackTimeoutInfoController *_playbackTimeoutInfoController;
    MPUserNotification *_playbackTimeoutNotification;
    _Bool _playbackTimeoutNotificationDidExpire;
    NSObject<OS_dispatch_source> *_playbackTimeoutNotificationExpirationTimerSource;
    NSObject<OS_dispatch_source> *_presentPlaybackTimeoutTimerSource;
    _Bool _wasUsingBackgroundNetwork;
    RURadioAVPlayer *_player;
    RadioRecentStationsController *_recentStationsController;
    MPUReportingPlaybackObserver *_reportingPlaybackObserver;
}

@property(retain, nonatomic) MPUReportingPlaybackObserver *reportingPlaybackObserver; // @synthesize reportingPlaybackObserver=_reportingPlaybackObserver;
@property(retain, nonatomic) RadioRecentStationsController *recentStationsController; // @synthesize recentStationsController=_recentStationsController;
@property(readonly, nonatomic) RURadioAVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)_updatePlaybackTimerForDeviceStateChange;
- (void)_updateCurrentStationFromPlayer;
- (void)_setCurrentStation:(id)arg1;
- (void)_schedulePlaybackTimeoutNotificationExpirationTimerIfNeeded;
- (void)_resetPlaybackTimeoutInformation;
- (void)_receivedUserNotificationResponseForUserNotification:(struct __CFUserNotification *)arg1 withResponseFlags:(unsigned long long)arg2;
- (void)_presentPlaybackTimeoutNotificationForCurrentItemIfNeeded;
- (_Bool)_isRadioRelevantItem:(id)arg1;
- (_Bool)_isPauseTimeoutActive;
- (void)_dismissExpiredPlaybackTimeoutNotificationForced:(_Bool)arg1;
- (id)_currentStationFromPlayer;
- (void)_cancelPresentPlaybackTimeoutTimer;
- (void)_cancelPlaybackTimeoutNotificationExpirationTimer;
- (void)_cancelPlaybackTimeoutNotification;
- (void)_cancelPauseTimeoutTimer;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_playbackContentsDidChangeNotification:(id)arg1;
- (void)_itemWillChangeNotification:(id)arg1;
- (void)_itemLikedStateDidChangeNotification:(id)arg1;
- (void)_itemIsInWishListDidChangeNotification:(id)arg1;
- (void)_itemDurationDidBecomeAvailableNotification:(id)arg1;
- (void)_fullMuteDidChangeNotification:(id)arg1;
- (void)_effectiveVolumeDidChangeNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)setupPlaybackQueueWithPlaybackContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

