//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <WebKit/UIScrollViewDelegate-Protocol.h>

@class NSString, UIColor, UIScrollView, WKBrowsingContextController, WKViewData;

@interface WKView : UIView <UIScrollViewDelegate>
{
    WKViewData *_data;
    unsigned int _unused;
    struct RetainPtr<WKScrollView> _scrollView;
    struct RetainPtr<WKContentView> _contentView;
    _Bool _isWaitingForNewLayerTreeAfterDidCommitLoad;
    struct unique_ptr<WebKit::ViewGestureController, std::__1::default_delete<WebKit::ViewGestureController>> _gestureController;
    _Bool _allowsBackForwardNavigationGestures;
    _Bool _hasStaticMinimumLayoutSize;
    struct CGSize _minimumLayoutSizeOverride;
    struct UIEdgeInsets _obscuredInsets;
    _Bool _isChangingObscuredInsetsInteractively;
    double _lastAdjustmentForScroller;
    _Bool _drawsBackground;
    _Bool _drawsTransparentBackground;
}

@property _Bool drawsTransparentBackground; // @synthesize drawsTransparentBackground=_drawsTransparentBackground;
@property _Bool drawsBackground; // @synthesize drawsBackground=_drawsBackground;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_keyboardChangedWithInfo:(id)arg1 adjustScrollView:(_Bool)arg2;
- (void)_updateVisibleContentRects;
- (void)_frameOrBoundsChanged;
- (void)_commonInitializationWithContextRef:(struct OpaqueWKContext *)arg1 pageGroupRef:(struct OpaqueWKPageGroup *)arg2 relatedToPage:(struct OpaqueWKPage *)arg3;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)_didFinishScrolling;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (_Bool)allowsBackForwardNavigationGestures;
- (void)setAllowsBackForwardNavigationGestures:(_Bool)arg1;
@property(readonly) WKBrowsingContextController *browsingContextController;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)didMoveToWindow;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 processGroup:(id)arg2 browsingContextGroup:(id)arg3 relatedToView:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 processGroup:(id)arg2 browsingContextGroup:(id)arg3;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, setter=_setBackgroundExtendsBeyondPage:) _Bool _backgroundExtendsBeyondPage;
@property(readonly) UIColor *_pageExtendedBackgroundColor;
- (void)_endInteractiveObscuredInsetsChange;
- (void)_beginInteractiveObscuredInsetsChange;
@property(nonatomic, setter=_setObscuredInsets:) struct UIEdgeInsets _obscuredInsets;
- (void)_didRelaunchProcess;
@property(nonatomic) struct CGSize minimumLayoutSizeOverride;
- (id)initWithFrame:(struct CGRect)arg1 contextRef:(struct OpaqueWKContext *)arg2 pageGroupRef:(struct OpaqueWKPageGroup *)arg3 relatedToPage:(struct OpaqueWKPage *)arg4;
- (id)initWithFrame:(struct CGRect)arg1 contextRef:(struct OpaqueWKContext *)arg2 pageGroupRef:(struct OpaqueWKPageGroup *)arg3;
@property(readonly) struct OpaqueWKPage *pageRef;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

