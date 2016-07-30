//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDContainerRep.h>

@class CALayer, CAShapeLayer, NSArray, TSWPEditingController, TSWPLayout, TSWPSearchReference, TSWPSelection, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSWPRep : TSDContainerRep
{
    CALayer *_textLayers[2];
    CALayer *_caretLayer;
    CAShapeLayer *_selectionLineLayers[2];
    CAShapeLayer *_selectionHighlightLayer;
    CAShapeLayer *_selectionParagraphBorderLayer;
    CAShapeLayer *_markHighlightLayer;
    CAShapeLayer *_smartFieldHighlightLayer;
    CAShapeLayer *_secondaryHighlightLayer;
    struct _NSRange _secondaryHighlightRange;
    int _secondaryHighlightPathStyle;
    _Bool _caretAnimationDisabled;
    _Bool _suppressCaret;
    _Bool _isEditing;
    struct _NSRange _suppressedMisspellingRange;
    _Bool _updatingHighlights;
    _Bool _suppressSelectionHighlight;
    struct _NSRange _dragRange;
    TSWPSelection *_lastSelection;
    _Bool _selectionChanged;
    _Bool _markChanged;
    unsigned long long _newSelectionFlags;
    _Bool _repFieldsAreActive;
    _Bool _indentAnimationRunning;
    CALayer *_indentAnimationLayer;
    long long _indentDelta;
    SEL _indentSelector;
    id _indentTarget;
    _Bool _hudStateDirty;
    _Bool _invalidateHUDState;
    _Bool _useKeyboardWhenEditing;
    CALayer *_dragAndDropCaretLayer;
    TSWPSelection *_dropSelection;
    _Bool _isShowingCommentKnobs;
    _Bool _tornDown;
    _Bool _findIsShowing;
    TSWPSearchReference *_activeSearchReference;
    TSWPEditingController *_textEditor;
    NSArray *_searchReferences;
    struct CGAffineTransform _transformToConvertNaturalToScaledRoot;
}

@property(retain, nonatomic) NSArray *searchReferences; // @synthesize searchReferences=_searchReferences;
@property(readonly, nonatomic) struct CGAffineTransform transformToConvertNaturalToScaledRoot; // @synthesize transformToConvertNaturalToScaledRoot=_transformToConvertNaturalToScaledRoot;
@property(nonatomic) TSWPSelection *dropSelection; // @synthesize dropSelection=_dropSelection;
@property(nonatomic) _Bool useKeyboardWhenEditing; // @synthesize useKeyboardWhenEditing=_useKeyboardWhenEditing;
@property(readonly, nonatomic) TSWPEditingController *textEditor; // @synthesize textEditor=_textEditor;
@property(nonatomic) struct _NSRange dragRange; // @synthesize dragRange=_dragRange;
@property(nonatomic, getter=isSelectionHighlightSuppressed) _Bool suppressSelectionHighlight; // @synthesize suppressSelectionHighlight=_suppressSelectionHighlight;
@property(nonatomic) _Bool findIsShowing; // @synthesize findIsShowing=_findIsShowing;
@property(retain, nonatomic) TSWPSearchReference *activeSearchReference; // @synthesize activeSearchReference=_activeSearchReference;
- (id)p_selectionPathIncludingInfo:(id)arg1 excludingInfo:(id)arg2;
- (_Bool)p_hasEmptyList;
- (_Bool)p_hasVisibleContents;
- (void)p_drawTextInLayer:(id)arg1 context:(struct CGContext *)arg2 limitSelection:(id)arg3 rubyGlyphRange:(struct _NSRange)arg4 renderMode:(int)arg5 suppressInvisibles:(_Bool)arg6;
- (void)p_teardown;
@property(readonly, nonatomic) _Bool textIsVertical;
- (struct CGPoint)p_pinPoint:(struct CGPoint)arg1 toRect:(struct CGRect)arg2;
- (struct CGRect)p_paragraphModeRectangleForColumn:(id)arg1 selection:(id)arg2;
- (_Bool)isOverflowing;
- (void)p_updateLayersForInsertionPointSelection:(id)arg1;
- (_Bool)p_allowCaretForSelection:(id)arg1;
- (struct CGRect)p_convertNaturalRectToRotated:(struct CGRect)arg1 repAngle:(double)arg2;
- (struct CGRect)glyphRectForRubyFieldAtCharIndex:(unsigned long long)arg1 glyphRange:(struct _NSRange)arg2;
- (unsigned long long)glyphCountForRubyFieldAtCharIndex:(unsigned long long)arg1;
- (unsigned long long)charCountOfGlyphStartingAtCharIndex:(unsigned long long)arg1;
- (unsigned int)fontTraitsForRange:(struct _NSRange)arg1 includingLabel:(_Bool)arg2;
- (struct CGRect)glyphRectForRange:(struct _NSRange)arg1 includingLabel:(_Bool)arg2;
- (struct CGRect)columnRectForRange:(struct _NSRange)arg1;
- (struct CGRect)labelRectForCharIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) TSWPSelection *selection;
@property(readonly, nonatomic) NSArray *columns;
@property(readonly, nonatomic) TSWPStorage *storage;
- (id)hyperlinkContainerRep;
- (id)repForDragging;
- (id)siblings;
- (id)repForCharIndex:(unsigned long long)arg1 isStart:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isBeingEdited;
- (id)columnForCharIndex:(unsigned long long)arg1;
- (id)closestColumnForPoint:(struct CGPoint)arg1;
- (id)footnoteReferenceAttachmentAtPoint:(struct CGPoint)arg1;
- (id)footnoteMarkAttachmentAtPoint:(struct CGPoint)arg1;
- (id)rubyFieldAtPoint:(struct CGPoint)arg1;
- (id)smartFieldAtPoint:(struct CGPoint)arg1;
- (void)drawRubyInContext:(struct CGContext *)arg1 rubyFieldStart:(unsigned long long)arg2 rubyGlyphRange:(struct _NSRange)arg3;
- (void)drawInContext:(struct CGContext *)arg1 limitSelection:(id)arg2 suppressInvisibles:(_Bool)arg3;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (id)textBackgroundLayer;
- (id)textLayer;
- (void)performBlockOnTextLayers:(CDUnknownBlockType)arg1;
- (id)p_hyperlinkAtPoint:(struct CGPoint)arg1;
- (_Bool)directlyManagesLayerContent;
- (Class)layerClass;
- (unsigned long long)charIndexFromPoint:(struct CGPoint)arg1 allowPastBreak:(_Bool)arg2 allowNotFound:(_Bool)arg3 pastCenterGoesToNextChar:(_Bool)arg4 isAtEndOfLine:(_Bool *)arg5 leadingEdge:(_Bool *)arg6;
- (unsigned long long)charIndexFromPoint:(struct CGPoint)arg1 allowPastBreak:(_Bool)arg2 allowNotFound:(_Bool)arg3 isAtEndOfLine:(_Bool *)arg4 leadingEdge:(_Bool *)arg5;
- (unsigned long long)charIndexFromPoint:(struct CGPoint)arg1 allowPastBreak:(_Bool)arg2 isAtEndOfLine:(_Bool *)arg3;
- (unsigned long long)charIndexForPointWithPinning:(struct CGPoint)arg1 isTail:(_Bool)arg2 selectionType:(int)arg3;
- (unsigned long long)charIndexForPointWithPinning:(struct CGPoint)arg1;
- (_Bool)p_shouldShowCommentsIncludingHighlights:(_Bool)arg1;
- (struct CGRect)closestCaretRectForPoint:(struct CGPoint)arg1 inSelection:(_Bool)arg2;
- (struct CGRect)p_topicDragRectForSelection:(id)arg1;
- (struct CGRect)p_caretRectForSelection:(id)arg1;
- (struct CGRect)caretRectForSelection:(id)arg1;
- (CDStruct_7e4c5a1e)wordMetricsAtCharIndex:(unsigned long long)arg1;
- (CDStruct_50f584da)lineMetricsAtCharIndex:(unsigned long long)arg1;
- (CDStruct_50f584da)lineMetricsAtPoint:(struct CGPoint)arg1;
- (struct CGRect)caretRectForCharIndex:(unsigned long long)arg1 leadingEdge:(_Bool)arg2 caretAffinity:(int)arg3;
- (struct CGRect)caretRectForCharIndex:(unsigned long long)arg1 caretAffinity:(int)arg2;
- (struct CGRect)naturalBoundsRectForHyperlinkField:(id)arg1;
- (struct CGRect)rectForSelection:(id)arg1 includeRuby:(_Bool)arg2;
- (struct CGRect)rectForSelection:(id)arg1;
- (_Bool)isPointInSelectedArea:(struct CGPoint)arg1;
- (struct CGRect)selectionRect;
- (struct CGRect)caretRect;
- (struct CGPoint)pinToClosestColumn:(struct CGPoint)arg1;
- (struct CGPoint)pinToNaturalBounds:(struct CGPoint)arg1 andLastLineFragment:(_Bool)arg2;
- (struct _NSRange)range;
- (void)willBeRemoved;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) TSWPLayout *layout; // @dynamic layout;

@end

