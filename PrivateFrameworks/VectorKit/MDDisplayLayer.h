//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VectorKit/GGLRenderQueueSource-Protocol.h>
#import <VectorKit/MDRenderTarget-Protocol.h>

@class GGLLayer, NSString;
@protocol GGLRenderQueueSource;

__attribute__((visibility("hidden")))
@interface MDDisplayLayer : NSObject <GGLRenderQueueSource, MDRenderTarget>
{
    GGLLayer *_layer;
    id <GGLRenderQueueSource> _renderSource;
    shared_ptr_77723e34 _device;
    shared_ptr_3f8cd81b _renderer;
    struct mutex _debugConsoleManagerCreationLock;
    struct unique_ptr<md::DebugConsoleManager, std::__1::default_delete<md::DebugConsoleManager>> _debugConsoleManager;
    struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue>> _renderQueueOuter;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget>> _msaaRenderTarget;
    struct unique_ptr<ggl::RenderTargetOperation, std::__1::default_delete<ggl::RenderTargetOperation>> _msaaBlitOperation;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer>> _msaaColorBuffer;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer>> _msaaDepthStencilBuffer;
    _Bool _forceMSAATarget;
    _Bool _useMultisampling;
    _Bool _requiresMultisampling;
    struct CGContext *_snapshotContext;
    struct CGRect _bounds;
    double _contentsScale;
}

@property(nonatomic) id <GGLRenderQueueSource> renderSource; // @synthesize renderSource=_renderSource;
@property(readonly, nonatomic) GGLLayer *layer; // @synthesize layer=_layer;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool debugEnableMultisampling; // @dynamic debugEnableMultisampling;
- (struct DebugConsole *)debugConsoleForId:(int)arg1;
@property(readonly, nonatomic) float averageFPS;
@property(readonly, nonatomic) struct CGSize sizeInPixels;
@property(readonly, nonatomic) double contentScale;
@property(readonly, nonatomic) struct CGSize size;
- (void)didEnterBackground;
- (void)didReceiveMemoryWarning;
- (void)recreateLayer;
- (void)destroyLayer;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toLayer:(id)arg2;
- (void)didReadPixels:(shared_ptr_4ce39eb2 *)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setBackgroundColor:(struct CGColor *)arg1;
- (void)setContentsGravity:(id)arg1;
- (void)setOpaque:(_Bool)arg1;
- (void)setNeedsDisplayOnBoundsChange:(_Bool)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)expandedPerformanceHUD:(id)arg1;
- (void)disablePerformanceHUD:(id)arg1;
- (void)enablePerformanceHUD:(id)arg1;
- (void)forceLayout;
- (void)resetRenderQueue;
- (RenderQueue_e4212455 *)renderQueue;
@property(nonatomic) _Bool useMultisampling;
- (void)_destroyMSAARenderTarget;
- (void)_createMSAARenderTarget;
- (void)drawWithTimestamp:(double)arg1;
@property(readonly, nonatomic) struct GLRenderer *renderer;
@property(readonly, nonatomic) shared_ptr_807ec9ac device;
- (void)_createGLLayer;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

