//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLDevice-Protocol.h>

@class MTLComputePipelineDescriptor, NSArray, NSString;
@protocol MTLComputePipelineState;

@protocol MTLDeviceSPI <MTLDevice>
+ (void)registerDevices;
@property(readonly) unsigned long long maxFramebufferStorageBits;
@property(readonly) unsigned long long iosurfaceReadOnlyTextureAlignmentBytes;
@property(readonly) unsigned long long iosurfaceTextureAlignmentBytes;
@property(readonly) unsigned long long linearTextureAlignmentBytes;
@property(readonly) unsigned long long maxTextureLayers;
@property(readonly) unsigned long long maxTextureDimensionCube;
@property(readonly) unsigned long long maxTextureDepth3D;
@property(readonly) unsigned long long maxTextureHeight3D;
@property(readonly) unsigned long long maxTextureWidth3D;
@property(readonly) unsigned long long maxTextureHeight2D;
@property(readonly) unsigned long long maxTextureWidth2D;
@property(readonly) unsigned long long maxTextureWidth1D;
@property(readonly) unsigned long long minBufferNoCopyAlignmentBytes;
@property(readonly) unsigned long long minConstantBufferAlignmentBytes;
@property(readonly) unsigned long long maxBufferLength;
@property(readonly) unsigned long long maxVisibilityQueryOffset;
@property(readonly) float maxPointSize;
@property(readonly) float maxLineWidth;
@property(readonly) unsigned long long maxComputeThreadgroupMemory;
@property(readonly) unsigned long long maxTotalComputeThreadsPerThreadgroup;
@property(readonly) unsigned long long maxComputeLocalMemorySizes;
@property(readonly) unsigned long long maxComputeInlineDataSize;
@property(readonly) unsigned long long maxComputeSamplers;
@property(readonly) unsigned long long maxComputeTextures;
@property(readonly) unsigned long long maxComputeBuffers;
@property(readonly) unsigned long long maxFragmentInlineDataSize;
@property(readonly) unsigned long long maxFragmentSamplers;
@property(readonly) unsigned long long maxFragmentTextures;
@property(readonly) unsigned long long maxFragmentBuffers;
@property(readonly) unsigned long long maxInterpolants;
@property(readonly) unsigned long long maxVertexInlineDataSize;
@property(readonly) unsigned long long maxVertexSamplers;
@property(readonly) unsigned long long maxVertexTextures;
@property(readonly) unsigned long long maxVertexBuffers;
@property(readonly) unsigned long long maxVertexAttributes;
@property(readonly) unsigned long long maxColorAttachments;
@property(readonly) const CDStruct_1f7139fa *limits;
@property(readonly) unsigned long long featureProfile;
@property(nonatomic) _Bool metalAssertionsEnabled;
@property(readonly) unsigned long long doubleFPConfig;
@property(readonly) unsigned long long singleFPConfig;
@property(readonly) unsigned long long halfFPConfig;
- (_Bool)supportsSampleCount:(unsigned long long)arg1;
- (CDStruct_c0454aff)pipelineCacheStats;
- (CDStruct_c0454aff)libraryCacheStats;
- (void)unloadShaderCaches;
- (void)compilerPropagatesThreadPriority:(_Bool)arg1;

@optional
@property _Bool shaderDebugInfoCaching;
- (NSString *)productName;
- (NSString *)familyName;
- (NSString *)vendorName;
- (id <MTLComputePipelineState>)newComputePipelineStateWithImageFilterFunctionsSPI:(NSArray *)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (void)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 completionHandler:(void (^)(id <MTLComputePipelineState>, NSError *))arg2;
- (id <MTLComputePipelineState>)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 error:(id *)arg2;
- (void)unmapShaderSampleBuffer;
- (_Bool)mapShaderSampleBufferWithBuffer:(CDStruct_32a7f38a *)arg1 capacity:(unsigned long long)arg2 size:(unsigned long long)arg3;
@end

