//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPRecordIdentifier, CKDPRecordType, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPAssetUploadTokenRetrieveRequestRecordAssetUpload : PBCodable <NSCopying>
{
    NSMutableArray *_assetFields;
    CKDPRecordIdentifier *_recordId;
    CKDPRecordType *_type;
}

@property(retain, nonatomic) NSMutableArray *assetFields; // @synthesize assetFields=_assetFields;
@property(retain, nonatomic) CKDPRecordType *type; // @synthesize type=_type;
@property(retain, nonatomic) CKDPRecordIdentifier *recordId; // @synthesize recordId=_recordId;
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
- (id)assetFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)assetFieldsCount;
- (void)addAssetFields:(id)arg1;
- (void)clearAssetFields;
@property(readonly, nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasRecordId;

@end

