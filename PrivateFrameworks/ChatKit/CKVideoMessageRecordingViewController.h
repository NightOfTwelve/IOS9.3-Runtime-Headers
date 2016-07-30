//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKActionMenuControllerDelegate-Protocol.h>
#import <ChatKit/CKVideoRecorderDelegate-Protocol.h>
#import <ChatKit/UIImagePickerControllerDelegate-Protocol.h>
#import <ChatKit/UINavigationControllerDelegate-Protocol.h>

@class CKActionMenuController, CKActionMenuItem, CKMediaObject, CKRecordingElapsedTimeView, NSError, NSString, UIButton, UIImagePickerController, UIView, UIWindow;
@protocol CKVideoMessageRecordingViewControllerDelegate;

@interface CKVideoMessageRecordingViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, CKActionMenuControllerDelegate, CKVideoRecorderDelegate>
{
    UIView *_presentationView;
    UIWindow *_overlayWindow;
    _Bool _presented;
    _Bool _previewWarmedUp;
    _Bool _showingVideo;
    _Bool _recording;
    _Bool _sending;
    _Bool _canceled;
    _Bool _triedToRecord;
    id <CKVideoMessageRecordingViewControllerDelegate> _videoMessageDelegate;
    UIView *_topBackgroundView;
    CKRecordingElapsedTimeView *_timerView;
    CKActionMenuController *_videoActionMenuController;
    CKActionMenuItem *_photoMenuItem;
    UIButton *_swapCameraButton;
    unsigned long long _enableCancel;
    CKMediaObject *_mediaObjectForSending;
    NSError *_captureError;
    CDUnknownBlockType _mediaExportCompletionBlock;
    UIImagePickerController *_cameraViewController;
}

@property(retain, nonatomic) UIImagePickerController *cameraViewController; // @synthesize cameraViewController=_cameraViewController;
@property(copy, nonatomic) CDUnknownBlockType mediaExportCompletionBlock; // @synthesize mediaExportCompletionBlock=_mediaExportCompletionBlock;
@property(retain, nonatomic) NSError *captureError; // @synthesize captureError=_captureError;
@property(retain, nonatomic) CKMediaObject *mediaObjectForSending; // @synthesize mediaObjectForSending=_mediaObjectForSending;
@property(nonatomic) unsigned long long enableCancel; // @synthesize enableCancel=_enableCancel;
@property(nonatomic) _Bool triedToRecord; // @synthesize triedToRecord=_triedToRecord;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(nonatomic) _Bool sending; // @synthesize sending=_sending;
@property(nonatomic) _Bool recording; // @synthesize recording=_recording;
@property(retain, nonatomic) UIButton *swapCameraButton; // @synthesize swapCameraButton=_swapCameraButton;
@property(retain, nonatomic) CKActionMenuItem *photoMenuItem; // @synthesize photoMenuItem=_photoMenuItem;
@property(retain, nonatomic) CKActionMenuController *videoActionMenuController; // @synthesize videoActionMenuController=_videoActionMenuController;
@property(retain, nonatomic) CKRecordingElapsedTimeView *timerView; // @synthesize timerView=_timerView;
@property(retain, nonatomic) UIView *topBackgroundView; // @synthesize topBackgroundView=_topBackgroundView;
@property(nonatomic) id <CKVideoMessageRecordingViewControllerDelegate> videoMessageDelegate; // @synthesize videoMessageDelegate=_videoMessageDelegate;
- (void)dealloc;
- (void)_cleanupCamera;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)ckVideoRecorder:(id)arg1 imageDataCaptured:(id)arg2 error:(id)arg3;
- (void)ckVideoRecorder:(id)arg1 videoCaptured:(id)arg2 error:(id)arg3;
- (void)ckVideoRecorderRecordingCanceled:(id)arg1;
- (void)cancelMenuItemAction:(id)arg1;
- (void)cancel;
- (void)send;
- (void)stopRecordingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)photoMenuItemAction:(id)arg1;
- (void)takePictureWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)videoMenuItemAction:(id)arg1;
- (void)record;
- (void)actionMenuControllerWillDismissActionMenu:(id)arg1 animated:(_Bool)arg2;
- (void)swapCamera:(id)arg1;
- (void)_animateVideoIn;
- (_Bool)shouldAutorotate;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cameraOrientationChanged:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_previewWarmedUp:(id)arg1;
- (void)presentWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentVideoActionMenuController;
- (id)childViewControllerForStatusBarHidden;
- (void)viewDidLoad;
- (id)initWithPresentationView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

