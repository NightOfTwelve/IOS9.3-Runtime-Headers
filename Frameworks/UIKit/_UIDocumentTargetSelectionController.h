//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UIKit/_UIDocumentPickerServiceViewController-Protocol.h>

@class NSArray, NSString, NSURL, UIImageView, UILabel, UINavigationController, _UIDocumentPickerContainerViewController, _UINavigationControllerPalette;
@protocol _UIDocumentTargetSelectionControllerDelegate;

@interface _UIDocumentTargetSelectionController : UIViewController <_UIDocumentPickerServiceViewController>
{
    id <_UIDocumentTargetSelectionControllerDelegate> _weak_delegate;
    _UIDocumentPickerContainerViewController *_containerViewController;
    UINavigationController *_embeddedNavController;
    _UINavigationControllerPalette *_palette;
    UIImageView *_iconView;
    UILabel *_filesLabel;
    id <_UIDocumentTargetSelectionControllerDelegate> _delegate;
    NSArray *_itemsToMove;
}

+ (id)_loadThumbnailForURL:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 wantsBorder:(_Bool *)arg4;
@property(readonly, nonatomic) NSArray *itemsToMove; // @synthesize itemsToMove=_itemsToMove;
@property(nonatomic) __weak id <_UIDocumentTargetSelectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setItemsToMove:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_setIconViewImage:(id)arg1 border:(_Bool)arg2;
- (void)updatePalette;
- (_Bool)shouldShowSearch;
- (void)dismiss:(id)arg1;
- (void)didSelectItem:(id)arg1;
- (void)setupNavigationItemForPicker:(id)arg1 isRoot:(_Bool)arg2;
@property(readonly, copy, nonatomic) NSURL *uploadURL;
- (unsigned long long)pickerMode;
- (id)pickableTypes;
- (long long)displayMode;
- (void)setDisplayMode:(long long)arg1;
- (int)sortOrder;
- (void)setSortOrder:(int)arg1;
- (void)_setContainerViewController:(id)arg1;
- (id)initWithItemsToMove:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

