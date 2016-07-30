//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCondition, NSThread, OITSUMemoryWatcher, OITSUPointerKeyDictionary, OITSURetainedPointerKeyDictionary;
@protocol TSUFlushable;

__attribute__((visibility("hidden")))
@interface OITSUFlushingManager : NSObject
{
    OITSURetainedPointerKeyDictionary *_objects;
    struct set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerFlushingOrderLess, std::__1::allocator<TSUFlushableObjectInfo *>> *_sortedObjects;
    struct set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerTimeStampLess, std::__1::allocator<TSUFlushableObjectInfo *>> *_sortedNewObjects;
    OITSUPointerKeyDictionary *_inactiveObjects;
    unsigned int _clock;
    _Bool _alwaysFlushing;
    _Bool _stopFlushing;
    _Bool _stopFlushingWhenQueueEmpty;
    _Bool _isFlushing;
    id <TSUFlushable> _flushingObject;
    NSCondition *_cond;
    NSCondition *_isFlushingCond;
    OITSUMemoryWatcher *_memoryWatcher;
    NSThread *_bgThread;
    unsigned long long _backgroundTransitionTaskId;
    unsigned long long _activeBgThreadTask;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedManager;
+ (id)_singletonAlloc;
- (void)_bgThreadInactive;
- (void)_bgThreadActive;
- (void)_bgTaskFinished;
- (void)_bgTaskStarted;
- (void)_didUseObject:(id)arg1;
- (_Bool)controlsInactiveObject:(id)arg1;
- (_Bool)controlsActiveObject:(id)arg1;
- (void)advanceClock;
- (void)transferNewObjects;
- (void)insertObjectInfo:(struct TSUFlushableObjectInfo *)arg1;
- (struct TSUFlushableObjectInfo *)eraseInfoForObject:(id)arg1;
- (_Bool)isNewObject:(struct TSUFlushableObjectInfo *)arg1;
- (void)_backgroundThread:(id)arg1;
- (void)_stopFlushingObjects;
- (void)_startFlushingObjects;
- (void)_flushAllEligible;
- (void)memoryLevelDecreased:(int)arg1 was:(int)arg2;
- (void)memoryLevelIncreased:(int)arg1 was:(int)arg2;
- (void)didReceiveMemoryWarning;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void)safeToFlush:(id)arg1 wasAccessed:(_Bool)arg2;
- (void)unsafeToFlush:(id)arg1;
- (void)doneWithObject:(id)arg1;
- (void)stopProtectingObject:(id)arg1;
- (void)protectObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

@end

