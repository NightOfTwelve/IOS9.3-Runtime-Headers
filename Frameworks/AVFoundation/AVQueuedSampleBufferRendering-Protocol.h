//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/NSObject-Protocol.h>

@class NSError, NSObject;
@protocol OS_dispatch_queue;

@protocol AVQueuedSampleBufferRendering <NSObject>
@property(readonly, getter=isReadyForMoreMediaData) _Bool readyForMoreMediaData;
@property(readonly, retain) struct OpaqueCMTimebase *timebase;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
- (void)stopRequestingMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(NSObject<OS_dispatch_queue> *)arg1 usingBlock:(void (^)(void))arg2;
- (void)flush;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
@end

