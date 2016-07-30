//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ContactsFoundation/CNObservable-Protocol.h>

@class NSString;

@interface CNObservable : NSObject <CNObservable>
{
}

+ (id)progressiveForkJoin:(id)arg1 scheduler:(id)arg2;
+ (id)merge:(id)arg1;
+ (id)forkJoin:(id)arg1 scheduler:(id)arg2;
+ (id)concatenate:(id)arg1;
+ (id)combineLatest:(id)arg1;
+ (id)timerWithDelay:(double)arg1 scheduler:(id)arg2;
+ (id)timerWithDelay:(double)arg1;
+ (id)emptyObservable;
+ (id)neverObservable;
+ (id)observableWithError:(id)arg1;
+ (id)observableWithResults:(id)arg1 scheduler:(id)arg2;
+ (id)observableWithResults:(id)arg1;
+ (id)observableWithRange:(struct _NSRange)arg1 scheduler:(id)arg2;
+ (id)observableWithRange:(struct _NSRange)arg1;
+ (id)observableWithResult:(id)arg1;
+ (id)observableWithBlock:(CDUnknownBlockType)arg1;
+ (id)observableWithInitialState:(id)arg1 condition:(CDUnknownBlockType)arg2 nextState:(CDUnknownBlockType)arg3 resultSelector:(CDUnknownBlockType)arg4 delay:(CDUnknownBlockType)arg5 scheduler:(id)arg6;
+ (id)observableWithInitialState:(id)arg1 condition:(CDUnknownBlockType)arg2 nextState:(CDUnknownBlockType)arg3 resultSelector:(CDUnknownBlockType)arg4 scheduler:(id)arg5;
+ (id)observableWithInitialState:(id)arg1 condition:(CDUnknownBlockType)arg2 nextState:(CDUnknownBlockType)arg3 resultSelector:(CDUnknownBlockType)arg4;
+ (id)observableOnNotificationCenter:(id)arg1 withName:(id)arg2 object:(id)arg3;
+ (id)observableOnDefaultNotificationCenterWithName:(id)arg1 object:(id)arg2;
+ (id)observableWithTimeInterval:(double)arg1 range:(struct _NSRange)arg2 scheduler:(id)arg3;
+ (id)observableWithTimeInterval:(double)arg1 scheduler:(id)arg2;
+ (id)observableWithResults:(id)arg1 interval:(double)arg2 scheduler:(id)arg3;
+ (id)observableForKeyPath:(id)arg1 ofObject:(id)arg2 withOptions:(unsigned long long)arg3;
- (id)subscribe:(id)arg1;
- (id)timeoutAfterDelay:(double)arg1 alternateObservable:(id)arg2 schedule:(id)arg3;
- (id)takeLast:(unsigned long long)arg1;
- (id)take:(unsigned long long)arg1;
- (id)startWith:(id)arg1 scheduler:(id)arg2;
- (id)startWith:(id)arg1;
- (id)skipLast:(unsigned long long)arg1;
- (id)skip:(unsigned long long)arg1;
- (id)onErrorHandler:(CDUnknownBlockType)arg1;
- (id)onError:(id)arg1;
- (id)onEmpty:(id)arg1;
- (id)map:(CDUnknownBlockType)arg1;
- (id)filter:(CDUnknownBlockType)arg1;
- (id)doOnTerminate:(CDUnknownBlockType)arg1;
- (id)doOnSubscribe:(CDUnknownBlockType)arg1;
- (id)doOnNext:(CDUnknownBlockType)arg1;
- (id)doOnError:(CDUnknownBlockType)arg1;
- (id)doOnCompletion:(CDUnknownBlockType)arg1;
- (id)doOnCancel:(CDUnknownBlockType)arg1;
- (id)distinctUntilChanged;
- (id)distinct;
- (id)delaySubscription:(double)arg1 scheduler:(id)arg2;
- (id)delay:(double)arg1 scheduler:(id)arg2;
- (id)allObjects:(id *)arg1;
- (id)observeOn:(id)arg1;
- (id)subscribeOn:(id)arg1;
- (id)toArray;
- (id)throttle:(double)arg1 onScheduler:(id)arg2;
- (id)sort:(CDUnknownBlockType)arg1;
- (id)buffer:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
