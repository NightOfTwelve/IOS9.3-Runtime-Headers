//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOVectorTile, NSArray, NSMutableArray, VKSharedResources;

__attribute__((visibility("hidden")))
@interface VK3DObjectSubTile : NSObject
{
    NSMutableArray *_objectGroups;
    GEOVectorTile *_modelTile;
    shared_ptr_f06afc6c _styleManager;
    VKSharedResources *_sharedResources;
    long long _vectorType;
    double _contentScale;
    struct vector<VKBuildingHeightMap, std::__1::allocator<VKBuildingHeightMap>> _heights;
}

@property(nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
@property(retain, nonatomic) VKSharedResources *sharedResources; // @synthesize sharedResources=_sharedResources;
@property(nonatomic) shared_ptr_f06afc6c styleManager; // @synthesize styleManager=_styleManager;
@property(retain, nonatomic) GEOVectorTile *modelTile; // @synthesize modelTile=_modelTile;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)fillShadowAreasInContext:(struct CGContext *)arg1;
- (Box_3fb92e00)shadowBounds;
- (_Bool)heightAtPoint:(const Matrix_8746f91e *)arg1 outZ:(float *)arg2;
- (_Bool)_createMeshForObjects:(CDStruct_2da3f85a *)arg1 count:(unsigned long long)arg2;
- (void)_read3DObjects:(vector_25c79282 *)arg1 fromDiskForTileKey:(const struct _GEOTileKey *)arg2;
- (void)_replaceThreeBuldingsInModelTile:(id)arg1 objects:(vector_25c79282 *)arg2;
- (void)dealloc;
- (id)initWithKey:(const struct VKTileKey *)arg1 modelTile:(id)arg2 styleManager:(shared_ptr_f06afc6c)arg3 sharedResources:(id)arg4 contentScale:(double)arg5;
@property(copy, nonatomic) NSArray *objectGroups;

@end

