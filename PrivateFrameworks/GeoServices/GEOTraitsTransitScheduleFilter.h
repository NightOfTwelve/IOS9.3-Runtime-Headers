//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTraitsTransitScheduleModeFilter, GEOTraitsTransitScheduleTimeRange;

@interface GEOTraitsTransitScheduleFilter : PBCodable <NSCopying>
{
    GEOTraitsTransitScheduleModeFilter *_highFrequencyFilter;
    GEOTraitsTransitScheduleModeFilter *_lowFrequencyFilter;
    GEOTraitsTransitScheduleTimeRange *_operatingHoursRange;
}

@property(retain, nonatomic) GEOTraitsTransitScheduleTimeRange *operatingHoursRange; // @synthesize operatingHoursRange=_operatingHoursRange;
@property(retain, nonatomic) GEOTraitsTransitScheduleModeFilter *lowFrequencyFilter; // @synthesize lowFrequencyFilter=_lowFrequencyFilter;
@property(retain, nonatomic) GEOTraitsTransitScheduleModeFilter *highFrequencyFilter; // @synthesize highFrequencyFilter=_highFrequencyFilter;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasOperatingHoursRange;
@property(readonly, nonatomic) _Bool hasLowFrequencyFilter;
@property(readonly, nonatomic) _Bool hasHighFrequencyFilter;
- (void)dealloc;

@end

