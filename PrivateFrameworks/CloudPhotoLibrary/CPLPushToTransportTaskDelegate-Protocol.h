//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTaskDelegate-Protocol.h>

@class CPLChangeBatch, CPLPushToTransportTask, NSArray;
@protocol CPLEngineTransportCheckRecordsExistenceTask, CPLEngineTransportUploadBatchTask;

@protocol CPLPushToTransportTaskDelegate <CPLEngineSyncTaskDelegate>
- (id <CPLEngineTransportCheckRecordsExistenceTask>)task:(CPLPushToTransportTask *)arg1 wantsToCheckRecordsExistence:(NSArray *)arg2 withCompletionHandler:(void (^)(NSArray *, NSError *))arg3;
- (id <CPLEngineTransportUploadBatchTask>)task:(CPLPushToTransportTask *)arg1 wantsToPushBatch:(CPLChangeBatch *)arg2 progressBlock:(void (^)(NSString *, float))arg3 continuationBlock:(void (^)(NSError *))arg4;
@end

