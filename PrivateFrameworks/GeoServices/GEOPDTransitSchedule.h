//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDDeparturePredicate, NSMutableArray;

@interface GEOPDTransitSchedule : PBCodable <NSCopying>
{
    CDStruct_43c37391 _operatingHoursRange;
    GEOPDDeparturePredicate *_departurePredicateCountdown;
    GEOPDDeparturePredicate *_departurePredicateStamp;
    NSMutableArray *_departureSequences;
    CDStruct_65124bb5 _has;
}

+ (id)transitScheduleForPlaceData:(id)arg1;
@property(nonatomic) CDStruct_43c37391 operatingHoursRange; // @synthesize operatingHoursRange=_operatingHoursRange;
@property(retain, nonatomic) GEOPDDeparturePredicate *departurePredicateStamp; // @synthesize departurePredicateStamp=_departurePredicateStamp;
@property(retain, nonatomic) GEOPDDeparturePredicate *departurePredicateCountdown; // @synthesize departurePredicateCountdown=_departurePredicateCountdown;
@property(retain, nonatomic) NSMutableArray *departureSequences; // @synthesize departureSequences=_departureSequences;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasOperatingHoursRange;
@property(readonly, nonatomic) _Bool hasDeparturePredicateStamp;
@property(readonly, nonatomic) _Bool hasDeparturePredicateCountdown;
- (id)departureSequenceAtIndex:(unsigned long long)arg1;
- (unsigned long long)departureSequencesCount;
- (void)addDepartureSequence:(id)arg1;
- (void)clearDepartureSequences;
- (void)dealloc;

@end

