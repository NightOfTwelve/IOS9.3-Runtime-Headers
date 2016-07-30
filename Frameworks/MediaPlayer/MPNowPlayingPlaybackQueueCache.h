//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface MPNowPlayingPlaybackQueueCache : NSObject
{
    NSMutableSet *_items;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_changedItems;
    _Bool _coalescingUpdates;
}

- (void).cxx_destruct;
- (void)_pushContentItemChangedNotification;
- (void)_scheduleContentItemChangedNotification:(id)arg1;
- (void)_contentItemChanged:(id)arg1;
- (void)invalidate;
- (void)addItems:(id)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end

