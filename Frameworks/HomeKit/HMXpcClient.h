//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMMessageTransport-Protocol.h>

@class HMMessageDispatcher, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface HMXpcClient : NSObject <HMMessageTransport>
{
    _Bool _connectionValid;
    _Bool _requiresCheckin;
    _Bool _notifyRegistered;
    int _notifyRegisterToken;
    HMMessageDispatcher *_messageDispatcher;
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _reconnectionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType reconnectionHandler; // @synthesize reconnectionHandler=_reconnectionHandler;
@property(nonatomic) _Bool notifyRegistered; // @synthesize notifyRegistered=_notifyRegistered;
@property(nonatomic) int notifyRegisterToken; // @synthesize notifyRegisterToken=_notifyRegisterToken;
@property(nonatomic) _Bool requiresCheckin; // @synthesize requiresCheckin=_requiresCheckin;
@property(nonatomic) _Bool connectionValid; // @synthesize connectionValid=_connectionValid;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(readonly, nonatomic) HMMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
- (void).cxx_destruct;
- (void)recheckinIfRequired:(id)arg1;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4;
- (void)registerReconnectionHandler:(CDUnknownBlockType)arg1;
- (id)connection;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

