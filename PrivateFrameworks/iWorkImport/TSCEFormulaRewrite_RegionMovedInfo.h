//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSCEFormulaRewrite_RegionInfo, TSCEFormulaRewrite_Uids;

__attribute__((visibility("hidden")))
@interface TSCEFormulaRewrite_RegionMovedInfo : NSObject
{
    TSCEFormulaRewrite_RegionInfo *_srcRegion;
    TSCEFormulaRewrite_RegionInfo *_dstRegion;
    struct TSUUuidMap _srcUidForDstUid;
    struct TSUUuidMap _dstUidForSrcUid;
    _Bool _spanningRows;
    _Bool _spanningColumns;
}

@property(nonatomic) _Bool spanningColumns; // @synthesize spanningColumns=_spanningColumns;
@property(nonatomic) _Bool spanningRows; // @synthesize spanningRows=_spanningRows;
@property(readonly, nonatomic) const struct TSUUuidMap *dstUidForSrcUid; // @synthesize dstUidForSrcUid=_dstUidForSrcUid;
@property(readonly, nonatomic) const struct TSUUuidMap *srcUidForDstUid; // @synthesize srcUidForDstUid=_srcUidForDstUid;
@property(readonly, nonatomic) TSCEFormulaRewrite_RegionInfo *dstRegion; // @synthesize dstRegion=_dstRegion;
@property(readonly, nonatomic) TSCEFormulaRewrite_RegionInfo *srcRegion; // @synthesize srcRegion=_srcRegion;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToMessage:(struct RegionMovedInfoArchive *)arg1;
- (id)initFromMessage:(const struct RegionMovedInfoArchive *)arg1;
- (UUIDData_5fbc143e)srcUidForDstUid:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)dstUidForSrcUid:(const UUIDData_5fbc143e *)arg1;
- (void)unloadIndexes;
- (void)loadIndexesForSrcTable:(id)arg1 dstTable:(id)arg2;
- (void)loadIndexesFromRegions;
@property(readonly, nonatomic) TSCEFormulaRewrite_Uids *dstRowUids;
@property(readonly, nonatomic) TSCEFormulaRewrite_Uids *dstColumnUids;
@property(readonly, nonatomic) TSCEFormulaRewrite_Uids *srcRowUids;
@property(readonly, nonatomic) TSCEFormulaRewrite_Uids *srcColumnUids;
@property(readonly, nonatomic) UUIDData_5fbc143e dstTableUID;
@property(readonly, nonatomic) UUIDData_5fbc143e srcTableUID;
@property(readonly, nonatomic) struct __CFUUID *dstTableID;
@property(readonly, nonatomic) struct __CFUUID *srcTableID;
- (id)description;
- (void)dealloc;
- (id)initWithSrcTableID:(struct __CFUUID *)arg1 srcColumnUids:(const vector_dadc1b26 *)arg2 srcRowUids:(const vector_dadc1b26 *)arg3 dstTableID:(struct __CFUUID *)arg4 dstColumnUids:(const vector_dadc1b26 *)arg5 dstRowUids:(const vector_dadc1b26 *)arg6;

@end
