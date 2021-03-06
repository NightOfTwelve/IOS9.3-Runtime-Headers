//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/NSCopying-Protocol.h>
#import <MapsSupport/SYObject-Protocol.h>

@class MSPBookmarkStorage, MSPHistoryEntryStorage, MSPPinStorage, NSString, PBUnknownFields;

@interface MSPCompanionSyncedItem : PBCodable <SYObject, NSCopying>
{
    PBUnknownFields *_unknownFields;
    MSPBookmarkStorage *_bookmark;
    MSPPinStorage *_pin;
    MSPHistoryEntryStorage *_searchRequest;
    NSString *_syncId;
}

@property(retain, nonatomic) MSPHistoryEntryStorage *searchRequest; // @synthesize searchRequest=_searchRequest;
@property(retain, nonatomic) MSPPinStorage *pin; // @synthesize pin=_pin;
@property(retain, nonatomic) MSPBookmarkStorage *bookmark; // @synthesize bookmark=_bookmark;
@property(retain, nonatomic) NSString *syncId; // @synthesize syncId=_syncId;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasSearchRequest;
@property(readonly, nonatomic) _Bool hasPin;
@property(readonly, nonatomic) _Bool hasBookmark;
@property(readonly, nonatomic) _Bool hasSyncId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

