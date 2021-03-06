//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class MKTransitInfoLabelView, NSLayoutConstraint, UIButton, UILabel;
@protocol GEOTransitConnectionInfo, _MKTransitConnectionCellDelegate;

__attribute__((visibility("hidden")))
@interface _MKTransitConnectionCell : MKCustomSeparatorTableViewCell
{
    UILabel *_nameLabel;
    MKTransitInfoLabelView *_transitInfoLabel;
    UIButton *_button;
    NSLayoutConstraint *_nameLabelToTopConstraint;
    NSLayoutConstraint *_transitInfoToNameConstraint;
    id <GEOTransitConnectionInfo> _connectionInfo;
    id <_MKTransitConnectionCellDelegate> _delegate;
}

@property(nonatomic) __weak id <_MKTransitConnectionCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <GEOTransitConnectionInfo> connectionInfo; // @synthesize connectionInfo=_connectionInfo;
- (void).cxx_destruct;
- (void)_buttonSelected;
- (void)_updateConstraintValues;
- (void)_contentSizeCategoryDidChange;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;

@end

