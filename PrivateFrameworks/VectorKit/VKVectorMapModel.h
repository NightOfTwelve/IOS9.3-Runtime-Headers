//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKMapTileModel.h>

__attribute__((visibility("hidden")))
@interface VKVectorMapModel : VKMapTileModel
{
    _Bool _needsTileStencil;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _stencilState;
    vector_7afb2ddd _defaultStencilItems;
    unsigned int _stencilItemIndex;
}

+ (_Bool)reloadOnActiveTileGroupChange;
+ (_Bool)reloadOnStylesheetChange;
@property(nonatomic) _Bool needsTileStencil; // @synthesize needsTileStencil=_needsTileStencil;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)featureMarkerInTile:(id)arg1 atPoint:(struct VKPoint *)arg2;
- (id)featureMarkerAtPoint:(struct VKPoint)arg1;
- (int)pushStencilItems:(struct CommandBuffer *)arg1 tiles:(id)arg2 minZ:(int)arg3 maxZ:(int)arg4 fullyLoaded:(_Bool)arg5 items:(vector_7afb2ddd *)arg6 layoutContext:(id)arg7 sourceTileOffset:(const int *)arg8;
- (int)pushStencilItems:(struct CommandBuffer *)arg1 tiles:(id)arg2 minZ:(int)arg3 maxZ:(int)arg4 fullyLoaded:(_Bool)arg5 layoutContext:(id)arg6 sourceTileOffset:(const int *)arg7;
- (int)pushStencilItems:(struct CommandBuffer *)arg1 fullyLoaded:(_Bool)arg2 layoutContext:(id)arg3;
- (void)resetStencilState;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)_updateTilesInScene:(id)arg1 context:(id)arg2;
- (void)_layoutScene:(id)arg1 withContext:(id)arg2;
- (_Bool)wantsCategorizedSourceTiles;
- (unsigned long long)mapLayerPosition;
- (id)init;

@end

