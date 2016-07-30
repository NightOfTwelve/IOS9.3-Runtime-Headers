//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibrary/NSObject-Protocol.h>

@class UIPageController, UIViewController;

@protocol UIPageControllerDelegate <NSObject>

@optional
- (void)pageControllerDidEndPaging:(UIPageController *)arg1;
- (void)pageControllerWillBeginPaging:(UIPageController *)arg1;
- (UIViewController *)pageController:(UIPageController *)arg1 viewControllerRightOfController:(UIViewController *)arg2;
- (UIViewController *)pageController:(UIPageController *)arg1 viewControllerLeftOfController:(UIViewController *)arg2;
- (UIViewController *)pageController:(UIPageController *)arg1 viewControllerAtIndex:(long long)arg2;
@end

