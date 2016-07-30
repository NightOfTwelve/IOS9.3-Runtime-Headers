//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSCH3DTexturePool;

__attribute__((visibility("hidden")))
@interface TSCH3DChartElementProperties : NSObject <NSCopying>
{
    TSCH3DTexturePool *mPool;
}

+ (id)properties;
@property(readonly, nonatomic) TSCH3DTexturePool *pool; // @synthesize pool=mPool;
- (id)renderingLightingModelForSeries:(id)arg1;
- (_Bool)applyElementTransform:(struct ObjectTransforms *)arg1 series:(id)arg2 index:(const tvec2_3b141483 *)arg3 propertyAccessor:(const struct ChartScenePropertyAccessor *)arg4;
- (float)elementTransformDepthFromPropertyAccessor:(const struct ChartScenePropertyAccessor *)arg1;
- (void)applyChartElementsTransform:(struct ObjectTransforms *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (void)addTexcoordsToProcessor:(id)arg1 series:(id)arg2 index:(const tvec2_3b141483 *)arg3;
- (_Bool)applyCombinedTransform:(struct ObjectTransforms *)arg1 series:(id)arg2 index:(const tvec2_3b141483 *)arg3 propertyAccessor:(const struct ChartScenePropertyAccessor *)arg4;
- (_Bool)applyElementTransformToProcessor:(id)arg1 series:(id)arg2 index:(const tvec2_3b141483 *)arg3 propertyAccessor:(const struct ChartScenePropertyAccessor *)arg4;
- (void)applyChartElementsTransformToProcessor:(id)arg1;
- (id)getPropertiesOfType:(Class)arg1;

@end

