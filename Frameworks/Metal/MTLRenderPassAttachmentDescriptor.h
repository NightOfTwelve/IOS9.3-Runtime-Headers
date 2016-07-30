//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@protocol MTLTexture;

@interface MTLRenderPassAttachmentDescriptor : NSObject <NSCopying>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) unsigned long long depthPlane; // @dynamic depthPlane;
@property(nonatomic) unsigned long long level; // @dynamic level;
@property(nonatomic) unsigned long long loadAction; // @dynamic loadAction;
@property(nonatomic) unsigned long long resolveDepthPlane; // @dynamic resolveDepthPlane;
@property(nonatomic) unsigned long long resolveLevel; // @dynamic resolveLevel;
@property(nonatomic) unsigned long long resolveSlice; // @dynamic resolveSlice;
@property(retain, nonatomic) id <MTLTexture> resolveTexture; // @dynamic resolveTexture;
@property(nonatomic) unsigned long long slice; // @dynamic slice;
@property(nonatomic) unsigned long long storeAction; // @dynamic storeAction;
@property(retain, nonatomic) id <MTLTexture> texture; // @dynamic texture;

@end

