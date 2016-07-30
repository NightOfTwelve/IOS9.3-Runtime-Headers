//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIAlertControllerBackgroundView-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIBlendingHighlightView : UIView <UIAlertControllerBackgroundView>
{
    UIView *_colorBurnView;
    UIView *_plusDView;
}

+ (id)_blendingPressedView;
+ (id)_blendingSeparatorView;
- (void).cxx_destruct;
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
@property double cornerRadius;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 colorBurnColor:(id)arg2 plusDColor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

