//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCEFormulaRewrite_RelocatedMergeCells : NSObject
{
    struct unordered_map<TSUColumnRowCoordinate, unsigned short, std::__1::hash<TSUColumnRowCoordinate>, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, unsigned short>>> _mergeRangeAdjustments;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToMessage:(struct RelocatedMergeCellsArchive *)arg1;
- (id)initFromMessage:(const struct RelocatedMergeCellsArchive *)arg1;
- (id)description;
- (unsigned short)mergeRangeAdjustmentForCoord:(const CDStruct_0441cfb5 *)arg1;
- (void)mergeRangeAt:(const CDStruct_0441cfb5 *)arg1 adjustedBy:(unsigned short)arg2;

@end

