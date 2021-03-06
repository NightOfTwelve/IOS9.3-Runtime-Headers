//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HMThreadSafeMutableArrayCollection : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_mutableArray;
}

+ (id)array;
+ (id)arrayWithArray:(id)arg1;
@property(readonly, copy, nonatomic) NSMutableArray *mutableArray; // @synthesize mutableArray=_mutableArray;
@property(readonly, copy, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (_Bool)containsObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)setArray:(id)arg1;
- (id)filteredArrayUsingPredicate:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *array;
@property(readonly, nonatomic) unsigned long long count;
- (void)addObject:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)removeObject:(id)arg1;
- (id)initWithArray:(id)arg1;

@end

