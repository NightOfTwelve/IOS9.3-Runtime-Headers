//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DFloatVectorDataBuffer.h>

__attribute__((visibility("hidden")))
@interface TSCH3Dvec4DataBuffer : TSCH3DFloatVectorDataBuffer
{
    vector_b7abfae3 mContainer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
- (id)elementsAtIndices:(id)arg1;
- (unsigned long long)componentByteSize;
- (unsigned long long)components;
- (unsigned long long)count;
- (void)fillCapacity;
- (const void *)data;
@property(readonly, nonatomic) vector_b7abfae3 *container;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

