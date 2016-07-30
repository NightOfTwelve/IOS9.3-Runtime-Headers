//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPShareIdentifier, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDPShareTokenRetrieveRequest : PBRequest <NSCopying>
{
    NSString *_routingKey;
    CKDPShareIdentifier *_shareId;
    NSData *_shortTokenHash;
}

+ (id)options;
@property(retain, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
@property(retain, nonatomic) NSData *shortTokenHash; // @synthesize shortTokenHash=_shortTokenHash;
@property(retain, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasShareId;
@property(readonly, nonatomic) _Bool hasShortTokenHash;
@property(readonly, nonatomic) _Bool hasRoutingKey;

@end

