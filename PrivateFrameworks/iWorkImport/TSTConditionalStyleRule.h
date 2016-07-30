//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSTCellStyle, TSTFormulaPredicate, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSTConditionalStyleRule : NSObject <NSCopying>
{
    TSTFormulaPredicate *mPredicate;
    TSWPParagraphStyle *mTextStyle;
    TSTCellStyle *mCellStyle;
    int mPredicateType;
}

+ (id)conditionalStyleRuleWithRule:(id)arg1;
@property(readonly, nonatomic) int predicateType; // @synthesize predicateType=mPredicateType;
- (_Bool)containsUidReferences;
- (id)copyToGeometricFormForTableModel:(id)arg1 inCellCoordinate:(CDStruct_0441cfb5)arg2;
- (id)copyToUidFormForTableModel:(id)arg1 inCellCoordinate:(CDStruct_0441cfb5)arg2 preserveHostCell:(_Bool)arg3;
- (id)copyToGeometricFormWithCalcEngine:(id)arg1 tableID:(struct __CFUUID *)arg2 containingCell:(CDStruct_0441cfb5)arg3;
- (id)copyToUidFormWithCalcEngine:(id)arg1 tableID:(struct __CFUUID *)arg2 containingCell:(CDStruct_0441cfb5)arg3 preserveHostCell:(_Bool)arg4;
- (id)copyByUpdatingHostCellRef:(const struct TSCECellRef *)arg1;
- (id)copyByOffsettingRelativeReferencesWithColumnOffset:(short)arg1 rowOffset:(int)arg2;
- (id)copyByRewritingWithSpec:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(CDStruct_0441cfb5)arg3;
- (id)copyByRemappingOwnerUIDsWithMap:(const struct TSUUuidMap *)arg1 calcEngine:(id)arg2 error:(_Bool *)arg3;
- (id)description;
- (_Bool)evaluateFormulaAtCellID:(CDStruct_0441cfb5)arg1 withCalcEngine:(id)arg2 withFormulaTableID:(struct __CFUUID *)arg3;
@property(readonly, nonatomic) struct TSCEFormula *formula;
@property(readonly, copy, nonatomic) TSTFormulaPredicate *predicate;
@property(readonly, copy, nonatomic) TSWPParagraphStyle *textStyle;
@property(readonly, copy, nonatomic) TSTCellStyle *cellStyle;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithPredicate:(id)arg1 cellStyle:(id)arg2 textStyle:(id)arg3;

@end

