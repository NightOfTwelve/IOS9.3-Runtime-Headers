//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (NSDelayedPerforming)
+ (void)cancelPreviousPerformRequestsWithTarget:(id)arg1;
+ (void)cancelPreviousPerformRequestsWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4;
- (void)performSelector:(SEL)arg1 object:(id)arg2 afterDelay:(double)arg3;
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3;
@end

