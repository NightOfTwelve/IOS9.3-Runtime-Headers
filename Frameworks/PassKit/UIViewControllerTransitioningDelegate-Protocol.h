//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/NSObject-Protocol.h>

@class UIPresentationController, UIViewController;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@protocol UIViewControllerTransitioningDelegate <NSObject>

@optional
- (UIPresentationController *)presentationControllerForPresentedViewController:(UIViewController *)arg1 presentingViewController:(UIViewController *)arg2 sourceViewController:(UIViewController *)arg3;
- (id <UIViewControllerInteractiveTransitioning>)interactionControllerForDismissal:(id <UIViewControllerAnimatedTransitioning>)arg1;
- (id <UIViewControllerInteractiveTransitioning>)interactionControllerForPresentation:(id <UIViewControllerAnimatedTransitioning>)arg1;
- (id <UIViewControllerAnimatedTransitioning>)animationControllerForDismissedController:(UIViewController *)arg1;
- (id <UIViewControllerAnimatedTransitioning>)animationControllerForPresentedController:(UIViewController *)arg1 presentingController:(UIViewController *)arg2 sourceController:(UIViewController *)arg3;
@end

