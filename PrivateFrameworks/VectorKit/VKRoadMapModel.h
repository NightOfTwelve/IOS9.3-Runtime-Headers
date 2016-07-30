//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKVectorMapModel.h>

#import <VectorKit/VKStyleManagerObserver-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKRoadMapModel : VKVectorMapModel <VKStyleManagerObserver>
{
    struct unique_ptr<vk::RoadManager, std::__1::default_delete<vk::RoadManager>> _roadManager;
    struct unique_ptr<vk::PatternedManager, std::__1::default_delete<vk::PatternedManager>> _patternedRibbonManager;
    int _sourceTileZtoStencilOffset;
    int _extraStencil;
    struct ClearItem *_clearItem;
    double _layoutTimestamp;
    unsigned long long _mapLayerPosition;
}

@property(readonly, nonatomic) double layoutTimestamp; // @synthesize layoutTimestamp=_layoutTimestamp;
@property(nonatomic) unsigned long long mapLayerPosition; // @synthesize mapLayerPosition=_mapLayerPosition;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)featureMarkerInTile:(id)arg1 atPoint:(struct VKPoint *)arg2;
- (void)didReceiveMemoryWarning:(_Bool)arg1;
- (void)stylesheetDidChange;
- (void)dealloc;
- (id)init;
- (unsigned char)commandBufferId;
- (void)reserveStencilRangeForScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) shared_ptr_f06afc6c styleManager;
@property(readonly) Class superclass;

@end

