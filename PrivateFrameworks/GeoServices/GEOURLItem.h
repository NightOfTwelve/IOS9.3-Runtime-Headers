//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapItemStorage, GEOPlace;

@interface GEOURLItem : PBCodable <NSCopying>
{
    GEOMapItemStorage *_mapItemStorage;
    GEOPlace *_place;
    _Bool _currentLocation;
    struct {
        unsigned int currentLocation:1;
    } _has;
}

@property(retain, nonatomic) GEOMapItemStorage *mapItemStorage; // @synthesize mapItemStorage=_mapItemStorage;
@property(nonatomic) _Bool currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) GEOPlace *place; // @synthesize place=_place;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasMapItemStorage;
@property(nonatomic) _Bool hasCurrentLocation;
@property(readonly, nonatomic) _Bool hasPlace;
- (void)dealloc;
- (void)setMapItem:(id)arg1;
- (id)mapItem;

@end

