//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIColor, UIImage, UIImageView, UILabel;

@interface BFFPaneHeaderView : UIView
{
    UIImageView *_iconView;
    UIButton *_linkButton;
    CDUnknownBlockType _linkHandler;
    UIView *_bottomLine;
    _Bool _textLabelAlignedByLastBaseline;
    UIImage *_icon;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    double _flexibleHeight;
}

@property(nonatomic, getter=isTextLabelAlignedByLastBaseline) _Bool textLabelAlignedByLastBaseline; // @synthesize textLabelAlignedByLastBaseline=_textLabelAlignedByLastBaseline;
@property(nonatomic) double flexibleHeight; // @synthesize flexibleHeight=_flexibleHeight;
@property(readonly, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (double)_detailLabelBaselineOffsetFromTop;
@property(retain, nonatomic) UIColor *bottomLineColor;
- (void)setLinkText:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)setTitleText:(id)arg1;
- (void)_linkButtonPressed;
- (id)initWithFrame:(struct CGRect)arg1;

@end

