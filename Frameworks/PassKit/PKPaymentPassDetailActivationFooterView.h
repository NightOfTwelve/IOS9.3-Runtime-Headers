//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface PKPaymentPassDetailActivationFooterView : UIView
{
    UILabel *_footerTextLabel;
    UIButton *_activationButton;
}

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setActivationButtonAction:(SEL)arg1;
- (void)setFooterText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

