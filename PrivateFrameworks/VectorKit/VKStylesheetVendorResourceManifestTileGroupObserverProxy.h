//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VectorKit/GEOResourceManifestTileGroupObserver-Protocol.h>

@class GEOResourceManifestConfiguration, NSString, VKStylesheetVendor;

__attribute__((visibility("hidden")))
@interface VKStylesheetVendorResourceManifestTileGroupObserverProxy : NSObject <GEOResourceManifestTileGroupObserver>
{
    VKStylesheetVendor *_vendor;
    GEOResourceManifestConfiguration *_manifestConfiguration;
}

- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)dealloc;
- (id)initWithStylesheetVendor:(id)arg1 manifestConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

