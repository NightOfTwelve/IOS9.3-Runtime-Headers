//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEORPWatchAuxiliaryControl : PBCodable <NSCopying>
{
    NSString *_hardwareIdentifier;
    NSString *_osBuild;
    NSString *_osVersion;
}

@property(retain, nonatomic) NSString *osBuild; // @synthesize osBuild=_osBuild;
@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *hardwareIdentifier; // @synthesize hardwareIdentifier=_hardwareIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasOsBuild;
@property(readonly, nonatomic) _Bool hasOsVersion;
@property(readonly, nonatomic) _Bool hasHardwareIdentifier;
- (void)dealloc;

@end

