//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface FUChartPointView : UIView
{
    int _pointStyle;
    UIColor *_color;
    double _radius;
}

+ (id)pointWithColor:(id)arg1 radius:(double)arg2 style:(int)arg3;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) int pointStyle; // @synthesize pointStyle=_pointStyle;
- (void)_drawGlowingCircleInContext:(struct CGContext *)arg1;
- (void)_drawBullseyeSquareInContext:(struct CGContext *)arg1;
- (void)_drawBullseyeCircleInContext:(struct CGContext *)arg1;
- (void)_drawHollowSquareInContext:(struct CGContext *)arg1;
- (void)_drawSolidSquareInContext:(struct CGContext *)arg1;
- (void)_drawHollowCircleInContext:(struct CGContext *)arg1;
- (void)_drawSolidCircleInContext:(struct CGContext *)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithColor:(id)arg1 radius:(double)arg2 style:(int)arg3;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

