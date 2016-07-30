//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class UITouch;

__attribute__((visibility("hidden")))
@interface MKDeepPressGestureRecognizer : UIGestureRecognizer
{
    UITouch *_touch;
    struct CGPoint _downLocation;
    double _allowableMovementBeforePressure;
    double _requiredForce;
}

@property(nonatomic) double requiredForce; // @synthesize requiredForce=_requiredForce;
@property(nonatomic) double allowableMovementBeforePressure; // @synthesize allowableMovementBeforePressure=_allowableMovementBeforePressure;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGPoint downLocation;
- (id)touch;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

