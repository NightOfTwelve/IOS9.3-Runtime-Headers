//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BulletinBoard/IDSServiceDelegate-Protocol.h>

@class IDSService, NSMutableArray, NSMutableDictionary, NSString, NSTimer;
@protocol BBSyncServiceDelegate, OS_dispatch_queue;

@interface BBSyncService : NSObject <IDSServiceDelegate>
{
    IDSService *_service;
    NSMutableArray *_pendingDismissalDictionaries;
    NSMutableArray *_pendingDismissalIDs;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _queuedFeed;
    NSString *_queuedSectionID;
    NSString *_queuedUniversalSectionID;
    NSMutableDictionary *_deferredDismissalsBySectionID;
    NSTimer *_deferredTimer;
    int _lockNotifyToken;
    id <BBSyncServiceDelegate> _delegate;
}

@property(nonatomic) id <BBSyncServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_sendDeferredDismissals;
- (void)_deferredTimerFired:(id)arg1;
- (void)_clearDeferredTimer;
- (void)_addDeferredDismissalForBulletin:(id)arg1 feeds:(unsigned long long)arg2;
- (id)_dismissalDictionaryForBulletin:(id)arg1;
- (void)_sendSyncMessage:(id)arg1;
- (id)_syncLocalDevices;
- (_Bool)_syncHasDefaultPairedDevice;
- (void)_reallyEnqueueBulletin:(id)arg1 feeds:(unsigned long long)arg2;
- (_Bool)_hasDestination;
- (id)_syncAccount;
- (void)sendDeferredDismissals;
- (void)sendSyncedRemovalForBulletin:(id)arg1 feeds:(unsigned long long)arg2;
- (void)enqueueSyncedRemovalForBulletin:(id)arg1 feeds:(unsigned long long)arg2;
- (void)sendPendingSyncedRemovals;
- (id)dismissalSectionIdentifierForIncomingMessage:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

