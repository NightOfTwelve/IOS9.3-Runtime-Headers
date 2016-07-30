//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, UIImageView, UILabel, UILongPressGestureRecognizer, UIProgressView, UIView, _UIDocumentPickerContainerItem, _UIDocumentPickerDocumentCollectionViewController;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerCell : UICollectionViewCell
{
    _Bool _editing;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_subtitle2Label;
    UIImageView *_tagView;
    UIImageView *_thumbnailView;
    UIProgressView *_progressView;
    UIView *_thumbnailCenterView;
    _UIDocumentPickerDocumentCollectionViewController *_collectionView;
    _UIDocumentPickerContainerItem *_item;
    NSLayoutConstraint *_thumbnailCenterWidthConstraint;
    NSLayoutConstraint *_thumbnailCenterHeightConstraint;
    UIImageView *_selectionView;
    UIView *_titleCenterView;
    UILongPressGestureRecognizer *_pickableDiagnosticGestureRecognizer;
    UILongPressGestureRecognizer *_actionGestureRecognizer;
}

+ (id)folderIconForTraits:(id)arg1;
+ (struct CGSize)thumbnailSizeForTraits:(id)arg1;
+ (struct CGSize)defaultSizeForTraits:(id)arg1;
@property(retain, nonatomic) UILongPressGestureRecognizer *actionGestureRecognizer; // @synthesize actionGestureRecognizer=_actionGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *pickableDiagnosticGestureRecognizer; // @synthesize pickableDiagnosticGestureRecognizer=_pickableDiagnosticGestureRecognizer;
@property(retain, nonatomic) UIView *titleCenterView; // @synthesize titleCenterView=_titleCenterView;
@property(retain, nonatomic) UIImageView *selectionView; // @synthesize selectionView=_selectionView;
@property(retain, nonatomic) NSLayoutConstraint *thumbnailCenterHeightConstraint; // @synthesize thumbnailCenterHeightConstraint=_thumbnailCenterHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *thumbnailCenterWidthConstraint; // @synthesize thumbnailCenterWidthConstraint=_thumbnailCenterWidthConstraint;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) _UIDocumentPickerContainerItem *item; // @synthesize item=_item;
@property(nonatomic) __weak _UIDocumentPickerDocumentCollectionViewController *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *thumbnailCenterView; // @synthesize thumbnailCenterView=_thumbnailCenterView;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) UIImageView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UILabel *subtitle2Label; // @synthesize subtitle2Label=_subtitle2Label;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)_showPickableDiagnostic;
- (_Bool)canBecomeFirstResponder;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_showActions;
- (void)updateActionGestureRecognizer;
- (void)_renameAction:(id)arg1;
- (void)_moreAction:(id)arg1;
- (void)_infoAction:(id)arg1;
- (void)_deleteAction:(id)arg1;
- (id)availableActions;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)updateForEditingState;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateSelectionState:(_Bool)arg1;
- (void)reloadItem:(_Bool)arg1;
- (void)dealloc;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

