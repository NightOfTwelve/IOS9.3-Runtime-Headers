//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSData;

@interface GEORPPhotoWithMetadata : PBCodable <NSCopying>
{
    double _creationDate;
    double _geotagHorizontalAccuracy;
    double _geotagTimestamp;
    NSData *_data;
    GEOLatLng *_geotagCoordinate;
    struct {
        unsigned int creationDate:1;
        unsigned int geotagHorizontalAccuracy:1;
        unsigned int geotagTimestamp:1;
    } _has;
}

@property(nonatomic) double geotagTimestamp; // @synthesize geotagTimestamp=_geotagTimestamp;
@property(nonatomic) double geotagHorizontalAccuracy; // @synthesize geotagHorizontalAccuracy=_geotagHorizontalAccuracy;
@property(retain, nonatomic) GEOLatLng *geotagCoordinate; // @synthesize geotagCoordinate=_geotagCoordinate;
@property(nonatomic) double creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasGeotagTimestamp;
@property(nonatomic) _Bool hasGeotagHorizontalAccuracy;
@property(readonly, nonatomic) _Bool hasGeotagCoordinate;
@property(nonatomic) _Bool hasCreationDate;
@property(readonly, nonatomic) _Bool hasData;
- (void)dealloc;

@end

