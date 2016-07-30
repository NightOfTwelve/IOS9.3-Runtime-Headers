//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer;

@interface TPRingView : UIView
{
    CALayer *_luminanceRingLayer;
    CALayer *_dodgeRingLayer;
    CALayer *_highlightDodgeLayer;
    CALayer *_highlightLuminanceLayer;
    CALayer *_selectionLayer;
}

+ (id)createRingImageWithSize:(struct CGSize)arg1 strokeWidth:(double)arg2 color:(id)arg3;
+ (id)ringImageForDodge;
+ (id)ringImageForLuminance;
+ (id)colorForDodge;
+ (id)colorForLuminance;
+ (double)ringCornerRadius;
+ (double)ringStroke;
+ (struct CGSize)ringSize;
@property(retain) CALayer *selectionLayer; // @synthesize selectionLayer=_selectionLayer;
@property(retain) CALayer *highlightLuminanceLayer; // @synthesize highlightLuminanceLayer=_highlightLuminanceLayer;
@property(retain) CALayer *highlightDodgeLayer; // @synthesize highlightDodgeLayer=_highlightDodgeLayer;
@property(retain) CALayer *dodgeRingLayer; // @synthesize dodgeRingLayer=_dodgeRingLayer;
@property(retain) CALayer *luminanceRingLayer; // @synthesize luminanceRingLayer=_luminanceRingLayer;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;

@end

