//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSDGLDataBuffer, TSDGLFrameBuffer, TSDGLShader, TSDGLState;

__attribute__((visibility("hidden")))
@interface TSDGLMotionBlurEffect : NSObject
{
    struct CGSize _framebufferSize;
    struct CGSize _slideSize;
    TSDGLFrameBuffer *_combinedFramebuffer;
    TSDGLShader *_velocityVisualizerShader;
    TSDGLShader *_velocityCollectionShader;
    TSDGLFrameBuffer *_velocityFramebuffer;
    TSDGLShader *_defaultTextureShader;
    TSDGLFrameBuffer *_colorFramebuffer;
    TSDGLDataBuffer *_colorFBODataBuffer;
    TSDGLDataBuffer *_velocityFBODataBuffer;
    TSDGLDataBuffer *_velocitySquashedFBODataBuffer;
    TSDGLDataBuffer *_FBODataBuffer;
    TSDGLShader *_velocityTileMaxVerticalShader;
    TSDGLShader *_velocityTileMaxHorizontalShader;
    TSDGLShader *_velocityNeighborMaxHorizontalShader;
    TSDGLShader *_velocityNeighborMaxVerticalShader;
    int _originalViewport[4];
    _Bool _isSingleObject;
    double _motionBlurStrength;
    long long _debugDrawMode;
    double _framebufferScale;
    TSDGLState *_GLState;
}

@property(retain, nonatomic) TSDGLState *GLState; // @synthesize GLState=_GLState;
@property(nonatomic) double framebufferScale; // @synthesize framebufferScale=_framebufferScale;
@property(nonatomic) long long debugDrawMode; // @synthesize debugDrawMode=_debugDrawMode;
@property(nonatomic) double motionBlurStrength; // @synthesize motionBlurStrength=_motionBlurStrength;
@property(nonatomic) _Bool isSingleObject; // @synthesize isSingleObject=_isSingleObject;
- (void)p_setupVelocityFramebufferIfNecessary;
- (void)p_setupShaders;
- (void)setupMotionBlurEffectIfNecessary;
- (void)p_dilateVelocityBufferWithCurrentGLFramebuffer:(int)arg1;
- (void)p_blitIntoVelocityFramebufferWithCurrentGLFramebuffer:(int)arg1;
- (void)p_blitIntoColorFramebufferWithCurrentGLFramebuffer:(int)arg1;
- (struct CGSize)p_squashedVelocityFramebufferSize;
- (struct CGSize)p_velocityFramebufferTextureScale;
- (struct CGSize)p_velocityFramebufferSize;
- (void)drawResultWithCurrentGLFramebuffer:(int)arg1;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1;
- (void)bindVelocityFramebuffer;
- (void)bindColorFramebuffer;
- (void)bindColorAndVelocityFramebuffer;
- (void)p_updateMaxVelocityInShadersWithScale:(double)arg1 isColorFBO:(_Bool)arg2;
- (void)updateVelocityScaleInShader:(id)arg1;
- (struct CGSize)velocityScaleForColorFBO:(_Bool)arg1;
- (id)description;
- (void)teardown;
- (void)dealloc;
- (id)initWithFramebufferSize:(struct CGSize)arg1 slideSize:(struct CGSize)arg2;

@end

