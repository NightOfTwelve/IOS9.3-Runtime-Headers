//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol MKOverlay;

@interface MKOverlayView : UIView
{
    id <MKOverlay> _overlay;
    CDStruct_02837cd9 _boundingMapRect;
    id _renderer;
}

@property(readonly, nonatomic) id <MKOverlay> overlay; // @synthesize overlay=_overlay;
- (void).cxx_destruct;
- (void)drawMapRect:(CDStruct_90e2a262)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;
- (_Bool)canDrawMapRect:(CDStruct_90e2a262)arg1 zoomScale:(double)arg2;
- (void)overlay:(id)arg1 drawKey:(const CDStruct_0e9d808f *)arg2 inContext:(struct CGContext *)arg3;
- (_Bool)overlay:(id)arg1 canDrawKey:(const CDStruct_0e9d808f *)arg2;
- (void)set_renderer:(id)arg1;
- (id)_renderer;
- (CDStruct_90e2a262)_boundingMapRect;
- (void)set_boundingMapRect:(CDStruct_90e2a262)arg1;
- (void)setNeedsDisplayInMapRect:(CDStruct_90e2a262)arg1 zoomScale:(double)arg2;
- (void)setNeedsDisplayInMapRect:(CDStruct_90e2a262)arg1;
- (void)setNeedsDisplay;
- (CDStruct_90e2a262)mapRectForRect:(struct CGRect)arg1;
- (struct CGRect)rectForMapRect:(CDStruct_90e2a262)arg1;
- (CDStruct_c3b9c2ee)mapPointForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForMapPoint:(CDStruct_c3b9c2ee)arg1;
- (id)_mk_overlayLayer;
- (id)_mk_overlayView;
- (void)setContentScaleFactor:(double)arg1;
- (_Bool)_canDrawContent;
- (CDStruct_c3b9c2ee)_originMapPoint;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (id)initWithOverlay:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;

@end

