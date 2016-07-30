//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DSceneObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartElementSceneObject : TSCH3DSceneObject
{
}

+ (id)resetSeriesStorage:(id)arg1 forSeries:(id)arg2;
+ (_Bool)shouldCreateMeshSeriesStorage;
+ (void)setLowDetailedGeometriesForScene:(id)arg1;
+ (id)scenePropertiesKey;
+ (struct TSCH3DScenePart)partWithEnumerator:(id)arg1 layoutSettings:(CDStruct_9aa9521f)arg2;
+ (_Bool)isHorizontalChart;
- (_Bool)transparencyDepthMask;
- (void)p_processItems:(id)arg1 processItemsClass:(Class)arg2;
- (void)renderSeriesLabelsSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)setTransparencyBlendingForProcessor:(id)arg1;
- (_Bool)shouldDelayForChartOpacity:(float)arg1;
- (float)chartOpacityForScene:(id)arg1;
- (_Bool)p_isRenderPassDelayedForDelegate:(id)arg1;
- (_Bool)applyEffectsForProperties:(id)arg1 series:(id)arg2 index:(const tvec2_3b141483 *)arg3 pipeline:(id)arg4 injectEffectsUsingBlock:(CDUnknownBlockType)arg5;
- (struct ElementRenderPass)render:(const struct RenderElementInfo *)arg1 pushMatrix:(_Bool)arg2 delayedPass:(_Bool)arg3;
- (void)postrenderElement:(const struct RenderElementInfo *)arg1;
- (void)renderElement:(const struct RenderElementInfo *)arg1;
- (void)renderTwoPassGeometry:(_Bool)arg1 processor:(id)arg2 renderBlock:(CDUnknownBlockType)arg3;
- (void)prerenderElement:(const struct RenderElementInfo *)arg1;
- (id)selectionPathForInfo:(id)arg1 scene:(id)arg2 pickedPoint:(id)arg3;
- (void)getSceneObjectElementsBounds:(id)arg1;
- (void)getSelectionKnobsPositions:(id)arg1;
- (void)rayPick:(id)arg1;
- (void)getBounds:(id)arg1;
- (void)render:(id)arg1;
- (_Bool)shouldRenderEachValue;
- (_Bool)shouldRenderSeries:(id)arg1;
- (tvec3_17f03ce0)adjustedScaleForInfoChartScale:(const tvec3_17f03ce0 *)arg1 scene:(id)arg2;
- (float)depthForScene:(id)arg1;
- (void)renderLabelsSceneObject:(id)arg1 pipeline:(id)arg2;
- (tvec2_84d5962d)labelOffset:(unsigned int)arg1 labelSize:(const tvec2_84d5962d *)arg2 textureSize:(const tvec2_84d5962d *)arg3 dataSpaceValue:(float)arg4;
- (tvec2_84d5962d)labelObjectSpacePosition:(unsigned int)arg1 axisValue:(double)arg2 intercept:(double)arg3;
- (void)updateLightingEffectsState:(id)arg1 scene:(id)arg2;
- (struct GeometryResource)geometryForSeries:(id)arg1 index:(const tvec2_3b141483 *)arg2 scene:(id)arg3;
- (id)modelEnumeratorFromScene:(id)arg1;
- (id)elementPropertiesFromScene:(id)arg1;
- (struct TSCH3DScenePart)scenePartForScene:(id)arg1;
- (id)scenePropertiesKey;
- (id)delegateFromScene:(id)arg1;
- (Class)getBounds3DClass;
- (Class)resizer3DClass;

@end
