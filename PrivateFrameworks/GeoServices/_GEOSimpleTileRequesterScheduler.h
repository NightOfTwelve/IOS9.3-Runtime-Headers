//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _GEOSimpleTileRequesterScheduler : NSObject
{
    NSMutableArray *_requesters;
    NSMutableArray *_inProgress;
}

+ (id)sharedScheduler;
- (void)sendNextRequestIfNecessary;
- (void)operationDidStop:(id)arg1;
- (void)removeTileRequester:(id)arg1;
- (void)addTileRequester:(id)arg1;
- (void)dealloc;

@end

