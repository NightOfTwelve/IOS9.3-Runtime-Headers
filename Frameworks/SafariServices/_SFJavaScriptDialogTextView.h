//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UITextView;

__attribute__((visibility("hidden")))
@interface _SFJavaScriptDialogTextView : UIView
{
    UITextView *_textView;
    double _preferredMaxLayoutWidth;
    CAGradientLayer *_topGradient;
    CAGradientLayer *_bottomGradient;
}

- (void).cxx_destruct;
- (void)setPreferredMaxLayoutWidth:(double)arg1;
- (void)setText:(id)arg1;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

