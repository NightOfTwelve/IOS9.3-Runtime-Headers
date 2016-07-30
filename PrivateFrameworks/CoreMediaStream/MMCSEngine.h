//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSThread, NSTimer, NSURL;
@protocol MMCSEngineDelegate, OS_dispatch_queue;

@interface MMCSEngine : NSObject
{
    NSURL *_workPathURL;
    NSString *_appIDHeader;
    NSString *_dataClass;
    NSDictionary *_options;
    struct _mmcs_engine *_engine;
    struct {
        long long version;
        void *context;
        CDUnknownFunctionPointerType getFileDescriptorAndContentTypeFromItemCallback;
        CDUnknownFunctionPointerType getItemProgressCallback;
        CDUnknownFunctionPointerType getItemDoneCallback;
        CDUnknownFunctionPointerType putItemProgressCallback;
        CDUnknownFunctionPointerType putItemDoneCallback;
        CDUnknownFunctionPointerType requestCompletedCallback;
    } _engineClientContext;
    NSMutableDictionary *_itemIDToAssetMap;
    NSObject<OS_dispatch_queue> *_itemIDToAssetMapQueue;
    NSMutableArray *_requestorContexts;
    NSObject<OS_dispatch_queue> *_reqestorContextQueue;
    NSMutableDictionary *_autoItemIDDictionary;
    NSURL *_autoItemIDPersistenceURL;
    NSObject<OS_dispatch_queue> *_autoItemIDDictionaryQueue;
    _Bool _autoGenerateItemID;
    _Bool _isMetricsGatheringEnabled;
    _Bool _isDone;
    id <MMCSEngineDelegate> _delegate;
    NSThread *_workThread;
    NSTimer *_threadKeepAliveTimer;
}

+ (id)logStringForPutItemState:(int)arg1;
+ (id)logStringForGetItemState:(int)arg1;
@property(nonatomic) _Bool isDone; // @synthesize isDone=_isDone;
@property(retain, nonatomic) NSTimer *threadKeepAliveTimer; // @synthesize threadKeepAliveTimer=_threadKeepAliveTimer;
@property(retain, nonatomic) NSThread *workThread; // @synthesize workThread=_workThread;
@property(nonatomic) _Bool isMetricsGatheringEnabled; // @synthesize isMetricsGatheringEnabled=_isMetricsGatheringEnabled;
@property(nonatomic) _Bool autoGenerateItemID; // @synthesize autoGenerateItemID=_autoGenerateItemID;
@property(nonatomic) __weak id <MMCSEngineDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)_nextItemID;
- (void)_initItemIDPersistence;
- (void)_removeRequestorContext:(id)arg1;
- (void)_registerRequestorContext:(id)arg1;
- (void)_removeAssetForItemID:(unsigned long long)arg1;
- (id)_assetWithItemID:(unsigned long long)arg1;
- (void)_registerAsset:(id)arg1;
- (void)_logLevel:(int)arg1 message:(id)arg2;
- (void)putAssets:(id)arg1 requestURL:(id)arg2 DSID:(id)arg3 options:(id)arg4;
- (void)getAssets:(id)arg1 requestURL:(id)arg2 DSID:(id)arg3 options:(id)arg4;
- (void)unregisterAssets:(id)arg1;
- (void)unregisterAsset:(id)arg1;
- (void)registerAssets:(id)arg1 forDownloadCompletionBlock:(CDUnknownBlockType)arg2;
- (void)reregisterAssetForDownload:(id)arg1;
- (void)reregisterAssetForUpload:(id)arg1;
- (void)registerAssetForUpload:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)isActive;
- (void)shutDownCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cancelAllOperations;
- (void)cancelOperationsWithContext:(id)arg1;
- (void)_requestCompletedRequestorContext:(id)arg1;
- (void)_putItemDoneItemID:(unsigned long long)arg1 requestorContext:(id)arg2 putReceipt:(id)arg3 error:(id)arg4;
- (void)_putItemProgressItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 requestorContext:(id)arg4 error:(id)arg5;
- (void)_getItemDoneItemID:(unsigned long long)arg1 path:(id)arg2 requestorContext:(id)arg3 error:(id)arg4;
- (void)_getItemProgressItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 requestorContext:(id)arg4 error:(id)arg5;
- (_Bool)_getFileDescriptorAndContentTypeFromItemID:(unsigned long long)arg1 outFD:(int *)arg2 outItemType:(id *)arg3 outError:(id *)arg4;
- (void)threadMain:(id)arg1;
- (void)_doNothingTimerHandler:(id)arg1;
- (void)performBlockOnWorkThread:(CDUnknownBlockType)arg1;
- (void)performBlockOnWorkThread:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)initWithWorkPath:(id)arg1 appIDHeader:(id)arg2 dataClass:(id)arg3 options:(id)arg4;
- (id)initWithWorkPath:(id)arg1 appIDHeader:(id)arg2 dataClass:(id)arg3 options:(id)arg4 modes:(id)arg5;
@property(readonly, nonatomic) _Bool hasOutstandingActivity;

@end

