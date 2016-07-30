//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKModelObject.h>

#import <VectorKit/GEOExperimentConfigurationObserver-Protocol.h>
#import <VectorKit/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <VectorKit/VKLabelModelDelegate-Protocol.h>
#import <VectorKit/VKOverlayContainerDelegate-Protocol.h>
#import <VectorKit/VKPolylineGroupOverlayObserver-Protocol.h>
#import <VectorKit/VKPolylineOverlayRouteRibbonObserver-Protocol.h>
#import <VectorKit/VKTileProviderClient-Protocol.h>

@class GEOFeatureStyleAttributes, GEOResourceManifestConfiguration, NSArray, NSLocale, NSMapTable, NSMutableArray, NSMutableSet, NSSet, NSString, VKAnnotationMarker, VKAnnotationModel, VKBuildingFootprintMapModel, VKDebugModel, VKGridModel, VKHybridRasterMapModel, VKLabelMarker, VKLabelModel, VKMapRasterizer, VKMercatorTerrainHeightCache, VKOverlayContainerModel, VKPolygonMapModel, VKPolylineOverlay, VKPolylineOverlayPainter, VKRasterMapModel, VKRasterOverlayMapModel, VKRasterOverlayTileSource, VKRealisticMapModel, VKRiverMapModel, VKRoadMapModel, VKRoadTrafficMapModel, VKSelectedTransitLineMapModel, VKSharedResources, VKSkyModel, VKTileProvider, VKTimedAnimation, VKTrafficTileSource, VKTransitLineMapModel;
@protocol GEORoutePreloadSession, VKMapModeObserver, VKMapModelDelegate, VKOverlayContainerRouteDelegate, VKRouteMatchedAnnotationPresentation;

__attribute__((visibility("hidden")))
@interface VKMapModel : VKModelObject <VKOverlayContainerDelegate, VKLabelModelDelegate, GEOResourceManifestTileGroupObserver, VKPolylineOverlayRouteRibbonObserver, GEOExperimentConfigurationObserver, VKTileProviderClient, VKPolylineGroupOverlayObserver>
{
    unsigned long long _mapPurpose;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
    long long _tileSize;
    VKTileProvider *_tileProviders[4];
    VKTileProvider *_rasterOverlayProvider[2];
    long long _mapMode;
    long long _desiredMapMode;
    _Bool _transitioningToNav;
    _Bool _isTransitioningToTransit;
    GEOResourceManifestConfiguration *_additionalManifestConfiguration;
    _Bool _activeMapLayers[4][34];
    NSMapTable *_layerToSourceMaps[4];
    VKTrafficTileSource *_trafficSource;
    VKRasterOverlayTileSource *_rasterOverlayTileSource[2];
    VKGridModel *_gridModel;
    VKSkyModel *_skyModel;
    VKLabelModel *_labelModel;
    VKRasterMapModel *_rasterModel;
    VKHybridRasterMapModel *_hybridRasterModel;
    VKRasterMapModel *_standardRasterModel;
    VKRiverMapModel *_riverLineModel;
    VKPolygonMapModel *_polygonModel;
    VKRoadMapModel *_roadModel;
    VKRoadMapModel *_hybridRoadModel;
    VKRoadTrafficMapModel *_roadTrafficModel;
    VKRealisticMapModel *_realisticModel;
    VKBuildingFootprintMapModel *_buildingFootprintModel;
    VKAnnotationModel *_annotationModel;
    VKOverlayContainerModel *_overlayContainerModel;
    VKRasterOverlayMapModel *_rasterOverlayModel[2];
    VKDebugModel *_debugModel;
    NSMapTable *_tileSources;
    NSMutableArray *_drawOrder;
    NSMutableArray *_mapLayerSubmodels;
    NSMutableArray *_mapTileSubmodels;
    shared_ptr_f06afc6c _activeStyleManager;
    shared_ptr_f06afc6c _defaultStyleManager;
    shared_ptr_f06afc6c _hybridStyleManager;
    shared_ptr_f06afc6c _satelliteStyleManager;
    shared_ptr_f06afc6c _realisticStyleManager;
    double _zoomLevel;
    long long _mapType;
    id <VKMapModelDelegate> _delegate;
    id <GEORoutePreloadSession> _routePreloadSession;
    _Bool _dynamicMapModesEnabled;
    _Bool _debugDynamicMapModesEnabled;
    _Bool _buildingsAreVisible;
    _Bool _showsBuildings;
    _Bool _fullyDrawn;
    _Bool _shouldNotifyFullyDrawn;
    _Bool _hasFailedTile;
    _Bool _trafficEnabled;
    _Bool _trafficIncidentsEnabled;
    _Bool _shouldRasterize;
    long long _loadingCount;
    double _contentScale;
    unsigned char _targetDisplay;
    struct VehicleState _vehicleState;
    double _lodBias;
    _Bool _disableRoads;
    _Bool _disableLabels;
    _Bool _disablePolygons;
    _Bool _disableBuildingFootprints;
    _Bool _disableRasters;
    _Bool _disableGrid;
    Matrix_5173352a _clearColor;
    VKMapRasterizer *_rasterizer;
    VKRasterMapModel *_rasterViewer;
    int _annotationMarkerStyle;
    _Bool _limitingNavCameraHeight;
    NSMutableSet *_blockingStylesheetObservers;
    double _styleTransitionProgress;
    NSMutableArray *_externalAnchors;
    double _forcedMaxZoomLevel;
    VKTransitLineMapModel *_transitLineModel;
    VKSelectedTransitLineMapModel *_selectedTransitLineModel;
    _Bool _disableTransitLines;
    VKTimedAnimation *_modeTransitionAnimation;
    _Bool _disableRoadClass[9];
    id <VKMapModeObserver> _mapModeObserver;
    VKSharedResources *_sharedResources;
    shared_ptr_887a193f _dataOverrideManager;
    float _navigationPuckSize;
    struct ClearItem _clearItem;
    GEOFeatureStyleAttributes *_mapFeatureStyleAttributes;
    shared_ptr_b80d91ee _styleQuery;
    int _metroArea;
    _Bool _forceMapDrawStyleUpdate;
    NSMutableSet *_polylineOverlays;
    VKPolylineOverlay *_selectedPolyline;
}

+ (unsigned long long)numberOfRoadClasses;
+ (const char *)nameForRoadClass:(int)arg1;
@property(nonatomic) _Bool disableTransitLines; // @synthesize disableTransitLines=_disableTransitLines;
@property(nonatomic) _Bool limitingNavCameraHeight; // @synthesize limitingNavCameraHeight=_limitingNavCameraHeight;
@property(readonly, nonatomic) _Bool shouldRasterize; // @synthesize shouldRasterize=_shouldRasterize;
@property(nonatomic) float navigationPuckSize; // @synthesize navigationPuckSize=_navigationPuckSize;
@property(readonly, nonatomic) GEOResourceManifestConfiguration *manifestConfiguration; // @synthesize manifestConfiguration=_manifestConfiguration;
@property(retain, nonatomic) GEOResourceManifestConfiguration *additionalManifestConfiguration; // @synthesize additionalManifestConfiguration=_additionalManifestConfiguration;
@property(readonly, nonatomic) VKSharedResources *sharedResources; // @synthesize sharedResources=_sharedResources;
@property(nonatomic) _Bool showsBuildings; // @synthesize showsBuildings=_showsBuildings;
@property(nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
@property(nonatomic, getter=isTrafficIncidentsEnabled) _Bool trafficIncidentsEnabled; // @synthesize trafficIncidentsEnabled=_trafficIncidentsEnabled;
@property(nonatomic, getter=isTrafficEnabled) _Bool trafficEnabled; // @synthesize trafficEnabled=_trafficEnabled;
@property(readonly, nonatomic) _Bool buildingsAreVisible; // @synthesize buildingsAreVisible=_buildingsAreVisible;
@property(nonatomic) _Bool debugDynamicMapModesEnabled; // @synthesize debugDynamicMapModesEnabled=_debugDynamicMapModesEnabled;
@property(nonatomic) _Bool dynamicMapModesEnabled; // @synthesize dynamicMapModesEnabled=_dynamicMapModesEnabled;
@property(nonatomic) shared_ptr_f06afc6c styleManager; // @synthesize styleManager=_activeStyleManager;
@property(nonatomic) id <VKMapModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) VKBuildingFootprintMapModel *buildingFootprintModel; // @synthesize buildingFootprintModel=_buildingFootprintModel;
@property(readonly, nonatomic) long long currentMapMode; // @synthesize currentMapMode=_mapMode;
@property(nonatomic) long long mapType; // @synthesize mapType=_mapType;
@property(nonatomic) Matrix_5173352a clearColor; // @synthesize clearColor=_clearColor;
@property(nonatomic) _Bool disableGrid; // @synthesize disableGrid=_disableGrid;
@property(nonatomic) _Bool disableRasters; // @synthesize disableRasters=_disableRasters;
@property(nonatomic) _Bool disableBuildingFootprints; // @synthesize disableBuildingFootprints=_disableBuildingFootprints;
@property(nonatomic) _Bool disablePolygons; // @synthesize disablePolygons=_disablePolygons;
@property(nonatomic) _Bool disableLabels; // @synthesize disableLabels=_disableLabels;
@property(nonatomic) _Bool disableRoads; // @synthesize disableRoads=_disableRoads;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)featureMarkerAtScreenPoint:(struct CGPoint)arg1 groundPoint:(struct VKPoint)arg2;
- (id)buildingMarkerAtScreenPoint:(struct CGPoint)arg1 groundPoint:(struct VKPoint)arg2;
- (void)setApplicationState:(unsigned char)arg1;
- (void)polylineOverlay:(id)arg1 didUpdateRouteRibbon:(id)arg2;
- (void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2;
- (void)resetTileContainers;
- (id)labelDebugString;
- (void)debugHighlightLabelAtScreenPoint:(struct CGPoint)arg1 viewTransform:(id)arg2;
- (void)removeExternalAnchor:(id)arg1;
- (void)addExternalAnchor:(id)arg1;
- (id)externalAnchors;
@property(retain, nonatomic) id <GEORoutePreloadSession> routePreloadSession;
@property(nonatomic) id <VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation;
@property(retain, nonatomic) VKPolylineOverlayPainter *focusedLabelsPolylinePainter;
- (void)setRouteContext:(id)arg1;
- (void)setCurrentLocationText:(id)arg1;
@property(nonatomic) struct PolylineCoordinate routeUserOffset;
- (void)labelModelDidLayoutLabels:(id)arg1;
- (void)labelModel:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
- (id)labelModel:(id)arg1 mapTileForTile:(id)arg2 layer:(unsigned long long)arg3;
- (void)_updateOverlayTileSource;
- (id)overlayContainer:(id)arg1 roadTileForTile:(id)arg2;
- (void)overlayContainer:(id)arg1 showingRouteInStandardModeDidChange:(_Bool)arg2;
- (_Bool)overlayContainerIsInTransitMode:(id)arg1;
- (_Bool)overlayContainerIsInRealisticMode:(id)arg1;
- (id)overlayContainer:(id)arg1 painterForOverlay:(id)arg2;
- (void)removePersistentOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
@property(readonly, nonatomic) NSSet *persistentOverlays;
@property(readonly, nonatomic) NSArray *overlays;
- (void)removeOverlay:(id)arg1;
- (void)addOverlay:(id)arg1;
@property(readonly, nonatomic) NSArray *rasterOverlays;
- (void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)removeRasterOverlay:(id)arg1;
- (void)addRasterOverlay:(id)arg1;
- (void)_updateRasterOverlayZoomOverride;
- (void)_updateTileExclusionAreas;
- (id)_rasterOverlayTileSourceForLevel:(unsigned long long)arg1;
- (id)boundsForSelectedTransitLines;
@property(readonly, nonatomic) VKAnnotationMarker *selectedAnnotationMarker;
- (void)deselectTransitLineMarker;
- (void)selectTransitLineMarker:(id)arg1;
- (id)selectedTransitLineIDs;
- (id)transitLineMarkersForSelectionAtPoint:(struct CGPoint)arg1;
- (id)transitLineMarkersInCurrentViewport;
@property(nonatomic) _Bool labelMarkerSelectionEnabled;
@property(readonly, nonatomic) VKLabelMarker *selectedLabelMarker;
- (void)deselectLabelMarker;
- (void)selectLabelMarker:(id)arg1;
- (id)labelMarkers;
- (id)labelMarkerForSelectionAtPoint:(struct CGPoint)arg1 selectableLabelsOnly:(_Bool)arg2;
- (id)closestRoadMarkerForSelectionAtPoint:(struct CGPoint)arg1;
- (id)roadMarkersForSelectionAtPoint:(struct CGPoint)arg1;
- (id)roadMarkerForSelectionAtPoint:(struct CGPoint)arg1;
- (id)annotationMarkerForSelectionAtPoint:(struct VKPoint)arg1 avoidCurrent:(_Bool)arg2 canvasSize:(struct CGSize)arg3;
- (CDUnknownBlockType)annotationCoordinateTest;
- (CDUnknownBlockType)annotationRectTest;
- (CDUnknownBlockType)annotationMarkerDeselectionCallback;
- (void)setAnnotationMarkerDeselectionCallback:(CDUnknownBlockType)arg1;
- (void)deselectAnnotationMarker:(id)arg1;
- (void)selectAnnotationMarker:(id)arg1;
- (void)removeAnnotationMarker:(id)arg1;
- (void)addAnnotationMarker:(id)arg1 allowAnimation:(_Bool)arg2;
- (id)annotationMarkers;
- (void)addSubmodel:(id)arg1;
@property(readonly, nonatomic) _Bool isFullyDrawn;
- (void)didStopLoadingTilesWithError:(id)arg1;
- (void)willStartLoadingTiles;
- (void)buildingsDidBecome3D:(_Bool)arg1;
- (void)reserveStencilRangeForBuildingsForScene:(id)arg1 context:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)reserveStencilRangeForRoadsForScene:(id)arg1 context:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)updateRasterOverlayProviders:(id)arg1 withContext:(id)arg2;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (double)northYawAtZoom:(int)arg1;
- (void)updateMapDrawStyleWithContext:(id)arg1;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (void)tileProviderNeedsUpdate:(id)arg1;
- (_Bool)tileProviderMayUseNetwork:(id)arg1;
- (void)_transitionFromMode:(long long)arg1 toMode:(long long)arg2 animated:(_Bool)arg3;
- (void)_updateZoomLevel:(id)arg1;
- (double)maxTileHeightAtPoint:(struct VKPoint)arg1;
- (double)heightAtPoint:(struct VKPoint)arg1;
- (long long)maximumZoomLevelInView:(id)arg1;
- (long long)minimumZoomLevelInView:(id)arg1;
- (long long)tileSize;
- (void)_forceLayout;
- (void)_localeChanged:(id)arg1;
- (void)shouldFlushCaches:(id)arg1;
- (void)cancelTileRequests;
- (void)flushCaches:(_Bool)arg1;
- (void)clearScene;
- (void)didTapZoom;
- (void)willTapZoom;
- (_Bool)isShowingNoDataPlaceholders;
@property(retain, nonatomic) NSArray *externalTrafficIncidents;
- (id)attributionsForCurrentRegion;
@property(readonly, nonatomic) NSArray *visibleTileSets;
- (void)didReceiveMemoryWarning:(_Bool)arg1;
- (void)dealloc;
- (id)initShouldRasterize:(_Bool)arg1 mapPurpose:(unsigned long long)arg2 manifestConfiguration:(id)arg3 locale:(id)arg4 contentScale:(double)arg5;
- (void)experimentConfigurationDidChange:(id)arg1;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)createTrafficTileSourceIfNecessary:(id)arg1;
- (id)navTileSource;
@property(nonatomic) struct VehicleState vehicleState;
@property(nonatomic) unsigned char targetDisplay;
@property(nonatomic) double lodBias;
- (void)reloadStylesheet;
- (void)setStyleManager:(shared_ptr_f06afc6c)arg1 forRealistic:(_Bool)arg2;
- (void)performstylesheetDidReload;
- (void)performStylesheetDoneChanging;
- (void)performStylesheetDidChange;
- (void)performStylesheetTransitionDidProgress;
- (void)performStylesheetWillTransitionToDisplayStyle:(struct DisplayStyle)arg1;
- (void)_setStyleManagerFromMapType:(long long)arg1;
- (void)sizeDidChange:(struct CGSize)arg1;
- (void)_tryTransitionAndPreloadIfNecessary:(id)arg1;
- (float)_tileSelectionScaleForContext:(id)arg1;
- (void)_mapConfigurationDidChange;
- (void)_updateRegularTileProviderMode;
- (void)didEndTransitionToTransit;
- (void)didBeginTransitionToTransit;
- (void)didEndNavigation;
- (void)didBeginTransitionToNavigation;
- (void)gatherNavigationRenderingPreloadItems:(vector_b35310ee *)arg1;
@property(nonatomic) _Bool showsPointsOfInterest;
@property(nonatomic) long long shieldIdiom;
@property(nonatomic) long long navigationShieldSize;
@property(nonatomic) long long shieldSize;
- (id)detailedDescription;
- (void)_setStyleTransitionProgress:(double)arg1 targetStyle:(struct DisplayStyle)arg2 step:(long long)arg3;
- (double)_styleTransitionProgress;
- (void)setStylesheetMapDisplayStyle:(struct DisplayStyle)arg1;
- (void)stylesheetAnimationDidEnd:(_Bool)arg1;
- (void)stylesheetAnimationDidProgress:(float)arg1;
- (void)stylesheetAnimationWillStartFromStyle:(struct DisplayStyle)arg1 toStyle:(struct DisplayStyle)arg2;
- (void)startStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(struct DisplayStyle)arg2;
- (void)endStyleAnimationGroup;
- (void)beginStyleAnimationGroup;
- (void)requestStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(struct DisplayStyle)arg2 setupHandler:(CDUnknownBlockType)arg3;
- (void)finishStyleBlend;
- (struct DisplayStyle)sourceMapDisplayStyle;
- (_Bool)supportsMapDisplayStyle:(struct DisplayStyle)arg1;
- (void)updateOverlayType;
- (void)setMapType:(long long)arg1 animated:(_Bool)arg2;
- (void)_transitFadeOutCompletionCallback;
- (void)forceMapType:(long long)arg1 animated:(_Bool)arg2;
- (long long)buildingsMapMode;
- (void)configureTileSources;
- (void)_deactivateModel:(id)arg1;
- (void)_activateModel:(id)arg1;
- (id)sourceForLayer:(unsigned long long)arg1 mode:(long long)arg2;
- (id)tileSetForMapLayer:(unsigned long long)arg1 tileGroup:(id)arg2;
- (id)createSourceForLayer:(unsigned long long)arg1 tileSet:(id)arg2 mode:(long long)arg3;
- (int)tileStyleForMapLayer:(unsigned long long)arg1;
@property(nonatomic) unsigned char labelScaleFactor;
@property(nonatomic) _Bool localizeLabels;
- (float)ppi;
- (void)setDesiredMapMode:(long long)arg1 immediate:(_Bool)arg2;
@property(nonatomic) _Bool disableRealisticLand;
@property(nonatomic) _Bool disableRealisticRoads;
@property(readonly, nonatomic) VKMercatorTerrainHeightCache *terrainHeightCache;
- (_Bool)isRoadClassDisabled:(int)arg1;
- (void)disableRoadClass:(_Bool)arg1 withRoadClass:(int)arg2;
@property(readonly, nonatomic) VKTileProvider *tileProvider;
- (void)foreachActiveLayer:(CDUnknownBlockType)arg1;
@property(nonatomic) unsigned long long neighborMode;
@property(nonatomic) _Bool shouldLoadFallbackTiles;
@property(nonatomic) id <VKOverlayContainerRouteDelegate> overlayContainerRouteDelegate;
- (void)_resetMaximumZoomLevel;
- (void)_setMaximumZoomLevel:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
