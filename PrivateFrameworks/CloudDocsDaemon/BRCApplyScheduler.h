//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCFSSchedulerBase.h>

#import <CloudDocsDaemon/BRCModule-Protocol.h>

@class BRCCountedSet, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface BRCApplyScheduler : BRCFSSchedulerBase <BRCModule>
{
    BRCCountedSet *_coordinatedWriters;
    NSMutableSet *_watchingFaults;
    _Bool _applyCountReachedMax;
}

- (void).cxx_destruct;
- (void)_close;
- (void)didSyncDownZone:(id)arg1 requestID:(unsigned long long)arg2 upToRank:(long long)arg3 caughtUpWithServer:(_Bool)arg4;
- (void)deleteExpiredThrottles;
- (void)endWriteCoordinationInZone:(id)arg1;
- (_Bool)startWriteCoordinationInZone:(id)arg1;
- (unsigned long long)_writeCoordinationCount;
- (void)monitorFaultingForContainer:(id)arg1;
- (void)_handleWatchingFaults;
- (_Bool)_scheduleOne:(id)arg1;
- (void)_schedule;
- (void)repopulateThrottlesForZone:(id)arg1;
- (void)rescheduleSuspendedThrottlesForZone:(id)arg1 state:(int)arg2;
- (void)didReparentOrKillItemID:(id)arg1 parentItemID:(id)arg2 zone:(id)arg3;
- (void)didCreateMissingParentID:(id)arg1 zone:(id)arg2;
- (void)_retriedThrottleID:(long long)arg1 zone:(id)arg2 kind:(unsigned int)arg3;
- (void)createThrottleID:(long long)arg1 zone:(id)arg2 itemID:(id)arg3 state:(int)arg4 kind:(unsigned int)arg5;
- (void)updateThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3 kind:(unsigned int)arg4;
- (void)updateThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3;
- (void)_describe:(id)arg1 zone:(id)arg2 now:(long long)arg3 context:(id)arg4;
- (id)initWithAccountSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isCancelled;
@property(readonly) Class superclass;

@end
