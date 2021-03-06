//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/APSConnectionDelegate-Protocol.h>
#import <CloudDocsDaemon/BRCLocalContainerDelegate-Protocol.h>

@class APSConnection, BRCAccountSession, BRCContainerMetadataSyncPersistedState, BRCDeadlineScheduler, BRCDeadlineToken, BRCSyncBudgetThrottle, NSData, NSDate, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface BRCContainerScheduler : NSObject <APSConnectionDelegate, BRCLocalContainerDelegate>
{
    BRCAccountSession *_session;
    BRCDeadlineToken *_containerMetadataSyncToken;
    BRCDeadlineToken *_sharedDatabaseSyncToken;
    NSObject<OS_dispatch_source> *_pushSource;
    NSString *_environmentName;
    NSData *_pushToken;
    APSConnection *_pushConnection;
    NSObject<OS_dispatch_queue> *_pushQueue;
    BRCContainerMetadataSyncPersistedState *_containerMetadataPersistedState;
    unsigned int _containerMetadataSyncState;
    struct _BRCOperation *_containerMetadataSyncOperation;
    unsigned int _sharedDBSyncState;
    struct _BRCOperation *_sharedDatabaseSyncOperation;
    struct _BRCOperation *_periodicSyncOperation;
    NSDate *_lastPeriodicSyncDate;
    NSObject<OS_dispatch_group> *_initialSyncDownGroup;
    NSObject<OS_dispatch_group> *_syncGroup;
    BRCSyncBudgetThrottle *_syncUpBudget;
    BRCDeadlineScheduler *_syncScheduler;
}

@property(readonly, nonatomic) BRCDeadlineScheduler *syncScheduler; // @synthesize syncScheduler=_syncScheduler;
@property(readonly, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) BRCSyncBudgetThrottle *syncUpBudget; // @synthesize syncUpBudget=_syncUpBudget;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *syncGroup; // @synthesize syncGroup=_syncGroup;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *initialSyncDownGroup; // @synthesize initialSyncDownGroup=_initialSyncDownGroup;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)_updatePushTopicsRegistration;
- (void)refreshPushRegistrationAfterAppsListChanged;
- (void)_scheduleUpdatePushTopicsRegistration;
- (void)containerDidBecomeForeground:(id)arg1;
- (void)containerDidBecomeBackground:(id)arg1;
- (void)dumpToContext:(id)arg1;
- (void)_syncScheduleForSharedDatabase;
- (void)_syncScheduleForContainersMetadata;
- (void)didChangeSyncStatusForContainerMetadataForContainer:(id)arg1;
- (void)scheduleSyncDownForSharedDatabaseImmediately:(_Bool)arg1;
- (void)scheduleSyncDownForContainerMetadata;
- (void)didInitialSyncDownForContainer:(id)arg1;
- (void)willInitialSyncDownForContainer:(id)arg1;
- (void)syncResume;
- (void)syncSuspend;
- (void)schedulePeriodicSyncIfNecessary;
- (void)setupWithRoot:(id)arg1;
- (void)close;
- (void)closeContainers:(id)arg1;
- (void)_unscheduleContainer:(id)arg1;
- (id)initWithAccountSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

