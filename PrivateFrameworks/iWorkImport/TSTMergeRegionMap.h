//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

__attribute__((visibility("hidden")))
@interface TSTMergeRegionMap : TSPObject
{
    unordered_map_b1e1370d mCellIDToMergeOrigin;
    unordered_map_fefad954 mMergeOriginToSize;
    struct TSUColumnRowRect mUnionedMergeRange;
}

+ (id)mergeRegionMapWithContext:(id)arg1 andCellRangesSet:(const unordered_set_180f84bd *)arg2;
+ (id)mergeRegionMapWithContext:(id)arg1 andCellRanges:(const vector_23857275 *)arg2;
+ (id)mergeRegionMapFromMap:(id)arg1 intersectingRange:(struct TSUColumnRowRect)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (const unordered_map_fefad954 *)mergeOriginToSize;
- (const unordered_map_b1e1370d *)cellIDToMergeOrigin;
- (_Bool)hasRangeSpanningRows;
- (_Bool)find:(struct TSUColumnRowRect)arg1;
- (struct TSUColumnRowRect)mergedRangeForCellID:(CDStruct_0441cfb5)arg1;
- (unsigned long long)count;
- (void)enumerateRangesUsingBlock:(CDUnknownBlockType)arg1;
- (id)iterator;
- (_Bool)remove:(struct TSUColumnRowRect)arg1;
- (_Bool)insert:(struct TSUColumnRowRect)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initRegionMapFromMap:(id)arg1 intersectingRange:(struct TSUColumnRowRect)arg2;
- (id)initRegionMapFromMap:(id)arg1 rowRemapping:(id)arg2;

@end

