//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebUI/WBUWebProcessPlugInAutoFillPageController.h>

#import <SafariServices/RequestDesktopSiteWebProcessPlugInListener-Protocol.h>
#import <SafariServices/SFReaderWebProcessControllerProtocol-Protocol.h>

@class NSDictionary, NSMutableSet, NSString, SFWebProcessPlugInPageExtensionController, _SFReaderWebProcessPlugInPageController, _SFWebProcessPlugInPageSafeBrowsingController, _WKRemoteObjectInterface;
@protocol RequestDesktopSiteUIProcessListener, SFReaderEventsListener;

@interface _SFWebProcessPlugInReaderEnabledPageController : WBUWebProcessPlugInAutoFillPageController <RequestDesktopSiteWebProcessPlugInListener, SFReaderWebProcessControllerProtocol>
{
    struct unique_ptr<SafariServices::ReaderAvailabilityController, std::__1::default_delete<SafariServices::ReaderAvailabilityController>> _readerAvailabilityController;
    _WKRemoteObjectInterface *_availabilityControllerInterface;
    id <SFReaderEventsListener> _readerActivityListenerProxy;
    _SFReaderWebProcessPlugInPageController *_readerPageController;
    long long _cachedReaderTopScrollOffset;
    NSDictionary *_initialScrollPositionAsDictionary;
    _SFWebProcessPlugInPageSafeBrowsingController *_safeBrowsingController;
    SFWebProcessPlugInPageExtensionController *_extensionController;
    id <RequestDesktopSiteUIProcessListener> _requestDesktopSiteUIProcessListener;
    _WKRemoteObjectInterface *_requestDesktopSiteWebProcessPlugInListenerInterface;
    _Bool _viewingReadingListArchive;
    NSDictionary *_initalArticleScrollPositionAsDictionary;
    NSDictionary *_initialReaderConfiguration;
    double _readerUserVisibleWidth;
    NSMutableSet *_domainsNeedingDesktopUserAgent;
}

@property(readonly, nonatomic) NSMutableSet *domainsNeedingDesktopUserAgent; // @synthesize domainsNeedingDesktopUserAgent=_domainsNeedingDesktopUserAgent;
@property(readonly, nonatomic, getter=isViewingReadingListArchive) _Bool viewingReadingListArchive; // @synthesize viewingReadingListArchive=_viewingReadingListArchive;
@property(readonly, nonatomic) double readerUserVisibleWidth; // @synthesize readerUserVisibleWidth=_readerUserVisibleWidth;
@property(readonly, nonatomic) NSDictionary *initialReaderConfiguration; // @synthesize initialReaderConfiguration=_initialReaderConfiguration;
@property(nonatomic) long long cachedReaderTopScrollOffset; // @synthesize cachedReaderTopScrollOffset=_cachedReaderTopScrollOffset;
@property(copy, nonatomic) NSDictionary *initalArticleScrollPositionAsDictionary; // @synthesize initalArticleScrollPositionAsDictionary=_initalArticleScrollPositionAsDictionary;
@property(retain, nonatomic) _SFReaderWebProcessPlugInPageController *readerPageController; // @synthesize readerPageController=_readerPageController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)markURLAsNeedingDesktopUserAgent:(id)arg1;
- (void)webProcessPlugInBrowserContextController:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didSameDocumentNavigation:(long long)arg2 forFrame:(id)arg3;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)_deferPageLoadingUntilSafeBrowsingCheckCompleteForFrame:(id)arg1;
- (void)prepareReaderContentForPrinting;
- (void)collectReaderContentForMail;
- (void)readerContentIsReadyForDisplay:(id)arg1;
- (void)didSetReaderConfiguration:(id)arg1;
- (void)collectReadingListItemInfoWithBookmarkID:(id)arg1;
- (void)loadNewReaderArticle;
- (void)didCreateReaderPageContextHandle:(id)arg1;
- (void)prepareToTransitionToReader;
- (void)decreaseReaderTextSize;
- (void)increaseReaderTextSize;
- (void)setReaderTheme:(id)arg1;
- (void)setReaderFont:(id)arg1;
- (void)setReaderUserVisibleWidth:(double)arg1;
- (void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 userVisibleWidth:(double)arg3 isViewingArchive:(_Bool)arg4;
- (struct OpaqueJSValue *)originalArticleFinder;
- (void)_detectReaderAvailabilityAfterSameDocumentNavigation;
- (void)_detectAvailabilityAfterDelay:(double)arg1 loadEvent:(int)arg2;
- (void)_clearReaderControllerInterface;
- (void)_setUpReaderControllerInterface;
- (void)didDetermineReaderAvailability:(_Bool)arg1;
- (void)willDestroyBrowserContextController:(id)arg1;
- (id)initWithPlugIn:(id)arg1 contextController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

