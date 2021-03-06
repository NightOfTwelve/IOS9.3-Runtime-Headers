//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <RemoteUI/RemoteUITableHeader-Protocol.h>

@class NSString, UIImageView, UILabel;

@interface RUIHeaderView : UIView <RemoteUITableHeader>
{
    UILabel *_headerLabel;
    UILabel *_detailHeaderLabel;
    UILabel *_subHeaderLabel;
    UIImageView *_iconView;
    int _imageAlignment;
    _Bool _isFirstSection;
    _Bool _customIconSize;
    double _headerLabelBottomPadding;
    struct UIEdgeInsets _margins;
}

@property(nonatomic) double headerLabelBottomPadding; // @synthesize headerLabelBottomPadding=_headerLabelBottomPadding;
@property(nonatomic) struct UIEdgeInsets margins; // @synthesize margins=_margins;
- (void).cxx_destruct;
- (double)headerHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGRect)_iconFrame;
- (void)setSectionIsFirst:(_Bool)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize)arg1;
- (void)setIconImage:(id)arg1;
- (void)setDetailText:(id)arg1 attributes:(id)arg2;
@property(readonly, nonatomic) UILabel *detailHeaderLabel;
- (void)setSubHeaderColor:(id)arg1;
- (void)setSubHeaderAlignment:(long long)arg1;
- (void)setSubHeaderText:(id)arg1 attributes:(id)arg2;
@property(readonly, nonatomic) UILabel *subHeaderLabel;
- (void)setHeaderColor:(id)arg1;
- (void)setHeaderAlignment:(long long)arg1;
- (void)setText:(id)arg1 attributes:(id)arg2;
@property(readonly, nonatomic) UILabel *headerLabel;
- (id)initWithAttributes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

