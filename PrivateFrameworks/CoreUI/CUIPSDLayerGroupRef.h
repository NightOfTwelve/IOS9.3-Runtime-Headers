//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreUI/CUIPSDLayerBaseRef.h>

@class _CUIPSDSublayerInfo;

__attribute__((visibility("hidden")))
@interface CUIPSDLayerGroupRef : CUIPSDLayerBaseRef
{
    _CUIPSDSublayerInfo *_sublayerInfo;
}

- (id)layerRefAtIndex:(unsigned int)arg1;
- (id)layerNames;
- (unsigned int)numberOfLayers;
- (_Bool)isGroupEnd;
- (_Bool)isGroupStart;
- (_Bool)isOpen;
- (_Bool)_isGroupType:(unsigned int)arg1;
- (struct CGRect)bounds;
- (_Bool)isLayerGroup;
- (void)dealloc;
- (id)initWithImageRef:(id)arg1 layerIndex:(unsigned int)arg2;
- (void)enumerateLayersUsingBlock:(CDUnknownBlockType)arg1;
- (id)layerEnumerator;

@end

