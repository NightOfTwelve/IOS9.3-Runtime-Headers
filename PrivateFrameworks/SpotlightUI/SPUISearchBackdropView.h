//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class _UIBackdropView;

@interface SPUISearchBackdropView : UIView
{
    _UIBackdropView *_backdropView;
    UIView *_effectView;
    UIView *_tintView;
    _Bool _useFakeBlur;
}

- (void).cxx_destruct;
- (void)transitionCompleted;
- (void)setTransitionProgress:(double)arg1;
- (void)prepareForTransition;
- (void)setUseFakeBlur:(_Bool)arg1;
- (_Bool)useHighQualityGraphics;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

