//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWebSelectionView.h>

@class UIView, UIWebSelectionHandle;
@protocol UIWKInteractionViewProtocol;

__attribute__((visibility("hidden")))
@interface UIWKSelectionView : UIWebSelectionView
{
    UIView<UIWKInteractionViewProtocol> *_interactionView;
    UIWebSelectionHandle *_handle;
    _Bool _selectionIsBlock;
    _Bool _thresholdIsValid;
    _Bool _usingGesture;
    struct CGPoint _lastTouchPoint;
}

- (void)onAfterScrollOrZoomShowingSelection:(_Bool)arg1;
- (void)onBeforeScrollOrZoomHidingSelection:(_Bool)arg1;
- (void)clearSelection;
- (void)endSelectionCreationWithPoint:(struct CGPoint)arg1;
- (void)selectionCreationEndedWithPoint:(struct CGPoint)arg1;
- (void)showRangeSelection;
- (void)showControls;
- (void)updateSelectionCreationWithPoint:(struct CGPoint)arg1;
- (void)selectionCreationUpdatedWithPoint:(struct CGPoint)arg1;
- (void)startSelectionCreationWithPoint:(struct CGPoint)arg1;
- (void)selectionCreationStartedWithPoint:(struct CGPoint)arg1;
- (void)resetSelection;
- (void)updateFrameAndHandlesWithAnimation:(_Bool)arg1;
- (struct CGRect)visibleRect;
- (id)scroller;
- (void)switchToTextModeForHandle:(id)arg1;
- (void)updateRangedSelectionData;
- (_Bool)isHorizontalWritingMode;
- (void)switchToBlockModeForHandle:(id)arg1 withPoint:(struct CGPoint)arg2;
- (_Bool)shouldSwitchToBlockModeForHandle:(id)arg1;
- (void)setHandleCenters;
- (void)touchChanged:(id)arg1 forHandle:(id)arg2;
- (void)blockSelectionChangedWithTouch:(long long)arg1 withFlags:(long long)arg2 growThreshold:(double)arg3 shrinkThreshold:(double)arg4;
- (_Bool)shouldContractForActiveHandle;
- (_Bool)shouldExpandForActiveHandle;
- (double)handleOffsetForPoint:(struct CGPoint)arg1 handlePosition:(int)arg2;
- (void)touchChanged:(id)arg1 forHandleInText:(id)arg2;
- (void)selectionChangedWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(long long)arg2 withFlags:(long long)arg3;
- (void)selectionChanged;
- (void)updateSelectionRects;
- (void)updateTextRangeViewSelectionRects;
- (id)selectionRects;
- (struct CGRect)fetchSelectionBoundingRect;
- (struct CGRect)selectionBoundingRect;
- (struct CGRect)unobscuredRect;
- (void)showCopyCalloutWithAnimation:(_Bool)arg1;
- (_Bool)updateRectForCalloutBar:(id)arg1 inWindow:(id)arg2;
- (void)setSelectionMode:(_Bool)arg1;
- (id)tintView;
- (id)initWithView:(id)arg1;

@end

