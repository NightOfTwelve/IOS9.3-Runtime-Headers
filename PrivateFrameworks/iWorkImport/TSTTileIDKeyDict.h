//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPContainedObject.h>

__attribute__((visibility("hidden")))
@interface TSTTileIDKeyDict : TSPContainedObject
{
    struct hash_map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, TSTIntHasher, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject>>>> *mMap;
}

- (long long)count;
- (void)applyFunction:(CDUnknownFunctionPointerType)arg1 withState:(void *)arg2;
- (void)enumerateTilesWithBlock:(CDUnknownBlockType)arg1;
- (void)removeAllTiles;
- (void)removeTileForID:(CDStruct_d65e47c4)arg1;
- (void)setTile:(id)arg1 forID:(CDStruct_d65e47c4)arg2;
- (id)tileForID:(CDStruct_d65e47c4)arg1;
- (void)saveToArchive:(struct TileStorage *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct TileStorage *)arg1 unarchiver:(id)arg2 owner:(id)arg3;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;

@end

