//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIAlertControllerBackgroundView-Protocol.h>

@class NSString, _UIBlendingHighlightView, _UIDimmingKnockoutBackdropView;

__attribute__((visibility("hidden")))
@interface _UIAlertControlleriOSActionSheetCancelBackgroundView : UIView <UIAlertControllerBackgroundView>
{
    UIView *backgroundView;
    _UIDimmingKnockoutBackdropView *blurView;
    _UIBlendingHighlightView *highlightView;
}

- (void).cxx_destruct;
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
@property double cornerRadius;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

