//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIStatusBarItemView.h>

@class UIButton;

__attribute__((visibility("hidden")))
@interface UIStatusBarButtonActionItemView : UIStatusBarItemView
{
    UIButton *_button;
    UIButton *_externalButton;
}

- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)usesAdvancedActions;
- (long long)buttonType;
- (void)_pressAndHoldButton:(id)arg1;
- (void)_doubleTapButton:(id)arg1;
- (void)_pressButton:(id)arg1;
- (void)_triggerButtonWithAction:(long long)arg1;
- (void)layoutSubviews;
- (double)updateContentsAndWidth;
- (id)_createButton;
@property(readonly, nonatomic) double buttonCharge;

@end

