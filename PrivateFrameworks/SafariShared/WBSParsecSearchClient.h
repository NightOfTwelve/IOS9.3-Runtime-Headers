//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/CLLocationManagerDelegate-Protocol.h>

@class CLLocation, CLLocationManager, NSArray, NSDate, NSMutableDictionary, NSNumber, NSString, NSThread, NSTimer, NSURL, NSURLQueryItem, NSURLSession, NSURLSessionConfiguration;
@protocol OS_dispatch_queue, WBSParsecSearchClientStorage;

@interface WBSParsecSearchClient : NSObject <CLLocationManagerDelegate>
{
    NSURLSessionConfiguration *_urlSessionConfiguration;
    NSTimer *_updateTimer;
    NSString *_customFlight;
    NSString *_userAgent;
    _Bool _usesLedBelly;
    double _configurationUpdateInterval;
    NSMutableDictionary *_bagImageData;
    NSMutableDictionary *_bagImages;
    NSURL *_userGUIDURL;
    NSURL *_userGUIDFallbackURL;
    NSURL *_feedbackURL;
    NSURL *_feedbackFallbackURL;
    NSString *_userGUID;
    NSTimer *_userGUIDExpirationTimer;
    _Bool _userGUIDEnabled;
    CLLocationManager *_locationManager;
    NSArray *_supportedGeolocationServices;
    NSArray *_recentlyUsedAppIdentifierWhitelist;
    NSString *_recentlyUsedAppIdentifierListString;
    NSString *_storeFrontIdentifier;
    int ipChangeNotificationToken;
    NSString *_deviceIP;
    NSThread *_locationThread;
    _Bool _updatingLocation;
    double _timeAfterWhichLocationShouldBeUpdated;
    NSMutableDictionary *_screenScaleToSpriteImageDictionary;
    NSMutableDictionary *_screenScaleToSpriteMapDictionary;
    _Bool _mescalEnabled;
    NSURL *_mescalCertificateURL;
    NSURL *_mescalSetupURL;
    unsigned long long _mescalVersionNumber;
    NSObject<OS_dispatch_queue> *_feedbackQueue;
    NSString *_bagForceFetchVersion;
    NSDate *_sharedURLSessionExpirationTime;
    _Bool _valid;
    _Bool _enabled;
    _Bool _hasCompletedBagFetch;
    _Bool _safeModeEnabled;
    _Bool _feedbackEnabled;
    NSArray *_supportedDomainIdentifiers;
    id <WBSParsecSearchClientStorage> _storage;
    unsigned long long _mode;
    NSNumber *_searchRenderTimeout;
    NSNumber *_otherRenderTimeout;
    CLLocation *_location;
    NSArray *_enabledDomains;
    NSString *_firstUseDescriptionText;
    NSString *_firstUseLearnMoreText;
    NSString *_geoUserSessionEntitySessionIDString;
    double _locationCachingInterval;
    NSArray *_subscriptionProviderDomainWhitelist;
    NSArray *_subscriptionProviderBundleIdentifierWhitelist;
    double _subscriptionTTL;
    NSURLSession *_urlSessionForSearchSessions;
    double _minimumIntervalBetweenQueriesFromBag;
    double _minimumIntervalBetweenQueriesFromSearchResponse;
    time_point_e708cccf _latestQueryTimestamp;
    NSURL *_searchURL;
    NSURL *_searchFallbackURL;
    NSArray *_optionalQueryItems;
    unsigned long long _minimumQueryLength;
    unsigned long long _maximumCachedResultsToSend;
    unsigned long long _maximumCachedQueriesToSend;
}

+ (id)sharedClient;
+ (id)applicationNameForUserAgent;
+ (Class)storageClass;
+ (id)_preferredLanguages;
+ (id)existingSharedClient;
@property(readonly, nonatomic) NSURLSessionConfiguration *urlSessionConfiguration; // @synthesize urlSessionConfiguration=_urlSessionConfiguration;
@property(readonly, nonatomic) _Bool feedbackEnabled; // @synthesize feedbackEnabled=_feedbackEnabled;
@property(readonly, nonatomic) unsigned long long maximumCachedQueriesToSend; // @synthesize maximumCachedQueriesToSend=_maximumCachedQueriesToSend;
@property(readonly, nonatomic) unsigned long long maximumCachedResultsToSend; // @synthesize maximumCachedResultsToSend=_maximumCachedResultsToSend;
@property(readonly, nonatomic) unsigned long long minimumQueryLength; // @synthesize minimumQueryLength=_minimumQueryLength;
@property(readonly, nonatomic) NSArray *optionalQueryItems; // @synthesize optionalQueryItems=_optionalQueryItems;
@property(readonly, nonatomic) NSURL *searchFallbackURL; // @synthesize searchFallbackURL=_searchFallbackURL;
@property(readonly, nonatomic) NSURL *searchURL; // @synthesize searchURL=_searchURL;
@property(nonatomic) time_point_e708cccf latestQueryTimestamp; // @synthesize latestQueryTimestamp=_latestQueryTimestamp;
@property(nonatomic) double minimumIntervalBetweenQueriesFromSearchResponse; // @synthesize minimumIntervalBetweenQueriesFromSearchResponse=_minimumIntervalBetweenQueriesFromSearchResponse;
@property(readonly, nonatomic) double minimumIntervalBetweenQueriesFromBag; // @synthesize minimumIntervalBetweenQueriesFromBag=_minimumIntervalBetweenQueriesFromBag;
@property(retain, nonatomic) NSURLSession *urlSessionForSearchSessions; // @synthesize urlSessionForSearchSessions=_urlSessionForSearchSessions;
@property(readonly, nonatomic) double subscriptionTTL; // @synthesize subscriptionTTL=_subscriptionTTL;
@property(readonly, nonatomic) NSArray *subscriptionProviderBundleIdentifierWhitelist; // @synthesize subscriptionProviderBundleIdentifierWhitelist=_subscriptionProviderBundleIdentifierWhitelist;
@property(readonly, nonatomic) NSArray *subscriptionProviderDomainWhitelist; // @synthesize subscriptionProviderDomainWhitelist=_subscriptionProviderDomainWhitelist;
@property(nonatomic) double locationCachingInterval; // @synthesize locationCachingInterval=_locationCachingInterval;
@property(readonly, nonatomic) NSString *geoUserSessionEntitySessionIDString; // @synthesize geoUserSessionEntitySessionIDString=_geoUserSessionEntitySessionIDString;
@property(readonly, nonatomic) NSString *firstUseLearnMoreText; // @synthesize firstUseLearnMoreText=_firstUseLearnMoreText;
@property(readonly, nonatomic) NSString *firstUseDescriptionText; // @synthesize firstUseDescriptionText=_firstUseDescriptionText;
@property(readonly, nonatomic) NSArray *enabledDomains; // @synthesize enabledDomains=_enabledDomains;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSNumber *otherRenderTimeout; // @synthesize otherRenderTimeout=_otherRenderTimeout;
@property(readonly, nonatomic) NSNumber *searchRenderTimeout; // @synthesize searchRenderTimeout=_searchRenderTimeout;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool safeModeEnabled; // @synthesize safeModeEnabled=_safeModeEnabled;
@property(readonly, nonatomic) id <WBSParsecSearchClientStorage> storage; // @synthesize storage=_storage;
@property(copy, nonatomic) NSArray *supportedDomainIdentifiers; // @synthesize supportedDomainIdentifiers=_supportedDomainIdentifiers;
@property(readonly, nonatomic) _Bool hasCompletedBagFetch; // @synthesize hasCompletedBagFetch=_hasCompletedBagFetch;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *test_feedbackQueue;
@property(nonatomic, getter=test_isValid, setter=test_setValid:) _Bool test_valid;
@property(nonatomic, getter=test_isEnabled, setter=test_setEnabled:) _Bool test_enabled;
@property(nonatomic, setter=test_setHasCompletedBagFetch:) _Bool test_hasCompletedBagFetch;
- (void)networkRequestDidFailWithError:(id)arg1 response:(id)arg2;
- (void)sessionDidReceiveForceFetchRequest:(id)arg1;
@property(readonly, nonatomic) NSArray *debuggingQueryItems;
- (void)_setDeviceIP:(id)arg1;
- (void)_requestDeviceIP;
- (void)_locationThread;
- (void)_performBlock:(CDUnknownBlockType)arg1;
- (void)_performBlockOnLocationThread:(CDUnknownBlockType)arg1 wait:(_Bool)arg2;
- (void)_performBlockOnLocationThreadAndWait:(CDUnknownBlockType)arg1;
- (void)_performBlockOnLocationThread:(CDUnknownBlockType)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (_Bool)_hasLocationServicesEffectiveBundleEntitlement;
- (void)_storeFrontIdentifierDidChange:(id)arg1;
- (void)_updateStoreFrontIdentifier;
- (void)updateRecentlyUsedAppIdentifiers;
- (id)_locationSourceForLocation:(id)arg1;
- (void)_updateOptionalQueryItems;
@property(readonly, nonatomic) NSURLQueryItem *secretKeyQueryItem;
- (id)_customFlightQueryItem;
- (id)_localeQueryItem;
- (void)_currentLocaleDidChange:(id)arg1;
- (void)_userGUIDExpirationTimerDidFire:(id)arg1;
- (void)_setUserGUID:(id)arg1 expirationDate:(id)arg2;
- (void)_updateUserGUIDExpirationTimerWithDate:(id)arg1;
- (void)_refreshGEOUserSession;
- (void)_fetchUserGUIDIfNeeded;
- (void)_generateSpriteImagesFromArray:(id)arg1;
- (void)_updateBagFetchInterval:(id)arg1;
- (void)_setUpLocationServicesWithBagInfo:(id)arg1;
- (void)_processBagFetchResponseData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)_fetchConfiguration;
- (void)sendGeneratedFeedback:(id)arg1;
- (id)locationSource;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)resetUserGUID;
- (id)imageForIdentifier:(id)arg1 withScale:(double)arg2;
- (void)updateURLSessionConfiguration;
- (void)invalidate;
- (void)reinitialize;
- (id)_initForTesting;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

