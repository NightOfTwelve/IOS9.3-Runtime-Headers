//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOETAUpdaterDelegate-Protocol.h>
#import <GeoServices/GEORouteHypothesizerUpdaterDelegate-Protocol.h>
#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOComposedRoute, GEOComposedWaypoint, GEODirectionsRequestFeedback, GEOETARoute, GEOETAUpdater, GEOLocation, GEOMapServiceTraits, GEORoute, GEORouteAttributes, GEORouteHypothesis, GEORouteHypothesizerAnalyticsStore, GEORouteHypothesizerUpdater, NSData, NSDate, NSString;

@interface GEORouteHypothesisMonitor : NSObject <GEORouteHypothesizerUpdaterDelegate, GEOETAUpdaterDelegate, NSSecureCoding>
{
    CDUnknownBlockType _handler;
    CDUnknownBlockType _errorHandler;
    GEODirectionsRequestFeedback *_feedback;
    GEOComposedWaypoint *_source;
    GEOComposedWaypoint *_destination;
    int _transportType;
    NSDate *_departureDate;
    NSDate *_arrivalDate;
    GEORouteHypothesis *_hypothesis;
    GEOLocation *_lastLocation;
    GEOETAUpdater *_etaUpdater;
    GEOETARoute *_liveETARoute;
    GEOETARoute *_baselineETARoute;
    GEORouteAttributes *_routeAttributes;
    GEORouteHypothesizerUpdater *_updater;
    GEORoute *_existingRoute;
    NSData *_usualRouteData;
    GEOMapServiceTraits *_traits;
    GEORouteHypothesizerAnalyticsStore *_analyticsStore;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSDate *arrivalDate; // @synthesize arrivalDate=_arrivalDate;
@property(readonly, nonatomic) NSDate *departureDate; // @synthesize departureDate=_departureDate;
@property(readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) GEOComposedWaypoint *source; // @synthesize source=_source;
@property(retain, nonatomic) GEODirectionsRequestFeedback *feedback; // @synthesize feedback=_feedback;
- (void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4;
- (void)etaUpdaterUpdatedETA:(id)arg1;
- (void)etaUpdater:(id)arg1 receivedError:(id)arg2;
- (void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2;
- (void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2;
- (id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1;
- (void)routeHypothesizerUpdater:(id)arg1 faultedWithError:(id)arg2;
- (void)routeHypothesizerUpdaterDidArrive:(id)arg1;
- (void)routeHypothesizerUpdater:(id)arg1 didChangeTravelState:(_Bool)arg2;
- (void)routeHypothesizerUpdater:(id)arg1 receivedNewRoute:(id)arg2 request:(id)arg3 response:(id)arg4;
- (void)routeHypothesizerUpdater:(id)arg1 willRequestNewRoute:(id)arg2;
- (void)clientDisplayedUINotification:(unsigned long long)arg1;
- (void)stopMonitoring;
- (void)recordETAUpdatesAfterEventStart;
- (void)_refreshETAWithRouteMatch:(id)arg1;
- (void)_createUpdaterWithStartingLocation:(id)arg1;
- (void)_updateETAWithRouteMatch:(id)arg1;
- (void)_updateLocation:(id)arg1 hypothesisHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)updateLocation:(id)arg1 hypothesisHandler:(CDUnknownBlockType)arg2;
- (void)updateLocation:(id)arg1 hypothesisHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) GEOComposedRoute *route;
@property(readonly, nonatomic) _Bool supportsDirections;
@property(readonly, nonatomic) _Bool supportsLiveTraffic;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)_commonInit;
- (void)_createRouteAttributes;
- (void)_finishEtaUpdaterInit;
- (void)_createFeedback;
- (id)initWithExistingRoute:(id)arg1 source:(id)arg2 destination:(id)arg3 etaUpdater:(id)arg4 traits:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 transportType:(int)arg3 arrivalDate:(id)arg4 usualRouteData:(id)arg5 traits:(id)arg6;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 transportType:(int)arg3 departureDate:(id)arg4 usualRouteData:(id)arg5 traits:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

