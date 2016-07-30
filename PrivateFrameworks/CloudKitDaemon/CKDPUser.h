//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPIdentifier, CKDPProtectionInfo, CKDPUserAlias, NSString;

__attribute__((visibility("hidden")))
@interface CKDPUser : PBCodable <NSCopying>
{
    CKDPUserAlias *_alias;
    NSString *_firstName;
    CKDPIdentifier *_identifier;
    NSString *_lastName;
    CKDPProtectionInfo *_protectionInfo;
}

@property(retain, nonatomic) CKDPProtectionInfo *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) CKDPUserAlias *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) CKDPIdentifier *identifier; // @synthesize identifier=_identifier;
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
@property(readonly, nonatomic) _Bool hasProtectionInfo;
@property(readonly, nonatomic) _Bool hasLastName;
@property(readonly, nonatomic) _Bool hasFirstName;
@property(readonly, nonatomic) _Bool hasAlias;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

