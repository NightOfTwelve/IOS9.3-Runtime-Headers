//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@interface MTLVertexAttributeDescriptor : NSObject <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) unsigned long long bufferIndex; // @dynamic bufferIndex;
@property(nonatomic) unsigned long long format; // @dynamic format;
@property(nonatomic) unsigned long long offset; // @dynamic offset;

@end

