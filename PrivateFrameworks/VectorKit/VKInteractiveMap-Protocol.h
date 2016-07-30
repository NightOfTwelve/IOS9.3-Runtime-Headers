//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/NSObject-Protocol.h>

@class GEOMapRegion, GEOResourceManifestConfiguration, NSArray, NSSet, NSString, VKAnchorWrapper, VKAnimation, VKAnnotationMarker, VKFeatureMarker, VKLabelMarker, VKObjectBoundsContext, VKRasterOverlay, VKTransitLineMarker, VKViewportInfo;
@protocol VKInteractiveMapDelegate, VKOverlay, VKRouteMatchedAnnotationPresentation, VKTrackableAnnotation;

@protocol VKInteractiveMap <NSObject>
+ (_Bool)supportsMapType:(long long)arg1 scale:(int)arg2 manifestConfiguration:(GEOResourceManifestConfiguration *)arg3;
@property(readonly, nonatomic) VKAnchorWrapper *externalAnchors;
@property(readonly, nonatomic, getter=isFullyDrawn) _Bool fullyDrawn;
@property(readonly, nonatomic) NSArray *visibleTileSets;
@property(readonly, nonatomic) NSArray *rasterOverlays;
@property(readonly, nonatomic, getter=isTrackingHeading) _Bool trackingHeading;
@property(readonly, nonatomic) id <VKTrackableAnnotation> trackingAnnotation;
@property(readonly, nonatomic, getter=isAnimatingToTrackAnnotation) _Bool animatingToTrackAnnotation;
@property(nonatomic) id <VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation;
@property(nonatomic) long long annotationTrackingHeadingAnimationDisplayRate;
@property(nonatomic) long long annotationTrackingZoomStyle;
@property(readonly, nonatomic) double altitude;
@property(readonly, nonatomic) double pitch;
@property(readonly, nonatomic) double presentationYaw;
@property(readonly, nonatomic) double yaw;
@property(readonly, nonatomic) GEOMapRegion *mapRegionOfInterest;
@property(retain, nonatomic) GEOMapRegion *mapRegion;
@property(nonatomic) unsigned char labelScaleFactor;
@property(nonatomic) _Bool localizeLabels;
@property(nonatomic) _Bool labelMarkerSelectionEnabled;
@property(readonly, nonatomic) double maximumZoomLevel;
@property(readonly, nonatomic) double minimumZoomLevel;
@property(retain, nonatomic) NSArray *externalTrafficIncidents;
@property(nonatomic) struct PolylineCoordinate routeUserOffset;
@property(nonatomic) _Bool showsBuildings;
@property(nonatomic) _Bool showsPointsOfInterest;
@property(nonatomic) long long shieldIdiom;
@property(nonatomic) long long navigationShieldSize;
@property(nonatomic) long long shieldSize;
@property(nonatomic) long long mapType;
@property(readonly, nonatomic, getter=isFullyPitched) _Bool fullyPitched;
@property(readonly, nonatomic, getter=isPitched) _Bool pitched;
@property(nonatomic) _Bool isPitchable;
@property(nonatomic) _Bool staysCenteredDuringRotation;
@property(nonatomic) _Bool staysCenteredDuringPinch;
@property(nonatomic) _Bool trafficIncidentsEnabled;
@property(nonatomic) _Bool trafficEnabled;
@property(nonatomic) id <VKInteractiveMapDelegate> delegate;
- (void)removeExternalAnchor:(VKAnchorWrapper *)arg1;
- (void)addExternalAnchor:(VKAnchorWrapper *)arg1;
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4 completionHandler:(void (^)(void))arg5;
- (void)stopSnappingAnimations;
- (_Bool)isPointValidForGesturing:(struct CGPoint)arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePitchWithFocusPoint:(struct CGPoint)arg1 translation:(double)arg2;
- (void)startPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)updateRotationWithFocusPoint:(struct CGPoint)arg1 newValue:(double)arg2;
- (void)startRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)didStartPanningDeceleration;
- (void)stopPanningAtPoint:(struct CGPoint)arg1;
- (void)updatePanWithTranslation:(struct CGPoint)arg1;
- (void)startPanningAtPoint:(struct CGPoint)arg1 panAtStartPoint:(_Bool)arg2;
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(void (^)(void))arg3;
- (void)zoomToLevel:(double)arg1 withFocusPoint:(struct CGPoint)arg2;
- (double)currentZoomLevel;
- (_Bool)isShowingNoDataPlaceholders;
- (NSArray *)attributionsForCurrentRegion;
- (_Bool)restoreViewportFromInfo:(VKViewportInfo *)arg1;
- (VKViewportInfo *)viewportInfo;
- (void)insertRasterOverlay:(VKRasterOverlay *)arg1 belowOverlay:(VKRasterOverlay *)arg2;
- (void)insertRasterOverlay:(VKRasterOverlay *)arg1 aboveOverlay:(VKRasterOverlay *)arg2;
- (void)removeRasterOverlay:(VKRasterOverlay *)arg1;
- (void)addRasterOverlay:(VKRasterOverlay *)arg1;
- (void)removePersistentOverlay:(id <VKOverlay>)arg1;
- (void)addPersistentOverlay:(id <VKOverlay>)arg1;
- (NSSet *)persistentOverlays;
- (NSArray *)overlays;
- (void)removeOverlay:(id <VKOverlay>)arg1;
- (void)addOverlay:(id <VKOverlay>)arg1;
- (void)stopTrackingAnnotation;
- (void)startTrackingAnnotation:(id <VKTrackableAnnotation>)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3;
- (CDStruct_071ac149)centerCoordinate;
- (struct CGPoint)convertCoordinateToCameraModelPoint:(CDStruct_c3b9c2ee)arg1;
- (struct CGPoint)convertCoordinateToPoint:(CDStruct_c3b9c2ee)arg1;
- (struct CGPoint)convertMapPointToPoint:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)convertPointToMapPoint:(struct CGPoint)arg1;
- (CDStruct_c3b9c2ee)convertPointToCoordinate:(struct CGPoint)arg1;
- (VKObjectBoundsContext *)boundsForSelectedTransitLines;
- (void)deselectTransitLineMarker;
- (void)selectTransitLineMarker:(VKTransitLineMarker *)arg1;
- (NSArray *)selectedTransitLineIDs;
- (NSArray *)transitLineMarkersForSelectionAtPoint:(struct CGPoint)arg1;
- (NSArray *)transitLineMarkersInCurrentViewport;
- (void)deselectLabelMarker;
- (VKLabelMarker *)selectedLabelMarker;
- (void)selectLabelMarker:(VKLabelMarker *)arg1;
- (VKLabelMarker *)labelMarkerForSelectionAtPoint:(struct CGPoint)arg1 selectableLabelsOnly:(_Bool)arg2;
- (NSArray *)labelMarkers;
- (VKAnnotationMarker *)selectedAnnotationMarker;
- (NSArray *)annotationMarkers;
- (_Bool)shouldHideOffscreenSelectedAnnotation;
- (_Bool (^)(struct))annotationCoordinateTest;
- (long long (^)(double, double, double, double))annotationRectTest;
- (void (^)(VKAnnotationMarker *))annotationMarkerDeselectionCallback;
- (void)setAnnotationMarkerDeselectionCallback:(void (^)(VKAnnotationMarker *))arg1;
- (void)deselectAnnotationMarker:(VKAnnotationMarker *)arg1;
- (void)selectAnnotationMarker:(VKAnnotationMarker *)arg1;
- (void)removeAnnotationMarker:(VKAnnotationMarker *)arg1;
- (void)addAnnotationMarker:(VKAnnotationMarker *)arg1 allowAnimation:(_Bool)arg2;
- (VKAnnotationMarker *)annotationMarkerForSelectionAtPoint:(struct CGPoint)arg1 avoidCurrent:(_Bool)arg2;
- (VKFeatureMarker *)closestRoadMarkerForSelectionAtPoint:(struct CGPoint)arg1;
- (void)debugHighlightLabelAtPoint:(struct CGPoint)arg1;
- (struct VKPoint)screenPointForPoint:(struct CGPoint)arg1;
- (_Bool)currentZoomLevelAllowsRotation;
- (void)setCenterCoordinate3D:(CDStruct_071ac149)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(float (^)(float))arg7 completion:(void (^)(_Bool))arg8;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(float (^)(float))arg7 completion:(void (^)(_Bool))arg8;
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;
- (double)durationToAnimateToMapRegion:(GEOMapRegion *)arg1;
- (void)animateToMapRegion:(GEOMapRegion *)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(void (^)(_Bool))arg5;
- (void)setMapRegion:(GEOMapRegion *)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(_Bool)arg4 completion:(void (^)(_Bool))arg5;
- (void)setMapRegion:(GEOMapRegion *)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(_Bool)arg4;
- (void)setMapRegion:(GEOMapRegion *)arg1 animated:(_Bool)arg2;
- (_Bool)canZoomOutForTileSize:(long long)arg1;
- (_Bool)canZoomInForTileSize:(long long)arg1;
- (double)topDownMinimumZoomLevelForTileSize:(long long)arg1;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;
- (double)currentZoomLevelForTileSize:(long long)arg1;
- (double)maximumZoomLevelForTileSize:(long long)arg1;
- (double)minimumZoomLevelForTileSize:(long long)arg1;
- (void)_setStyleTransitionProgress:(double)arg1 targetStyle:(struct DisplayStyle)arg2 step:(long long)arg3;
- (double)_styleTransitionProgress;
- (struct DisplayStyle)sourceMapDisplayStyle;
- (_Bool)supportsMapDisplayStyle:(struct DisplayStyle)arg1;
- (void)setStylesheetMapDisplayStyle:(struct DisplayStyle)arg1;
- (void)stylesheetAnimationDidEnd:(_Bool)arg1;
- (void)stylesheetAnimationDidProgress:(float)arg1;
- (void)stylesheetAnimationWillStartFromStyle:(struct DisplayStyle)arg1 toStyle:(struct DisplayStyle)arg2;
- (void)endStyleAnimationGroup;
- (void)beginStyleAnimationGroup;
- (void)requestStylesheetAnimation:(VKAnimation *)arg1 targetMapDisplayStyle:(struct DisplayStyle)arg2 setupHandler:(void (^)(void))arg3;
- (void)setMapType:(long long)arg1 animated:(_Bool)arg2;
- (NSString *)consoleString:(_Bool)arg1;
- (NSString *)detailedDescription;
- (void)exit3DMode;
- (void)enter3DMode;
- (_Bool)canEnter3DMode;
@end

