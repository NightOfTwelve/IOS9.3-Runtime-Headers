//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NPKTransientPassAssertionConnectionDelegate-Protocol.h>
#import <NanoPassKit/NSXPCListenerDelegate-Protocol.h>

@class BKSApplicationStateMonitor, NSMutableArray, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface NPKTransientPassAssertionServer : NSObject <NSXPCListenerDelegate, NPKTransientPassAssertionConnectionDelegate>
{
    NSXPCListener *_xpcListener;
    NSMutableSet *_connections;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_transientPaymentRequests;
    BKSApplicationStateMonitor *_appStateMonitor;
}

@property(retain, nonatomic) BKSApplicationStateMonitor *appStateMonitor; // @synthesize appStateMonitor=_appStateMonitor;
@property(retain, nonatomic) NSMutableArray *transientPaymentRequests; // @synthesize transientPaymentRequests=_transientPaymentRequests;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableSet *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
- (void).cxx_destruct;
- (void)_handleAppStateChangeWithStateDictionary:(id)arg1;
- (id)transientPassUniqueID;
- (void)connection:(id)arg1 hasNewTransientPassRequest:(id)arg2;
- (void)connectionDied:(id)arg1;
- (void)handleNewConnection:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

