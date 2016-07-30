//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSRecursiveLock;

@interface AVQueue : NSObject
{
    NSRecursiveLock *_mutex;
    NSMutableArray *_items;
    void *_reserved;
    int _isBeingModifiedCount;
}

+ (id)queueWithArray:(id)arg1 error:(id *)arg2;
+ (id)avQueue;
- (_Bool)isBeingModified;
- (void)removeAllItems;
- (void)removeItemsInRange:(struct _NSRange)arg1;
- (_Bool)removeItemAtIndex:(unsigned long long)arg1;
- (_Bool)removeItem:(id)arg1;
- (void)itemWillBeRemoved:(id)arg1 atIndex:(long long)arg2;
- (_Bool)insertItem:(id)arg1 afterItem:(id)arg2 error:(id *)arg3;
- (_Bool)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 error:(id *)arg3;
- (void)itemWasAdded:(id)arg1 atIndex:(long long)arg2;
- (_Bool)appendItem:(id)arg1 error:(id *)arg2;
- (_Bool)appendItemsFromArray:(id)arg1 error:(id *)arg2;
- (id)itemAfterItem:(id)arg1;
- (unsigned long long)indexOfItem:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemCount;
- (long long)_instantiateItem;
- (void)dealloc;
- (id)initWithArray:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)initWithError:(id *)arg1;

@end

