//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOURLSerializable-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOStructuredAddress, NSMutableArray, NSString;

@interface GEOAddress : PBCodable <GEOURLSerializable, NSCopying>
{
    NSMutableArray *_formattedAddressLines;
    int _formattedAddressType;
    GEOStructuredAddress *_structuredAddress;
    struct {
        unsigned int formattedAddressType:1;
    } _has;
}

+ (id)geoAddressForPlaceData:(id)arg1;
@property(retain, nonatomic) GEOStructuredAddress *structuredAddress; // @synthesize structuredAddress=_structuredAddress;
@property(retain, nonatomic) NSMutableArray *formattedAddressLines; // @synthesize formattedAddressLines=_formattedAddressLines;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasFormattedAddressType;
@property(nonatomic) int formattedAddressType; // @synthesize formattedAddressType=_formattedAddressType;
@property(readonly, nonatomic) _Bool hasStructuredAddress;
- (id)formattedAddressLineAtIndex:(unsigned long long)arg1;
- (unsigned long long)formattedAddressLinesCount;
- (void)addFormattedAddressLine:(id)arg1;
- (void)clearFormattedAddressLines;
- (void)dealloc;
- (_Bool)_isEquivalentURLRepresentationTo:(id)arg1;
- (id)urlRepresentation;
- (id)initWithUrlRepresentation:(id)arg1;
- (id)bestName;
- (id)addressDictionary;
- (id)initWithAddressDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

