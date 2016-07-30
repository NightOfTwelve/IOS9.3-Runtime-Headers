//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKTile.h>

__attribute__((visibility("hidden")))
@interface VKRasterOverlayTile : VKTile
{
    struct unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem>> _renderItem;
    struct Setup _shaderSetup;
    struct shared_ptr<md::RasterOverlayData> _overlayData;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct Texture2D *gglTexture;
- (struct RenderItem *)setupRenderItemWithRenderState:(struct RenderState *)arg1 mesh:(struct Mesh *)arg2;
- (struct CGContext *)drawContext;
- (_Bool)isEmpty;
@property(readonly, nonatomic) struct RenderItem *renderItem;
- (id)initWithKey:(const struct VKTileKey *)arg1 size:(unsigned long long)arg2 scale:(float)arg3;

@end

