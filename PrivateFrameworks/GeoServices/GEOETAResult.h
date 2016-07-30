//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPlaceSearchResponse, NSMutableArray;

@interface GEOETAResult : PBCodable <NSCopying>
{
    unsigned int _distance;
    unsigned int _historicTravelTime;
    unsigned int _liveTravelTime;
    GEOPlaceSearchResponse *_placeSearchResponse;
    NSMutableArray *_sortedETAs;
    int _status;
    struct {
        unsigned int distance:1;
        unsigned int historicTravelTime:1;
        unsigned int liveTravelTime:1;
        unsigned int status:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *sortedETAs; // @synthesize sortedETAs=_sortedETAs;
@property(nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property(retain, nonatomic) GEOPlaceSearchResponse *placeSearchResponse; // @synthesize placeSearchResponse=_placeSearchResponse;
@property(nonatomic) unsigned int historicTravelTime; // @synthesize historicTravelTime=_historicTravelTime;
@property(nonatomic) unsigned int liveTravelTime; // @synthesize liveTravelTime=_liveTravelTime;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)sortedETAAtIndex:(unsigned long long)arg1;
- (unsigned long long)sortedETAsCount;
- (void)addSortedETA:(id)arg1;
- (void)clearSortedETAs;
@property(nonatomic) _Bool hasDistance;
@property(readonly, nonatomic) _Bool hasPlaceSearchResponse;
@property(nonatomic) _Bool hasHistoricTravelTime;
@property(nonatomic) _Bool hasLiveTravelTime;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
- (void)dealloc;

@end

