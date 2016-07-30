//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VectorKit/GEOResourceManifestTileGroupObserver-Protocol.h>

@class GEOResourceManifestConfiguration, NSArray, NSLock, NSMapTable, NSString, VKResourceManager, VKStylesheetVendor, _VKLocalIconAtlas;

@interface VKIconManager : NSObject <GEOResourceManifestTileGroupObserver>
{
    _VKLocalIconAtlas *_localAtlas;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    VKResourceManager *_resourceManager;
    VKStylesheetVendor *_stylesheetVendor;
    NSMapTable *_atlases;
    NSLock *_atlasesLock;
    NSArray *_nonRegionalResourceNames;
    struct _opaque_pthread_rwlock_t {
        long long __sig;
        char __opaque[192];
    } _nameToStyleManagerLock;
    struct map<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<gss::StyleManager>, NSStringMapComparison, std::__1::allocator<std::__1::pair<const geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<gss::StyleManager>>>> _nameToStyleManager;
}

+ (id)sharedManager;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)imageForIconAttributeKey:(unsigned int)arg1 attributeValue:(unsigned int)arg2 size:(long long)arg3 contentScale:(double)arg4;
- (id)imageForTransitSystemID:(unsigned int)arg1 transitType:(unsigned int)arg2 size:(long long)arg3 contentScale:(double)arg4;
- (struct CGColor *)newGlyphColorForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3;
- (struct CGColor *)newFillColorForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3;
- (id)imageForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3 size:(long long)arg4 customIconID:(unsigned long long)arg5 transparent:(_Bool)arg6 transitMode:(_Bool)arg7 interactive:(_Bool)arg8;
- (id)imageForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3 size:(long long)arg4 customIconID:(unsigned long long)arg5 transparent:(_Bool)arg6 transitMode:(_Bool)arg7;
- (id)imageForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3 size:(long long)arg4 customIconID:(unsigned long long)arg5 transparent:(_Bool)arg6;
- (id)imageForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3 size:(long long)arg4 customIconID:(unsigned long long)arg5;
- (_Bool)_getLabelStyleForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3 labelStyle:(struct VKLabelStyle *)arg4 transitMode:(_Bool)arg5 interactive:(_Bool)arg6;
- (_Bool)_getLabelStyleForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3 labelStyle:(struct VKLabelStyle *)arg4 transitMode:(_Bool)arg5;
- (_Bool)_getLabelStyleForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3 labelStyle:(struct VKLabelStyle *)arg4;
- (id)imageForName:(id)arg1 contentScale:(double)arg2;
- (id)_allResourceNames;
- (id)artworkForFeatureID:(unsigned long long)arg1 withResourceNames:(id)arg2 style:(struct VKIconStyleInfo *)arg3 contentScale:(double)arg4 size:(long long)arg5;
- (id)_atlasForName:(id)arg1;
- (id)artworkForStyleAttributeKey:(unsigned int)arg1 longAttributeValue:(unsigned long long)arg2 withResourceNames:(id)arg3 style:(struct VKIconStyleInfo *)arg4 contentScale:(double)arg5 size:(long long)arg6;
- (id)artworkForStyleAttributeKey:(unsigned int)arg1 attributeValue:(unsigned int)arg2 withResourceNames:(id)arg3 style:(struct VKIconStyleInfo *)arg4 contentScale:(double)arg5 size:(long long)arg6;
- (id)artworkForName:(id)arg1 withResourceNames:(id)arg2 style:(struct VKIconStyleInfo *)arg3 contentScale:(double)arg4 size:(long long)arg5;
- (id)_forEachIconPackWithContentScale:(double)arg1 iconSize:(long long)arg2 resourceNames:(id)arg3 allowSizeFallback:(_Bool)arg4 visitUntilMatch:(CDUnknownBlockType)arg5;
- (id)_forEachIconPackWithContentScale:(double)arg1 iconSize:(long long)arg2 resourceNames:(id)arg3 visitUntilMatch:(CDUnknownBlockType)arg4;
- (id)_nonRegionalPacks;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)purge;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 resourceManager:(id)arg2 stylesheetVendor:(id)arg3;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
