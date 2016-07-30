//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSString, UIView, UIViewController;

@protocol UIViewControllerTransitionCoordinatorContext <NSObject>
- (struct CGAffineTransform)targetTransform;
- (UIView *)containerView;
- (UIView *)viewForKey:(NSString *)arg1;
- (UIViewController *)viewControllerForKey:(NSString *)arg1;
- (long long)completionCurve;
- (double)completionVelocity;
- (double)percentComplete;
- (double)transitionDuration;
- (_Bool)isCancelled;
- (_Bool)isInteractive;
- (_Bool)initiallyInteractive;
- (long long)presentationStyle;
- (_Bool)isAnimated;
@end

