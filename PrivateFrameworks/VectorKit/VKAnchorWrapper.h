//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VectorKit/VKAnchorDelegate-Protocol.h>

@class MDDisplayLayer, NSString, VKAnchor, VKLayoutContext;

@interface VKAnchorWrapper : NSObject <VKAnchorDelegate>
{
    VKAnchor *_anchor;
    _Bool _followsTerrain;
    struct CGPoint _screenPointInCanvas;
    VKLayoutContext *_lastLayoutContext;
    CDStruct_2c43369c _lastCoordinate;
    _Bool _isUpdating;
    double _pointsPerMeter;
    MDDisplayLayer *_displayLayer;
}

@property(nonatomic) MDDisplayLayer *displayLayer; // @synthesize displayLayer=_displayLayer;
@property(nonatomic) _Bool followsTerrain; // @synthesize followsTerrain=_followsTerrain;
- (void)anchorWorldPointDidChange:(void *)arg1;
- (void)updateIfNeeded;
- (void)layoutWithContext:(id)arg1;
- (void)_updateCachedPointWithContext:(id)arg1;
- (id)_anchorWithContext:(id)arg1;
- (double)pointOffsetForDistanceOffset:(double)arg1;
- (struct CGPoint)pointInLayer:(id)arg1;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

