//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCFSSchedulerBase.h>

#import <CloudDocsDaemon/BRCFSEventsDelegate-Protocol.h>
#import <CloudDocsDaemon/BRCFileCoordinationReading-Protocol.h>
#import <CloudDocsDaemon/BRCModule-Protocol.h>

@class BRCCountedSet, BRCMinHeap, BRCRelativePath, NSObject, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface BRCFSReader : BRCFSSchedulerBase <BRCModule, BRCFSEventsDelegate, BRCFileCoordinationReading>
{
    BRCCountedSet *_coordinatedReaders;
    _Bool _readerCountReachedMax;
    BRCRelativePath *_currentScan;
    BRCMinHeap *_lostHeap;
    NSObject<OS_dispatch_queue> *_lostScanQueue;
    NSObject<OS_dispatch_source> *_lostScanSource;
    NSObject<OS_dispatch_source> *_lostScanDelay;
    _Bool _resumed;
    NSObject<OS_dispatch_group> *_lostScanGroup;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_group> *lostScanGroup; // @synthesize lostScanGroup=_lostScanGroup;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resume;
- (void)suspend;
- (void)_close;
- (void)cancel;
- (void)reset;
- (id)initWithAccountSession:(id)arg1;
- (void)didChangeLostScanStatusForContainer:(id)arg1;
- (_Bool)thumbnailChangedForItem:(id)arg1 relpath:(id)arg2 url:(id)arg3 error:(id *)arg4;
- (void)unscheduleContainerForLostScan:(id)arg1;
- (void)_lostScanSchedule;
- (void)_cancelScan;
- (void)_startScan:(id)arg1;
- (void)_continueScan:(id)arg1;
- (void)_slowScanDirectoryAtPath:(id)arg1;
- (void)_scanDirectory:(id)arg1 atPath:(id)arg2 lookup:(id)arg3;
- (void)_scanDone:(id)arg1 atPath:(id)arg2 lookup:(id)arg3;
- (void)_processDeadItem:(id)arg1;
- (void)_didResolvedDocumentID:(unsigned int)arg1 fileID:(unsigned long long)arg2 zone:(id)arg3;
- (void)_resolveDocumentID:(unsigned int)arg1 zone:(id)arg2;
- (void)_processLostItem:(id)arg1 resolvedToPath:(id)arg2;
- (void)_processLostItem:(id)arg1;
- (void)fseventInsideSharedEnclosure:(id)arg1 flags:(unsigned int)arg2;
- (void)fseventOnDocument:(id)arg1 flags:(unsigned int)arg2 options:(unsigned long long)arg3 lookup:(id)arg4 unresolvedLastPathComponent:(id)arg5;
- (void)fseventOnDocument:(id)arg1 flags:(unsigned int)arg2 options:(unsigned long long)arg3 lookup:(id)arg4;
- (void)fseventOnDocument:(id)arg1 flags:(unsigned int)arg2 lookup:(id)arg3;
- (void)_fseventOnDocument:(id)arg1 flags:(unsigned int)arg2 options:(unsigned long long)arg3 item:(id)arg4 lookup:(id)arg5 unresolvedLastPathComponent:(id)arg6;
- (void)_fseventOnDocument:(id)arg1 flags:(unsigned int)arg2 options:(unsigned long long)arg3 item:(id)arg4 lookup:(id)arg5;
- (void)scanContainerDocumentsIfNeeded:(id)arg1;
- (void)fseventOnDirectory:(id)arg1 flags:(unsigned int)arg2 lookup:(id)arg3;
- (id)itemForCreatedDocumentsDirectory:(id)arg1 container:(id)arg2 path:(id)arg3;
- (void)fseventOnAlias:(id)arg1 flags:(unsigned int)arg2 lookup:(id)arg3;
- (void)fseventOnContainer:(id)arg1 flags:(unsigned int)arg2;
- (void)fseventOnSharedRoot:(id)arg1 flags:(unsigned int)arg2;
- (void)fseventOnRoot:(id)arg1 flags:(unsigned int)arg2;
- (void)fseventAtPath:(id)arg1 flags:(unsigned int)arg2 options:(unsigned long long)arg3 unresolvedLastPathComponent:(id)arg4;
- (void)fseventAtPath:(id)arg1 flags:(unsigned int)arg2 unresolvedLastPathComponent:(id)arg3;
- (void)fseventAtPath:(id)arg1 flags:(unsigned int)arg2;
- (void)readUnderCoordinationAtURL:(id)arg1;
- (id)lookupAndReadItemUnderCoordinationAtURL:(id)arg1;
- (_Bool)readUnderCoordinationWithLookup:(id)arg1;
- (void)endReadCoordinationInZone:(id)arg1;
- (_Bool)startReadCoordinationInZone:(id)arg1;
- (_Bool)_scheduleOne:(id)arg1;
- (void)_schedule;
- (void)_scheduleCoordinatedReadForItem:(id)arg1 path:(id)arg2;
- (void)_attemptSchedulingCoordinatedReadForItem:(id)arg1 path:(id)arg2;
- (void)_retriedThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3;
- (void)createThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3;
- (void)_createOrRetryThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3 throttle:(id)arg4 hasBeenTried:(_Bool)arg5;
- (void)_delayThrottleID:(long long)arg1 zone:(id)arg2 by:(double)arg3;
- (_Bool)_canRetryThrottleID:(long long)arg1 zone:(id)arg2;
- (unsigned long long)_readCoordinationCount;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isCancelled;
@property(readonly) Class superclass;

@end

