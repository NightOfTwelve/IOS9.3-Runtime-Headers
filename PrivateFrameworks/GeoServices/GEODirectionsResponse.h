//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPBTransitRoutingIncidentMessage, GEORouteDisplayHints, GEOStyleAttributes, GEOTransitDecoderData, NSData, NSMutableArray, NSString;

@interface GEODirectionsResponse : PBCodable <NSCopying>
{
    CDStruct_95bda58d _supportedTransportTypes;
    CDStruct_4db06779 _timepointUsed;
    unsigned long long _debugLatencyMs;
    CDStruct_c55e649d *_problemDetails;
    unsigned long long _problemDetailsCount;
    unsigned long long _problemDetailsSpace;
    GEOTransitDecoderData *_decoderData;
    NSData *_directionsResponseID;
    GEORouteDisplayHints *_displayHints;
    NSData *_graphV3;
    NSMutableArray *_incidentsOffRoutes;
    NSMutableArray *_incidentsOnRoutes;
    int _instructionSignFillColor;
    int _localDistanceUnits;
    NSMutableArray *_placeSearchResponses;
    NSMutableArray *_routes;
    unsigned int _selectedRouteIndex;
    NSMutableArray *_serviceGaps;
    NSData *_sessionState;
    int _status;
    GEOStyleAttributes *_styleAttributes;
    NSMutableArray *_suggestedRoutes;
    NSString *_transitDataVersion;
    GEOPBTransitRoutingIncidentMessage *_transitIncidentMessage;
    _Bool _isNavigable;
    _Bool _routeDeviatesFromOriginal;
    struct {
        unsigned int timepointUsed:1;
        unsigned int debugLatencyMs:1;
        unsigned int instructionSignFillColor:1;
        unsigned int localDistanceUnits:1;
        unsigned int selectedRouteIndex:1;
        unsigned int isNavigable:1;
        unsigned int routeDeviatesFromOriginal:1;
    } _has;
}

@property(retain, nonatomic) NSData *sessionState; // @synthesize sessionState=_sessionState;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(retain, nonatomic) GEORouteDisplayHints *displayHints; // @synthesize displayHints=_displayHints;
@property(retain, nonatomic) GEOPBTransitRoutingIncidentMessage *transitIncidentMessage; // @synthesize transitIncidentMessage=_transitIncidentMessage;
@property(retain, nonatomic) NSMutableArray *serviceGaps; // @synthesize serviceGaps=_serviceGaps;
@property(retain, nonatomic) NSString *transitDataVersion; // @synthesize transitDataVersion=_transitDataVersion;
@property(retain, nonatomic) NSData *graphV3; // @synthesize graphV3=_graphV3;
@property(retain, nonatomic) GEOTransitDecoderData *decoderData; // @synthesize decoderData=_decoderData;
@property(nonatomic) CDStruct_4db06779 timepointUsed; // @synthesize timepointUsed=_timepointUsed;
@property(retain, nonatomic) NSMutableArray *suggestedRoutes; // @synthesize suggestedRoutes=_suggestedRoutes;
@property(nonatomic) unsigned int selectedRouteIndex; // @synthesize selectedRouteIndex=_selectedRouteIndex;
@property(retain, nonatomic) NSMutableArray *incidentsOffRoutes; // @synthesize incidentsOffRoutes=_incidentsOffRoutes;
@property(retain, nonatomic) NSMutableArray *incidentsOnRoutes; // @synthesize incidentsOnRoutes=_incidentsOnRoutes;
@property(retain, nonatomic) NSData *directionsResponseID; // @synthesize directionsResponseID=_directionsResponseID;
@property(retain, nonatomic) NSMutableArray *placeSearchResponses; // @synthesize placeSearchResponses=_placeSearchResponses;
@property(retain, nonatomic) NSMutableArray *routes; // @synthesize routes=_routes;
@property(nonatomic) int status; // @synthesize status=_status;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSessionState;
@property(readonly, nonatomic) _Bool hasStyleAttributes;
@property(readonly, nonatomic) _Bool hasDisplayHints;
@property(readonly, nonatomic) _Bool hasTransitIncidentMessage;
- (id)serviceGapAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceGapsCount;
- (void)addServiceGap:(id)arg1;
- (void)clearServiceGaps;
@property(readonly, nonatomic) _Bool hasTransitDataVersion;
@property(readonly, nonatomic) _Bool hasGraphV3;
@property(readonly, nonatomic) _Bool hasDecoderData;
@property(nonatomic) _Bool hasTimepointUsed;
- (id)suggestedRouteAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestedRoutesCount;
- (void)addSuggestedRoute:(id)arg1;
- (void)clearSuggestedRoutes;
@property(nonatomic) _Bool hasSelectedRouteIndex;
- (void)setSupportedTransportTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)supportedTransportTypeAtIndex:(unsigned long long)arg1;
- (void)addSupportedTransportType:(int)arg1;
- (void)clearSupportedTransportTypes;
@property(readonly, nonatomic) int *supportedTransportTypes;
@property(readonly, nonatomic) unsigned long long supportedTransportTypesCount;
- (void)setProblemDetails:(CDStruct_c55e649d *)arg1 count:(unsigned long long)arg2;
- (CDStruct_c55e649d)problemDetailAtIndex:(unsigned long long)arg1;
- (void)addProblemDetail:(CDStruct_c55e649d)arg1;
- (void)clearProblemDetails;
@property(readonly, nonatomic) CDStruct_c55e649d *problemDetails;
@property(readonly, nonatomic) unsigned long long problemDetailsCount;
- (id)incidentsOffRoutesAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsOffRoutesCount;
- (void)addIncidentsOffRoutes:(id)arg1;
- (void)clearIncidentsOffRoutes;
- (id)incidentsOnRoutesAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsOnRoutesCount;
- (void)addIncidentsOnRoutes:(id)arg1;
- (void)clearIncidentsOnRoutes;
@property(nonatomic) _Bool hasInstructionSignFillColor;
@property(nonatomic) int instructionSignFillColor; // @synthesize instructionSignFillColor=_instructionSignFillColor;
@property(nonatomic) _Bool hasIsNavigable;
@property(nonatomic) _Bool isNavigable; // @synthesize isNavigable=_isNavigable;
@property(readonly, nonatomic) _Bool hasDirectionsResponseID;
@property(nonatomic) _Bool hasRouteDeviatesFromOriginal;
@property(nonatomic) _Bool routeDeviatesFromOriginal; // @synthesize routeDeviatesFromOriginal=_routeDeviatesFromOriginal;
@property(nonatomic) _Bool hasLocalDistanceUnits;
@property(nonatomic) int localDistanceUnits; // @synthesize localDistanceUnits=_localDistanceUnits;
- (id)placeSearchResponseAtIndex:(unsigned long long)arg1;
- (unsigned long long)placeSearchResponsesCount;
- (void)addPlaceSearchResponse:(id)arg1;
- (void)clearPlaceSearchResponses;
- (id)routeAtIndex:(unsigned long long)arg1;
- (unsigned long long)routesCount;
- (void)addRoute:(id)arg1;
- (void)clearRoutes;
- (void)dealloc;
@property(nonatomic) _Bool hasDebugLatencyMs;
@property(nonatomic) unsigned long long debugLatencyMs;

@end

