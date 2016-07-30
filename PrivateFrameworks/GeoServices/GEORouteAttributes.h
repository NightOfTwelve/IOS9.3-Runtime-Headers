//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAutomobileOptions, GEOTransitOptions, GEOWalkingOptions, NSString;

@interface GEORouteAttributes : PBCodable <NSCopying>
{
    CDStruct_95bda58d _additionalTransportTypes;
    CDStruct_4db06779 _timepoint;
    CDStruct_95bda58d _uiContexts;
    GEOAutomobileOptions *_automobileOptions;
    int _basicPointsToBeIncluded;
    int _mainTransportType;
    NSString *_phoneticLocaleIdentifier;
    int _trafficType;
    GEOTransitOptions *_transitOptions;
    unsigned int _walkingLimitMeters;
    GEOWalkingOptions *_walkingOptions;
    _Bool _includeContingencyRoutes;
    _Bool _includeHistoricTravelTime;
    _Bool _includeLaneGuidance;
    _Bool _includeManeuverIcons;
    _Bool _includePhonetics;
    _Bool _includeSubsteps;
    _Bool _includeTrafficAlongRoute;
    _Bool _includeTrafficIncidents;
    _Bool _includeZilchPoints;
    struct {
        unsigned int timepoint:1;
        unsigned int basicPointsToBeIncluded:1;
        unsigned int mainTransportType:1;
        unsigned int trafficType:1;
        unsigned int walkingLimitMeters:1;
        unsigned int includeContingencyRoutes:1;
        unsigned int includeHistoricTravelTime:1;
        unsigned int includeLaneGuidance:1;
        unsigned int includeManeuverIcons:1;
        unsigned int includePhonetics:1;
        unsigned int includeSubsteps:1;
        unsigned int includeTrafficAlongRoute:1;
        unsigned int includeTrafficIncidents:1;
        unsigned int includeZilchPoints:1;
    } _has;
}

+ (id)defaultRouteAttributes;
@property(retain, nonatomic) GEOWalkingOptions *walkingOptions; // @synthesize walkingOptions=_walkingOptions;
@property(retain, nonatomic) GEOTransitOptions *transitOptions; // @synthesize transitOptions=_transitOptions;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
@property(nonatomic) CDStruct_4db06779 timepoint; // @synthesize timepoint=_timepoint;
@property(retain, nonatomic) NSString *phoneticLocaleIdentifier; // @synthesize phoneticLocaleIdentifier=_phoneticLocaleIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setUiContexts:(int *)arg1 count:(unsigned long long)arg2;
- (int)uiContextAtIndex:(unsigned long long)arg1;
- (void)addUiContext:(int)arg1;
- (void)clearUiContexts;
@property(readonly, nonatomic) int *uiContexts;
@property(readonly, nonatomic) unsigned long long uiContextsCount;
@property(readonly, nonatomic) _Bool hasWalkingOptions;
@property(readonly, nonatomic) _Bool hasTransitOptions;
@property(readonly, nonatomic) _Bool hasAutomobileOptions;
- (void)setAdditionalTransportTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)additionalTransportTypeAtIndex:(unsigned long long)arg1;
- (void)addAdditionalTransportType:(int)arg1;
- (void)clearAdditionalTransportTypes;
@property(readonly, nonatomic) int *additionalTransportTypes;
@property(readonly, nonatomic) unsigned long long additionalTransportTypesCount;
@property(nonatomic) _Bool hasWalkingLimitMeters;
@property(nonatomic) unsigned int walkingLimitMeters; // @synthesize walkingLimitMeters=_walkingLimitMeters;
@property(nonatomic) _Bool hasIncludeTrafficIncidents;
@property(nonatomic) _Bool includeTrafficIncidents; // @synthesize includeTrafficIncidents=_includeTrafficIncidents;
@property(nonatomic) _Bool hasIncludeSubsteps;
@property(nonatomic) _Bool includeSubsteps; // @synthesize includeSubsteps=_includeSubsteps;
@property(nonatomic) _Bool hasIncludeHistoricTravelTime;
@property(nonatomic) _Bool includeHistoricTravelTime; // @synthesize includeHistoricTravelTime=_includeHistoricTravelTime;
@property(nonatomic) _Bool hasTimepoint;
@property(nonatomic) _Bool hasIncludeTrafficAlongRoute;
@property(nonatomic) _Bool includeTrafficAlongRoute; // @synthesize includeTrafficAlongRoute=_includeTrafficAlongRoute;
@property(readonly, nonatomic) _Bool hasPhoneticLocaleIdentifier;
@property(nonatomic) _Bool hasTrafficType;
@property(nonatomic) int trafficType; // @synthesize trafficType=_trafficType;
@property(nonatomic) _Bool hasBasicPointsToBeIncluded;
@property(nonatomic) int basicPointsToBeIncluded; // @synthesize basicPointsToBeIncluded=_basicPointsToBeIncluded;
@property(nonatomic) _Bool hasIncludeLaneGuidance;
@property(nonatomic) _Bool includeLaneGuidance; // @synthesize includeLaneGuidance=_includeLaneGuidance;
@property(nonatomic) _Bool hasIncludeContingencyRoutes;
@property(nonatomic) _Bool includeContingencyRoutes; // @synthesize includeContingencyRoutes=_includeContingencyRoutes;
@property(nonatomic) _Bool hasIncludeZilchPoints;
@property(nonatomic) _Bool includeZilchPoints; // @synthesize includeZilchPoints=_includeZilchPoints;
@property(nonatomic) _Bool hasIncludeManeuverIcons;
@property(nonatomic) _Bool includeManeuverIcons; // @synthesize includeManeuverIcons=_includeManeuverIcons;
@property(nonatomic) _Bool hasIncludePhonetics;
@property(nonatomic) _Bool includePhonetics; // @synthesize includePhonetics=_includePhonetics;
@property(nonatomic) _Bool hasMainTransportType;
@property(nonatomic) int mainTransportType; // @synthesize mainTransportType=_mainTransportType;
- (void)dealloc;

@end

