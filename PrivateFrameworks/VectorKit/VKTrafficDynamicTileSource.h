//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKTileSetBackedTileSource.h>

@class VKTileCache;

__attribute__((visibility("hidden")))
@interface VKTrafficDynamicTileSource : VKTileSetBackedTileSource
{
    VKTileCache *_recentTrafficDynamicTiles;
}

- (void)fetchTileForKey:(const struct VKTileKey *)arg1;
- (id)sourceKeysForRenderKey:(const struct VKTileKey *)arg1;
- (struct _GEOTileKey)downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (_Bool)minimumZoomLevelBoundsCamera;
- (_Bool)maximumZoomLevelBoundsCamera;
- (unsigned long long)mapLayerForZoomLevelRange;
- (long long)defaultMaximumZoomLevel;
- (long long)defaultMinimumZoomLevel;
- (void)didLoadTile:(id)arg1 forKey:(const struct VKTileKey *)arg2;
- (void)clearCaches;
- (void)dealloc;
- (id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3;

@end

