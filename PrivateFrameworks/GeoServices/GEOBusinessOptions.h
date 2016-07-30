//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOBusinessOptions : PBCodable <NSCopying>
{
    NSMutableArray *_attributeKeys;
    int _maxBusinessResults;
    NSMutableArray *_photoOptions;
    _Bool _includeBusinessHours;
    _Bool _includeCenter;
    struct {
        unsigned int maxBusinessResults:1;
        unsigned int includeBusinessHours:1;
        unsigned int includeCenter:1;
    } _has;
}

@property(nonatomic) _Bool includeCenter; // @synthesize includeCenter=_includeCenter;
@property(nonatomic) _Bool includeBusinessHours; // @synthesize includeBusinessHours=_includeBusinessHours;
@property(retain, nonatomic) NSMutableArray *attributeKeys; // @synthesize attributeKeys=_attributeKeys;
@property(retain, nonatomic) NSMutableArray *photoOptions; // @synthesize photoOptions=_photoOptions;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIncludeCenter;
@property(nonatomic) _Bool hasMaxBusinessResults;
@property(nonatomic) int maxBusinessResults; // @synthesize maxBusinessResults=_maxBusinessResults;
@property(nonatomic) _Bool hasIncludeBusinessHours;
- (id)attributeKeyAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributeKeysCount;
- (void)addAttributeKey:(id)arg1;
- (void)clearAttributeKeys;
- (id)photoOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)photoOptionsCount;
- (void)addPhotoOptions:(id)arg1;
- (void)clearPhotoOptions;
- (void)dealloc;

@end

