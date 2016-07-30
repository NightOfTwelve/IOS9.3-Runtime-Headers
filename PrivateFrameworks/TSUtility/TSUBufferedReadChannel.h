//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSUtility/TSUReadChannel-Protocol.h>

@class NSError, NSString;
@protocol OS_dispatch_data, OS_dispatch_queue, OS_dispatch_semaphore, TSUReadChannel, TSUStreamReadChannel;

@interface TSUBufferedReadChannel : NSObject <TSUReadChannel>
{
    NSObject<OS_dispatch_semaphore> *_readSemaphore;
    id <TSUReadChannel> _sourceReadChannel;
    unsigned long long _sourceReadBufferSize;
    NSObject<OS_dispatch_queue> *_sourceReadQueue;
    long long _sourceOffset;
    NSError *_sourceReadChannelError;
    CDUnknownBlockType _streamReadChannelBlock;
    id <TSUStreamReadChannel> _streamReadChannel;
    NSObject<OS_dispatch_queue> *_streamReadChannelSourceQueue;
    CDUnknownBlockType _streamReadChannelSourceHandler;
    NSObject<OS_dispatch_queue> *_streamReadChannelOutputQueue;
    _Bool _isStreamOutputDone;
    long long _streamOutputOffset;
    unsigned long long _streamOutputLength;
    NSObject<OS_dispatch_data> *_currentStreamOutputData;
}

- (void).cxx_destruct;
- (void)addBarrier:(CDUnknownBlockType)arg1;
- (void)setLowWater:(unsigned long long)arg1;
- (id)_currentDataIntersectionWithOffset:(long long)arg1 length:(unsigned long long)arg2 isReadDone:(_Bool *)arg3;
- (void)_readFromOffset:(long long)arg1 length:(unsigned long long)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)setStreamReadChannelSourceQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_resetStreamReadChannel;
- (void)_closeStreamReadChannel;
- (void)close;
- (void)dealloc;
- (id)initWithReadChannel:(id)arg1 sourceReadBufferSize:(unsigned long long)arg2 streamReadChannelBlock:(CDUnknownBlockType)arg3;
- (id)initWithReadChannel:(id)arg1 streamReadChannelBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

