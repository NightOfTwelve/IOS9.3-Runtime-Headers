//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSWPOffscreenColumn-Protocol.h>

@class NSString, TSWPStorage;
@protocol TSWPStyleProvider;

__attribute__((visibility("hidden")))
@interface TSWPColumn : NSObject <TSWPOffscreenColumn>
{
    TSWPStorage *_storage;
    struct CGRect _frameBounds;
    struct CGAffineTransform _transform;
    unsigned long long _startCharIndex;
    unsigned long long _characterCount;
    unsigned long long _startAnchoredCharIndex;
    unsigned long long _anchoredCharCount;
    unsigned long long _nextWidowPullsDownFromCharIndex;
    double _contentBottom;
    double _erasableContentBottom;
    int _layoutResultFlags;
    unsigned long long _columnIndex;
    unsigned long long _pageNumber;
    unsigned long long _scaleTextPercent;
    id <TSWPStyleProvider> _styleProvider;
    shared_ptr_72f95721 _lineFragmentArray;
    unsigned long long _storageChangeCount;
    void *_paragraphAdornments;
    _Bool _textIsVertical;
}

+ (id)columnForCharIndex:(unsigned long long)arg1 allowEndOfColumn:(_Bool)arg2 withColumns:(id)arg3;
+ (struct CGRect)boundsRectForSelection:(id)arg1 columnArray:(id)arg2 includeRuby:(_Bool)arg3;
+ (id)pathForHighlightWithRange:(struct _NSRange)arg1 columnArray:(id)arg2 pathStyle:(int)arg3;
+ (id)footnoteReferenceAttachmentInColumnArray:(id)arg1 atPoint:(struct CGPoint)arg2;
+ (id)footnoteMarkAttachmentInColumnArray:(id)arg1 atPoint:(struct CGPoint)arg2;
+ (id)smartFieldWithAttributeKind:(int)arg1 inColumnArray:(id)arg2 atPoint:(struct CGPoint)arg3;
+ (unsigned long long)charIndexForPoint:(struct CGPoint)arg1 inColumnsArray:(id)arg2 allowPastBreak:(_Bool)arg3 allowNotFound:(_Bool)arg4 pastCenterGoesToNextChar:(_Bool)arg5 isAtEndOfLine:(_Bool *)arg6 leadingEdge:(_Bool *)arg7;
+ (unsigned long long)charIndexForPoint:(struct CGPoint)arg1 inColumnsArray:(id)arg2 allowPastBreak:(_Bool)arg3 allowNotFound:(_Bool)arg4 isAtEndOfLine:(_Bool *)arg5 leadingEdge:(_Bool *)arg6;
+ (id)closestColumnInColumnsArray:(id)arg1 forPoint:(struct CGPoint)arg2 ignoreEmptyColumns:(_Bool)arg3 ignoreDrawableOnlyColumns:(_Bool)arg4;
+ (struct CGRect)rectForSelection:(id)arg1 withColumns:(id)arg2 useParagraphModeRects:(_Bool)arg3;
+ (struct CGRect)rectForSelection:(id)arg1 withColumns:(id)arg2;
+ (struct CGRect)caretRectForInsertionPoint:(id)arg1 withColumns:(id)arg2;
@property(nonatomic) unsigned long long storageChangeCount; // @synthesize storageChangeCount=_storageChangeCount;
@property(nonatomic) _Bool textIsVertical; // @synthesize textIsVertical=_textIsVertical;
@property(retain, nonatomic) id <TSWPStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) unsigned long long scaleTextPercent; // @synthesize scaleTextPercent=_scaleTextPercent;
@property(nonatomic) unsigned long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(nonatomic) unsigned long long columnIndex; // @synthesize columnIndex=_columnIndex;
@property(nonatomic) int layoutResultFlags; // @synthesize layoutResultFlags=_layoutResultFlags;
@property(nonatomic) double erasableContentBottom; // @synthesize erasableContentBottom=_erasableContentBottom;
@property(nonatomic) double contentBottom; // @synthesize contentBottom=_contentBottom;
@property(nonatomic) unsigned long long nextWidowPullsDownFromCharIndex; // @synthesize nextWidowPullsDownFromCharIndex=_nextWidowPullsDownFromCharIndex;
@property(nonatomic) unsigned long long anchoredCharCount; // @synthesize anchoredCharCount=_anchoredCharCount;
@property(nonatomic) unsigned long long startAnchoredCharIndex; // @synthesize startAnchoredCharIndex=_startAnchoredCharIndex;
@property(nonatomic) unsigned long long characterCount; // @synthesize characterCount=_characterCount;
@property(nonatomic) unsigned long long startCharIndex; // @synthesize startCharIndex=_startCharIndex;
@property(nonatomic) struct CGAffineTransform transformFromWP; // @synthesize transformFromWP=_transform;
@property(nonatomic) struct CGRect wpBounds; // @synthesize wpBounds=_frameBounds;
@property(readonly, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)hasPartitionedAttachmentAtStart:(_Bool)arg1;
- (_Bool)onlyHasPartitionedAttachments;
- (_Bool)onlyHasAnchoredDrawable;
- (id)singleLinePartitionedInfoAtStart:(_Bool)arg1;
- (id)partitionedLayoutForInfo:(id)arg1;
- (id)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(int)arg2;
- (void)renderWithRenderer:(id)arg1 currentSelection:(id)arg2 limitSelection:(id)arg3 listRange:(struct _NSRange)arg4 rubyGlyphRange:(struct _NSRange)arg5 isCanvasInteractive:(_Bool)arg6 suppressedMisspellingRange:(struct _NSRange)arg7 blackAndWhite:(_Bool)arg8 dictationInterpretations:(const struct TSWPRangeVector *)arg9 autocorrections:(const struct TSWPRangeVector *)arg10 markedRange:(struct _NSRange)arg11 markedText:(id)arg12 renderMode:(int)arg13 pageCount:(unsigned long long)arg14 suppressInvisibles:(_Bool)arg15 suppressFontSmoothing:(_Bool)arg16 currentCanvasSelection:(id)arg17;
- (struct _TSWPCharIndexAndPosition)calcAttachmentPositionForDrawable:(id)arg1 atPoint:(struct CGPoint)arg2 inTextLayoutTarget:(id)arg3 tlBoundsInfluencingWrap:(struct CGPoint)arg4 wrapOutset:(struct CGSize)arg5 wrapMargin:(double)arg6 makeInline:(_Bool)arg7;
- (unsigned long long)charIndexFromWPPoint:(struct CGPoint)arg1 pastCenterGoesToNextChar:(_Bool)arg2 allowNotFound:(_Bool)arg3 outFragment:(const struct TSWPLineFragment **)arg4 leadingEdge:(_Bool *)arg5;
- (unsigned long long)charIndexForSelectionFromPoint:(struct CGPoint)arg1 isTail:(_Bool)arg2;
- (unsigned long long)charIndexFromPoint:(struct CGPoint)arg1 allowPastBreak:(_Bool)arg2 pastCenterGoesToNextChar:(_Bool)arg3 allowNotFound:(_Bool)arg4 isAtEndOfLine:(_Bool *)arg5 outFragment:(const struct TSWPLineFragment **)arg6 leadingEdge:(_Bool *)arg7;
- (unsigned long long)charIndexFromPoint:(struct CGPoint)arg1 allowPastBreak:(_Bool)arg2 pastCenterGoesToNextChar:(_Bool)arg3 allowNotFound:(_Bool)arg4 isAtEndOfLine:(_Bool *)arg5 leadingEdge:(_Bool *)arg6;
- (id)drawableIntersectionRectsForSelection:(id)arg1 inTarget:(id)arg2;
- (struct CGRect)erasableRectForSelectionRange:(struct _NSRange)arg1;
- (id)rectsForSelection:(id)arg1 ranges:(id *)arg2;
- (id)rectsForSelectionRange:(struct _NSRange)arg1 selectionType:(int)arg2 forParagraphMode:(_Bool)arg3 includeRuby:(_Bool)arg4;
- (id)rectsForSelectionRange:(struct _NSRange)arg1 selectionType:(int)arg2 forParagraphMode:(_Bool)arg3;
- (id)rectsForSelectionRange:(struct _NSRange)arg1 selectionType:(int)arg2;
- (id)rectsForSelectionRanges:(id)arg1 selectionType:(int)arg2;
- (id)pMutableRectsForSelectionRange:(struct _NSRange)arg1 selectionType:(int)arg2 includeSpaceAfter:(_Bool)arg3 includeSpaceBefore:(_Bool)arg4 includeLeading:(_Bool)arg5 forParagraphMode:(_Bool)arg6 includeRuby:(_Bool)arg7 inranges:(id)arg8 outranges:(id *)arg9;
- (const struct TSWPLineFragment *)pColumnEndingPartitionedLineFragmentInSelectionRange:(struct _NSRange)arg1;
- (id)rectsForSelectionRange:(struct _NSRange)arg1;
- (id)rectsForSelection:(id)arg1;
- (struct CGRect)firstRectForSelection:(id)arg1 includeSpaceAfter:(_Bool)arg2 includeSpaceBefore:(_Bool)arg3 includeLeading:(_Bool)arg4;
- (id)lineSelectionsForSelection:(id)arg1;
@property(readonly, nonatomic) struct CGRect typographicBoundsForCell;
- (struct CGRect)columnRectForRange:(struct _NSRange)arg1;
- (unsigned long long)glyphCountForRubyFieldAtCharIndex:(unsigned long long)arg1;
- (struct CGRect)glyphRectForRubyFieldAtCharIndex:(unsigned long long)arg1 glyphRange:(struct _NSRange)arg2;
- (unsigned int)fontTraitsForRange:(struct _NSRange)arg1 includingLabel:(_Bool)arg2;
- (struct CGRect)glyphRectForRange:(struct _NSRange)arg1 includingLabel:(_Bool)arg2;
- (struct CGRect)caretRectForSelection:(id)arg1;
- (unsigned long long)lineIndexForCharIndex:(unsigned long long)arg1 eol:(_Bool)arg2;
- (const struct TSWPLineFragment *)nearestLineFragmentWithSameVerticalPositionAs:(unsigned long long)arg1 xPos:(double)arg2;
- (double)horizontalOffsetForCharIndex:(unsigned long long)arg1 lineFragmentIndex:(unsigned long long)arg2 bumpPastHyphen:(_Bool)arg3 allowPastLineBounds:(_Bool)arg4;
- (CDStruct_50f584da)lineMetricsAtCharIndex:(unsigned long long)arg1 allowEndOfLine:(_Bool)arg2;
- (struct _NSRange)rangeOfLineFragmentAtIndex:(unsigned long long)arg1;
- (struct CGRect)boundsOfLineFragmentAtIndex:(unsigned long long)arg1;
- (void)makeEmpty:(unsigned long long)arg1 layoutResultFlags:(int)arg2;
- (unsigned long long)lineFragmentCountForBaseline:(double)arg1;
- (void)offsetLineFragmentsByPoint:(struct CGPoint)arg1;
- (void)normalizeLineFragmentOrigins:(struct CGPoint)arg1;
- (const struct TSWPLineFragment *)lineFragmentAtIndex:(unsigned long long)arg1;
- (void)setLineFragmentArray:(const shared_ptr_72f95721 *)arg1;
- (const shared_ptr_72f95721 *)lineFragmentArrayForUnitTests;
- (const shared_ptr_72f95721 *)lineFragmentArray;
@property(readonly, nonatomic) unsigned long long countLines;
@property(readonly, nonatomic) struct CGAffineTransform transformToWP;
@property(readonly, nonatomic) struct CGRect frameBounds;
- (void)clearAdornments;
- (void)addAdornmentRect:(const struct TSWPAdornmentRect *)arg1;
- (struct CGRect)changeBarRectForLineFragment:(const struct TSWPLineFragment *)arg1 layoutTarget:(id)arg2;
- (_Bool)requiresGlyphVectorsForHeightMeasurement;
- (double)textHeight;
@property(readonly, nonatomic) double textBottom;
- (struct CGRect)erasableBounds:(unsigned int)arg1;
- (double)minimumHeightForLayoutOnPage;
- (void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeFootnoteLayoutCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4;
- (struct CGSize)maxSize;
- (void)incrementRanges:(long long)arg1 startingAt:(unsigned long long)arg2;
@property(nonatomic) struct _NSRange anchoredRange;
@property(nonatomic) struct _NSRange range;
- (double)logicalBoundsBottom;
- (double)logicalBoundsTop;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 frameBounds:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

