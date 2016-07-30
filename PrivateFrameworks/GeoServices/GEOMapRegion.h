//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOMapRegion : PBCodable <NSCopying>
{
    double _eastLng;
    double _northLat;
    double _southLat;
    double _westLng;
    NSMutableArray *_vertexs;
    struct {
        unsigned int eastLng:1;
        unsigned int northLat:1;
        unsigned int southLat:1;
        unsigned int westLng:1;
    } _has;
}

+ (id)_geo_mapRegionForGEOCoordinateRegion:(CDStruct_90e2a262)arg1;
@property(retain, nonatomic) NSMutableArray *vertexs; // @synthesize vertexs=_vertexs;
@property(nonatomic) double eastLng; // @synthesize eastLng=_eastLng;
@property(nonatomic) double northLat; // @synthesize northLat=_northLat;
@property(nonatomic) double westLng; // @synthesize westLng=_westLng;
@property(nonatomic) double southLat; // @synthesize southLat=_southLat;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)vertexAtIndex:(unsigned long long)arg1;
- (unsigned long long)vertexsCount;
- (void)addVertex:(id)arg1;
- (void)clearVertexs;
@property(nonatomic) _Bool hasEastLng;
@property(nonatomic) _Bool hasNorthLat;
@property(nonatomic) _Bool hasWestLng;
@property(nonatomic) _Bool hasSouthLat;
- (void)dealloc;
- (_Bool)containsMapRect:(CDStruct_90e2a262)arg1;
- (_Bool)containsCoordinate:(CDStruct_c3b9c2ee)arg1;
@property(readonly, nonatomic) double spanLng;
@property(readonly, nonatomic) double spanLat;
@property(readonly, nonatomic) double centerLng;
@property(readonly, nonatomic) double centerLat;
- (void)setMapRect:(CDStruct_90e2a262)arg1;
- (id)initWithRadialPlace:(id)arg1;
- (id)initWithMapRect:(CDStruct_90e2a262)arg1;
- (id)initWithCoordinateRegion:(CDStruct_90e2a262)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;

@end

