//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextEffectsWindow.h>

__attribute__((visibility("hidden")))
@interface UITextEffectsWindowHosted : UITextEffectsWindow
{
}

- (_Bool)_isTextEffectsWindowNotificationOwner;
- (_Bool)_isTextEffectsWindowHosting;
- (void)_sceneBoundsDidChange;
- (_Bool)_isFullscreen;
- (struct CGRect)actualSceneBounds;
- (struct CGRect)actualSceneBoundsForLandscape:(_Bool)arg1;
- (long long)_orientationForRootTransform;
- (long long)_orientationForViewTransform;
- (_Bool)_isConstrainedByScreenJail;
- (_Bool)_usesWindowServerHitTesting;
- (_Bool)_isWindowServerHostingManaged;

@end

