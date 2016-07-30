//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWebDocumentView.h>

#import <MessageUI/WebResourceLoadDelegate-Protocol.h>

@class DOMHTMLDocument, DOMHTMLElement, NSArray, NSString, UIBarButtonItemGroup;
@protocol MFMailComposeViewDelegate;

@interface MFComposeBodyField : UIWebDocumentView <WebResourceLoadDelegate>
{
    DOMHTMLElement *_body;
    DOMHTMLDocument *_document;
    DOMHTMLElement *_blockquote;
    struct CGSize _originalSize;
    struct CGSize _layoutSize;
    _Bool _shouldShowStandardButtons;
    unsigned int _isDirty:1;
    unsigned int _forwardingNotification:1;
    unsigned int _isLoading:1;
    unsigned int _needsReplaceImages:1;
    struct _NSRange _rangeToSelect;
    id <MFMailComposeViewDelegate> _mailComposeViewDelegate;
    NSString *_compositionContextID;
    int _preventLayout;
    _Bool _prefersFirstLineSelection;
    unsigned long long _imageCount;
    NSArray *_attachmentURLsToReplaceWithFilenames;
    UIBarButtonItemGroup *_inputAssistantItemGroup;
}

@property _Bool shouldShowStandardButtons; // @synthesize shouldShowStandardButtons=_shouldShowStandardButtons;
- (id)documentFragmentForPasteboardItemAtIndex:(long long)arg1;
- (id)_nodeForAttachmentFileURL:(id)arg1 text:(id)arg2 type:(id)arg3 contentID:(id)arg4;
- (id)_nodeForAttachmentData:(id)arg1 text:(id)arg2 type:(id)arg3 contentID:(id)arg4;
- (id)_nodeForAttachmentData:(id)arg1 text:(id)arg2 type:(id)arg3;
- (void)_removeInlineAttachment:(id)arg1;
- (id)_addInlineAttachmentWithData:(id)arg1 fileName:(id)arg2 type:(id)arg3 contentID:(id)arg4;
- (id)_addInlineAttachmentWithData:(id)arg1 fileName:(id)arg2 type:(id)arg3;
- (id)_mimeTypeForFilename:(id)arg1;
- (_Bool)_shouldCreatePlaceholderAttachmentForAttachmentWithSize:(unsigned long long)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)addSelectedAttachmentsToPasteboard:(id)arg1;
- (void)setSelectedDOMRange:(id)arg1 affinityDownstream:(_Bool)arg2;
- (struct CGRect)rectOfElementWithID:(id)arg1;
- (id)htmlString;
- (void)htmlString:(id *)arg1 otherHtmlStringsAndAttachments:(id *)arg2 charsets:(id *)arg3;
- (id)plainTextContent;
- (id)compositionContextID;
- (void)setCompositionContextID:(id)arg1;
- (id)plainTextAlternative;
- (_Bool)containsRichText;
- (void)markupSelectedAttachment;
- (id)keyCommands;
- (void)_decreaseQuoteLevelKeyCommandInvoked:(id)arg1;
- (void)_increaseQuoteLevelKeyCommandInvoked:(id)arg1;
- (void)_pasteAsQuotationKeyCommandInvoked:(id)arg1;
- (id)_mailComposeEditingInputAssistantGroup;
- (void)_didTapInsertPhotoInputAssistantButton:(id)arg1;
- (void)_showQuoteLevelOptionsPopover:(id)arg1;
- (void)didUndoOrRedo:(id)arg1;
- (void)replaceAttachment:(id)arg1 withDocumentData:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4;
- (void)insertDocumentWithData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4;
- (void)replaceAttachment:(id)arg1 withDocumentAtURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareDataForDocumentAtURLForInsertion:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_attachmentPlaceholderForData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4;
- (id)_attachmentPlaceholderForFileName:(id)arg1 fileSize:(long long)arg2 url:(id)arg3 mimeType:(id)arg4 contentID:(id)arg5;
- (id)_securityScopeForFileURL:(id)arg1;
- (id)_placeholderForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4;
- (void)insertDocumentWithURL:(id)arg1;
- (void)insertPhotoOrVideoWithInfoDictionary:(id)arg1;
- (id)_filenameForVideoAttachmentAtURL:(id)arg1;
- (void)changeQuoteLevel:(long long)arg1;
- (void)changeQuoteLevel:(long long)arg1 forDOMRange:(id)arg2;
- (void)updateQuoteLevelMenu;
- (void)addAdditionalItemsToCalloutBar;
- (void)saveSelectionForUndo;
- (void)setSelectionStart:(id)arg1 offset:(int)arg2 end:(id)arg3 offset:(int)arg4 affinity:(int)arg5;
- (void)splitUpBlockQuotesOverlappingEndOfRange:(id)arg1;
- (void)splitUpBlockQuotesOverlappingStartOfRange:(id)arg1;
- (void)replaceNode:(id)arg1 oldNode:(id)arg2;
- (void)removeBlockQuoteFromTree:(id)arg1;
- (void)insertNode:(id)arg1 parent:(id)arg2 offset:(int)arg3;
- (void)insertNode:(id)arg1 parent:(id)arg2 nextSibling:(id)arg3;
- (void)deleteRange:(id)arg1;
- (void)deleteNode:(id)arg1;
- (id)temporaryEndingSelectionMarker;
- (void)deleteTemporarySelectionMarkersFromDocument:(id)arg1;
- (void)restoreSelectionFromTemporaryMarkers:(_Bool)arg1;
- (void)restoreSelectionFromTemporaryMarkers;
- (id)insertTemporarySelectionMarkersForRange:(id)arg1;
- (void)addMailAttributesBeforeDisplayHidingTrailingEmptyQuotes:(_Bool)arg1;
- (void)prependMarkupString:(id)arg1 quote:(_Bool)arg2;
- (void)prependString:(id)arg1;
- (void)setPrefersFirstLineSelection;
- (void)appendQuotedMarkupString:(id)arg1 baseURL:(id)arg2;
- (void)setMarkupString:(id)arg1 baseURL:(id)arg2 quote:(_Bool)arg3;
- (void)appendMarkupString:(id)arg1 quote:(_Bool)arg2;
- (void)prependMarkupString:(id)arg1 quote:(_Bool)arg2 baseURL:(id)arg3 emptyFirst:(_Bool)arg4;
- (void)addMarkupString:(id)arg1 quote:(_Bool)arg2 baseURL:(id)arg3 emptyFirst:(_Bool)arg4 prepended:(_Bool)arg5;
- (void)addDOMNode:(id)arg1 quote:(_Bool)arg2 baseURL:(id)arg3 emptyFirst:(_Bool)arg4 prepended:(_Bool)arg5;
- (void)_nts_AddDOMNode:(id)arg1 quote:(_Bool)arg2 baseURL:(id)arg3 emptyFirst:(_Bool)arg4 prepended:(_Bool)arg5;
- (void)setMarkupString:(id)arg1;
- (void)setLoading:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setPinHeight:(double)arg1;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webViewDidDraw:(id)arg1;
- (void)_webthread_webView:(id)arg1 tileDidDraw:(id)arg2;
- (_Bool)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4;
- (_Bool)webView:(id)arg1 shouldDeleteDOMRange:(id)arg2;
- (id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (id)webThreadWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)_finishedLoadingURLRequest:(id)arg1 success:(_Bool)arg2;
- (void)webViewDidChange:(id)arg1;
- (_Bool)isForwardingNotification;
- (void)layoutWithMinimumSize;
- (void)endPreventingLayout;
- (void)beginPreventingLayout;
- (void)setAttachmentURLsToBeReplacedWithFilename:(id)arg1;
- (void)deferredBecomeFirstResponder;
- (void)_applyLayoutMarginsToBodyStyle;
- (void)setLayoutMargins:(struct UIEdgeInsets)arg1;
- (void)unscaleImages;
- (void)scaleImagesToScale:(unsigned long long)arg1;
- (void)replaceImagesIfNecessary;
- (void)_replaceImages;
- (void)_ensureQuotedImagesHaveAttachmentStyleForElement:(id)arg1;
- (void)setLayoutInterval:(int)arg1;
@property(readonly, nonatomic) _Bool shouldShowMarkupButton;
- (void)setCaretPosition:(unsigned long long)arg1;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (struct _NSRange)selectedRange;
- (void)ensureSelection;
- (_Bool)isDirty;
- (void)setDirty:(_Bool)arg1;
- (double)contentWidth;
- (id)mailComposeViewDelegate;
- (void)setMailComposeViewDelegate:(id)arg1;
- (void)updateInputAssistantItem;
- (void)invalidate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

