//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WebKit/UIDocumentMenuDelegate-Protocol.h>
#import <WebKit/UIDocumentPickerDelegate-Protocol.h>
#import <WebKit/UIImagePickerControllerDelegate-Protocol.h>
#import <WebKit/UINavigationControllerDelegate-Protocol.h>
#import <WebKit/UIPopoverControllerDelegate-Protocol.h>

@class NSString, WKContentView;
@protocol WKFileUploadPanelDelegate;

__attribute__((visibility("hidden")))
@interface WKFileUploadPanel : UIViewController <UIPopoverControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIDocumentPickerDelegate, UIDocumentMenuDelegate>
{
    WKContentView *_view;
    struct RefPtr<WebKit::WebOpenPanelResultListenerProxy> _listener;
    RetainPtr_f649c0c3 _mimeTypes;
    struct CGPoint _interactionPoint;
    _Bool _allowMultipleFiles;
    _Bool _usingCamera;
    struct RetainPtr<UIImagePickerController> _imagePicker;
    struct RetainPtr<UIViewController> _presentationViewController;
    struct RetainPtr<UIPopoverController> _presentationPopover;
    struct RetainPtr<UIDocumentMenuViewController> _documentMenuController;
    struct RetainPtr<UIAlertController> _actionSheetController;
    id <WKFileUploadPanelDelegate> _delegate;
}

@property(nonatomic) id <WKFileUploadPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_displayStringForPhotos:(unsigned long long)arg1 videos:(unsigned long long)arg2;
- (void)_uploadItemFromMediaInfo:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_uploadItemForImage:(id)arg1 withAssetURL:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)_uploadItemForJPEGRepresentationOfImage:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_uploadItemForImageData:(id)arg1 imageName:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)_processMediaInfoDictionaries:(id)arg1 atIndex:(unsigned long long)arg2 processedResults:(id)arg3 processedImageCount:(unsigned long long)arg4 processedVideoCount:(unsigned long long)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void)_processMediaInfoDictionaries:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (_Bool)_willMultipleSelectionDelegateBeCalled;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2;
- (void)documentMenuWasCancelled:(id)arg1;
- (void)documentMenu:(id)arg1 didPickDocumentPicker:(id)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)_presentFullscreenViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_presentPopoverWithContentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_presentForCurrentInterfaceIdiom:(id)arg1;
- (void)_showPhotoPickerWithSourceType:(long long)arg1;
- (void)_showDocumentPickerMenu;
- (void)_showMediaSourceSelectionSheet;
- (id)_cameraButtonLabel;
- (id)_photoLibraryButtonLabel;
- (id)_documentPickerMenuMediaTypes;
- (id)_mediaTypesForPickerSourceType:(long long)arg1;
- (void)_dismissDisplayAnimated:(_Bool)arg1;
- (void)dismiss;
- (void)presentWithParameters:(struct WebOpenPanelParameters *)arg1 resultListener:(struct WebOpenPanelResultListenerProxy *)arg2;
- (void)_chooseFiles:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;
- (void)_cancel;
- (void)_dispatchDidDismiss;
- (void)dealloc;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

