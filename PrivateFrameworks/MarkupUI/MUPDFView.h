//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MarkupUI/MUPDFViewPlaceholderDelegate-Protocol.h>
#import <MarkupUI/UIGestureRecognizerDelegate-Protocol.h>
#import <MarkupUI/UIPDFPageViewDelegate-Protocol.h>

@class MUPDFViewPlaceholder, NSArray, NSData, NSMutableArray, NSObject, NSString, UIColor, UIPDFDocument, UITapGestureRecognizer;
@protocol MUPDFViewDelegate;

@interface MUPDFView : UIView <UIPDFPageViewDelegate, MUPDFViewPlaceholderDelegate, UIGestureRecognizerDelegate>
{
    NSMutableArray *_backingLayerImageViews;
    struct CGPDFDocument *_cgPDFDocument;
    _Bool _delegateRespondsToDidScroll;
    UITapGestureRecognizer *_tapGestureRecognizer;
    _Bool _rotating;
    _Bool _zooming;
    double _documentScale;
    struct CGPoint _contentOffsetAtScrollStart;
    NSMutableArray *_pageViews;
    _Bool _readyForSnapshot;
    _Bool _hideActivityIndicatorForUnRenderedContent;
    _Bool _hidePageViewsUntilReadyToRender;
    NSObject<MUPDFViewDelegate> *_pdfDelegate;
    UIPDFDocument *_document;
    MUPDFViewPlaceholder *_pdfPlaceHolderView;
    double _initialZoomScale;
    UIColor *_backgroundColorForUnRenderedContent;
    long long _ignoreContentOffsetChanges;
    NSString *_documentPassword;
    NSArray *_pageRects;
    NSArray *_pageMinYs;
    struct CGRect _documentBounds;
    struct CGAffineTransform _documentTransform;
}

@property(retain, nonatomic) NSArray *pageMinYs; // @synthesize pageMinYs=_pageMinYs;
@property(retain, nonatomic) NSArray *pageRects; // @synthesize pageRects=_pageRects;
@property(readonly, nonatomic) double documentScale; // @synthesize documentScale=_documentScale;
@property(retain, nonatomic) NSString *documentPassword; // @synthesize documentPassword=_documentPassword;
@property(nonatomic) struct CGAffineTransform documentTransform; // @synthesize documentTransform=_documentTransform;
@property(nonatomic) long long ignoreContentOffsetChanges; // @synthesize ignoreContentOffsetChanges=_ignoreContentOffsetChanges;
@property(nonatomic) _Bool hidePageViewsUntilReadyToRender; // @synthesize hidePageViewsUntilReadyToRender=_hidePageViewsUntilReadyToRender;
@property(nonatomic) _Bool hideActivityIndicatorForUnRenderedContent; // @synthesize hideActivityIndicatorForUnRenderedContent=_hideActivityIndicatorForUnRenderedContent;
@property(retain, nonatomic) UIColor *backgroundColorForUnRenderedContent; // @synthesize backgroundColorForUnRenderedContent=_backgroundColorForUnRenderedContent;
@property(nonatomic) double initialZoomScale; // @synthesize initialZoomScale=_initialZoomScale;
@property(nonatomic) __weak MUPDFViewPlaceholder *pdfPlaceHolderView; // @synthesize pdfPlaceHolderView=_pdfPlaceHolderView;
@property(nonatomic) _Bool readyForSnapshot; // @synthesize readyForSnapshot=_readyForSnapshot;
@property(retain, nonatomic) UIPDFDocument *document; // @synthesize document=_document;
@property(nonatomic) struct CGRect documentBounds; // @synthesize documentBounds=_documentBounds;
@property(nonatomic) NSObject<MUPDFViewDelegate> *pdfDelegate; // @synthesize pdfDelegate=_pdfDelegate;
- (void).cxx_destruct;
- (id)imageForContactRect:(struct CGRect)arg1 onPageInViewRect:(struct CGRect)arg2 destinationRect:(struct CGRect)arg3;
- (unsigned long long)_pageNumberForRect:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_tapGestureRecognized:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)_selection;
- (id)_pageWithSelection;
- (void)clearSelection;
- (void)pageWasRendered:(id)arg1;
- (void)resetZoom:(id)arg1;
- (void)zoom:(id)arg1 to:(struct CGRect)arg2 atPoint:(struct CGPoint)arg3 kind:(int)arg4;
- (void)didCompleteLayout;
- (void)_recreateUIPDFDocument;
- (_Bool)_checkIfDocumentNeedsUnlock;
- (_Bool)_tryToUnlockDocumentWithPassword:(id)arg1;
- (void)viewWillClose;
- (void)snapshotComplete;
- (void)prepareForSnapshot:(_Bool)arg1;
- (unsigned long long)firstVisiblePageNumber;
- (void)didZoom:(id)arg1;
- (void)willZoom:(id)arg1;
- (void)didRotate:(id)arg1;
- (void)willRotate:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)_didScroll;
- (void)willScroll:(id)arg1;
- (void)ensureCorrectPagesAreInstalled:(_Bool)arg1;
- (void)_removePageViewsNotInViewCoordsRect:(struct CGRect)arg1;
- (id)_addPageAtIndex:(unsigned long long)arg1;
- (void)_addSubViewsInViewCoordsBounds:(struct CGRect)arg1;
- (id)_installViewAtIndex:(long long)arg1 inFrame:(struct CGRect)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGRect)_viewCachingBoundsInUIViewCoords;
- (struct CGRect)_viewportBoundsInUIViewCoords;
- (struct CGRect)_viewportBoundsInUIVIewCoordsWithView:(id)arg1;
- (id)viewportView;
- (id)viewAtIndex:(long long)arg1;
- (void)dealloc;
- (void)_removeBackgroundImageObserverIfNeeded:(id)arg1;
- (id)initWithMUPDFViewPlaceholder:(id)arg1;
@property(readonly, nonatomic) NSData *documentData;
- (id)uiPDFDocument;
@property(readonly, nonatomic) struct CGPDFDocument *cgPDFDocument;
- (_Bool)_hasPageRects;
@property(readonly, nonatomic) unsigned long long totalPages;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

