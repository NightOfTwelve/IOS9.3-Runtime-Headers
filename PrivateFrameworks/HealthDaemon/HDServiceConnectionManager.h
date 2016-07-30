//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class HDDaemon, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HDServiceConnectionManager : NSObject <HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDHealthDaemonReadyObserver>
{
    _Bool _connecting;
    _Bool _BTLEEnabled;
    NSMutableDictionary *_activeServices;
    NSObject<OS_dispatch_queue> *_deviceQueue;
    HDDaemon *_daemon;
}

+ (id)_transactionName:(id)arg1;
@property(nonatomic) __weak HDDaemon *daemon; // @synthesize daemon=_daemon;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)daemonReady:(id)arg1;
- (void)_disconnectFromService:(id)arg1;
- (void)_disconnectFromServices;
- (void)_connectToService:(id)arg1;
- (void)_connectToServices;
- (void)_subscribeBluetoothStateUpdates;
- (void)_handleBluetoothUpdates:(long long)arg1;
- (void)dealloc;
- (void)connectToService:(id)arg1;
- (void)disconnectFromService:(id)arg1;
- (void)disconnectFromServices;
- (void)reconnectToServices;
- (id)init;
- (id)initWithDaemon:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

