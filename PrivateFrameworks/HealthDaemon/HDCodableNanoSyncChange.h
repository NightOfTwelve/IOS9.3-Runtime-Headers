//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDNanoSyncDescription-Protocol.h>
#import <HealthDaemon/HDSyncChange-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HDCodableNanoSyncChange : PBCodable <HDSyncChange, HDNanoSyncDescription, NSCopying>
{
    long long _endAnchor;
    long long _startAnchor;
    NSMutableArray *_objectDatas;
    int _objectType;
    NSMutableArray *_requiredAnchors;
    _Bool _speculative;
    struct {
        unsigned int endAnchor:1;
        unsigned int startAnchor:1;
        unsigned int objectType:1;
        unsigned int speculative:1;
    } _has;
}

+ (id)changeWithNanoSyncEntityClass:(Class)arg1;
@property(nonatomic) _Bool speculative; // @synthesize speculative=_speculative;
@property(retain, nonatomic) NSMutableArray *requiredAnchors; // @synthesize requiredAnchors=_requiredAnchors;
@property(retain, nonatomic) NSMutableArray *objectDatas; // @synthesize objectDatas=_objectDatas;
@property(nonatomic) long long endAnchor; // @synthesize endAnchor=_endAnchor;
@property(nonatomic) long long startAnchor; // @synthesize startAnchor=_startAnchor;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasSpeculative;
- (id)requiredAnchorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)requiredAnchorsCount;
- (void)addRequiredAnchors:(id)arg1;
- (void)clearRequiredAnchors;
- (id)objectDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)objectDatasCount;
- (void)addObjectData:(id)arg1;
- (void)clearObjectDatas;
@property(nonatomic) _Bool hasEndAnchor;
@property(nonatomic) _Bool hasStartAnchor;
@property(nonatomic) _Bool hasObjectType;
@property(nonatomic) int objectType; // @synthesize objectType=_objectType;
- (id)nanoSyncDescription;
- (id)decodedObjects;
- (id)requiredAnchorMapWithError:(id *)arg1;
- (void)setObjects:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange)arg2 requiredAnchorMap:(id)arg3;
- (id)speculativeCopy;
- (Class)_syncEntityClass;
- (Class)nanoSyncEntityClass;
- (Class)syncEntityClass;
@property(readonly, nonatomic) struct HDSyncAnchorRange syncAnchorRange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

