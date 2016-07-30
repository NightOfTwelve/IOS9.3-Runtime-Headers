//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/EDSheet.h>

@class EDCollection, EDColumnInfoCollection, EDMergedCellCollection, EDPane, EDReference, EDRowBlocks, EDWarnings, OITSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface EDWorksheet : EDSheet
{
    EDRowBlocks *mRowBlocks;
    EDColumnInfoCollection *mColumnInfos;
    EDCollection *mConditionalFormattings;
    EDCollection *mHyperlinks;
    EDCollection *mTables;
    EDCollection *mPivotTables;
    EDMergedCellCollection *mMergedCells;
    EDPane *mPane;
    EDWarnings *mWorksheetWarnings;
    double mDefaultColumnWidth;
    unsigned short mDefaultRowHeight;
    unsigned long long mMaxRowOutlineLevel;
    unsigned long long mMaxColumnOutlineLevel;
    _Bool mFitToPage;
    EDReference *mMaxCellReferencedInFormulas;
    OITSUPointerKeyDictionary *mMergedRows;
    OITSUPointerKeyDictionary *mMergedCols;
    EDReference *mImplicitCellArea;
}

- (id)description;
- (_Bool)hasMergedCells;
- (id)worksheetWarnings;
- (void)setPane:(id)arg1;
- (id)pane;
- (id)mergedCells;
- (id)pivotTables;
- (id)tables;
- (id)hyperlinks;
- (id)conditionalFormattings;
- (id)columnInfos;
- (id)rowBlocks;
- (void)setFitToPage:(_Bool)arg1;
- (_Bool)fitToPage;
- (void)setDefaultRowHeight:(unsigned short)arg1;
- (unsigned short)defaultRowHeight;
- (void)setDefaultColumnWidth:(double)arg1;
- (double)defaultColumnWidth;
- (void)reduceMemoryIfPossible;
- (id)mergedColRef:(unsigned int)arg1;
- (_Bool)isColMerged:(unsigned int)arg1;
- (_Bool)hasMergedCol;
- (id)mergedRowRef:(unsigned int)arg1;
- (_Bool)isRowMerged:(unsigned int)arg1;
- (_Bool)hasMergedRow;
- (void)setMergedColsRef:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)setMergedRowsRef:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)updateMaxColumnOutlineLevelIfNeeded:(unsigned long long)arg1;
- (void)setMaxColumnOutlineLevel:(unsigned long long)arg1;
- (unsigned long long)maxColumnOutlineLevel;
- (void)updateMaxRowOutlineLevelIfNeeded:(unsigned long long)arg1;
- (void)setMaxRowOutlineLevel:(unsigned long long)arg1;
- (unsigned long long)maxRowOutlineLevel;
- (void)teardown;
- (void)setup;
- (id)maxCellReferencedInFormulas;
- (void)setImplicitCellArea:(id)arg1;
- (id)implicitCellArea;

@end

