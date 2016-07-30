//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/DOMUIEvent.h>

@class DOMTouchList;

@interface DOMTouchEvent : DOMUIEvent
{
}

- (void)initTouchEvent:(id)arg1 canBubble:(_Bool)arg2 cancelable:(_Bool)arg3 view:(id)arg4 detail:(int)arg5 screenX:(int)arg6 screenY:(int)arg7 clientX:(int)arg8 clientY:(int)arg9 ctrlKey:(_Bool)arg10 altKey:(_Bool)arg11 shiftKey:(_Bool)arg12 metaKey:(_Bool)arg13 touches:(id)arg14 targetTouches:(id)arg15 changedTouches:(id)arg16 scale:(float)arg17 rotation:(float)arg18;
@property(readonly) _Bool metaKey;
@property(readonly) _Bool altKey;
@property(readonly) _Bool shiftKey;
@property(readonly) _Bool ctrlKey;
@property(readonly) float rotation;
@property(readonly) float scale;
@property(readonly) DOMTouchList *changedTouches;
@property(readonly) DOMTouchList *targetTouches;
@property(readonly) DOMTouchList *touches;

@end

