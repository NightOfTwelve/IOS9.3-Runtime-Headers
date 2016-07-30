//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUAirPlayRouteObserverRegistryDelegate-Protocol.h>
#import <PhotosUI/PUAirPlayScreenReceiver-Protocol.h>

@class NSDate, NSString, PUAirPlayContentRegistry, PUAirPlayRootViewController, PUAirPlayRouteObserverRegistry, PUAirPlayScreen, PUAirPlayScreenDetector, UIViewController;

@interface PHAirPlayScreenController : NSObject <PUAirPlayScreenReceiver, PUAirPlayRouteObserverRegistryDelegate>
{
    PUAirPlayScreen *__currentScreen;
    PUAirPlayScreenDetector *__screenDetector;
    PUAirPlayRootViewController *__rootViewController;
    PUAirPlayContentRegistry *__contentRegistry;
    PUAirPlayRouteObserverRegistry *__routeObserverRegistry;
    UIViewController *__lastDisplayedContent;
    NSDate *__lastScreenConnectDate;
    NSDate *__lastScreenRequestDate;
    long long __lastScreenRequestOrigin;
}

+ (struct __CFString *)_keyForScreenRequestOrigin:(long long)arg1;
+ (id)sharedInstance;
@property(nonatomic, setter=_setLastScreenRequestOrigin:) long long _lastScreenRequestOrigin; // @synthesize _lastScreenRequestOrigin=__lastScreenRequestOrigin;
@property(retain, nonatomic, setter=_setLastScreenRequestDate:) NSDate *_lastScreenRequestDate; // @synthesize _lastScreenRequestDate=__lastScreenRequestDate;
@property(retain, nonatomic, setter=_setLastScreenConnectDate:) NSDate *_lastScreenConnectDate; // @synthesize _lastScreenConnectDate=__lastScreenConnectDate;
@property(retain, nonatomic, setter=_setLastDisplayedContent:) UIViewController *_lastDisplayedContent; // @synthesize _lastDisplayedContent=__lastDisplayedContent;
@property(retain, nonatomic, setter=_setRouteObserverRegistry:) PUAirPlayRouteObserverRegistry *_routeObserverRegistry; // @synthesize _routeObserverRegistry=__routeObserverRegistry;
@property(retain, nonatomic, setter=_setContentRegistry:) PUAirPlayContentRegistry *_contentRegistry; // @synthesize _contentRegistry=__contentRegistry;
@property(retain, nonatomic, setter=_setRootViewController:) PUAirPlayRootViewController *_rootViewController; // @synthesize _rootViewController=__rootViewController;
@property(retain, nonatomic, setter=_setScreenDetector:) PUAirPlayScreenDetector *_screenDetector; // @synthesize _screenDetector=__screenDetector;
@property(retain, nonatomic, setter=_setCurrentScreen:) PUAirPlayScreen *_currentScreen; // @synthesize _currentScreen=__currentScreen;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (id)_screenAvailabilityName;
- (void)_recordSessionEnded;
- (void)_recordSessionBeganWithScreen:(id)arg1;
- (void)_notifyWillRequestAirPlayScreenFromSource:(long long)arg1;
- (void)notifyDidPresentAirPlayRoutesFromSlideshow;
- (void)notifyDidPresentAirPlayRoutesFromShareSheet;
- (void)screenDetector:(id)arg1 didLoseScreen:(id)arg2;
- (void)screenDetector:(id)arg1 didDetectScreen:(id)arg2;
@property(readonly, nonatomic) unsigned long long routeAvailability;
- (void)airPlayRouteObserverRegistryRouteAvailabilityChanged:(id)arg1 forRouteObserver:(id)arg2;
- (void)unregisterRouteObserver:(id)arg1;
- (void)registerRouteObserver:(id)arg1;
- (void)unregisterContentProvider:(id)arg1;
- (void)registerContentProvider:(id)arg1;
- (id)_findAvailableScreen;
- (void)_updateScreenContentAnimated:(_Bool)arg1;
- (void)_cacheDisplayedContentIfNeededForUnregisteringProvider:(id)arg1;
- (id)_currentContent;
@property(readonly, nonatomic, getter=isDisplayingContent) _Bool displayingContent;
@property(readonly, nonatomic) unsigned long long screenAvailability;
- (id)init;
- (_Bool)pu_hasAvailableRoute;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

