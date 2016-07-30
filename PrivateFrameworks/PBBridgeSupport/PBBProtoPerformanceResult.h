//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PBBridgeSupport/NSCopying-Protocol.h>

@class NSString;

@interface PBBProtoPerformanceResult : PBCodable <NSCopying>
{
    double _timeDelta;
    double _timeEnded;
    double _timeStarted;
    NSString *_activityType;
    NSString *_identifier;
    struct {
        unsigned int timeDelta:1;
        unsigned int timeEnded:1;
        unsigned int timeStarted:1;
    } _has;
}

+ (void)initialize;
@property(nonatomic) double timeEnded; // @synthesize timeEnded=_timeEnded;
@property(nonatomic) double timeStarted; // @synthesize timeStarted=_timeStarted;
@property(nonatomic) double timeDelta; // @synthesize timeDelta=_timeDelta;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
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
@property(nonatomic) _Bool hasTimeEnded;
@property(nonatomic) _Bool hasTimeStarted;
@property(nonatomic) _Bool hasTimeDelta;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(readonly, nonatomic) _Bool hasActivityType;
- (id)detailedDescription;

@end

