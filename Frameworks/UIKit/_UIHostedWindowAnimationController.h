//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIWindowAnimationController.h>

__attribute__((visibility("hidden")))
@interface _UIHostedWindowAnimationController : _UIWindowAnimationController
{
    CDUnknownBlockType _transitionActions;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) CDUnknownBlockType transitionActions; // @synthesize transitionActions=_transitionActions;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end

