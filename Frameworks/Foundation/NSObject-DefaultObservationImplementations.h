//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (DefaultObservationImplementations)
- (void)_receiveBox:(id)arg1;
- (void)removeObservation:(id)arg1;
- (id)addObserver:(id)arg1;
- (void)receiveObservedValue:(id)arg1;
- (void)receiveObservedError:(id)arg1;
- (_Bool)_isToManyChangeInformation;
- (id *)_observerStorage;
- (id)addObservationTransformer:(CDUnknownBlockType)arg1;
- (id)addObserverBlock:(CDUnknownBlockType)arg1;
- (id)addChainedObservers:(id)arg1;
- (void)finishObserving;
@end
