//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOAutomobileOptions : PBCodable <NSCopying>
{
    int _trafficType;
    _Bool _includeHistoricTravelTime;
    struct {
        unsigned int trafficType:1;
        unsigned int includeHistoricTravelTime:1;
    } _has;
}

@property(nonatomic) _Bool includeHistoricTravelTime; // @synthesize includeHistoricTravelTime=_includeHistoricTravelTime;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTrafficType;
@property(nonatomic) int trafficType; // @synthesize trafficType=_trafficType;
@property(nonatomic) _Bool hasIncludeHistoricTravelTime;

@end

