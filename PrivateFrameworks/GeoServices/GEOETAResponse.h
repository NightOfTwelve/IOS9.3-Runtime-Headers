//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPlaceSearchResponse, NSMutableArray;

@interface GEOETAResponse : PBCodable <NSCopying>
{
    CDStruct_c55e649d *_problemDetails;
    unsigned long long _problemDetailsCount;
    unsigned long long _problemDetailsSpace;
    NSMutableArray *_etaResults;
    GEOPlaceSearchResponse *_originPlaceSearchResponse;
    int _status;
    CDStruct_47fe53f2 _has;
}

@property(retain, nonatomic) GEOPlaceSearchResponse *originPlaceSearchResponse; // @synthesize originPlaceSearchResponse=_originPlaceSearchResponse;
@property(retain, nonatomic) NSMutableArray *etaResults; // @synthesize etaResults=_etaResults;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setProblemDetails:(CDStruct_c55e649d *)arg1 count:(unsigned long long)arg2;
- (CDStruct_c55e649d)problemDetailAtIndex:(unsigned long long)arg1;
- (void)addProblemDetail:(CDStruct_c55e649d)arg1;
- (void)clearProblemDetails;
@property(readonly, nonatomic) CDStruct_c55e649d *problemDetails;
@property(readonly, nonatomic) unsigned long long problemDetailsCount;
@property(readonly, nonatomic) _Bool hasOriginPlaceSearchResponse;
- (id)etaResultAtIndex:(unsigned long long)arg1;
- (unsigned long long)etaResultsCount;
- (void)addEtaResult:(id)arg1;
- (void)clearEtaResults;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
- (void)dealloc;

@end

