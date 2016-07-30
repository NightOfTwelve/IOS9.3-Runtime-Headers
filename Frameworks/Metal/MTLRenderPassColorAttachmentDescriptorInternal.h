//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLRenderPassColorAttachmentDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLRenderPassColorAttachmentDescriptorInternal : MTLRenderPassColorAttachmentDescriptor
{
    struct MTLRenderPassAttachmentDescriptorPrivate _private;
}

+ (id)attachmentDescriptor;
- (const struct MTLRenderPassAttachmentDescriptorPrivate *)_descriptorPrivate;
- (void)setStoreAction:(unsigned long long)arg1;
- (unsigned long long)storeAction;
- (void)setLoadAction:(unsigned long long)arg1;
- (unsigned long long)loadAction;
- (unsigned long long)resolveDepthPlane;
- (void)setResolveDepthPlane:(unsigned long long)arg1;
- (unsigned long long)resolveSlice;
- (void)setResolveSlice:(unsigned long long)arg1;
- (unsigned long long)resolveLevel;
- (void)setResolveLevel:(unsigned long long)arg1;
- (CDStruct_3ead2808)clearColor;
- (void)setClearColor:(CDStruct_3ead2808)arg1;
- (unsigned long long)depthPlane;
- (void)setDepthPlane:(unsigned long long)arg1;
- (unsigned long long)slice;
- (void)setSlice:(unsigned long long)arg1;
- (unsigned long long)level;
- (void)setLevel:(unsigned long long)arg1;
- (id)resolveTexture;
- (void)setResolveTexture:(id)arg1;
- (id)texture;
- (void)setTexture:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

