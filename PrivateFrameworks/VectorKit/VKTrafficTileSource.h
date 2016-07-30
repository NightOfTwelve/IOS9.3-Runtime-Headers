//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKTileSetBackedTileSource.h>

#import <VectorKit/VKTileSourceClient-Protocol.h>

@class NSString, VKTileCache, VKTileKeyList, VKTileKeyMap, VKTileSource, VKTrafficDynamicTileSource;

__attribute__((visibility("hidden")))
@interface VKTrafficTileSource : VKTileSetBackedTileSource <VKTileSourceClient>
{
    VKTileKeyList *_building;
    VKTileKeyMap *_pendingTraffic;
    VKTileSource *_roadTileSource;
    VKTrafficDynamicTileSource *_dynamicTileSource;
    VKTileCache *_recentTrafficTiles;
    struct TrafficMeshStyle _trafficMeshStyle;
}

@property(retain, nonatomic) VKTileSource *roadTileSource; // @synthesize roadTileSource=_roadTileSource;
- (id).cxx_construct;
- (void)setSharedResources:(id)arg1;
- (void)didStopLoadingTilesWithError:(id)arg1;
- (void)willStartLoadingTiles;
- (_Bool)tileSource:(id)arg1 keyIsNeeded:(const struct VKTileKey *)arg2;
- (void)dirtyTilesFromTileSource:(id)arg1;
- (void)tileSource:(id)arg1 dirtyTilesWithinRect:(const CDStruct_d2b197d1 *)arg2 level:(long long)arg3;
- (void)invalidateTilesFromTileSource:(id)arg1;
- (void)tileSource:(id)arg1 invalidateTilesWithState:(unsigned long long)arg2;
- (void)tileSource:(id)arg1 invalidateKeys:(id)arg2;
- (void)tileSource:(id)arg1 invalidateKey:(const struct VKTileKey *)arg2;
- (void)tileSource:(id)arg1 didFailToLoadTileForKey:(const struct VKTileKey *)arg2 error:(id)arg3;
- (void)tileSource:(id)arg1 didFailToDecodeTileForKey:(const struct VKTileKey *)arg2;
- (void)tileSource:(id)arg1 didFetchTile:(id)arg2 forKey:(const struct VKTileKey *)arg3;
- (_Bool)tileSourceMayUseNetwork:(id)arg1;
- (void)failedToDecodeSourceKey:(const struct VKTileKey *)arg1;
- (void)fetchedTile:(id)arg1 forKey:(const struct VKTileKey *)arg2;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (void)decodeData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (void)didFailToLoadTileKey:(const struct _GEOTileKey *)arg1 error:(id)arg2;
- (void)fetchTileForKey:(const struct VKTileKey *)arg1;
- (id)tileForKey:(const struct VKTileKey *)arg1;
- (_Bool)canFetchTileForKey:(const struct VKTileKey *)arg1;
- (void)setContentScale:(double)arg1;
- (void)setStyleManager:(shared_ptr_f06afc6c)arg1;
- (_Bool)canFetchTrafficTileForKey:(const struct VKTileKey *)arg1;
- (_Bool)shouldObeyHybridUnavailableRegions;
- (long long)maximumZoomLevel;
- (void)sawTileForKey:(const struct VKTileKey *)arg1;
- (void)_generatedTraffic:(id)arg1;
- (void)populateVisibleTileSets:(id)arg1 withTiles:(id)arg2;
- (void)clearCaches;
- (void)dealloc;
- (id)initWithSkeletonTileSet:(id)arg1 dynamicTileSet:(id)arg2 resourceManifestConfiguration:(id)arg3 locale:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
