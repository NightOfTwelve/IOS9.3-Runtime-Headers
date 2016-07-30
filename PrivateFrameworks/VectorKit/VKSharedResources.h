//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOResourceManifestConfiguration, VKGGLTextureManager, VKIconManager, VKResourceManager, VKShieldManager, VKStylesheetVendor, VKTrafficIncidentImageManager;

@interface VKSharedResources : NSObject
{
    GEOResourceManifestConfiguration *_manifestConfiguration;
    VKIconManager *_iconManager;
    VKShieldManager *_shieldManager;
    VKGGLTextureManager *_gglTextureManager;
    VKResourceManager *_resourceManager;
    VKStylesheetVendor *_stylesheetVendor;
    VKTrafficIncidentImageManager *_trafficIncidentImageManager;
    shared_ptr_807ec9ac _device;
    struct unique_ptr<ggl::AlphaAtlas, std::__1::default_delete<ggl::AlphaAtlas>> _alphaAtlas;
    struct unique_ptr<ggl::IsoAlphaAtlas, std::__1::default_delete<ggl::IsoAlphaAtlas>> _highInflationAlphaAtlas;
    struct unique_ptr<ggl::IsoAlphaAtlas, std::__1::default_delete<ggl::IsoAlphaAtlas>> _isoAlphaAtlas;
}

+ (id)sharedResourcesForConfiguration:(id)arg1;
@property(readonly, nonatomic) VKTrafficIncidentImageManager *trafficIncidentImageManager; // @synthesize trafficIncidentImageManager=_trafficIncidentImageManager;
@property(readonly, nonatomic) VKStylesheetVendor *stylesheetVendor; // @synthesize stylesheetVendor=_stylesheetVendor;
@property(readonly, nonatomic) VKResourceManager *resourceManager; // @synthesize resourceManager=_resourceManager;
@property(readonly, nonatomic) VKGGLTextureManager *gglTextureManager; // @synthesize gglTextureManager=_gglTextureManager;
@property(readonly, nonatomic) VKShieldManager *shieldManager; // @synthesize shieldManager=_shieldManager;
@property(readonly, nonatomic) VKIconManager *iconManager; // @synthesize iconManager=_iconManager;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
@property(readonly, nonatomic) struct IsoAlphaAtlas *isoAlphaAtlas;
@property(readonly, nonatomic) struct IsoAlphaAtlas *highInflationAlphaAtlas;
@property(readonly, nonatomic) struct AlphaAtlas *alphaAtlas;
@property(readonly, nonatomic) struct Device *device;

@end
