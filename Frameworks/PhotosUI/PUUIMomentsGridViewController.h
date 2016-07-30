//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUPhotosGridViewController.h>

@class NSArray, PUUIImagePickerControllerHelper, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface PUUIMomentsGridViewController : PUPhotosGridViewController
{
    UIBarButtonItem *_imagePickerCancelButton;
    UIBarButtonItem *_imagePickerMultipleSelectionDoneButton;
    PUUIImagePickerControllerHelper *__imagePickerControllerHelper;
    NSArray *__imagePickerMediaTypes;
}

@property(copy, nonatomic, setter=_setImagePickerMediaTypes:) NSArray *_imagePickerMediaTypes; // @synthesize _imagePickerMediaTypes=__imagePickerMediaTypes;
@property(readonly) PUUIImagePickerControllerHelper *_imagePickerControllerHelper; // @synthesize _imagePickerControllerHelper=__imagePickerControllerHelper;
- (void).cxx_destruct;
- (_Bool)shouldShowMenu;
- (_Bool)shouldPerformAutomaticContentOffsetAdjustment;
- (_Bool)initiallyScrolledToBottom;
- (void)handleNavigateToAsset:(id)arg1 inContainer:(id)arg2;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)arg1;
- (_Bool)canNavigateToPhotoInteractively:(_Bool)arg1;
- (void)getTitle:(out id *)arg1 prompt:(out id *)arg2 shouldHideBackButton:(out _Bool *)arg3 leftBarButtonItems:(out id *)arg4 rightBarButtonItems:(out id *)arg5;
- (void)_handleImagePickerMultipleSelectionDone:(id)arg1;
- (void)_handleImagePickerCancel:(id)arg1;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(_Bool)arg4;
- (id)newGridLayout;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithSpec:(id)arg1;
- (id)init;

@end

