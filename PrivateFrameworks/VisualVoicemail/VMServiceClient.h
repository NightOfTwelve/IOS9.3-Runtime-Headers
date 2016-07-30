//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VisualVoicemail/VMClientXPCProtocol-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface VMServiceClient : NSObject <VMClientXPCProtocol>
{
    int _token;
    long long _behaviorFlags;
    NSXPCConnection *_clientConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedClient;
@property(nonatomic) int token; // @synthesize token=_token;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property long long behaviorFlags; // @synthesize behaviorFlags=_behaviorFlags;
- (void).cxx_destruct;
- (void)_handleApplicationResumed:(id)arg1;
- (void)_handleApplicationSuspended:(id)arg1;
- (void)_handleXPCConnectionEstablished:(id)arg1;
- (void)_handleXPCDisconnectNotification:(id)arg1;
- (void)callAsynchronousMethod:(id)arg1 onObjectType:(id)arg2 withIdentifier:(id)arg3 andArguments:(id)arg4 reply:(CDUnknownBlockType)arg5 errorHandler:(CDUnknownBlockType)arg6;
- (void)callAsynchronousMethod:(id)arg1 onObjectType:(id)arg2 withIdentifier:(id)arg3 andArguments:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (id)callSynchronousMethod:(id)arg1 onObjectType:(id)arg2 withIdentifier:(id)arg3 withArguments:(id)arg4;
- (void)handleMessage:(id)arg1;
- (id)proxyObjectFromProxyDictionary:(id)arg1;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (_Bool)sharedServiceIsSubscribed;
- (id)sharedAccount;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

