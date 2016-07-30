//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CALayer, CAShapeLayer, UIPDFPageView, UIView, UIWindow;

@interface UIPDFMagnifierController : NSObject
{
    UIWindow *_textEffectsWindow;
    UIView *_textEffectsSubView;
    CALayer *_loLayer;
    CALayer *_hiLayer;
    CALayer *_imageContainer;
    CALayer *_imageLayer;
    CAShapeLayer *_selectionLayer;
    CALayer *_maskLayer;
    double _power;
    struct CGSize _magnifierSize;
    _Bool _loupe;
    struct CGPoint _touchPoint;
    struct CGPoint _pointToMagnify;
    double _enlargementScale;
    CALayer *_leftBar;
    CALayer *_leftGrabber;
    CALayer *_rightBar;
    CALayer *_rightGrabber;
    struct CGSize _controlPointSize;
    struct CGColor *_grabberColor;
    unsigned long long _pageRotation;
    _Bool _visible;
    UIPDFPageView *pageView;
}

@property(nonatomic) UIPDFPageView *pageView; // @synthesize pageView;
- (_Bool)visible;
- (void)hide;
- (void)move;
- (void)showMagnifier;
- (void)showLoupe;
- (void)_show;
- (void)setPosition:(struct CGPoint)arg1 viewPoint:(struct CGPoint)arg2;
- (void)dealloc;
- (id)init;
- (void)setImageContainerMask;
- (id)imageReceived:(id)arg1 data:(id)arg2;
- (void)placeImage;
- (void)setSelectionPath;
- (void)setSelectionPath:(struct CGPath *)arg1 bounds:(struct CGRect)arg2 transform:(struct CGAffineTransform)arg3;
- (void)addBling;
- (void)setLayerPositions;
- (void)setImageContainerPositionLoupe;
- (void)setImageContainerPositionMagnifier;
- (struct CGPoint)pointToMagnifyInPDFSpace;
- (struct CGPoint)viewPointInTextEffectsSpace;
- (struct CGPoint)convertPointToEnlargedSpace:(struct CGPoint)arg1;
- (struct CGRect)convertRectToEnlargedSpace:(struct CGRect)arg1;
- (struct CGRect)convertRectToRotatedPage:(struct CGRect)arg1;
- (struct CGPoint)convertPointToRotatedPage:(struct CGPoint)arg1;
- (struct CGPoint)convertViewPointToEnlargedSpace:(struct CGPoint)arg1;
- (_Bool)isSelectionUniformlyRotated:(double *)arg1;
- (void)setPower;
- (void)tearDownLayers;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)addTextRangeHandles;
- (void)setTextRangeHandlePositions;

@end

