//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

__attribute__((visibility("hidden")))
@interface UIApplicationRotationFollowingWindow : UIWindow
{
}

+ (_Bool)_isSystemWindow;
- (_Bool)isInterfaceAutorotationDisabled;
- (void)_handleStatusBarOrientationChange:(id)arg1;
- (_Bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)applicationWindowRotated:(id)arg1;
- (void)dealloc;
- (id)_initWithFrame:(struct CGRect)arg1 attached:(_Bool)arg2;
- (id)init;
- (void)_commonApplicationRotationFollowingWindowInit;

@end

