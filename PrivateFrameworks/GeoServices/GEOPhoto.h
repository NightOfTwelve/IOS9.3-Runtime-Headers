//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOPhoto : PBCodable <NSCopying>
{
    NSMutableArray *_photoInfos;
    int _photoType;
    NSString *_uid;
    CDStruct_86c1f53f _has;
}

@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSMutableArray *photoInfos; // @synthesize photoInfos=_photoInfos;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasUid;
- (id)photoInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)photoInfosCount;
- (void)addPhotoInfo:(id)arg1;
- (void)clearPhotoInfos;
@property(nonatomic) _Bool hasPhotoType;
@property(nonatomic) int photoType; // @synthesize photoType=_photoType;
- (void)dealloc;
- (id)_bestURLForSize:(int)arg1;
- (id)_photoInfoForSize:(int)arg1 includeSmallerSizes:(_Bool)arg2;
- (id)initWithPlaceDataPhoto:(id)arg1;

@end

