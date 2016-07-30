//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface HMDUIDialogPresenter : NSObject
{
    _Bool _selectedByPeerDevice;
    _Bool _peerDeviceAcceptedSelection;
    NSObject<OS_dispatch_queue> *_workQueue;
    struct __CFUserNotification *_currentNotification;
    id _currentContext;
    NSMutableArray *_pendingContexts;
    NSObject<OS_dispatch_semaphore> *_notificationSem;
}

+ (id)sharedUIDialogPresenter;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *notificationSem; // @synthesize notificationSem=_notificationSem;
@property(nonatomic) _Bool peerDeviceAcceptedSelection; // @synthesize peerDeviceAcceptedSelection=_peerDeviceAcceptedSelection;
@property(nonatomic) _Bool selectedByPeerDevice; // @synthesize selectedByPeerDevice=_selectedByPeerDevice;
@property(retain, nonatomic) NSMutableArray *pendingContexts; // @synthesize pendingContexts=_pendingContexts;
@property(retain, nonatomic) id currentContext; // @synthesize currentContext=_currentContext;
@property(nonatomic) struct __CFUserNotification *currentNotification; // @synthesize currentNotification=_currentNotification;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (_Bool)_presentDialogWithInfo:(id)arg1 options:(unsigned long long)arg2 targetResponse:(unsigned long long)arg3 textField:(id *)arg4 withContext:(id)arg5;
- (_Bool)_presentDialogWithInfo:(id)arg1 options:(unsigned long long)arg2 textField:(id *)arg3 withContext:(id)arg4;
- (_Bool)_presentDialogWithInfo:(id)arg1 options:(unsigned long long)arg2 targetResponse:(unsigned long long)arg3 textField:(id *)arg4 withContext:(id)arg5 selectedByPeerDevice:(_Bool *)arg6 timeout:(double)arg7;
- (void)confirmReportAccessory:(id)arg1 context:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_displayUpgradeNeededWithContext:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)displayUpgradeNeededWithContext:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_displayiCloudSwitchWithContext:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)displayiCloudSwitchWithContext:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_displayKeychainSyncForHome:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)displayKeychainSyncForHome:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_confirmRemoveUser:(id)arg1 fromHome:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)confirmRemoveUser:(id)arg1 fromHome:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_confirmAddUser:(id)arg1 toHome:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)confirmAddUser:(id)arg1 toHome:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_requestUserPermissionForUnauthenticatedAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)requestUserPermissionForUnauthenticatedAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_requestPairingPasswordForAccessory:(id)arg1 home:(id)arg2 bridge:(id)arg3 withContext:(id)arg4 queue:(id)arg5 numeric:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)requestPairingPasswordForAccessory:(id)arg1 home:(id)arg2 bridge:(id)arg3 withContext:(id)arg4 queue:(id)arg5 numeric:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (_Bool)_removeCurrentNotification:(struct __CFUserNotification *)arg1 currentSelection:(_Bool)arg2 selectedByPeerDevice:(_Bool *)arg3 andContext:(id)arg4;
- (_Bool)_addCurrentNotification:(struct __CFUserNotification *)arg1 withContext:(id)arg2;
- (_Bool)_addToPendingContext:(id)arg1;
- (_Bool)_isPendingContext:(id)arg1;
- (void)dismissPendingDialogDueToPeerDeviceSelection:(_Bool)arg1 context:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dismissPendingDialogWithContext:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

