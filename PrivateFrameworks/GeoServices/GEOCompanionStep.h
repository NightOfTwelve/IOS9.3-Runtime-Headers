//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOCompanionDriveStep, GEOCompanionFerryStep, GEOCompanionWalkStep, NSString;

@interface GEOCompanionStep : PBCodable <NSCopying>
{
    unsigned int _distance;
    GEOCompanionDriveStep *_driveStep;
    unsigned int _endCoordinateIndex;
    GEOCompanionFerryStep *_ferryStep;
    unsigned int _maneuverStartCoordinateIndex;
    NSString *_roadName;
    unsigned int _startCoordinateIndex;
    unsigned int _stepID;
    unsigned int _time;
    GEOCompanionWalkStep *_walkStep;
    struct {
        unsigned int distance:1;
        unsigned int endCoordinateIndex:1;
        unsigned int maneuverStartCoordinateIndex:1;
        unsigned int startCoordinateIndex:1;
        unsigned int stepID:1;
        unsigned int time:1;
    } _has;
}

@property(nonatomic) unsigned int endCoordinateIndex; // @synthesize endCoordinateIndex=_endCoordinateIndex;
@property(nonatomic) unsigned int maneuverStartCoordinateIndex; // @synthesize maneuverStartCoordinateIndex=_maneuverStartCoordinateIndex;
@property(nonatomic) unsigned int startCoordinateIndex; // @synthesize startCoordinateIndex=_startCoordinateIndex;
@property(retain, nonatomic) GEOCompanionFerryStep *ferryStep; // @synthesize ferryStep=_ferryStep;
@property(retain, nonatomic) GEOCompanionWalkStep *walkStep; // @synthesize walkStep=_walkStep;
@property(retain, nonatomic) GEOCompanionDriveStep *driveStep; // @synthesize driveStep=_driveStep;
@property(retain, nonatomic) NSString *roadName; // @synthesize roadName=_roadName;
@property(nonatomic) unsigned int time; // @synthesize time=_time;
@property(nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property(nonatomic) unsigned int stepID; // @synthesize stepID=_stepID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasEndCoordinateIndex;
@property(nonatomic) _Bool hasManeuverStartCoordinateIndex;
@property(nonatomic) _Bool hasStartCoordinateIndex;
@property(readonly, nonatomic) _Bool hasFerryStep;
@property(readonly, nonatomic) _Bool hasWalkStep;
@property(readonly, nonatomic) _Bool hasDriveStep;
@property(readonly, nonatomic) _Bool hasRoadName;
@property(nonatomic) _Bool hasTime;
@property(nonatomic) _Bool hasDistance;
@property(nonatomic) _Bool hasStepID;
- (void)dealloc;
- (id)geoStep;
- (id)maneuverStep;
- (id)initWithStep:(id)arg1 route:(id)arg2;

@end

