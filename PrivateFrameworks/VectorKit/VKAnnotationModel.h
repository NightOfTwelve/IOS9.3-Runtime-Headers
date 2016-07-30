//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKModelObject.h>

#import <VectorKit/VKMapLayer-Protocol.h>
#import <VectorKit/VKStyleManagerObserver-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, NSString, VKAnnotationMarker, VKMapModel;

__attribute__((visibility("hidden")))
@interface VKAnnotationModel : VKModelObject <VKMapLayer, VKStyleManagerObserver>
{
    NSMutableArray *_annotationMarkers;
    VKAnnotationMarker *_selectedAnnotationMarker;
    NSMutableSet *_animatingMarkers;
    NSMutableArray *_markersToAnimate;
    VKAnnotationMarker *_draggingAnnotationMarker;
    _Bool _didDragMarker;
    _Bool _hasEverDrawnSomething;
    CDStruct_e123902a _styleTransitionState;
    CDUnknownBlockType _annotationMarkerDeselectionCallback;
    VKMapModel *_mapModel;
}

+ (_Bool)reloadOnStylesheetChange;
@property(nonatomic) VKMapModel *mapModel; // @synthesize mapModel=_mapModel;
@property(copy, nonatomic) CDUnknownBlockType annotationMarkerDeselectionCallback; // @synthesize annotationMarkerDeselectionCallback=_annotationMarkerDeselectionCallback;
@property(nonatomic) CDStruct_e123902a styleTransitionState; // @synthesize styleTransitionState=_styleTransitionState;
@property(readonly, nonatomic) NSArray *annotationMarkers; // @synthesize annotationMarkers=_annotationMarkers;
- (void)stylesheetDidChange;
@property(readonly, nonatomic) shared_ptr_f06afc6c styleManager;
- (void)deselectAnnotationMarker:(id)arg1;
- (void)selectAnnotationMarker:(id)arg1;
- (id)annotationMarkerForSelectionAtPoint:(struct VKPoint)arg1 avoidCurrent:(_Bool)arg2 canvasSize:(struct CGSize)arg3;
- (void)removeAnnotationMarker:(id)arg1;
- (void)addAnnotationMarker:(id)arg1 allowAnimation:(_Bool)arg2;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (CDUnknownBlockType)annotationCoordinateTest;
- (CDUnknownBlockType)annotationRectTest;
- (void)dealloc;
@property(readonly, nonatomic) _Bool needsLayout;
- (void)anchorPositionChangedForMarker:(id)arg1;
@property(readonly, nonatomic) VKAnnotationMarker *selectedAnnotationMarker;
- (unsigned long long)mapLayerPosition;
- (id)init;
- (_Bool)shouldLayoutWithoutStyleManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
