//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOComposedRoute;

__attribute__((visibility("hidden")))
@interface GEORouteMapMatcher : NSObject
{
    GEOComposedRoute *_route;
}

@property(readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
- (CDStruct_7233881d)_updateParamsForStepProgression:(const CDStruct_7233881d *)arg1 trackedLocation:(id)arg2 minNumMatchesToAdvanceStep:(unsigned long long)arg3 minDistanceAlongStepToAdvance:(double)arg4;
- (void)_closestPointFromCoordinate:(const CDStruct_c3b9c2ee *)arg1 toSegmentStart:(const struct PolylineCoordinate *)arg2 toSegmentEnd:(const struct PolylineCoordinate *)arg3 outRouteCoordinate:(struct PolylineCoordinate *)arg4 outLocationCoordinate:(CDStruct_c3b9c2ee *)arg5 outDistanceFromSegment:(double *)arg6;
- (_Bool)_clampSegment:(struct PolylineCoordinate *)arg1 endCoord:(struct PolylineCoordinate *)arg2 outSegmentLength:(double *)arg3 firstAllowedMatch:(struct PolylineCoordinate)arg4 maxDistance:(double)arg5;
- (CDStruct_c3b9c2ee)_locationCoordinateFromRouteCoordinate:(const struct PolylineCoordinate *)arg1;
- (double)_modifiedHorizontalAccuracy:(double)arg1 routeIndex:(unsigned int)arg2;
- (void)_enumerateRouteSegmentsNearLocation:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (_Bool)isLocationCoordinate:(CDStruct_c3b9c2ee)arg1 withinDistance:(double)arg2 alongRoute:(double)arg3;
- (double)_closestDistanceFromCoordinate:(CDStruct_c3b9c2ee)arg1 alongRoute:(double)arg2;
- (id)matchToRouteWithLocation:(id)arg1 trackedLocation:(id)arg2 onDate:(id)arg3 maxDistance:(double)arg4;
- (id)initWithRoute:(id)arg1;

@end

