//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

@interface GEOTrafficRerouteFeedbackCollection : PBCodable <NSCopying>
{
    NSData *_directionResponseID;
    unsigned int _oldRouteHistoricTravelTime;
    NSData *_oldRouteID;
    NSMutableArray *_oldRouteIncidents;
    unsigned int _oldRouteTravelTime;
    unsigned int _reroutedRouteHistoricTravelTime;
    NSData *_reroutedRouteID;
    unsigned int _reroutedRouteTravelTime;
    _Bool _oldRouteBlocked;
    struct {
        unsigned int oldRouteHistoricTravelTime:1;
        unsigned int oldRouteTravelTime:1;
        unsigned int reroutedRouteHistoricTravelTime:1;
        unsigned int reroutedRouteTravelTime:1;
        unsigned int oldRouteBlocked:1;
    } _has;
}

@property(retain, nonatomic) NSData *reroutedRouteID; // @synthesize reroutedRouteID=_reroutedRouteID;
@property(retain, nonatomic) NSData *oldRouteID; // @synthesize oldRouteID=_oldRouteID;
@property(retain, nonatomic) NSData *directionResponseID; // @synthesize directionResponseID=_directionResponseID;
@property(retain, nonatomic) NSMutableArray *oldRouteIncidents; // @synthesize oldRouteIncidents=_oldRouteIncidents;
@property(nonatomic) _Bool oldRouteBlocked; // @synthesize oldRouteBlocked=_oldRouteBlocked;
@property(nonatomic) unsigned int reroutedRouteHistoricTravelTime; // @synthesize reroutedRouteHistoricTravelTime=_reroutedRouteHistoricTravelTime;
@property(nonatomic) unsigned int oldRouteHistoricTravelTime; // @synthesize oldRouteHistoricTravelTime=_oldRouteHistoricTravelTime;
@property(nonatomic) unsigned int reroutedRouteTravelTime; // @synthesize reroutedRouteTravelTime=_reroutedRouteTravelTime;
@property(nonatomic) unsigned int oldRouteTravelTime; // @synthesize oldRouteTravelTime=_oldRouteTravelTime;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasReroutedRouteID;
@property(readonly, nonatomic) _Bool hasOldRouteID;
@property(readonly, nonatomic) _Bool hasDirectionResponseID;
- (id)oldRouteIncidentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)oldRouteIncidentsCount;
- (void)addOldRouteIncidents:(id)arg1;
- (void)clearOldRouteIncidents;
@property(nonatomic) _Bool hasOldRouteBlocked;
@property(nonatomic) _Bool hasReroutedRouteHistoricTravelTime;
@property(nonatomic) _Bool hasOldRouteHistoricTravelTime;
@property(nonatomic) _Bool hasReroutedRouteTravelTime;
@property(nonatomic) _Bool hasOldRouteTravelTime;
- (void)dealloc;

@end

