//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOPDTransitIncident : PBCodable <NSCopying>
{
    NSMutableArray *_transitIncidents;
}

+ (id)transitIncidentsTTLExpirationDateForPlaceData:(id)arg1;
+ (id)transitIncidentsForPlaceData:(id)arg1 hasTransitIncidentComponent:(_Bool *)arg2;
@property(retain, nonatomic) NSMutableArray *transitIncidents; // @synthesize transitIncidents=_transitIncidents;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)transitIncidentAtIndex:(unsigned long long)arg1;
- (unsigned long long)transitIncidentsCount;
- (void)addTransitIncident:(id)arg1;
- (void)clearTransitIncidents;
- (void)dealloc;

@end

