//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CPLBackgroundUploadsTask : CPLEngineSyncTask
{
    NSObject<OS_dispatch_queue> *_lock;
    NSMutableArray *_uploadTasks;
    _Bool _shouldStop;
    _Bool _hasBadErrors;
    _Bool _hasResetQueue;
    unsigned long long _successfullyUploadedResourcesCount;
    unsigned long long _failedUploadedResourcesCount;
    unsigned long long _total;
    double _start;
}

- (void).cxx_destruct;
- (id)taskIdentifier;
- (void)cancel;
- (void)resume;
- (void)pause;
- (void)taskDidFinishWithError:(id)arg1;
- (void)launch;
- (void)_uploadTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)_enqueueTasksLocked;
- (void)_launchNecessaryUploadTasksWithTransaction:(id)arg1;
- (void)_finishTaskLocked;
- (id)initWithEngineLibrary:(id)arg1;

@end

