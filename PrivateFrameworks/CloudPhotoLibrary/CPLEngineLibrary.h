//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLConfiguration, CPLEngineScheduler, CPLEngineStore, CPLEngineSyncManager, CPLEngineSystemMonitor, CPLEngineTransport, CPLPlatformObject, CPLStatus, NSArray, NSDate, NSError, NSHashTable, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface CPLEngineLibrary : NSObject <CPLAbstractObject>
{
    NSArray *_components;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_attachedObjects;
    NSError *_openingError;
    CPLStatus *_status;
    _Bool _closed;
    _Bool _totalAssetCountHasBeenCalculated;
    NSDate *_cachedLastQuarantineCountReportDate;
    unsigned long long _totalAssetCount;
    _Bool _libraryIsCorrupted;
    CPLPlatformObject *_platformObject;
    NSURL *_clientLibraryBaseURL;
    NSURL *_cloudLibraryStateStorageURL;
    NSURL *_cloudLibraryResourceStorageURL;
    NSString *_libraryIdentifier;
    CPLEngineStore *_store;
    CPLEngineScheduler *_scheduler;
    CPLEngineSyncManager *_syncManager;
    CPLEngineTransport *_transport;
    CPLEngineSystemMonitor *_systemMonitor;
    CPLConfiguration *_configuration;
}

+ (id)platformImplementationProtocol;
@property(readonly, nonatomic) _Bool libraryIsCorrupted; // @synthesize libraryIsCorrupted=_libraryIsCorrupted;
@property(readonly, nonatomic) CPLConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) CPLEngineSystemMonitor *systemMonitor; // @synthesize systemMonitor=_systemMonitor;
@property(readonly, nonatomic) CPLEngineTransport *transport; // @synthesize transport=_transport;
@property(readonly, nonatomic) CPLEngineSyncManager *syncManager; // @synthesize syncManager=_syncManager;
@property(readonly, nonatomic) CPLEngineScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) CPLEngineStore *store; // @synthesize store=_store;
@property(readonly, copy, nonatomic) NSString *libraryIdentifier; // @synthesize libraryIdentifier=_libraryIdentifier;
@property(readonly, copy, nonatomic) NSURL *cloudLibraryResourceStorageURL; // @synthesize cloudLibraryResourceStorageURL=_cloudLibraryResourceStorageURL;
@property(readonly, copy, nonatomic) NSURL *cloudLibraryStateStorageURL; // @synthesize cloudLibraryStateStorageURL=_cloudLibraryStateStorageURL;
@property(readonly, copy, nonatomic) NSURL *clientLibraryBaseURL; // @synthesize clientLibraryBaseURL=_clientLibraryBaseURL;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
- (void).cxx_destruct;
- (id)componentName;
- (void)notifyAttachedObjectsSizeOfResourcesToUploadDidChangeToSize:(unsigned long long)arg1 sizeOfOriginalResourcesToUpload:(unsigned long long)arg2 numberOfImages:(unsigned long long)arg3 numberOfVideos:(unsigned long long)arg4 numberOfOtherItems:(unsigned long long)arg5;
- (void)notifyAttachedObjectsUploadTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)notifyAttachedObjectsUploadTask:(id)arg1 didProgress:(float)arg2;
- (void)notifyAttachedObjectsUploadTaskDidStart:(id)arg1;
- (void)notifyAttachedObjectsResourceDidFailBackgroundDownloadOfResource:(id)arg1;
- (void)notifyAttachedObjectsResourceDidDowloadInBackground:(id)arg1;
- (void)notifyAttachedObjectsPullQueueIsFull;
- (void)requestAttachedLibrary;
- (void)_performBlockWithLibrary:(_Bool)arg1 enumerateAttachedObjects:(CDUnknownBlockType)arg2;
- (void)detachObject:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)attachObject:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *description;
- (void)startSyncSession;
@property(nonatomic) _Bool iCloudLibraryExists;
@property(nonatomic) _Bool iCloudLibraryHasBeenWiped;
- (unsigned long long)totalAssetCountOnServer;
- (void)updateAssetCountsFromServer:(id)arg1;
- (void)_updateTotalAssetCountWithAssetCounts:(id)arg1;
@property(retain, nonatomic) NSDate *exitDeleteTime;
@property(nonatomic) _Bool isExceedingQuota;
@property(nonatomic) _Bool hasChangesToProcess;
- (void)reportUnsuccessfulSync;
- (void)updateLastSuccessfullSyncDate:(id)arg1;
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_closeNextComponent:(id)arg1 deactivate:(_Bool)arg2 lastError:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_openNextComponent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reportRadar:(unsigned long long)arg1;
- (id)corruptionInfo;
- (void)reportQuarantineCountIfNecessary;
- (void)_reportQuarantineCountIfNecessaryWithLastReportDate:(id)arg1;
- (void)reportLibraryCorrupted;
- (id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getStatusForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getListOfComponentsWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

