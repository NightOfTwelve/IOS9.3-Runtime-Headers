//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKit/NSURLConnectionDataDelegate-Protocol.h>
#import <PassKit/PKCaptureDelegate-Protocol.h>
#import <PassKit/PKPassPersonalizationViewControllerDelegate-Protocol.h>
#import <PassKit/PKPaymentSetupViewControllerDelegate-Protocol.h>
#import <PassKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSMutableData, NSSet, NSString, NSURLConnection, PKCaptureSession, PKReticleView, UILabel, UINavigationBar, UIProgressView;
@protocol PKCodeAcquisitionDelegate;

@interface PKCodeAcquisitionViewController : UIViewController <PKCaptureDelegate, NSURLConnectionDataDelegate, UIGestureRecognizerDelegate, PKPassPersonalizationViewControllerDelegate, PKPaymentSetupViewControllerDelegate>
{
    UINavigationBar *_navBar;
    PKCaptureSession *_captureSession;
    PKReticleView *_reticleView;
    NSURLConnection *_downloadConnection;
    NSMutableData *_downloadData;
    long long _downloadExpectedContentSize;
    UILabel *_captionLabel;
    UIProgressView *_downloadProgressView;
    UILabel *_errorLabel;
    UILabel *_helpLabel;
    NSSet *_supportedBarcodeTypes;
    id <PKCodeAcquisitionDelegate> _delegate;
}

@property(nonatomic) id <PKCodeAcquisitionDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)_handleDownloadFailureWithReason:(id)arg1 errorToDisplay:(id)arg2;
- (void)_handleDownloadFailureWithReason:(id)arg1;
- (void)_handleDownloadedPass:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)passPersonalizationViewController:(id)arg1 didFinishPersonalizingPass:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_handleSingleTap:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)_cleanupDownload;
- (void)_handleFoundCode:(id)arg1;
- (void)cancel;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureSession:(id)arg1 isRunning:(_Bool)arg2;
- (void)_restartCaptureSession;
- (void)_setCaptureUIState:(long long)arg1 animated:(_Bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

