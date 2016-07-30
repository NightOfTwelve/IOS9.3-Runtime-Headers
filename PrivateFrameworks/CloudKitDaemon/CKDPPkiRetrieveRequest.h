//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPPkiRetrieveRequest : PBRequest <NSCopying>
{
    NSMutableArray *_userIds;
}

+ (id)options;
@property(retain, nonatomic) NSMutableArray *userIds; // @synthesize userIds=_userIds;
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
- (id)userIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)userIdsCount;
- (void)addUserId:(id)arg1;
- (void)clearUserIds;

@end

