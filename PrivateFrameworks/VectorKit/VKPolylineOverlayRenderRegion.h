//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface VKPolylineOverlayRenderRegion : NSObject
{
    NSSet *_tiles;
    CDStruct_aca18c62 _visibleRect;
    vector_6c1b99c0 _rectsForSnapping;
    struct vector<VKTileKey, std::__1::allocator<VKTileKey>> _snappedTileKeys;
}

@property(readonly, nonatomic) CDStruct_d2b197d1 visibleRect; // @synthesize visibleRect=_visibleRect;
@property(readonly, nonatomic) NSSet *tiles; // @synthesize tiles=_tiles;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const vector_6c1b99c0 *)rectsForSnapping;
- (_Bool)isEquivalentToNewRegion:(id)arg1;
- (void)dealloc;
- (id)initForKeysInView:(id)arg1 tiles:(id)arg2 allowsSnapping:(_Bool)arg3;

@end

