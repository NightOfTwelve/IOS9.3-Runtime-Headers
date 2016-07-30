//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/SFReaderContext-Protocol.h>
#import <SafariServices/SFReaderEventsListener-Protocol.h>
#import <SafariServices/WKNavigationDelegate-Protocol.h>

@class NSString, WBSReaderFontManager, WKWebView, _WKRemoteObjectInterface;
@protocol SFReaderControllerDelegate, SFReaderWebProcessControllerProtocol;

__attribute__((visibility("hidden")))
@interface SFReaderController : NSObject <SFReaderEventsListener, SFReaderContext, WKNavigationDelegate>
{
    id <SFReaderWebProcessControllerProtocol> _readerControllerProxy;
    _WKRemoteObjectInterface *_eventsListenerInterface;
    WBSReaderFontManager *_fontManager;
    _Bool _readerAvailable;
    WKWebView *_webView;
    id <SFReaderControllerDelegate> _delegate;
}

@property(getter=isReaderAvailable) _Bool readerAvailable; // @synthesize readerAvailable=_readerAvailable;
@property __weak id <SFReaderControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) __weak WKWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)didPrepareReaderContentForDisplay:(id)arg1;
- (void)didPrepareReaderContentForPrinting:(id)arg1;
- (void)didCollectReaderContentForMail:(id)arg1;
- (void)didCollectReadingListItemInfo:(id)arg1 bookmarkID:(id)arg2;
- (void)didSetReaderConfiguration:(id)arg1;
- (void)didDetermineReaderAvailability:(_Bool)arg1;
- (id)fontManager;
- (id)configuration;
- (void)decreaseReaderTextSize;
- (void)increaseReaderTextSize;
- (void)setReaderTheme:(id)arg1;
- (void)setReaderLanguageTag:(id)arg1;
- (void)setReaderFont:(id)arg1;
- (void)setReaderUserVisibleWidth:(double)arg1;
- (void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 userVisibleWidth:(double)arg3 isViewingArchive:(_Bool)arg4;
- (id)readerURL;
- (void)loadNewArticle;
- (void)didCreateReaderWebView:(id)arg1;
- (void)clearUnusedReaderResourcesSoon;
- (void)clearAvailability;
- (void)createArticleFinder;
- (id)scrollPositionInformation;
- (void)deactivateReaderNow:(unsigned long long)arg1;
- (void)activateReader;
- (_Bool)shouldCreateArticleFinder;
- (void)clearReaderWebView;
- (_Bool)hasMultiplePages;
- (void)stopLoadingNextPage;
- (_Bool)isLoadingNextPage;
- (id)readerControllerProxy;
- (void)_setUpReaderActivityListener;
- (void)dealloc;
- (id)initWithWebView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

