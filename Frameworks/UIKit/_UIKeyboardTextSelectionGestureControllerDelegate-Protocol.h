//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class UIKeyboardTaskQueue, _UIKeyboardTextSelectionController;

@protocol _UIKeyboardTextSelectionGestureControllerDelegate <NSObject>
@property(readonly, nonatomic) _UIKeyboardTextSelectionController *textSelectionController;
@property(readonly, nonatomic) UIKeyboardTaskQueue *taskQueue;

@optional
@property(readonly, nonatomic) double timestampOfLastTouchesEnded;
- (void)setTwoFingerTapTimestamp:(double)arg1;
- (_Bool)shouldAllowSelectionGestures:(_Bool)arg1 atPoint:(struct CGPoint)arg2 toBegin:(_Bool)arg3;
- (void)didEndGesture;
- (void)willBeginGesture;
- (_Bool)hasMarkedText;
- (_Bool)transitionInProgress;
@end

