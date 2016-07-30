//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class NSString;
@protocol HDHealthDaemon, OS_dispatch_queue, OS_dispatch_source;

@interface HDDatabasePruningManager : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver>
{
    id <HDHealthDaemon> _healthDaemon;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timerSource;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <HDHealthDaemon> healthDaemon; // @synthesize healthDaemon=_healthDaemon;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (id)_calendar;
- (void)_setLastAttemptDate:(id)arg1 completed:(_Bool)arg2;
- (id)_lastAttemptDateWithCompleted:(_Bool *)arg1;
- (void)_queue_pruneExpiredDeletedObjectsWithNowDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_predicateForPruningSamplesExcludingTypes:(id)arg1 daysOld:(unsigned long long)arg2 calendar:(id)arg3 nowDate:(id)arg4;
- (id)_predicateForPruningThirdPartySampleTypes:(id)arg1 daysOld:(unsigned long long)arg2 calendar:(id)arg3 nowDate:(id)arg4;
- (id)_predicateForPruningSampleTypes:(id)arg1 daysOld:(unsigned long long)arg2 calendar:(id)arg3 nowDate:(id)arg4;
- (id)_predicatesForPruningWithCalendar:(id)arg1 nowDate:(id)arg2;
- (void)_queue_pruneExpiredSamplesWithNowDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pruneDatabaseWithOptions:(unsigned long long)arg1 nowDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pruneDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performPruneDatabaseActivity:(id)arg1;
- (void)_registerActivity;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)initWithHealthDaemon:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
