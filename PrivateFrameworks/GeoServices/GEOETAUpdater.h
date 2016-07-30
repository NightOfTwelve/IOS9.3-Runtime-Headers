//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOComposedRoute, GEOComposedWaypoint, GEOETATrafficUpdateRequest, GEOLocation, GEORouteAttributes, GEORouteMatch, GEORouteSummaryAttributes, NSData, NSTimer;
@protocol GEOETAUpdaterDelegate;

@interface GEOETAUpdater : NSObject
{
    id <GEOETAUpdaterDelegate> _delegate;
    GEOETATrafficUpdateRequest *_currentETARequest;
    GEOLocation *_userLocation;
    GEORouteMatch *_routeMatch;
    GEOComposedRoute *_route;
    GEOComposedWaypoint *_destination;
    GEORouteAttributes *_routeAttributes;
    long long _etaState;
    _Bool _allowRequests;
    _Bool _shouldUseConditionalRequest;
    _Bool _shouldUpdateTrafficOnRoute;
    double _requestInterval;
    NSTimer *_etaIdleTimer;
    double _lastETARequestTime;
    double _debugTimeWindowDuration;
    NSData *_directionsResponseID;
    GEORouteSummaryAttributes *_routeSummaryAttributes;
}

@property(nonatomic) double debugTimeWindowDuration; // @synthesize debugTimeWindowDuration=_debugTimeWindowDuration;
@property(nonatomic) double requestInterval; // @synthesize requestInterval=_requestInterval;
@property(nonatomic) _Bool shouldUpdateTrafficOnRoute; // @synthesize shouldUpdateTrafficOnRoute=_shouldUpdateTrafficOnRoute;
@property(nonatomic) _Bool shouldUseConditionalRequest; // @synthesize shouldUseConditionalRequest=_shouldUseConditionalRequest;
@property(nonatomic) _Bool allowRequests; // @synthesize allowRequests=_allowRequests;
@property(retain, nonatomic) NSData *directionsResponseID; // @synthesize directionsResponseID=_directionsResponseID;
@property(retain, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
@property(retain, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) GEOLocation *userLocation; // @synthesize userLocation=_userLocation;
@property(retain, nonatomic) GEORouteMatch *routeMatch; // @synthesize routeMatch=_routeMatch;
@property(retain, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property(nonatomic) id <GEOETAUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_updateRouteWithETATrafficUpdateResponse:(id)arg1;
- (_Bool)updateRouteWithETATrafficUpdateResponse:(id)arg1 step:(id)arg2 percentOfStepRemaining:(double)arg3;
- (id)routesForETAUpdateRequest;
- (double)percentageOfCurrentStepRemaining;
- (id)currentStep;
- (_Bool)_shouldStartConditionalETARequest;
- (void)_continueUpdateRequests;
- (double)_calculateNextTransitionTime;
- (_Bool)_sendETARequest:(id)arg1 isUpdate:(_Bool)arg2;
- (void)_fakeResponseForWalkingWithETAUpdateRequest:(id)arg1 currentStep:(id)arg2 percentOfCurrentStepRemaining:(double)arg3;
- (_Bool)_updateETAResponse:(id)arg1 withRemainingDistanceFromRequest:(id)arg2;
- (void)_startConditionalConnectionETARequest;
- (void)_startStateWaitingForBestTimeStart:(id)arg1;
- (void)_createETARequest;
- (void)_updateCurrentETARequest;
- (void)stopUpdateRequests;
- (void)startUpdateRequests;
- (void)cancelRequest;
- (void)requestUpdate;
- (void)_clearCurrentETARequest;
- (void)_clearTimer;
- (void)reset;
- (void)dealloc;
- (id)initWithRoute:(id)arg1 destination:(id)arg2 routeAttributes:(id)arg3;
- (id)init;

@end

