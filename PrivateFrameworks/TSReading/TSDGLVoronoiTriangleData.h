//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface TSDGLVoronoiTriangleData : NSObject
{
    unsigned long long *_triangleIndexToCellIndexMappingTable;
    unsigned long long *_triangleIndexToCellTriangleIndexMappingTable;
    unsigned long long _triangleIndexToCellMappingTableCount;
    unsigned long long _triangleCount;
    NSArray *_cells;
    struct CGRect _bounds;
}

@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) NSArray *cells; // @synthesize cells=_cells;
@property(readonly, nonatomic) unsigned long long triangleCount; // @synthesize triangleCount=_triangleCount;
- (unsigned long long)triangleIndexInCellFromGlobalTriangleIndex:(unsigned long long)arg1;
- (unsigned long long)cellIndexFromTriangleIndex:(unsigned long long)arg1;
- (id)cellFromTriangleIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long cellCount;
- (void)dealloc;
- (id)initWithPoints:(unsigned long long)arg1 clippedToRect:(struct CGRect)arg2 percentOfCellsToSplit:(double)arg3;
- (void)p_setupDataWithPointCount:(unsigned long long)arg1 clippedToRect:(struct CGRect)arg2 percentOfCellsToSplit:(double)arg3;

@end

