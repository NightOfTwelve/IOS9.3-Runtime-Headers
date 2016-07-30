//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKVectorTile.h>

@class NSArray, NSMapTable, NSMutableArray, VKAnimation, VKRealisticPolygonMaker;

__attribute__((visibility("hidden")))
@interface VKRealisticTile : VKVectorTile
{
    NSMapTable *_realisticRoadGroupsTable;
    NSMutableArray *_realisticRoadGroups;
    float _roadZ;
    float _laneMarkingZ;
    float _landZ;
    float _waterZ;
    _Bool _shouldBlend;
    float _alpha;
    VKRealisticPolygonMaker *_landPolygonMaker;
    VKRealisticPolygonMaker *_waterPolygonMaker;
    VKAnimation *_startDrawingAnimation;
    map_604bf0d9 _landDrawableIndices;
    map_604bf0d9 _waterDrawableIndices;
    vector_8810021a _landDrawables;
    vector_8810021a _waterDrawables;
    struct shared_ptr<ggl::RealisticCasingFacade::RealisticMesh> _coastlineMesh;
    shared_ptr_b80d91ee _landTextureStyleQuery;
    shared_ptr_479d1306 _defaultLandTexture;
    shared_ptr_479d1306 _defaultLandTextureVariant;
    struct vector<_VKRealisticPolygonMetaData, std::__1::allocator<_VKRealisticPolygonMetaData>> _polygonMetaData;
    shared_ptr_9a8b17b5 _realisticTextureConstantData;
    struct FogInfo _fogInfo;
}

@property(retain, nonatomic) VKAnimation *startDrawingAnimation; // @synthesize startDrawingAnimation=_startDrawingAnimation;
@property(nonatomic) float alpha; // @synthesize alpha=_alpha;
@property(nonatomic) _Bool shouldBlend; // @synthesize shouldBlend=_shouldBlend;
@property(readonly, nonatomic) float waterZ; // @synthesize waterZ=_waterZ;
@property(readonly, nonatomic) float landZ; // @synthesize landZ=_landZ;
@property(readonly, nonatomic) float roadZ; // @synthesize roadZ=_roadZ;
@property(readonly, nonatomic) NSArray *realisticRoadGroups; // @synthesize realisticRoadGroups=_realisticRoadGroups;
@property(readonly, nonatomic) shared_ptr_9a8b17b5 realisticTextureConstantData; // @synthesize realisticTextureConstantData=_realisticTextureConstantData;
@property(readonly, nonatomic) shared_ptr_479d1306 defaultLandTexture; // @synthesize defaultLandTexture=_defaultLandTexture;
- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)vectorType;
- (void)updateViewDependentStateWithContext:(id)arg1;
- (void)updateViewDependentStateIfNecessaryWithContext:(id)arg1;
- (struct TexturedDrawable *)_drawableInMap:(map_604bf0d9 *)arg1 vendors:(vector_8810021a *)arg2 forStyleQuery:(shared_ptr_b80d91ee)arg3;
- (void)addTriangulatedPointsToDrawableInMap:(map_604bf0d9 *)arg1 vendors:(vector_8810021a *)arg2 zIndex:(float)arg3 points:(const Matrix_8746f91e *)arg4 pointCount:(unsigned long long)arg5 indices:(const unsigned short *)arg6 indexCount:(unsigned long long)arg7 styleQuery:(shared_ptr_b80d91ee)arg8;
- (id)_groupForRenderZ:(int)arg1;
- (shared_ptr_479d1306)_createDefaultTextureForLevelOfDetail:(unsigned long long)arg1 takeVariant:(_Bool)arg2;
- (void)_updateDefaultLandTextures;
- (void)_addCoastlineMeshForPoints:(const Matrix_8746f91e *)arg1 pointCount:(unsigned long long)arg2;
- (void)_parseCoastlines;
@property(readonly, nonatomic) shared_ptr_479d1306 defaultLandTextureVariant;
- (void)_parsePolygons;
- (void)updateTextures;
- (void)createMeshes;
- (void)dealloc;
- (id)initWithKey:(const struct VKTileKey *)arg1 modelTile:(id)arg2 styleManager:(shared_ptr_f06afc6c)arg3 sharedResources:(id)arg4 contentScale:(double)arg5 device:(struct Device *)arg6;
@property(readonly, nonatomic) struct FogInfo *fogInfo;
@property(readonly, nonatomic) struct RealisticMesh *coastlineMesh;
@property(readonly, nonatomic) vector_8810021a *waterDrawables;
@property(readonly, nonatomic) vector_8810021a *landDrawables;

@end

