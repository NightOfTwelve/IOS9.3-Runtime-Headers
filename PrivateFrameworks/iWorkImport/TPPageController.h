//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TPLayoutStateConsumer-Protocol.h>
#import <iWorkImport/TPLayoutStateProvider-Protocol.h>
#import <iWorkImport/TPPageLayoutInfoProvider-Protocol.h>
#import <iWorkImport/TSWPLayoutOwner-Protocol.h>

@class NSDate, NSMutableArray, NSString, TPDocumentRoot, TPFootnoteLayoutController, TPPageLayoutState, TPSearchCanvasDelegate, TSUMutablePointerSet, TSWPLayoutManager;

__attribute__((visibility("hidden")))
@interface TPPageController : NSObject <TPPageLayoutInfoProvider, TSWPLayoutOwner, TPLayoutStateConsumer, TPLayoutStateProvider>
{
    TPDocumentRoot *_documentRoot;
    TSWPLayoutManager *_bodyLayoutManager;
    TPSearchCanvasDelegate *_offscreenSearchDelegate;
    TPFootnoteLayoutController *_footnoteLayoutController;
    NSMutableArray *_sectionHints;
    struct multimap<unsigned long, TPPageLayout *, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, TPPageLayout *>>> _pageLayoutCache;
    TPPageLayoutState *_layoutState;
    _Bool _checkedForBackUp;
    NSMutableArray *_pageGeneratorStack;
    _Bool _handleBackgroundLayoutScheduled;
    int _bgLayoutStatus;
    NSDate *_bgLayoutStartDate;
    unsigned long long _lastKnownPageCount;
    unsigned long long _completePageCount;
    _Bool _shouldUpdatePageCount;
    unsigned long long _didLayOutPageIndex;
    unsigned long long _currentPageBeingLaidOut;
    TSUMutablePointerSet *_layoutObservers;
    int _backgroundLayoutEnabled;
    int _backgroundLayoutSuspendCount;
    int _isScrolling;
    _Bool _isObservingNotifications;
}

@property(readonly, nonatomic) unsigned long long pageCount; // @synthesize pageCount=_lastKnownPageCount;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)p_backgroundLayoutReadEntry;
- (void)p_layoutNextPageOnce;
- (void)p_cancelBGLayout;
- (void)p_scheduleImmediateBGLayout;
- (void)p_scheduleBGLayout;
- (void)p_setBackgroundLayoutStartDate:(id)arg1;
- (void)p_updateBackgroundLayoutStartDate;
- (_Bool)p_isBackgroundLayoutActive;
- (void)p_handleBGLayoutStatusChange;
- (void)p_handleBackgroundLayout;
- (void)p_handleBackgroundLayoutMainThreadEntry;
- (void)p_notifyObserversDidInvalidate;
- (void)p_notifyObserversDidLayoutWhileSyncing:(_Bool)arg1;
- (void)p_notifyObserversWillLayoutWhileSyncing:(_Bool)arg1;
- (unsigned long long)p_textPageIndexPrecedingPageIndex:(unsigned long long)arg1;
- (unsigned long long)p_lastValidTextPageIndex;
- (id)p_lastValidTextPageHint;
- (id)p_lastValidPageHint;
- (id)p_textPageHintFollowingPageIndexPath:(id)arg1;
- (id)p_textPageHintPrecedingPageIndexPath:(id)arg1;
- (id)p_textPageHintPrecedingPageIndex:(unsigned long long)arg1;
- (id)p_pageHintPrecedingPageIndexPath:(id)arg1;
- (id)p_pageHintForPageIndexPath:(id)arg1;
- (id)p_sectionHintForPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2 allowAfterLayoutPoint:(_Bool)arg3;
- (id)p_pageHintForPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2 allowAfterLayoutPoint:(_Bool)arg3;
- (id)p_pageIndexPathForPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2 allowAfterLayoutPoint:(_Bool)arg3;
- (void)p_updatePageCount;
- (void)p_didLayout;
- (void)p_advanceSectionIndex;
- (void)p_removeFinishedPageGenerators;
- (void)p_syncFromNextPageWithDirtyRange:(struct _NSRange)arg1;
- (void)p_resetPageGenerators;
- (void)p_preparePageHintForNextPage;
- (void)p_prepareSectionHintForNextPage;
- (void)p_prepareLayoutStateForNextPage;
- (void)p_updateNonTextHintAtPageIndexPath:(id)arg1;
- (void)p_updateTextHintAtPageIndexPath:(id)arg1 withTarget:(id)arg2;
- (void)p_layoutFootnotesIntoPageLayout:(id)arg1;
- (void)p_layoutTextIntoPageLayout:(id)arg1 outDidSync:(_Bool *)arg2;
- (void)p_layoutIntoPageLayout:(id)arg1 outDidSync:(_Bool *)arg2;
- (void)p_layoutNextPageForLayoutController:(id)arg1 dirtyRange:(struct _NSRange)arg2;
- (void)p_layoutThroughPageIndex:(unsigned long long)arg1 forLayoutController:(id)arg2 clearOffscreenInfos:(_Bool)arg3;
- (void)p_checkForBackUp;
- (void)p_processWidowsAndInflationForLayoutController:(id)arg1;
- (unsigned long long)p_pageIndexForFootnoteIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2 searchAfterLayoutPoint:(_Bool)arg3;
- (unsigned long long)p_pageIndexForAnchoredCharIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2 searchAfterLayoutPoint:(_Bool)arg3;
- (unsigned long long)p_pageIndexContainingIndex:(unsigned long long)arg1 ofType:(int)arg2;
- (struct _NSRange)p_footnoteLayoutRangeForPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2 allowAfterLayoutPoint:(_Bool)arg3;
- (struct _NSRange)p_anchoredRangeForPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2 allowAfterLayoutPoint:(_Bool)arg3;
- (struct _NSRange)p_bodyRangeForPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2 allowAfterLayoutPoint:(_Bool)arg3;
- (unsigned long long)p_pageIndexForCharIndex:(unsigned long long)arg1 caretAffinity:(int)arg2 forceLayout:(_Bool)arg3 searchAfterLayoutPoint:(_Bool)arg4;
- (id)p_pageInfoForPageAtIndex:(unsigned long long)arg1;
- (void)p_withPageLayoutAtIndex:(unsigned long long)arg1 preferredLayoutController:(id)arg2 executeBlock:(CDUnknownBlockType)arg3;
- (id)p_cachedPageLayoutForPageIndex:(unsigned long long)arg1 preferredLayoutController:(id)arg2;
- (void)p_removePageLayoutFromCache:(id)arg1;
- (void)p_insertPageLayoutIntoCache:(id)arg1;
- (unsigned long long)p_layoutEndFootnoteIndex;
- (unsigned long long)p_layoutEndCharIndex;
- (_Bool)p_isLayoutComplete;
- (void)p_destroyBodyLayoutState;
- (void)p_forceRestartLayout;
- (void)p_invalidatePageIndex:(unsigned long long)arg1;
- (void)p_setNeedsLayoutOnPageIndex:(unsigned long long)arg1;
- (void)p_setNeedsLayoutFromSectionIndexToEnd:(unsigned long long)arg1;
- (void)didScroll:(id)arg1;
- (void)willScroll:(id)arg1;
- (void)didZoom:(id)arg1;
- (void)willZoom:(id)arg1;
- (id)sectionHintsForArchivedLayoutState:(id)arg1;
- (unsigned long long)bodyLengthForArchivedLayoutState:(id)arg1;
- (unsigned long long)lastPageCountForArchivedLayoutState:(id)arg1;
- (unsigned long long)documentPageIndexForArchivedLayoutState:(id)arg1;
- (unsigned long long)sectionPageIndexForArchivedLayoutState:(id)arg1;
- (unsigned long long)sectionIndexForArchivedLayoutState:(id)arg1;
- (_Bool)archivedLayoutState:(id)arg1 setSectionHints:(id)arg2;
- (_Bool)archivedLayoutState:(id)arg1 setBodyLength:(unsigned long long)arg2;
- (void)archivedLayoutState:(id)arg1 setLastPageCount:(unsigned long long)arg2;
- (void)archivedLayoutState:(id)arg1 setDocumentPageIndex:(unsigned long long)arg2;
- (void)archivedLayoutState:(id)arg1 setSectionPageIndex:(unsigned long long)arg2;
- (void)archivedLayoutState:(id)arg1 setSectionIndex:(unsigned long long)arg2;
- (void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3;
- (id)textWrapper;
- (void)layoutManagerNeedsLayout:(id)arg1;
- (_Bool)caresAboutStorageChanges;
- (id)pageInfosForInfo:(id)arg1 withSelectionPath:(id)arg2;
- (id)p_pageInfosForBodySelection:(id)arg1;
- (void)removeLayoutObserver:(id)arg1;
- (void)addLayoutObserver:(id)arg1;
- (_Bool)okToAnchorDrawables:(id)arg1 toPageIndex:(unsigned long long)arg2;
- (_Bool)okToAnchorDrawable:(id)arg1 toPageIndex:(unsigned long long)arg2;
- (_Bool)p_canAnchorDrawable:(id)arg1 toPageLayout:(id)arg2;
- (id)footnoteLayoutController;
@property(readonly, nonatomic) unsigned long long firstPageIndexNeedingLayout;
- (_Bool)isLayoutInProgress;
- (_Bool)isLayoutComplete;
- (_Bool)isLayoutCompleteThroughPageIndex:(unsigned long long)arg1;
- (double)footerHeight;
- (double)headerHeight;
- (void)accquireLockAndPerformAction:(CDUnknownBlockType)arg1;
- (void)withPageLayoutAtIndex:(unsigned long long)arg1 preferredLayoutController:(id)arg2 executeBlock:(CDUnknownBlockType)arg3;
- (void)withPageLayoutAtIndex:(unsigned long long)arg1 executeBlock:(CDUnknownBlockType)arg2;
- (id)p_pageInfosForAttachmentAtBodyCharIndex:(unsigned long long)arg1 selectionPath:(id)arg2;
- (id)pageInfoForPageIndex:(unsigned long long)arg1;
- (struct _NSRange)sectionPageRangeForPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2 outEndIsValid:(_Bool *)arg3;
- (unsigned long long)sectionPageIndexForPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2;
- (struct _NSRange)sectionBodyRangeForPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2;
- (unsigned long long)sectionIndexForPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2;
- (struct _NSRange)pageRangeOfSectionIndex:(unsigned long long)arg1;
- (unsigned long long)pageIndexForFootnoteIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2;
- (unsigned long long)pageIndexForAnchoredCharIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2;
- (unsigned long long)pageIndexForCharIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2;
- (_Bool)pageAtIndexHasBody:(unsigned long long)arg1;
- (_Bool)pageEndsWithPaginatedAttachment:(unsigned long long)arg1;
- (_Bool)pageBeginsWithPaginatedAttachment:(unsigned long long)arg1;
- (struct _NSRange)footnoteLayoutRangeForPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2;
- (struct _NSRange)anchoredRangeForPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2;
- (struct _NSRange)bodyRangeForPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2;
- (struct _NSRange)pageRangeForSelection:(id)arg1 outEndIsValid:(_Bool *)arg2;
- (void)layoutThroughPageIndex:(unsigned long long)arg1 forLayoutController:(id)arg2;
- (void)layoutThroughPageIndex:(unsigned long long)arg1;
- (void)scheduleImmediateBackgroundLayout;
- (void)resumeBackgroundLayout;
- (void)suspendBackgroundLayout;
@property(nonatomic) _Bool backgroundLayoutEnabled;
- (void)dealloc;
- (void)teardown;
- (id)initWithDocumentRoot:(id)arg1;
- (void)i_setNeedsDynamicLayoutForLayoutController:(id)arg1 onPageIndex:(unsigned long long)arg2;
- (_Bool)i_shouldLayoutBodyVertically;
- (void)i_unregisterPageLayout:(id)arg1;
- (void)i_registerPageLayout:(id)arg1;
- (void)i_inflateFootnotesInFootnoteContainer:(id)arg1;
- (void)i_inflateColumnsInBodyLayout:(id)arg1;
- (id)i_firstChildHintAfterPageIndex:(unsigned long long)arg1;
- (id)i_columnAfterPageIndex:(unsigned long long)arg1;
- (const struct TSWPTopicNumberHints *)i_topicHintsAfterPageIndex:(unsigned long long)arg1;
- (const struct TSWPTopicNumberHints *)i_topicHintsPriorToPageIndex:(unsigned long long)arg1;
- (id)i_columnPriorToPageIndex:(unsigned long long)arg1;
- (void)i_trimPageAtIndex:(unsigned long long)arg1 toCharIndex:(unsigned long long)arg2 removeFootnoteLayoutCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4;
- (id)i_pageHintForPageIndex:(unsigned long long)arg1;
- (void)d_timeLayout;
- (struct _NSRange)p_rangeOfContinuousSectionsAtPageIndex:(unsigned long long)arg1 startPage:(unsigned long long *)arg2;
- (id)p_pageMasterForPageIndex:(unsigned long long)arg1 inSection:(id)arg2 sectionHint:(id)arg3;
- (id)p_sectionAtSectionIndex:(unsigned long long)arg1;
- (_Bool)isSectionInfo:(id)arg1 onPage:(unsigned long long)arg2;
- (int)contentFlagsForPageIndex:(unsigned long long)arg1;
- (unsigned long long)pageCountForPageIndex:(unsigned long long)arg1;
- (unsigned long long)pageNumberForPageIndex:(unsigned long long)arg1;
- (id)masterDrawableProviderForPageIndex:(unsigned long long)arg1;
- (_Bool)shouldHeaderFooterBeVisibleForPageIndex:(unsigned long long)arg1;
- (id)headerFooterProviderForPageIndex:(unsigned long long)arg1;
- (_Bool)canProvideNumberingInfoForPageIndex:(unsigned long long)arg1;
- (_Bool)canProvideInfoForPageIndex:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

