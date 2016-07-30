//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOMapQueryCollectionRequest : PBRequest <NSCopying>
{
    NSMutableArray *_requestElements;
}

@property(retain, nonatomic) NSMutableArray *requestElements; // @synthesize requestElements=_requestElements;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)requestElementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)requestElementsCount;
- (void)addRequestElements:(id)arg1;
- (void)clearRequestElements;
- (void)dealloc;

@end

