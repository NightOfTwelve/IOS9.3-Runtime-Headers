//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDViewportInfo, GEOStructuredAddress, NSString;

@interface GEOPDGeocodingParameters : PBCodable <NSCopying>
{
    unsigned int _maxResults;
    NSString *_queryString;
    GEOStructuredAddress *_structuredAddress;
    GEOPDViewportInfo *_viewportInfo;
    CDStruct_4f8569d5 _has;
}

@property(retain, nonatomic) GEOStructuredAddress *structuredAddress; // @synthesize structuredAddress=_structuredAddress;
@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;
@property(retain, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasStructuredAddress;
@property(readonly, nonatomic) _Bool hasViewportInfo;
@property(nonatomic) _Bool hasMaxResults;
@property(nonatomic) unsigned int maxResults; // @synthesize maxResults=_maxResults;
@property(readonly, nonatomic) _Bool hasQueryString;
- (void)dealloc;
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddress:(id)arg1 addressString:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;

@end

