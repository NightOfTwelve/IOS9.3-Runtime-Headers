//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAnimation.h>

__attribute__((visibility("hidden")))
@interface UIScrollViewScrollAnimation : UIAnimation
{
    struct CGPoint _originalOffset;
    struct CGPoint _targetOffset;
    double _accuracy;
    _Bool _adjustsForContentOffsetDelta;
}

- (void)dealloc;
- (void)setProgress:(float)arg1;
- (void)adjustForContentOffsetDelta:(struct CGPoint)arg1;

@end

