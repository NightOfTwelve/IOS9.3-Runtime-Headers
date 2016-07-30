//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UITextInput-Protocol.h>
#import <UIKit/UITextInputTraits-Protocol.h>
#import <UIKit/UITextLinkInteraction-Protocol.h>
#import <UIKit/WebPolicyDelegate-Protocol.h>

@class DOMHTMLElement, NSAttributedString, NSDictionary, NSString, UIColor, UIFont, UITextInteractionAssistant, UITextPosition, UITextRange, UIWebDocumentView, WebFrame;
@protocol UITextContentViewDelegate, UITextInputDelegate, UITextInputTokenizer;

@interface UITextContentView : UIView <WebPolicyDelegate, UITextInput, UITextLinkInteraction, UITextInputTraits>
{
    id m_delegate;
    WebFrame *m_frame;
    DOMHTMLElement *m_body;
    int m_marginTop;
    struct UIEdgeInsets m_selectionInset;
    double m_bottomBufferHeight;
    _Bool m_editable;
    _Bool m_editing;
    _Bool m_becomesEditableWithGestures;
    _Bool m_becomingFirstResponder;
    _Bool m_reentrancyGuard;
    _Bool m_scrollsSelectionOnWebDocumentChanges;
    _Bool m_hasExplicitTextAlignment;
    _Bool m_allowsEditingTextAttributes;
    _Bool m_usesAttributedText;
    UITextInteractionAssistant *m_interactionAssistant;
    UIWebDocumentView *m_webView;
    UIFont *m_font;
    UIColor *m_textColor;
    long long m_textAlignment;
}

@property(nonatomic) __weak id <UITextContentViewDelegate> delegate; // @synthesize delegate=m_delegate;
@property(nonatomic) _Bool scrollsSelectionOnWebDocumentChanges; // @synthesize scrollsSelectionOnWebDocumentChanges=m_scrollsSelectionOnWebDocumentChanges;
@property(nonatomic) struct UIEdgeInsets selectionInset; // @synthesize selectionInset=m_selectionInset;
- (void).cxx_destruct;
- (void)setSelectionGranularity:(long long)arg1;
- (long long)selectionGranularity;
@property(nonatomic) long long selectionAffinity;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(copy) UITextRange *selectedTextRange;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)textInRange:(id)arg1;
- (id)metadataDictionariesForDictationResults;
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;
- (id)insertDictationResultPlaceholder;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (void)insertText:(id)arg1;
- (void)deleteBackward;
- (id)_proxyTextInput;
- (struct CGPoint)offset;
- (void)setOffset:(struct CGPoint)arg1;
- (void)displayScrollerIndicators;
- (double)bottomBufferHeight;
- (void)setBottomBufferHeight:(double)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)keyboardInputChangedSelection:(id)arg1;
- (_Bool)keyboardInputChanged:(id)arg1;
- (_Bool)keyboardInputShouldDelete:(id)arg1;
- (_Bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(_Bool)arg3;
- (_Bool)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)willInteractWithLinkAtPoint:(struct CGPoint)arg1;
- (_Bool)isInteractingWithLink;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)cancelInteractionWithLink;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)tapLinkAtPoint:(struct CGPoint)arg1;
- (unsigned long long)_allowedLinkTypes;
- (_Bool)mightHaveLinks;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (unsigned long long)dataDetectorTypes;
- (void)resetDataDetectorsResultsWithWebLock;
- (void)startDataDetectorsWithWebLock;
- (void)cancelDataDetectorsWithWebLock;
- (_Bool)shouldStartDataDetectors;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
- (void)_didScroll;
- (id)webView;
- (struct CGRect)visibleTextRect;
- (struct CGRect)visibleRect;
- (void)setMarginTop:(int)arg1;
- (int)marginTop;
- (void)setBecomesEditableWithGestures:(_Bool)arg1;
- (_Bool)becomesEditableWithGestures;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=m_editing;
@property(nonatomic, getter=isEditable) _Bool editable;
@property(nonatomic) struct _NSRange selectedRange;
@property(nonatomic) long long textAlignment;
@property(copy, nonatomic) NSString *text;
- (_Bool)hasText;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
@property(copy, nonatomic) NSAttributedString *attributedText;
- (void)_removeTextViewPropertiesFromText:(id)arg1;
- (void)_removeAttribute:(id)arg1 fromString:(id)arg2 andSetPropertyWith:(SEL)arg3 usingValueClass:(Class)arg4;
@property(nonatomic) _Bool allowsEditingTextAttributes;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)textInputTraits;
- (id)contentAsAttributedString;
- (void)setContentToAttributedString:(id)arg1;
- (id)contentAsHTMLString;
- (void)setContentToHTMLString:(id)arg1;
- (struct CGRect)rectForScrollToVisible;
- (void)performScrollSelectionToVisible:(_Bool)arg1;
- (void)scrollSelectionToVisible:(_Bool)arg1;
- (struct CGRect)rectForSelection:(struct _NSRange)arg1;
- (void)setSelectionToEnd;
- (void)setSelectionToStart;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_sizeChanged;
- (void)performBecomeEditableTasks;
- (void)webViewDidChange:(id)arg1;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;
- (id)documentFragmentForPasteboardItemAtIndex:(long long)arg1;
- (id)supportedPasteboardTypesForCurrentSelection;
- (void)selectAll;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_showTextStyleOptions:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (void)_addShortcut:(id)arg1;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (void)_lookup:(struct CGPoint)arg1;
- (void)_share:(id)arg1;
- (void)_define:(id)arg1;
- (void)_transliterateChinese:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (void)replace:(id)arg1;
- (void)decreaseSize:(id)arg1;
- (void)increaseSize:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)select:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (id)undoManager;
- (id)undoManagerForWebView:(id)arg1;
- (void)_hideSelectionCommands;
- (id)fontForCaretSelection;
- (struct _NSRange)selectionRange;
- (_Bool)hasMarkedText;
- (unsigned long long)offsetInMarkedTextForSelection:(id)arg1;
- (struct CGRect)closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint)arg1;
- (id)selectedText;
- (id)selectionRectsForRange:(id)arg1;
- (struct CGRect)caretRectForVisiblePosition:(id)arg1;
- (struct CGRect)_selectionClipRect;
- (_Bool)_restoreFirstResponder;
- (id)interactionAssistant;
- (id)selectionView;
- (void)cancelAutoscroll;
- (void)startAutoscroll:(struct CGPoint)arg1;
- (_Bool)hasSelection;
- (void)endSelectionChange;
- (void)updateSelection;
- (void)beginSelectionChange;
- (void)_scrollViewDidEndDecelerating;
- (void)_scrollViewDidEndDraggingWithDeceleration:(_Bool)arg1;
- (void)_scrollViewWillBeginDragging;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)automaticallySelectedOverlay;
- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1;
- (void)ensureSelection;
- (_Bool)isFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (id)_keyboardResponder;
- (void)setSelectionChangeCallbacksDisabled:(_Bool)arg1;
- (void)didMoveToSuperview;
- (void)recalculateStyle;
- (id)styleString;
- (void)keyboardDidShow:(id)arg1;
- (void)removeFromSuperview;
- (void)dealloc;
- (void)commonInitWithWebDocumentView:(id)arg1 isDecoding:(_Bool)arg2;
- (void)updateContentEditableAttribute:(_Bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 webView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_automationValue;

// Remaining properties
@property(nonatomic) long long autocapitalizationType; // @dynamic autocapitalizationType;
@property(nonatomic) long long autocorrectionType; // @dynamic autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance; // @dynamic keyboardAppearance;
@property(nonatomic) long long keyboardType; // @dynamic keyboardType;
@property(nonatomic) long long returnKeyType; // @dynamic returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @dynamic secureTextEntry;
@property(nonatomic) long long spellCheckingType; // @dynamic spellCheckingType;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView *textInputView;

@end

