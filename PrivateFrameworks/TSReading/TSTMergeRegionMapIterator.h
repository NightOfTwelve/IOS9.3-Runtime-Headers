//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSTMergeRegionMap;

@interface TSTMergeRegionMapIterator : NSObject
{
    TSTMergeRegionMap *mMergeRegionMap;
    struct __hash_map_iterator<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, void *>*>> {
        struct __hash_iterator<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, void *>*> {
            struct __hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *__node_;
        } __i_;
    } mMergeRegionIterator;
}

- (id).cxx_construct;
- (void)reset;
- (void)dealloc;
- (_Bool)hasNextMergeRegion;
- (CDStruct_5f1f7aa9)nextMergeRegion;
- (id)initWithMergeRegionMap:(id)arg1;

@end

