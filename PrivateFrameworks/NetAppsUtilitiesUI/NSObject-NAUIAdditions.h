//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (NAUIAdditions)
- (void)_naui_removeNotificationObserverProxy:(id)arg1;
- (void)_naui_addNotificationObserverProxy:(id)arg1;
- (id)naui_associatedObjectForDescriptor:(const CDStruct_b9c9288f *)arg1;
- (void)naui_setAssociatedObject:(id)arg1 assocatedObjectDescriptor:(const CDStruct_b9c9288f *)arg2;
- (void)naui_removeNotificationBlockObserver:(id)arg1;
- (id)naui_addNotificationBlockObserverForObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)naui_addNotificationBlockObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
@end

