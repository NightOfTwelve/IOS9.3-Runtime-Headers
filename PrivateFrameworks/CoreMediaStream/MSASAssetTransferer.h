//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/MMCSEngineDelegate-Protocol.h>

@class MMCSEngine, MSASPersonModel, MSAlbumSharingDaemon, MSBackoffManager, NSString;
@protocol OS_dispatch_queue;

@interface MSASAssetTransferer : NSObject <MMCSEngineDelegate>
{
    _Bool _hasShutDown;
    int _maxBatchCount;
    int _maxRetryCount;
    id _delegate;
    NSString *_personID;
    MMCSEngine *_engine;
    double _maxMMCSTokenValidityTimeInterval;
    MSAlbumSharingDaemon *_daemon;
    MSASPersonModel *_model;
    MSBackoffManager *_backoffManager;
    NSString *_focusAlbumGUID;
    NSString *_focusAssetCollectionGUID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
}

@property(nonatomic) _Bool hasShutDown; // @synthesize hasShutDown=_hasShutDown;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(copy, nonatomic) NSString *focusAssetCollectionGUID; // @synthesize focusAssetCollectionGUID=_focusAssetCollectionGUID;
@property(copy, nonatomic) NSString *focusAlbumGUID; // @synthesize focusAlbumGUID=_focusAlbumGUID;
@property(nonatomic) int maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property(nonatomic) int maxBatchCount; // @synthesize maxBatchCount=_maxBatchCount;
@property(nonatomic) __weak MSBackoffManager *backoffManager; // @synthesize backoffManager=_backoffManager;
@property(nonatomic) __weak MSASPersonModel *model; // @synthesize model=_model;
@property(nonatomic) __weak MSAlbumSharingDaemon *daemon; // @synthesize daemon=_daemon;
@property(nonatomic) double maxMMCSTokenValidityTimeInterval; // @synthesize maxMMCSTokenValidityTimeInterval=_maxMMCSTokenValidityTimeInterval;
@property(readonly, nonatomic) MMCSEngine *engine; // @synthesize engine=_engine;
@property(copy, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)MMCSEngine:(id)arg1 logPerformanceMetrics:(id)arg2;
- (void)MMCSEngine:(id)arg1 logMessage:(id)arg2 logLevel:(int)arg3;
- (_Bool)MMCSEngine:(id)arg1 shouldLogAtLogLevel:(int)arg2;
- (void)didFinishGettingAllAssets;
- (void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
- (void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 error:(id)arg4;
- (void)didFinishPuttingAllAssets;
- (void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
- (void)MMCSEngine:(id)arg1 didCreateRequestorContext:(id)arg2 forAssets:(id)arg3;
- (void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 putReceipt:(id)arg3 error:(id)arg4;
- (void)_sendDidIdleNotification;
- (id)_canceledError;
- (id)_MMCSTokenTooOldError;
- (id)_missingMMCSTokenError;
- (id)_missingURLError;
- (id)_pathForPersonID:(id)arg1;
- (double)workQueueMaxMMCSTokenValidityTimeInterval;
- (unsigned long long)workQueueNextItemID;
- (void)workQueueRetryOutstandingActivities;
- (void)retryOutstandingActivities;
- (void)workQueueShutDownCompletionBlock:(CDUnknownBlockType)arg1;
- (void)shutDownCompletionBlock:(CDUnknownBlockType)arg1;
- (void)workQueueCancel;
- (void)cancelCompletionBlock:(CDUnknownBlockType)arg1;
- (void)workQueueStop;
- (void)stopCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithPersonID:(id)arg1 eventQueue:(id)arg2;
- (id)initWithPersonID:(id)arg1;
- (void)_rereadPerformanceLoggingSetting;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

