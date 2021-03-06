//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKScreenCanvas.h>

#import <VectorKit/VKInteractiveMap-Protocol.h>
#import <VectorKit/VKMapModelDelegate-Protocol.h>
#import <VectorKit/VKOverlayContainerRouteDelegate-Protocol.h>

@class GEOMapRegion, GEOResourceManifestConfiguration, NSArray, NSString, VKAnchorWrapper, VKCamera, VKMapCameraController, VKMapModel, VKPolylineOverlayPainter;
@protocol GEORoutePreloadSession, VKInteractiveMapDelegate, VKRouteMatchedAnnotationPresentation, VKTrackableAnnotation;

__attribute__((visibility("hidden")))
@interface VKMapCanvas : VKScreenCanvas <VKMapModelDelegate, VKOverlayContainerRouteDelegate, VKInteractiveMap>
{
    VKMapModel *_map;
    VKMapCameraController *_cameraController;
    id <VKInteractiveMapDelegate> _delegate;
    struct CGSize _lastCanvasSize;
    VKCamera *_defaultTrackingCamera;
    float _lastValidCanvasSizeZoomLevel;
    _Bool _hasLastValidCanvasSizeZoomLevel;
}

+ (_Bool)supportsMapType:(long long)arg1 scale:(int)arg2 manifestConfiguration:(id)arg3;
@property(retain, nonatomic) VKCamera *defaultTrackingCamera; // @synthesize defaultTrackingCamera=_defaultTrackingCamera;
@property(nonatomic) id <VKInteractiveMapDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) VKMapModel *map; // @synthesize map=_map;
- (shared_ptr_3fff3c66)stylesheet;
- (shared_ptr_750cb28c)styleAtScreenPoint:(struct CGPoint)arg1;
- (shared_ptr_750cb28c)styleForFeature:(id)arg1;
- (id)roadMarkersForSelectionAtScreenPoint:(struct CGPoint)arg1;
- (id)featureMarkerAtScreenPoint:(struct CGPoint)arg1;
- (id)buildingMarkerAtScreenPoint:(struct CGPoint)arg1;
- (void)setApplicationState:(unsigned char)arg1;
- (void)overlayContainer:(id)arg1 updatedMatchedSection:(fast_shared_ptr_502c59d0)arg2 index:(struct PolylineCoordinate *)arg3;
- (void)edgeInsetsDidEndAnimating;
- (void)edgeInsetsWillBeginAnimating;
- (void)removeExternalAnchor:(id)arg1;
- (void)addExternalAnchor:(id)arg1;
@property(readonly, nonatomic) VKAnchorWrapper *externalAnchors;
- (void)setCameraHorizontalOffset:(double)arg1 duration:(double)arg2 timingFunction:(id)arg3;
@property(nonatomic) double userZoomFocusStyleMaxGroundspanMeters;
@property(nonatomic) double userZoomFocusStyleMinGroundspanMeters;
@property(nonatomic) double userZoomFocusStyleGroundspanMeters;
@property(nonatomic) id <VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(struct VKPoint)arg2;
- (void)puckAnimatorDidStop:(id)arg1;
- (void)puckAnimator:(id)arg1 updatedPosition:(CDStruct_b926a728 *)arg2;
@property(nonatomic) _Bool debugDynamicMapModesEnabled;
- (void)clearScene;
- (id)closestRoadMarkerForSelectionAtPoint:(struct CGPoint)arg1;
- (void)debugHighlightLabelAtPoint:(struct CGPoint)arg1;
- (void)goToTileX:(int)arg1 Y:(int)arg2 Z:(int)arg3 tileSize:(int)arg4;
- (void)mapModelDidUpdateMinMaxZoomLevel:(id)arg1;
- (void)mapModelDidReloadStylesheet:(id)arg1;
- (void)mapModel:(id)arg1 didUpdateContainsOverlay:(_Bool)arg2;
- (void)mapModel:(id)arg1 didUpdateNavigationPuckSize:(float)arg2;
- (void)mapModelLabelsDidLayout:(id)arg1;
- (void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
- (double)mapModelZoomScale:(id)arg1;
- (_Bool)mapModelInNav:(id)arg1;
- (_Bool)mapModelInNavAtDefaultZoom:(id)arg1;
- (void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapModelDidFinishLoadingTiles:(id)arg1;
- (void)mapModelDidStartLoadingTiles:(id)arg1;
- (void)mapModelDidBecomePartiallyDrawn:(id)arg1;
- (void)mapModelDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(_Bool)arg2;
- (void)mapModelWillBecomeFullyDrawn:(id)arg1;
- (id)mapModel:(id)arg1 painterForOverlay:(id)arg2;
- (void)mapModel:(id)arg1 needsPanByOffset:(struct CGPoint)arg2 relativeToScreenPoint:(struct CGPoint)arg3 animated:(_Bool)arg4 duration:(double)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)mapModel:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
- (_Bool)currentZoomLevelAllowsRotation;
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
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
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)zoomToLevel:(double)arg1 withFocusPoint:(struct CGPoint)arg2;
- (_Bool)trackingCanZoomOut;
- (_Bool)trackingCanZoomIn;
- (void)cameraController:(id)arg1 canZoomOutDidChange:(_Bool)arg2;
- (void)cameraController:(id)arg1 canZoomInDidChange:(_Bool)arg2;
- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(_Bool)arg2;
- (void)cameraController:(id)arg1 didBecomePitched:(_Bool)arg2;
- (void)cameraControllerDidFinishInitialTrackingAnimation:(id)arg1;
- (void)cameraController:(id)arg1 didChangeRegionAnimated:(_Bool)arg2;
- (void)cameraController:(id)arg1 willChangeRegionAnimated:(_Bool)arg2;
- (void)cameraControllerDidChangeCameraState:(id)arg1;
@property(nonatomic) _Bool showsBuildings;
@property(nonatomic) _Bool showsPointsOfInterest;
@property(nonatomic) long long shieldIdiom;
@property(nonatomic) long long navigationShieldSize;
@property(nonatomic) long long shieldSize;
- (id)boundsForSelectedTransitLines;
- (void)deselectTransitLineMarker;
- (void)selectTransitLineMarker:(id)arg1;
- (id)selectedTransitLineIDs;
- (id)transitLineMarkersForSelectionAtPoint:(struct CGPoint)arg1;
- (id)transitLineMarkersInCurrentViewport;
@property(nonatomic) _Bool labelMarkerSelectionEnabled;
- (void)deselectLabelMarker;
- (void)selectLabelMarker:(id)arg1;
- (id)labelMarkerForSelectionAtPoint:(struct CGPoint)arg1 selectableLabelsOnly:(_Bool)arg2;
- (id)annotationMarkerForSelectionAtPoint:(struct CGPoint)arg1 avoidCurrent:(_Bool)arg2;
- (struct VKPoint)screenPointForPoint:(struct CGPoint)arg1;
@property(retain, nonatomic) NSArray *externalTrafficIncidents;
- (_Bool)shouldHideOffscreenSelectedAnnotation;
- (CDUnknownBlockType)annotationCoordinateTest;
- (CDUnknownBlockType)annotationRectTest;
- (CDUnknownBlockType)annotationMarkerDeselectionCallback;
- (id)selectedAnnotationMarker;
- (id)labelMarkers;
- (id)annotationMarkers;
- (void)setAnnotationMarkerDeselectionCallback:(CDUnknownBlockType)arg1;
- (void)deselectAnnotationMarker:(id)arg1;
- (void)selectAnnotationMarker:(id)arg1;
- (void)removeAnnotationMarker:(id)arg1;
- (void)addAnnotationMarker:(id)arg1 allowAnimation:(_Bool)arg2;
- (_Bool)restoreViewportFromInfo:(id)arg1;
- (id)viewportInfo;
@property(retain, nonatomic) id <GEORoutePreloadSession> routePreloadSession;
- (void)preloadNavigationSceneResourcesWithDevice:(const shared_ptr_807ec9ac *)arg1;
@property(retain, nonatomic) VKPolylineOverlayPainter *focusedLabelsPolylinePainter;
- (void)setRouteContext:(id)arg1;
- (void)setCurrentLocationText:(id)arg1;
@property(nonatomic) struct PolylineCoordinate routeUserOffset;
@property(readonly, nonatomic) NSArray *rasterOverlays;
- (void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)removeRasterOverlay:(id)arg1;
- (void)addRasterOverlay:(id)arg1;
- (void)removePersistentOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (id)persistentOverlays;
- (id)overlays;
- (void)removeOverlay:(id)arg1;
- (void)addOverlay:(id)arg1;
- (id)selectedLabelMarker;
- (id)navTileSource;
- (void)setTracePlaybackSpeedMultiplier:(double)arg1;
@property(readonly, nonatomic, getter=isTrackingHeading) _Bool trackingHeading;
@property(readonly, nonatomic) id <VKTrackableAnnotation> trackingAnnotation;
@property(readonly, nonatomic, getter=isAnimatingToTrackAnnotation) _Bool animatingToTrackAnnotation;
- (void)stopTrackingAnnotation;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3;
@property(nonatomic) long long annotationTrackingHeadingAnimationDisplayRate;
@property(nonatomic) long long annotationTrackingZoomStyle;
@property(nonatomic) double trackingZoomScale;
- (void)cameraController:(id)arg1 pouncingToCameraPosition:(struct VKPoint)arg2 orientation:(const CDStruct_aa5aacbc *)arg3;
@property(nonatomic) int trackingCameraPanStyle;
- (void)setShouldLimitTrackingCameraHeight:(_Bool)arg1;
- (void)didBeginTransitionToTransit;
- (void)transitionToTracking:(_Bool)arg1 mapMode:(long long)arg2 pounceCompletionHandler:(CDUnknownBlockType)arg3;
- (void)pauseTracking;
- (void)stopTracking;
- (void)updateCameraContext:(id)arg1;
- (struct CGPoint)convertCoordinateToCameraModelPoint:(CDStruct_c3b9c2ee)arg1;
- (struct CGPoint)convertCoordinateToPoint:(CDStruct_c3b9c2ee)arg1;
- (struct CGPoint)convertMapPointToPoint:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)convertPointToCoordinate:(struct CGPoint)arg1;
- (CDStruct_c3b9c2ee)convertPointToMapPoint:(struct CGPoint)arg1;
- (void)updateCameraForFrameResize;
- (void)forceSceneLoad;
- (void)gglWillDrawWithTimestamp;
- (void)_updateViewTransform;
- (_Bool)currentSceneRequiresMSAA;
- (id)consoleString:(_Bool)arg1;
- (struct VKEdgeInsets)edgeInsets;
- (void)setEdgeInsets:(struct VKEdgeInsets)arg1;
- (id)detailedDescription;
- (void)dealloc;
- (void)clearSceneIsEffectivelyHidden:(_Bool)arg1;
- (void)setHidden:(_Bool)arg1;
- (id)initShouldRasterize:(_Bool)arg1 contentScale:(double)arg2 target:(id)arg3 device:(const shared_ptr_807ec9ac *)arg4 inBackground:(_Bool)arg5 manifestConfiguration:(id)arg6 locale:(id)arg7;
- (void)setCanonicalSkyHeight:(double)arg1;
- (_Bool)canEnter3DMode;
@property(readonly, nonatomic, getter=isFullyPitched) _Bool fullyPitched;
@property(readonly, nonatomic, getter=isPitched) _Bool pitched;
- (void)exit3DMode;
- (void)enter3DMode;
- (void)resetTileContainers;
- (void)transferCamera:(id)arg1;
- (struct CGPoint)_centerScreenPoint;
@property(nonatomic) _Bool allowDatelineWraparound;
@property(readonly, nonatomic) double altitude;
@property(nonatomic) CDStruct_071ac149 centerCoordinate;
- (void)setCenterCoordinate:(CDStruct_071ac149)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) GEOMapRegion *mapRegionOfInterest;
@property(retain, nonatomic) GEOMapRegion *mapRegion;
- (void)setCenterCoordinate3D:(CDStruct_071ac149)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;
- (void)stopRegionAnimation;
@property(readonly, nonatomic) double yaw;
@property(readonly, nonatomic) double presentationYaw;
@property(readonly, nonatomic) double pitch;
@property(nonatomic) _Bool shouldLoadMapMargin;
@property(nonatomic) _Bool shouldLoadFallbackTiles;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(_Bool)arg4;
- (void)setMapRegion:(id)arg1 animated:(_Bool)arg2;
- (void)setVehicleState:(struct VehicleState)arg1;
- (struct VehicleState)vehicleState;
- (void)setTargetDisplay:(unsigned char)arg1;
- (unsigned char)targetDisplay;
- (void)setContentsScale:(double)arg1;
- (void)reloadStylesheet;
- (void)setStylesheetName:(const basic_string_a1f69cfb *)arg1;
@property(nonatomic) shared_ptr_f06afc6c styleManager;
@property(nonatomic) _Bool dynamicMapModesEnabled;
- (void)setDesiredMapMode:(long long)arg1 immediate:(_Bool)arg2;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;
- (double)maximumZoomLevelForTileSize:(long long)arg1;
@property(readonly, nonatomic) double maximumZoomLevel;
- (double)minimumZoomLevelForTileSize:(long long)arg1;
@property(readonly, nonatomic) double minimumZoomLevel;
- (double)topDownMinimumZoomLevelForTileSize:(long long)arg1;
- (double)currentZoomLevelForTileSize:(long long)arg1;
- (double)currentZoomLevel;
- (_Bool)canZoomOutForTileSize:(long long)arg1;
- (_Bool)canZoomInForTileSize:(long long)arg1;
- (void)_setStyleTransitionProgress:(double)arg1 targetStyle:(struct DisplayStyle)arg2 step:(long long)arg3;
- (double)_styleTransitionProgress;
- (void)setStylesheetMapDisplayStyle:(struct DisplayStyle)arg1;
- (struct DisplayStyle)sourceMapDisplayStyle;
- (_Bool)supportsMapDisplayStyle:(struct DisplayStyle)arg1;
- (void)stylesheetAnimationDidEnd:(_Bool)arg1;
- (void)stylesheetAnimationDidProgress:(float)arg1;
- (void)stylesheetAnimationWillStartFromStyle:(struct DisplayStyle)arg1 toStyle:(struct DisplayStyle)arg2;
- (void)endStyleAnimationGroup;
- (void)beginStyleAnimationGroup;
- (void)requestStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(struct DisplayStyle)arg2 setupHandler:(CDUnknownBlockType)arg3;
@property(nonatomic) long long mapType;
- (void)setNeedsDisplay;
- (void)setMapType:(long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool staysCenteredDuringRotation;
@property(retain, nonatomic) GEOResourceManifestConfiguration *additionalManifestConfiguration;
@property(nonatomic) _Bool isPitchable;
@property(nonatomic) _Bool staysCenteredDuringPinch;
@property(nonatomic) unsigned char labelScaleFactor;
@property(nonatomic) _Bool localizeLabels;
@property(readonly, nonatomic, getter=isFullyDrawn) _Bool fullyDrawn;
@property(nonatomic) _Bool trafficIncidentsEnabled;
@property(nonatomic) _Bool trafficEnabled;
- (_Bool)isShowingNoDataPlaceholders;
- (id)attributionsForCurrentRegion;
@property(readonly, nonatomic) NSArray *visibleTileSets;
- (void)resetRenderQueue:(shared_ptr_06328420)arg1;
- (void)_resetMaximumZoomLevel;
- (void)_setMaximumZoomLevel:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

