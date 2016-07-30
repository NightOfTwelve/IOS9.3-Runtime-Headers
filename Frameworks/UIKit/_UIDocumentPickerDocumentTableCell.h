//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <UIKit/_UIDocumentPickerDocumentTableCell-Protocol.h>

@class NSLayoutConstraint, NSString, NSTimer, SKUIItemOfferButton, UIImageView, UILabel, UIView, _UIDocumentPickerContainerItem, _UIDocumentPickerDocumentTableViewController;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerDocumentTableCell : UITableViewCell <_UIDocumentPickerDocumentTableCell>
{
    _UIDocumentPickerContainerItem *_item;
    _Bool _renamePending;
    _UIDocumentPickerDocumentTableViewController *_tableView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    SKUIItemOfferButton *_cloudButton;
    NSTimer *_progressTimer;
    id _progressSubscriber;
    UIView *_iconCenteringView;
    UIImageView *_tagView;
    NSLayoutConstraint *_tagViewCollapsingConstraint;
}

+ (struct CGSize)thumbnailSize;
@property(nonatomic) _Bool renamePending; // @synthesize renamePending=_renamePending;
@property(retain, nonatomic) NSLayoutConstraint *tagViewCollapsingConstraint; // @synthesize tagViewCollapsingConstraint=_tagViewCollapsingConstraint;
@property(retain, nonatomic) UIImageView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UIView *iconCenteringView; // @synthesize iconCenteringView=_iconCenteringView;
@property(retain, nonatomic) id progressSubscriber; // @synthesize progressSubscriber=_progressSubscriber;
@property(retain, nonatomic) NSTimer *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(retain, nonatomic) SKUIItemOfferButton *cloudButton; // @synthesize cloudButton=_cloudButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak _UIDocumentPickerDocumentTableViewController *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)updateForDownloadStatus;
- (void)startDownload:(id)arg1;
- (void)updateForEditingStatus;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)reloadItem:(_Bool)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) _UIDocumentPickerContainerItem *item;
- (void)updateProgress:(id)arg1;
- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
