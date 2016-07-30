//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/NSCoding-Protocol.h>

@class NSString, NSURL;

@interface WebPreferences : NSObject <NSCoding>
{
    struct WebPreferencesPrivate *_private;
}

+ (void)initialize;
+ (id)standardPreferences;
+ (void)setWebKitLinkTimeVersion:(int)arg1;
+ (void)_setCurrentNetworkLoaderSessionCookieAcceptPolicy:(unsigned long long)arg1;
+ (void)_clearNetworkLoaderSession;
+ (void)_switchNetworkLoaderToNewTestingSession;
+ (void)_setIBCreatorID:(id)arg1;
+ (void)_setInitialDefaultTextEncodingToSystemEncoding;
+ (unsigned int)_systemCFStringEncoding;
+ (void)_removeReferenceForIdentifier:(id)arg1;
+ (void)_checkLastReferenceForIdentifier:(id)arg1;
+ (void)_setInstance:(id)arg1 forIdentifier:(id)arg2;
+ (id)_getInstanceForIdentifier:(id)arg1;
+ (id)_concatenateKeyWithIBCreatorID:(id)arg1;
+ (id)_IBCreatorID;
@property(nonatomic) _Bool allowsAirPlayForMediaPlayback;
@property(nonatomic) _Bool suppressesIncrementalRendering;
@property(nonatomic) unsigned long long cacheModel;
- (void)_postCacheModelChangedNotification;
@property(nonatomic) _Bool usesPageCache;
- (void)_updatePrivateBrowsingStateTo:(_Bool)arg1;
@property(nonatomic) _Bool privateBrowsingEnabled;
@property(nonatomic) _Bool autosaves;
@property(nonatomic) _Bool loadsImagesAutomatically;
@property(nonatomic) _Bool allowsAnimatedImageLooping;
@property(nonatomic) _Bool allowsAnimatedImages;
@property(nonatomic, getter=arePlugInsEnabled) _Bool plugInsEnabled;
@property(nonatomic) _Bool javaScriptCanOpenWindowsAutomatically;
@property(nonatomic, getter=isJavaScriptEnabled) _Bool javaScriptEnabled;
@property(nonatomic, getter=isJavaEnabled) _Bool javaEnabled;
@property(retain, nonatomic) NSURL *userStyleSheetLocation;
@property(nonatomic) _Bool userStyleSheetEnabled;
@property(copy, nonatomic) NSString *defaultTextEncodingName;
@property(nonatomic) int minimumLogicalFontSize;
@property(nonatomic) int minimumFontSize;
@property(nonatomic) int defaultFixedFontSize;
@property(nonatomic) int defaultFontSize;
@property(copy, nonatomic) NSString *fantasyFontFamily;
@property(copy, nonatomic) NSString *cursiveFontFamily;
@property(copy, nonatomic) NSString *sansSerifFontFamily;
@property(copy, nonatomic) NSString *serifFontFamily;
@property(copy, nonatomic) NSString *fixedFontFamily;
@property(copy, nonatomic) NSString *standardFontFamily;
- (void)_setUnsignedLongLongValue:(unsigned long long)arg1 forKey:(id)arg2;
- (unsigned long long)_unsignedLongLongValueForKey:(id)arg1;
- (void)_setLongLongValue:(long long)arg1 forKey:(id)arg2;
- (long long)_longLongValueForKey:(id)arg1;
- (void)_setBoolValue:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)_boolValueForKey:(id)arg1;
- (void)_setFloatValue:(float)arg1 forKey:(id)arg2;
- (float)_floatValueForKey:(id)arg1;
- (void)_setUnsignedIntValue:(unsigned int)arg1 forKey:(id)arg2;
- (unsigned int)_unsignedIntValueForKey:(id)arg1;
- (void)_setIntegerValue:(int)arg1 forKey:(id)arg2;
- (int)_integerValueForKey:(id)arg1;
- (void)_setStringValue:(id)arg1 forKey:(id)arg2;
- (id)_stringValueForKey:(id)arg1;
- (id)_valueForKey:(id)arg1;
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 sendChangeNotification:(_Bool)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)init;
@property(nonatomic) _Bool javaScriptMarkupEnabled;
- (_Bool)httpEquivEnabled;
- (void)setHTTPEquivEnabled:(_Bool)arg1;
- (_Bool)metaRefreshEnabled;
- (void)setMetaRefreshEnabled:(_Bool)arg1;
- (_Bool)antialiasedFontDilationEnabled;
- (void)setAntialiasedFontDilationEnabled:(_Bool)arg1;
- (void)setMediaKeysStorageDirectory:(id)arg1;
- (id)mediaKeysStorageDirectory;
- (void)setShouldConvertPositionStyleOnCopy:(_Bool)arg1;
- (_Bool)shouldConvertPositionStyleOnCopy;
- (void)setGamepadsEnabled:(_Bool)arg1;
- (_Bool)gamepadsEnabled;
- (void)setServiceControlsEnabled:(_Bool)arg1;
- (_Bool)serviceControlsEnabled;
- (void)setImageControlsEnabled:(_Bool)arg1;
- (_Bool)imageControlsEnabled;
- (void)setMediaSourceEnabled:(_Bool)arg1;
- (_Bool)mediaSourceEnabled;
- (void)setUseLegacyTextAlignPositionedElementBehavior:(_Bool)arg1;
- (_Bool)useLegacyTextAlignPositionedElementBehavior;
- (void)setLowPowerVideoAudioBufferSizeEnabled:(_Bool)arg1;
- (_Bool)lowPowerVideoAudioBufferSizeEnabled;
- (void)setHiddenPageCSSAnimationSuspensionEnabled:(_Bool)arg1;
- (_Bool)hiddenPageCSSAnimationSuspensionEnabled;
- (void)setHiddenPageDOMTimerThrottlingEnabled:(_Bool)arg1;
- (_Bool)hiddenPageDOMTimerThrottlingEnabled;
- (void)setPlugInSnapshottingEnabled:(_Bool)arg1;
- (_Bool)plugInSnapshottingEnabled;
- (int)storageBlockingPolicy;
- (void)setStorageBlockingPolicy:(int)arg1;
- (void)setDiagnosticLoggingEnabled:(_Bool)arg1;
- (_Bool)diagnosticLoggingEnabled;
- (double)incrementalRenderingSuppressionTimeoutInSeconds;
- (void)setIncrementalRenderingSuppressionTimeoutInSeconds:(double)arg1;
- (void)setRequestAnimationFrameEnabled:(_Bool)arg1;
- (_Bool)requestAnimationFrameEnabled;
- (_Bool)shouldRespectImageOrientation;
- (void)setShouldRespectImageOrientation:(_Bool)arg1;
- (_Bool)notificationsEnabled;
- (void)setNotificationsEnabled:(_Bool)arg1;
- (_Bool)shouldDisplayTextDescriptions;
- (void)setShouldDisplayTextDescriptions:(_Bool)arg1;
- (_Bool)shouldDisplayCaptions;
- (void)setShouldDisplayCaptions:(_Bool)arg1;
- (_Bool)shouldDisplaySubtitles;
- (void)setShouldDisplaySubtitles:(_Bool)arg1;
- (_Bool)wantsBalancedSetDefersLoadingBehavior;
- (void)setWantsBalancedSetDefersLoadingBehavior:(_Bool)arg1;
- (_Bool)backspaceKeyNavigationEnabled;
- (void)setBackspaceKeyNavigationEnabled:(_Bool)arg1;
- (void)_synchronizeWebStoragePolicyWithCookiePolicy;
- (void)_invalidateCachedPreferences;
- (void)setPageCacheSupportsPlugins:(_Bool)arg1;
- (_Bool)pageCacheSupportsPlugins;
- (void)setPictographFontFamily:(id)arg1;
- (id)pictographFontFamily;
- (void)setMockScrollbarsEnabled:(_Bool)arg1;
- (_Bool)mockScrollbarsEnabled;
- (void)setAllowsPictureInPictureMediaPlayback:(_Bool)arg1;
- (_Bool)allowsPictureInPictureMediaPlayback;
- (void)setAllowsAlternateFullscreen:(_Bool)arg1;
- (_Bool)allowsAlternateFullscreen;
- (void)setMediaControlsScaleWithPageZoom:(_Bool)arg1;
- (_Bool)mediaControlsScaleWithPageZoom;
- (void)setMediaPlaybackAllowsInline:(_Bool)arg1;
- (_Bool)mediaPlaybackAllowsInline;
- (void)setMediaPlaybackRequiresUserGesture:(_Bool)arg1;
- (_Bool)mediaPlaybackRequiresUserGesture;
- (void)setNetworkInterfaceName:(id)arg1;
- (id)networkInterfaceName;
- (void)setNetworkDataUsageTrackingEnabled:(_Bool)arg1;
- (_Bool)networkDataUsageTrackingEnabled;
- (void)setAVKitEnabled:(_Bool)arg1;
- (_Bool)avKitEnabled;
- (void)setAudioSessionCategoryOverride:(unsigned int)arg1;
- (unsigned int)audioSessionCategoryOverride;
- (void)setMediaPlaybackAllowsAirPlay:(_Bool)arg1;
- (_Bool)mediaPlaybackAllowsAirPlay;
- (void)setEnableInheritURIQueryComponent:(_Bool)arg1;
- (_Bool)isInheritURIQueryComponentEnabled;
- (_Bool)isHixie76WebSocketProtocolEnabled;
- (void)setHixie76WebSocketProtocolEnabled:(_Bool)arg1;
- (_Bool)isVideoPluginProxyEnabled;
- (void)setVideoPluginProxyEnabled:(_Bool)arg1;
- (_Bool)isQTKitEnabled;
- (void)setQTKitEnabled:(_Bool)arg1;
- (_Bool)isAVFoundationEnabled;
- (void)setAVFoundationEnabled:(_Bool)arg1;
- (_Bool)loadsSiteIconsIgnoringImageLoadingPreference;
- (void)setLoadsSiteIconsIgnoringImageLoadingPreference:(_Bool)arg1;
- (_Bool)asynchronousSpellCheckingEnabled;
- (void)setAsynchronousSpellCheckingEnabled:(_Bool)arg1;
- (_Bool)fullScreenEnabled;
- (void)setFullScreenEnabled:(_Bool)arg1;
- (void)_setPreferenceForTestWithValue:(id)arg1 forKey:(id)arg2;
- (void)willAddToWebView;
- (void)didRemoveFromWebView;
- (void)setUsePreHTML5ParserQuirks:(_Bool)arg1;
- (_Bool)usePreHTML5ParserQuirks;
- (void)setHyperlinkAuditingEnabled:(_Bool)arg1;
- (_Bool)hyperlinkAuditingEnabled;
- (void)setPaginateDuringLayoutEnabled:(_Bool)arg1;
- (_Bool)paginateDuringLayoutEnabled;
- (void)setSpatialNavigationEnabled:(_Bool)arg1;
- (_Bool)isSpatialNavigationEnabled;
- (void)setFrameFlatteningEnabled:(_Bool)arg1;
- (_Bool)isFrameFlatteningEnabled;
- (void)setDiskImageCacheEnabled:(_Bool)arg1;
- (void)setAccelerated2dCanvasEnabled:(_Bool)arg1;
- (_Bool)accelerated2dCanvasEnabled;
- (void)setForceSoftwareWebGLRendering:(_Bool)arg1;
- (_Bool)forceSoftwareWebGLRendering;
- (void)setWebGLEnabled:(_Bool)arg1;
- (_Bool)webGLEnabled;
- (void)setSubpixelCSSOMElementMetricsEnabled:(_Bool)arg1;
- (_Bool)subpixelCSSOMElementMetricsEnabled;
- (void)setWebAudioEnabled:(_Bool)arg1;
- (_Bool)webAudioEnabled;
- (void)setShowRepaintCounter:(_Bool)arg1;
- (_Bool)showRepaintCounter;
- (void)setSimpleLineLayoutDebugBordersEnabled:(_Bool)arg1;
- (_Bool)simpleLineLayoutDebugBordersEnabled;
- (void)setShowDebugBorders:(_Bool)arg1;
- (_Bool)showDebugBorders;
- (void)setCSSCompositingEnabled:(_Bool)arg1;
- (_Bool)cssCompositingEnabled;
- (void)setCSSRegionsEnabled:(_Bool)arg1;
- (_Bool)cssRegionsEnabled;
- (void)setAcceleratedCompositingEnabled:(_Bool)arg1;
- (_Bool)acceleratedCompositingEnabled;
- (void)setCanvasUsesAcceleratedDrawing:(_Bool)arg1;
- (_Bool)canvasUsesAcceleratedDrawing;
- (void)setAcceleratedDrawingEnabled:(_Bool)arg1;
- (_Bool)acceleratedDrawingEnabled;
- (void)_setForceFTPDirectoryListings:(_Bool)arg1;
- (_Bool)_forceFTPDirectoryListings;
- (void)_setFTPDirectoryTemplatePath:(id)arg1;
- (id)_ftpDirectoryTemplatePath;
- (void)_setLocalStorageDatabasePath:(id)arg1;
- (id)_localStorageDatabasePath;
- (void)setDOMPasteAllowed:(_Bool)arg1;
- (_Bool)isDOMPasteAllowed;
- (void)_postPreferencesChangedAPINotification;
- (void)_postPreferencesChangedNotification;
- (void)setExperimentalNotificationsEnabled:(_Bool)arg1;
- (_Bool)experimentalNotificationsEnabled;
- (void)setLocalStorageEnabled:(_Bool)arg1;
- (_Bool)localStorageEnabled;
- (void)setStorageTrackerEnabled:(_Bool)arg1;
- (_Bool)storageTrackerEnabled;
- (void)setDatabasesEnabled:(_Bool)arg1;
- (_Bool)databasesEnabled;
- (void)_setUseSiteSpecificSpoofing:(_Bool)arg1;
- (_Bool)_useSiteSpecificSpoofing;
- (void)setTextDirectionSubmenuInclusionBehavior:(int)arg1;
- (int)textDirectionSubmenuInclusionBehavior;
- (void)setEditableLinkBehavior:(int)arg1;
- (int)editableLinkBehavior;
- (void)setApplicationCacheDefaultOriginQuota:(long long)arg1;
- (long long)applicationCacheDefaultOriginQuota;
- (void)setApplicationCacheTotalQuota:(long long)arg1;
- (long long)applicationCacheTotalQuota;
- (float)_passwordEchoDuration;
- (_Bool)_allowPasswordEcho;
- (int)_interpolationQuality;
- (void)_setInterpolationQuality:(int)arg1;
- (_Bool)_alwaysUseAcceleratedOverflowScroll;
- (void)_setAlwaysUseAcceleratedOverflowScroll:(_Bool)arg1;
- (_Bool)_alwaysRequestGeolocationPermission;
- (void)_setAlwaysRequestGeolocationPermission:(_Bool)arg1;
- (_Bool)_allowMultiElementImplicitFormSubmission;
- (void)_setAllowMultiElementImplicitFormSubmission:(_Bool)arg1;
- (float)_maxParseDuration;
- (void)_setMaxParseDuration:(float)arg1;
- (int)_layoutInterval;
- (void)_setLayoutInterval:(int)arg1;
- (float)_minimumZoomFontSize;
- (void)_setMinimumZoomFontSize:(float)arg1;
- (_Bool)_telephoneNumberParsingEnabled;
- (void)_setTelephoneNumberParsingEnabled:(_Bool)arg1;
- (void)_setStandalone:(_Bool)arg1;
- (_Bool)_standalone;
- (double)_backForwardCacheExpirationInterval;
- (void)setAllowFileAccessFromFileURLs:(_Bool)arg1;
- (_Bool)allowFileAccessFromFileURLs;
- (void)setAllowUniversalAccessFromFileURLs:(_Bool)arg1;
- (_Bool)allowUniversalAccessFromFileURLs;
- (void)setWebSecurityEnabled:(_Bool)arg1;
- (_Bool)isWebSecurityEnabled;
- (void)setUsesEncodingDetector:(_Bool)arg1;
- (_Bool)usesEncodingDetector;
- (void)setAutomaticallyDetectsCacheModel:(_Bool)arg1;
- (_Bool)automaticallyDetectsCacheModel;
- (void)setShrinksStandaloneImagesToFit:(_Bool)arg1;
- (_Bool)shrinksStandaloneImagesToFit;
- (void)setXSSAuditorEnabled:(_Bool)arg1;
- (_Bool)isXSSAuditorEnabled;
- (void)setJavaScriptCanAccessClipboard:(_Bool)arg1;
- (_Bool)javaScriptCanAccessClipboard;
- (void)setZoomsTextOnly:(_Bool)arg1;
- (_Bool)zoomsTextOnly;
- (void)setOfflineWebApplicationCacheEnabled:(_Bool)arg1;
- (_Bool)offlineWebApplicationCacheEnabled;
- (void)setLocalFileContentSniffingEnabled:(_Bool)arg1;
- (_Bool)localFileContentSniffingEnabled;
- (void)setWebArchiveDebugModeEnabled:(_Bool)arg1;
- (_Bool)webArchiveDebugModeEnabled;
- (void)setDOMTimersThrottlingEnabled:(_Bool)arg1;
- (_Bool)domTimersThrottlingEnabled;
- (void)setApplicationChromeModeEnabled:(_Bool)arg1;
- (_Bool)applicationChromeModeEnabled;
- (void)setAuthorAndUserStylesEnabled:(_Bool)arg1;
- (_Bool)authorAndUserStylesEnabled;
- (void)setDeveloperExtrasEnabled:(_Bool)arg1;
- (void)setJavaScriptRuntimeFlags:(int)arg1;
- (int)javaScriptRuntimeFlags;
- (_Bool)developerExtrasEnabled;
- (void)setDNSPrefetchingEnabled:(_Bool)arg1;
- (_Bool)isDNSPrefetchingEnabled;

@end
