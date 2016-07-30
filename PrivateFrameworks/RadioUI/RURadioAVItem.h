//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAVItem.h>

@class NSArray, NSString, RadioStation, RadioTrack;

@interface RURadioAVItem : MPAVItem
{
    NSArray *_buyOffers;
    RadioTrack *_radioTrack;
    _Bool _isInWishList;
    _Bool _heartbeatInvalid;
    RadioStation *_station;
    NSString *_stationHash;
    long long _stationID;
    NSString *_stationName;
    NSString *_stationStringID;
}

@property(nonatomic, getter=isHeartbeatInvalid) _Bool heartbeatInvalid; // @synthesize heartbeatInvalid=_heartbeatInvalid;
@property(readonly, nonatomic) NSString *stationStringID; // @synthesize stationStringID=_stationStringID;
@property(readonly, nonatomic) NSString *stationName; // @synthesize stationName=_stationName;
@property(readonly, nonatomic) long long stationID; // @synthesize stationID=_stationID;
@property(readonly, nonatomic) NSString *stationHash; // @synthesize stationHash=_stationHash;
@property(retain, nonatomic) RadioStation *station; // @synthesize station=_station;
@property(nonatomic) _Bool isInWishList; // @synthesize isInWishList=_isInWishList;
- (void).cxx_destruct;
- (void)_sendLikeOrBanRequestWithStatus:(int)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool _canUseStoreAdamIDForSubscriptionAdamID;
- (void)_beginUsingPlaybackLease;
- (void)_applyLoudnessInfoForVolumeNormalization;
- (id)radioTrack;
- (void)_radioRequestDidFinishNotification:(id)arg1;
- (void)_internalIsInWishlistDidChangeNotification:(id)arg1;
- (void)_contentTasteControllerDidChangeNotification:(id)arg1;
- (_Bool)usesSubscriptionLease;
- (void)addDerivedStationForArtist:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)mpuReporting_trackInfo;
- (_Bool)mpuReporting_shouldReportPlayEventsToStore;
- (unsigned long long)mpuReporting_itemType;
- (id)MPU_contentItemIdentifierCollection;
- (id)mediaItem;
- (long long)_persistedLikedState;
- (void)_loadMediaItemWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleUpdatedLikedState:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)urlTimeMarkers;
- (id)titlesForTime:(double)arg1;
- (id)title;
- (_Bool)supportsSettingCurrentTime;
- (_Bool)supportsLikedState;
- (long long)storeSubscriptionAdamID;
- (long long)storeItemInt64ID;
- (void)reevaluateType;
- (unsigned long long)persistentID;
- (id)mainTitle;
- (id)localizedPositionInPlaylistString;
- (id)localizedAttributedPositionInPlaylistStringWithRegularTextAttributes:(id)arg1 emphasizedTextAttributes:(id)arg2;
- (_Bool)isLikedStateEnabled;
- (_Bool)isValidPlayerSubstituteForItem:(id)arg1;
- (_Bool)isStreamable;
- (_Bool)isRadioItem;
- (_Bool)isCloudItem;
- (_Bool)isExplicitTrack;
- (id)copyrightText;
- (id)chapterTimeMarkerForTime:(double)arg1;
- (id)chapterTimeMarkers;
- (id)buyOffers;
- (id)artworkTimeMarkers;
- (id)artist;
- (long long)albumStoreID;
- (id)album;
- (id)aggregateDictionaryItemType;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithRadioTrack:(id)arg1;
- (id)artworkCatalogForPlaybackTime:(double)arg1;

@end

