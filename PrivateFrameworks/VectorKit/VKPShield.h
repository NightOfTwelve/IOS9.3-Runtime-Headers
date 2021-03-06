//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VectorKit/NSCopying-Protocol.h>

@class NSMutableArray, NSString, VKPGenericShieldStyleInfo;

__attribute__((visibility("hidden")))
@interface VKPShield : PBCodable <NSCopying>
{
    VKPGenericShieldStyleInfo *_genericShieldStyleInfo;
    NSString *_identifier;
    NSMutableArray *_variants;
}

@property(retain, nonatomic) VKPGenericShieldStyleInfo *genericShieldStyleInfo; // @synthesize genericShieldStyleInfo=_genericShieldStyleInfo;
@property(retain, nonatomic) NSMutableArray *variants; // @synthesize variants=_variants;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasGenericShieldStyleInfo;
- (id)variantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)variantsCount;
- (void)addVariants:(id)arg1;
- (void)clearVariants;
- (void)dealloc;

@end

