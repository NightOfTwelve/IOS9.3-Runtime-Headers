//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DRenderProcessor.h>

__attribute__((visibility("hidden")))
@interface TSCH3DRetargetRenderProcessor : TSCH3DRenderProcessor
{
    TSCH3DRenderProcessor *mOriginal;
}

+ (id)processorWithOriginal:(id)arg1;
@property(retain, nonatomic) TSCH3DRenderProcessor *original; // @synthesize original=mOriginal;
- (void)setRenderHints:(const struct RenderHints *)arg1;
- (struct RenderHints)renderHints;
- (void)popRenderState;
- (void)pushRenderState;
- (void)setRenderState:(const struct RenderState *)arg1;
- (struct RenderState)renderState;
- (void)updateRenderState;
- (id)effectsStates;
- (id)effects;
- (void)resetBuffers;
- (void)endFrame;
- (void)beginFrame;
- (void)copyTransformInto:(tmat4x4_3074befe *)arg1;
- (void)copyProjectionInto:(tmat4x4_3074befe *)arg1;
- (void)projection:(tmat4x4_3074befe *)arg1;
- (void)popMatrix;
- (void)pushMatrix;
- (void)translate:(tvec3_17f03ce0 *)arg1;
- (void)scale:(tvec3_17f03ce0 *)arg1;
- (void)multiply:(tmat4x4_3074befe *)arg1;
- (void)replace:(tmat4x4_3074befe *)arg1;
- (void)popState;
- (void)pushState;
- (long long)texture:(id)arg1 attributes:(const struct TextureAttributes *)arg2;
- (long long)attribute:(id)arg1 resource:(id)arg2 specs:(const struct AttributeSpecs *)arg3;
- (void)submit:(const struct PrimitiveInfo *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithOriginal:(id)arg1;
- (_Bool)canRenderPrefilteredLines;

@end

