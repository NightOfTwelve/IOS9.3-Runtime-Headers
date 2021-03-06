//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSHashTable, NSMutableArray, NSOperationQueue, RCExtAudioFilePipe;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface RCWaveformGenerator : NSObject
{
    long long _state;
    NSObject<OS_dispatch_semaphore> *_digestPausedSemaphore;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    double _totalDigestedTime;
    double _totalFlushedTime;
    NSHashTable *_weakObservers;
    NSMutableArray *_internalFinishedLoadingBlockUUIDs;
    NSMutableArray *_internalFinishedLoadingBlocks;
    RCExtAudioFilePipe *_activeExtAudioFile;
    NSOperationQueue *_loadingQueue;
    struct PowerMeter _samplePowerMeter;
    _Bool _isSampleRateKnown;
    vector_ec52ae8c _powerLevelBuffer;
    float _powerLevelBufferLastPushedValue;
    unsigned long long _powerLevelsConsumedSinceLastFlush;
    unsigned long long _framesConsumedSinceLastFlush;
    long long _framesNeededForNextDB;
    long long _framesNeededForNextFlush;
    NSError *_loadingError;
    unsigned long long _pauseCount;
    _Bool _canceled;
    double _segmentFlushInterval;
    long long _overviewUnitsPerSecond;
}

@property(readonly, nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long overviewUnitsPerSecond; // @synthesize overviewUnitsPerSecond=_overviewUnitsPerSecond;
@property(readonly, nonatomic) double segmentFlushInterval; // @synthesize segmentFlushInterval=_segmentFlushInterval;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_onLoadingQueue_appendPowerMeterValuesFromRawAudioData:(void *)arg1 frameCount:(long long)arg2 format:(const struct AudioStreamBasicDescription *)arg3 isPredigest:(_Bool)arg4;
- (void)_onLoadingQueue_appendSegment:(id)arg1;
- (void)_onLoadingQueue_pushAveragePowerLevel:(float)arg1;
- (void)_onLoadingQueue_digestAveragePowerLevel:(float)arg1;
- (void)_onLoadingQueue_flushRemainingData;
- (void)_onLoadingQueue_flushWithNextSegmentWithEndTime:(double)arg1 isPredigest:(_Bool)arg2;
- (void)_onLoadingQueue_flushWaveformSegment:(id)arg1;
- (void)_appendAveragePowerLevelsByDigestingWaveformSegments:(id)arg1;
- (id)synchronouslyApproximateWaveformForAVContentURL:(id)arg1 byReadingCurrentFileAheadTimeRange:(CDStruct_73a5d3ca)arg2;
- (void)_onQueue_appendAveragePowerLevelsByDigestingTimeRange:(CDStruct_73a5d3ca)arg1 inExtAudioFile:(id)arg2 sourceFormat:(struct AudioStreamBasicDescription *)arg3 outputFormat:(struct AudioStreamBasicDescription *)arg4;
- (void)_appendAveragePowerLevelsByDigestingTimeRange:(CDStruct_73a5d3ca)arg1 inExtAudioFile:(id)arg2 sourceFormat:(struct AudioStreamBasicDescription *)arg3 outputFormat:(struct AudioStreamBasicDescription *)arg4;
- (void)_appendPowerMeterValuesFromDataInAudioFile:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)_appendPowerMeterValuesFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_appendAveragePowerLevel:(float)arg1;
- (void)_performObserversBlock:(CDUnknownBlockType)arg1;
- (void)_performInternalFinishedLoadingBlocksAndFinishObservers;
- (void)_performLoadingFinishedBlock:(CDUnknownBlockType)arg1 internalBlockUUID:(id)arg2 isTimeout:(_Bool)arg3;
- (void)_finishLoadingByTerminating:(_Bool)arg1 loadingFinishedBlockTimeoutDate:(id)arg2 loadingFinishedBlock:(CDUnknownBlockType)arg3;
- (_Bool)_isCanceled;
- (double)totalDigestedTime;
- (double)totalFlushedTime;
- (void)finishLoadingWithCompletionTimeoutDate:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)terminateLoadingImmediately;
@property(nonatomic) _Bool paused;
- (void)beginLoading;
@property(readonly, nonatomic) _Bool idle;
@property(readonly, nonatomic) _Bool finished;
@property(readonly, nonatomic) _Bool loadable;
- (_Bool)appendAveragePowerLevelsByDigestingWaveform:(id)arg1;
- (_Bool)appendAveragePowerLevel:(float)arg1;
- (_Bool)appendAveragePowerLevelsByDigestingWaveformSegments:(id)arg1;
- (_Bool)appendAveragePowerLevelsByDigestingContentsOfAudioFileURL:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (_Bool)appendAveragePowerLevelsByDigestingSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)flushPendingCapturedSampleBuffers;
- (void)removeSegmentOutputObserver:(id)arg1;
- (void)addSegmentOutputObserver:(id)arg1;
- (id)initWithSamplingParametersFromGenerator:(id)arg1;
- (id)initWithSegmentFlushInterval:(double)arg1;
- (id)init;

@end

