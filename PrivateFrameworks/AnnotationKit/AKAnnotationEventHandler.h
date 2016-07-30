//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AKAnnotation, AKPageController;

@interface AKAnnotationEventHandler : NSObject
{
    _Bool _draggingHorizontalOnly;
    _Bool _draggingVerticalOnly;
    AKPageController *_pageController;
    AKAnnotation *_annotation;
    unsigned long long _initiallyDraggedArea;
    struct CGPoint _initialDraggedPoint;
    struct CGPoint _initialOtherPoint;
    struct CGPoint _initialCenter;
    struct CGPoint _lastPositionInModel;
    struct CGPoint _lastPositionInWindow;
}

+ (Class)_handlerClassForPlatformForAnnotation:(id)arg1;
+ (struct CGRect)annotationRectangleForDraggingBounds:(struct CGRect)arg1 forAnnotation:(id)arg2 onPageController:(id)arg3 withOriginalCenter:(struct CGPoint)arg4;
+ (id)newAnnotationEventHandlerForCurrentPlatformForAnnotation:(id)arg1 withPageController:(id)arg2;
@property struct CGPoint lastPositionInWindow; // @synthesize lastPositionInWindow=_lastPositionInWindow;
@property struct CGPoint lastPositionInModel; // @synthesize lastPositionInModel=_lastPositionInModel;
@property _Bool draggingVerticalOnly; // @synthesize draggingVerticalOnly=_draggingVerticalOnly;
@property _Bool draggingHorizontalOnly; // @synthesize draggingHorizontalOnly=_draggingHorizontalOnly;
@property struct CGPoint initialCenter; // @synthesize initialCenter=_initialCenter;
@property struct CGPoint initialOtherPoint; // @synthesize initialOtherPoint=_initialOtherPoint;
@property struct CGPoint initialDraggedPoint; // @synthesize initialDraggedPoint=_initialDraggedPoint;
@property unsigned long long initiallyDraggedArea; // @synthesize initiallyDraggedArea=_initiallyDraggedArea;
@property(retain) AKAnnotation *annotation; // @synthesize annotation=_annotation;
@property __weak AKPageController *pageController; // @synthesize pageController=_pageController;
- (void).cxx_destruct;
- (struct CGPoint)modelPointFromPointInWindow:(struct CGPoint)arg1;
- (struct CGPoint)windowPointFromEvent:(id)arg1 orRecognizer:(id)arg2;
- (void)updateModelWithCurrentPoint:(struct CGPoint)arg1;
- (void)setupDraggingConstraints;
- (void)getInitialDraggedPoint:(struct CGPoint *)arg1 otherPoint:(struct CGPoint *)arg2 center:(struct CGPoint *)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5;
- (_Bool)continueDraggableAreaEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (_Bool)enterDraggableAreaEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (double)naturalAspectRatioForAnnotation;
- (struct CGSize)naturalSizeForAnnotation;
- (_Bool)lockAspectRatioByDefault;
- (_Bool)alwaysLockAspectRatio;
- (_Bool)canLockAspectRatio;
- (id)_initWithAnnotation:(id)arg1 andPageController:(id)arg2;

@end

