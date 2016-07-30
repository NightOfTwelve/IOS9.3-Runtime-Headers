//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BRQueryItem, NSProgress;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRQueryItemProgressObserver : NSObject
{
    BRQueryItem *_item;
    NSObject<OS_dispatch_queue> *_queue;
    id _subscriber;
    NSProgress *_progress;
    _Bool _started;
    _Bool _isUpload;
    CDUnknownBlockType _progressHandler;
}

@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(readonly, nonatomic) BRQueryItem *item; // @synthesize item=_item;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)start;
- (void)stop;
- (void)_subscribe;
- (void)_unsubscribe;
- (void)setQueue:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithItem:(id)arg1;

@end

