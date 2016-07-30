//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VectorKit/MDRenderTarget-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GGLImageCanvas : NSObject <MDRenderTarget>
{
    struct CGSize _size;
    double _contentScale;
    _Bool _canMakeImage;
    _Bool _recreateRenderTarget;
    _Bool _allowAlpha;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer>> _colorBuffer;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer>> _depthStencilBuffer;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget>> _renderTarget;
    _Bool _useMultisampling;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer>> _msaaColorBuffer;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer>> _msaaDepthStencilBuffer;
    struct unique_ptr<ggl::RenderTargetOperation, std::__1::default_delete<ggl::RenderTargetOperation>> _msaaBlitOperation;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget>> _msaaRenderTarget;
}

@property(nonatomic) _Bool allowAlpha; // @synthesize allowAlpha=_allowAlpha;
@property(readonly, nonatomic) _Bool useMultisampling; // @synthesize useMultisampling=_useMultisampling;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGImage *)newImageWithRenderer:(struct Renderer *)arg1;
- (shared_ptr_edb96180)bitmapDataWithRenderer:(struct Renderer *)arg1;
- (void)didDrawView;
- (void)willDrawView;
- (void)_destroyMSAARenderTarget;
- (void)_createMSAARenderTarget;
- (void)_destroyRenderTarget;
- (void)_createRenderTarget;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 useMultisampling:(_Bool)arg3;
@property(readonly, nonatomic) struct CGSize sizeInPixels;
@property(readonly, nonatomic) struct RenderTargetOperation *msaaBlitOperation;
@property(readonly, nonatomic) struct RenderTarget *finalRenderTarget;
@property(readonly, nonatomic) struct RenderTarget *msaaRenderTarget;
@property(readonly, nonatomic) struct RenderTarget *renderTarget;

// Remaining properties
@property(readonly, nonatomic) float averageFPS;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

