//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIWindow;

__attribute__((visibility("hidden")))
@interface DDFallbackController : UIViewController
{
    UIWindow *_baseWindow;
    UIWindow *_ourWindow;
    id _interactionDelegate;
    long long _startOrientation;
}

- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadView;
- (void)dealloc;
- (id)initWithWindow:(id)arg1 interactionDelegate:(id)arg2;

@end

