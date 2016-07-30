//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_xpc_object, XPCServiceListenerDelegate;

@interface XPCServiceListener : NSObject
{
    NSString *_serviceName;
    id <XPCServiceListenerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_xpc_object> *_listener;
    NSMutableSet *_serviceConnections;
    unsigned long long _clientCount;
}

@property(nonatomic) unsigned long long clientCount; // @synthesize clientCount=_clientCount;
@property(retain, nonatomic) NSMutableSet *serviceConnections; // @synthesize serviceConnections=_serviceConnections;
@property(retain, nonatomic) NSObject<OS_xpc_object> *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) id <XPCServiceListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void).cxx_destruct;
- (void)serviceConnectionDidDisconnect:(id)arg1;
- (void)workQueueHandleIncomingConnection:(id)arg1;
- (void)shutDownCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_workQueueShutDownServiceConnections:(id)arg1 index:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)start;
- (id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
- (id)debugDescription;

@end

