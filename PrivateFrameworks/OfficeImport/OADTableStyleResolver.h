//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class OADTable, OADTableProperties, OADTableStyle;

__attribute__((visibility("hidden")))
@interface OADTableStyleResolver : NSObject
{
    OADTable *mTable;
    OADTableProperties *mTableProperties;
    OADTableStyle *mTableStyle;
    int mColumnCount;
    int mRowCount;
    struct OADTFTemplateMatrix<OADTableCell *> *mCellMatrix;
    struct OADTFTemplateMatrix<OADTablePartStyle *> *mCellStyles;
    struct OADTFTemplateMatrix<OADStroke *> *mStrokes[2];
}

- (void)flatten;
- (void)applyResolvedStyling;
- (void)applyResolvedPartStyle:(id)arg1 leftStroke:(id)arg2 rightStroke:(id)arg3 topStroke:(id)arg4 bottomStroke:(id)arg5 toCell:(id)arg6;
- (void)applyTextStyle:(id)arg1 toCell:(id)arg2;
- (void)applyTextStyle:(id)arg1 toParagraph:(id)arg2;
- (void)applyStyleStrokes;
- (void)applyCornerStrokes;
- (void)applyCornerStrokesWithRowPos:(int)arg1 columnPos:(int)arg2 part:(int)arg3;
- (void)applyExtremeVectorStrokes;
- (void)applyStrokeOfExtremeVectorNormalToDir:(int)arg1 atExtremePos:(int)arg2;
- (void)applyBandStrokes;
- (void)applyStrokesOfBandsNormalToDir:(int)arg1 parity:(int)arg2 part:(int)arg3;
- (int)cellParityRelativeToDir1:(int)arg1 i1:(int)arg2 i2:(int)arg3;
- (void)applyWholeTableStrokes;
- (void)createStrokeMatrices;
- (void)applyStrokesFromPart:(int)arg1 fromPos:(struct OADTMatrixPos)arg2 toPos:(struct OADTMatrixPos)arg3;
- (void)applyStroke:(int)arg1 fromPart:(int)arg2 normalToDir1:(int)arg3 i1:(int)arg4 fromI2:(int)arg5 toI2:(int)arg6;
- (void)applyStroke:(int)arg1 fromPart:(int)arg2 normalToDir1:(int)arg3 i1:(int)arg4 fromI2:(int)arg5 dir2Span:(int)arg6;
- (void)setStroke:(id)arg1 ofSegmentNormalToDir1:(int)arg2 i1:(int)arg3 fromI2:(int)arg4;
- (id)strokeOfSegmentNormalToDir1:(int)arg1 i1:(int)arg2 fromI2:(int)arg3;
- (struct OADTMatrixPos)dominantCellInRowRange:(struct _NSRange)arg1 columnRange:(struct _NSRange)arg2;
- (void)applyCellStyles;
- (void)applyCornerCellStyles;
- (void)applyCornerCellStyleWithRowPos:(int)arg1 columnPos:(int)arg2 part:(int)arg3;
- (void)applyExtremeVectorCellStyles;
- (void)applyCellStyleOfExtremeVectorNormalToDir:(int)arg1 atExtremePos:(int)arg2 part:(int)arg3;
- (void)applyBandCellStyles;
- (void)applyCellStyleOfBandsNormalToDir:(int)arg1 parity:(int)arg2 part:(int)arg3;
- (void)applyWholeTableCellStyle;
- (void)applyCellStyleFromPart:(int)arg1 dir1:(int)arg2 fromI1:(int)arg3 fromI2:(int)arg4 dir1Span:(int)arg5 dir2Span:(int)arg6;
- (int)cellCountAlongDir:(int)arg1;
- (id)sourceCellAtI1:(int)arg1 i2:(int)arg2 dir1:(int)arg3;
- (void)loadCells;
- (void)fixVectorAtExtremePositionFlags;
- (void)dealloc;
- (id)initWithTable:(id)arg1;

@end

