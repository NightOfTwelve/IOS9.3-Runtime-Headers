//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData;

@interface HDCodableObjectTypeSourceOrder : PBCodable <NSCopying>
{
    long long _objectType;
    NSData *_sourceUUIDs;
    _Bool _userOrdered;
    struct {
        unsigned int objectType:1;
        unsigned int userOrdered:1;
    } _has;
}

@property(retain, nonatomic) NSData *sourceUUIDs; // @synthesize sourceUUIDs=_sourceUUIDs;
@property(nonatomic) _Bool userOrdered; // @synthesize userOrdered=_userOrdered;
@property(nonatomic) long long objectType; // @synthesize objectType=_objectType;
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
@property(readonly, nonatomic) _Bool hasSourceUUIDs;
@property(nonatomic) _Bool hasUserOrdered;
@property(nonatomic) _Bool hasObjectType;
- (long long)decodedDataTypeCode;

@end

