//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIKBTouchState, UIKBTree;

__attribute__((visibility("hidden")))
@interface UIKeyboardTouchInfo : NSObject
{
    UIKBTouchState *_touch;
    UIKBTree *_key;
    UIKBTree *_keyplane;
    UIKBTree *_slidOffKey;
    struct CGPoint _initialPoint;
    struct CGPoint _initialDragPoint;
    _Bool _dragged;
    int _stage;
    _Bool _maySuppressUpAction;
    int _initialKeyState;
}

@property(nonatomic) int initialKeyState; // @synthesize initialKeyState=_initialKeyState;
@property(nonatomic) _Bool maySuppressUpAction; // @synthesize maySuppressUpAction=_maySuppressUpAction;
@property(nonatomic) _Bool dragged; // @synthesize dragged=_dragged;
@property(nonatomic) struct CGPoint initialDragPoint; // @synthesize initialDragPoint=_initialDragPoint;
@property(nonatomic) int stage; // @synthesize stage=_stage;
@property(nonatomic) struct CGPoint initialPoint; // @synthesize initialPoint=_initialPoint;
@property(retain, nonatomic) UIKBTree *slidOffKey; // @synthesize slidOffKey=_slidOffKey;
@property(retain, nonatomic) UIKBTree *keyplane; // @synthesize keyplane=_keyplane;
@property(retain, nonatomic) UIKBTree *key; // @synthesize key=_key;
@property(retain, nonatomic) UIKBTouchState *touch; // @synthesize touch=_touch;
- (void)dealloc;

@end

