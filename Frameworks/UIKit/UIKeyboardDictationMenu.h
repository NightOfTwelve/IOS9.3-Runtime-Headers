//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIKeyboardMenuView.h>

__attribute__((visibility("hidden")))
@interface UIKeyboardDictationMenu : UIKeyboardMenuView
{
}

+ (id)activeInstance;
+ (id)sharedInstance;
- (_Bool)usesDimmingView;
- (void)hide;
- (void)fadeWithDelay:(double)arg1;
- (void)fade;
- (void)cleanupForFadeOrHide;
- (void)show;
- (void)performShowAnimation;
- (_Bool)centerPopUpOverKey;
- (_Bool)usesTable;
- (struct CGSize)preferredSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

