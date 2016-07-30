//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSArray, UIButton, UILabel;
@protocol SPUISearchTableHeaderViewDelegate;

@interface SPUISearchTableHeaderView : UITableViewHeaderFooterView
{
    id <SPUISearchTableHeaderViewDelegate> _delegate;
    UILabel *_titleLabel;
    UIButton *_moreButton;
    unsigned long long _section;
    NSArray *_moreButtonHiddenConstraints;
    NSArray *_moreButtonVisibleConstraints;
}

@property(retain) NSArray *moreButtonVisibleConstraints; // @synthesize moreButtonVisibleConstraints=_moreButtonVisibleConstraints;
@property(retain) NSArray *moreButtonHiddenConstraints; // @synthesize moreButtonHiddenConstraints=_moreButtonHiddenConstraints;
@property(nonatomic) unsigned long long section; // @synthesize section=_section;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) id <SPUISearchTableHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setFloating:(_Bool)arg1;
- (void)moreButtonPressed;
- (void)updateWithTitle:(id)arg1 section:(unsigned long long)arg2 isExpanded:(_Bool)arg3;
- (void)setMoreButtonVisible:(_Bool)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end
