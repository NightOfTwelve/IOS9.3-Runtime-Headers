//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RadioUI/ADBannerViewDelegate-Protocol.h>
#import <RadioUI/ISDialogOperationDelegate-Protocol.h>

@class ISDialogOperation, MPAVController, MPUJinglePlayActivityReportingController, MPUReportingPlaybackObserver, NSString, RUJingleTiltReportingController, RURTCReportingController;
@protocol OS_dispatch_queue;

@interface RURadioAdObserver : NSObject <ADBannerViewDelegate, ISDialogOperationDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _hasDirtyVisualEngagement;
    _Bool _isSlotAcquisitionInProgress;
    long long _lastApplicationState;
    MPUJinglePlayActivityReportingController *_jinglePlayActivityReportingController;
    RUJingleTiltReportingController *_jingleTiltReportingController;
    double _minDurationToCountAsPlayed;
    long long _policyEngineEnabledCount;
    RURTCReportingController *_RTCReportingController;
    double _skipThreshold;
    ISDialogOperation *_slotAcquisitionDialogOperation;
    long long _visualEngagementCount;
    _Bool _visuallyEngaged;
    MPAVController *_player;
    MPUReportingPlaybackObserver *_reportingPlaybackObserver;
    unsigned long long _numberOfSkippedTracks;
}

+ (id)sharedAdObserver;
@property(readonly, nonatomic) unsigned long long numberOfSkippedTracks; // @synthesize numberOfSkippedTracks=_numberOfSkippedTracks;
@property(readonly, nonatomic, getter=isVisuallyEngaged) _Bool visuallyEngaged; // @synthesize visuallyEngaged=_visuallyEngaged;
@property(retain, nonatomic) RURTCReportingController *RTCReportingController; // @synthesize RTCReportingController=_RTCReportingController;
@property(retain, nonatomic) MPUReportingPlaybackObserver *reportingPlaybackObserver; // @synthesize reportingPlaybackObserver=_reportingPlaybackObserver;
@property(retain, nonatomic) MPAVController *player; // @synthesize player=_player;
@property(retain, nonatomic) RUJingleTiltReportingController *jingleTiltReportingController; // @synthesize jingleTiltReportingController=_jingleTiltReportingController;
@property(retain, nonatomic) MPUJinglePlayActivityReportingController *jinglePlayActivityReportingController; // @synthesize jinglePlayActivityReportingController=_jinglePlayActivityReportingController;
- (void).cxx_destruct;
- (void)_updateVisualEngagement;
- (void)_updateWithStoreBag:(id)arg1;
- (void)_unregisterForPlayerNotifications;
- (void)__scheduleUpdateVisualEngagement;
- (void)_scheduleUpdateVisualEngagement;
- (void)_reportPlaybackEndedForAdTrack:(id)arg1 withItem:(id)arg2;
- (void)_registerForPlayerNotifications;
- (void)_loadMinDurationToCountAsPlayedFromURLBag;
- (_Bool)_isPolicyEngineEnabled;
- (void)_handleSkipForChangedItem:(id)arg1 didChangeStation:(_Bool)arg2;
- (void)_getCurrentTime:(double *)arg1 duration:(double *)arg2 wasSkipped:(_Bool *)arg3 didAssetFailToLoad:(_Bool *)arg4 forItem:(id)arg5;
- (void)_clearAssetCacheForItem:(id)arg1;
- (void)_attemptSlotAcquisitionWithAdditionalBodyParameters:(id)arg1;
- (id)_adPolicyEngine;
- (void)willTransitionItemForBan:(id)arg1;
- (void)requestAdsForSlot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)optimalTransmissionWindowDidOpen;
- (void)noteDidEnterStation:(id)arg1;
- (void)historyDidEndPlayingAdTrack:(id)arg1 withItem:(id)arg2;
- (void)historyDidBeginPlayingAdTrack:(id)arg1 withItem:(id)arg2;
- (id)heartbeatTokenReturningError:(id *)arg1;
- (void)getTracksWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getHistoryWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)endVisualEngagement;
- (void)endEnablingPolicyEngine;
- (void)didTransitionItemForBan:(id)arg1;
- (void)beginVisualEngagement;
- (void)_beginEnablingPolicyEngine;
- (void)beginEnablingPolicyEngine;
- (void)attemptSlotAcquisition;
- (void)_storeBagDidLoadNotification:(id)arg1;
- (void)_radioStreamTrackAVItemDidReceiveTimedMetadataPingsNotification:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_itemWillChangeNotification:(id)arg1;
- (void)_itemDidFinishLoadingNotification:(id)arg1;
- (void)_itemChangedNotification:(id)arg1;
- (void)_itemAssetLoadedDidChangeNotification:(id)arg1;
- (void)_heartbeatChangedNotification:(id)arg1;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)operation:(id)arg1 selectedButton:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
