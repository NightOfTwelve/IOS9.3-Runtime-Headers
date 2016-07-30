//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLWebViewPrintPageHelper.h>

#import <QuickLook/WebFrameLoadDelegate-Protocol.h>

@class NSMutableArray, NSString, UIWebBrowserView, UIWebPaginationInfo;

__attribute__((visibility("hidden")))
@interface QLSpreadsheetPrintPageRenderer : QLWebViewPrintPageHelper <WebFrameLoadDelegate>
{
    UIWebBrowserView *_printView;
    UIWebPaginationInfo *_paginationInfo;
    _Bool _frameLoaded;
    NSMutableArray *_urls;
    unsigned long long _currentURLIndex;
    unsigned long long _currentPageIndex;
    long long _totalPagesPrinted;
    _Bool _printingDone;
    long long _numberOfPages;
}

- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (id)pdfDataForPageAtIndex:(long long)arg1 printingDone:(_Bool *)arg2;
- (void)prepareForDrawingPages:(struct _NSRange)arg1;
- (_Bool)_loadNextURL;
- (long long)numberOfPages;
- (_Bool)_loadURLAtIndex:(unsigned long long)arg1;
- (id)_documentURLs;
- (void)dealloc;
- (id)initWithWebBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

