//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSIndexSet, NSMutableIndexSet, NSString, TSCEFormulaRewrite_RelocatedMergeCells, TSCEUidTract, TSKDocumentRoot, TSUMutableUUIDSet, TSUUUIDSet, TSWPParagraphStyle;
@protocol TSCEReferenceResolving, TSCEResolverContainer;

@protocol TSCEReferenceResolving <NSObject>
+ (struct TSUFormat)formatFromVector:(struct TSCETableReferenceVectorObject)arg1 atIndex:(unsigned long long)arg2;
+ (int)getHidingAction:(struct TSCETableReferenceObject)arg1;
+ (CDStruct_18e81ca1)getRangeReference:(struct TSCETableReferenceObject)arg1;
+ (struct TSCERangeCoordinate)getRange:(struct TSCETableReferenceObject)arg1;
+ (struct TSUFormat)format:(struct TSCETableReferenceObject)arg1 fromCell:(CDStruct_0441cfb5)arg2;
+ (int)mergeReferences:(struct TSCETableReferenceObject *)arg1 left:(struct TSCETableReferenceObject)arg2 right:(struct TSCETableReferenceObject)arg3;
+ (struct TSCEValue)scalarValue:(struct TSCETableReferenceObject)arg1 fromCell:(CDStruct_0441cfb5)arg2 permitAccessInsideMergeRegions:(_Bool)arg3 fetchRichTextAttributesIfPlainText:(_Bool)arg4;
+ (struct TSCETableReferenceObject)makeCellReferenceInSameTable:(struct TSCETableReferenceObject)arg1 cellID:(CDStruct_0441cfb5)arg2;
+ (void)prefetchData:(struct TSCEReferenceValue *)arg1 fromVectorObject:(struct TSCETableReferenceVectorObject *)arg2 cellID:(CDStruct_0441cfb5)arg3;
+ (void)releaseTableReferenceVectorObject:(struct TSCETableReferenceVectorObject *)arg1;
+ (void)retainTableReferenceVectorObject:(struct TSCETableReferenceVectorObject *)arg1;
+ (struct TSCETableReferenceVectorObject)makeReferenceVectorWithReference:(struct TSCETableReferenceObject)arg1 rangeContext:(int)arg2 apparentRangePtr:(struct TSCERangeCoordinate *)arg3;
+ (struct TSCETableReferenceObject)canonicalCellReferenceForReference:(struct TSCETableReferenceObject)arg1;
+ (id <TSCEReferenceResolving>)resolverMatchingNameWithContextContainer:(NSString *)arg1 inDocumentRoot:(TSKDocumentRoot *)arg2 contextContainerName:(NSString *)arg3;
+ (id <TSCEReferenceResolving>)resolverMatchingName:(NSString *)arg1 inDocumentRoot:(TSKDocumentRoot *)arg2 contextResolver:(id <TSCEReferenceResolving>)arg3;
+ (id <TSCEResolverContainer>)resolverContainerMatchingName:(NSString *)arg1 inDocumentRoot:(TSKDocumentRoot *)arg2;
- (TSWPParagraphStyle *)cellTextStyle:(CDStruct_0441cfb5)arg1;
- (TSCEFormulaRewrite_RelocatedMergeCells *)relocatedMergeCellsIntersectingInsertedIndexes:(NSIndexSet *)arg1 isRows:(_Bool)arg2;
- (TSCEFormulaRewrite_RelocatedMergeCells *)relocatedMergeCellsIntersectingRemovedIndexes:(NSIndexSet *)arg1 isRows:(_Bool)arg2;
- (struct TSCERangeCoordinate)unmergeIntoRegion:(TSCEUidTract *)arg1;
- (struct TSCERangeCoordinate)expandCellRangeToCoverMergedCells:(struct TSCERangeCoordinate)arg1;
- (TSUMutableUUIDSet *)UIDSetForRange:(struct _NSRange)arg1 isRows:(_Bool)arg2;
- (NSMutableIndexSet *)mutableIndexesForUIDSet:(TSUUUIDSet *)arg1 isRows:(_Bool)arg2 notFoundUIDs:(TSUMutableUUIDSet *)arg3;
- (TSUMutableUUIDSet *)UIDSetForIndexes:(NSIndexSet *)arg1 isRows:(_Bool)arg2;
- (vector_dadc1b26)UIDsForRange:(struct _NSRange)arg1 isRows:(_Bool)arg2;
- (NSMutableIndexSet *)indexesForUIDs:(const vector_dadc1b26 *)arg1 isRows:(_Bool)arg2;
- (vector_dadc1b26)UIDsForIndexes:(NSIndexSet *)arg1 isRows:(_Bool)arg2;
- (unsigned short)indexForUID:(const UUIDData_5fbc143e *)arg1 isRows:(_Bool)arg2;
- (UUIDData_5fbc143e)UIDForIndex:(unsigned short)arg1 isRows:(_Bool)arg2;
- (vector_dadc1b26)allColumnUIDs;
- (vector_dadc1b26)columnUIDsForColumnRange:(struct _NSRange)arg1;
- (NSMutableIndexSet *)columnIndexesForUIDs:(const vector_dadc1b26 *)arg1;
- (vector_dadc1b26)columnUIDsForColumnIndexes:(NSIndexSet *)arg1;
- (unsigned char)columnIndexForColumnUID:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)columnUIDForColumnIndex:(unsigned char)arg1;
- (vector_dadc1b26)allRowUIDs;
- (vector_dadc1b26)rowUIDsForRowRange:(struct _NSRange)arg1;
- (NSMutableIndexSet *)rowIndexesForUIDs:(const vector_dadc1b26 *)arg1;
- (vector_dadc1b26)rowUIDsForRowIndexes:(NSIndexSet *)arg1;
- (unsigned short)rowIndexForRowUID:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)rowUIDForRowIndex:(unsigned short)arg1;
- (_Bool)hasNamesInHeaders;
- (NSString *)cellRangeName:(struct TSCERangeCoordinate)arg1 stickyBits:(unsigned char)arg2 isRangeWithFunction:(_Bool)arg3 quoteComponents:(_Bool)arg4 forceEscaping:(_Bool)arg5;
- (NSString *)tableName;
- (NSString *)sheetName;
- (struct TSCERangeCoordinate)apparentRangeForRange:(struct TSCERangeCoordinate)arg1 rangeContext:(int)arg2;
- (struct __CFUUID *)conditionalStyleFormulaOwnerID;
- (void)resetAllFormulaDependenciesForCell:(CDStruct_0441cfb5)arg1;
- (void)resetDependenciesForCell:(CDStruct_0441cfb5)arg1;
- (_Bool)cellWasModifiedInThisRecalcCycle:(CDStruct_0441cfb5)arg1;
- (struct TSCERangeCoordinate)tableRange;
- (struct TSCERangeCoordinate)bodyRange;
- (_Bool)hasCellID:(CDStruct_0441cfb5)arg1;
- (struct TSCETableReferenceObject)makeReference:(CDStruct_0441cfb5)arg1 bottomRight:(CDStruct_0441cfb5)arg2;
- (struct __CFUUID *)mergeOwnerID;
- (_Bool)resolverIsATable;
- (struct __CFUUID *)resolverID;
@end

