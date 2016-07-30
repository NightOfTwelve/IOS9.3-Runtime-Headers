//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HAPRemoteSession : NSObject
{
    unsigned char _cipherReadKey[32];
    unsigned char _cipherReadNonce[8];
    unsigned char _cipherWriteKey[32];
    unsigned char _cipherWriteNonce[8];
    _Bool _commitResponded;
    NSObject<OS_dispatch_source> *_idleTimer;
    NSObject<OS_dispatch_queue> *_internalQueue;
    CDUnknownBlockType _internalRequestHandler;
    const char *_label;
    unsigned char _pairVerifyDone;
    struct PairingSessionPrivate *_pairVerifySession;
    NSMutableDictionary *_prepareRequests;
    _Bool _prepareResponded;
    NSString *_sessionID;
    _Bool _started;
    int _state;
    NSMutableDictionary *_transactions;
    NSMutableArray *_userTransactions;
    CDUnknownBlockType _findPeerHandler;
    CDUnknownBlockType _requestHandler;
    CDUnknownBlockType _stoppedHandler;
    CDUnknownBlockType _transportSendMessage;
    long long _type;
    NSObject<OS_dispatch_queue> *_userQueue;
    unsigned long long _commitTimeoutNanos;
    unsigned long long _clientIdleTimeoutNanos;
    unsigned long long _serverIdleTimeoutNanos;
    unsigned long long _sendInternalTimeoutNanos;
    unsigned long long _sendUserTimeoutNanos;
}

@property(copy) CDUnknownBlockType transportSendMessage; // @synthesize transportSendMessage=_transportSendMessage;
@property(copy) CDUnknownBlockType stoppedHandler; // @synthesize stoppedHandler=_stoppedHandler;
@property(copy) CDUnknownBlockType requestHandler; // @synthesize requestHandler=_requestHandler;
@property(copy) CDUnknownBlockType findPeerHandler; // @synthesize findPeerHandler=_findPeerHandler;
@property(copy) CDUnknownBlockType internalRequestHandler; // @synthesize internalRequestHandler=_internalRequestHandler;
@property(retain) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_userQueue;
- (void).cxx_destruct;
- (void)_serverCompletePrepareRequest:(id)arg1;
- (int)_serverHandleCommitRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (int)_serverHandlePrepareRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (int)_serverHandleDecryptedRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_serverHandleEncryptedRequest:(id)arg1;
- (void)_serverPairVerifyExchange:(id)arg1;
- (void)_serverRunStateMachine;
- (int)_clientHandleCommitResponse:(id)arg1;
- (int)_clientSendCommitRequest:(id)arg1;
- (int)_clientHandlePrepareResponse:(id)arg1;
- (int)_clientSendPrepareRequest:(id)arg1;
- (int)_clientPairVerifyExchange:(id)arg1;
- (void)_clientRunStateMachine;
- (void)_transportReceivedMessage:(id)arg1;
- (void)transportReceivedMessage:(id)arg1;
- (void)_completeTransaction:(id)arg1 response:(id)arg2 status:(int)arg3;
- (void)_sendRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_completeUserTransaction:(id)arg1 response:(id)arg2 status:(int)arg3;
- (void)_sendUserRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)sendRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (int)_updateIdleTimer;
- (int)_setupEncryption;
- (void)_runStateMachine;
- (void)_stop:(int)arg1;
- (void)stop;
- (void)_start;
- (void)start;
- (void)dealloc;
- (id)initWithType:(long long)arg1 commitTimeout:(unsigned long long)arg2 clientIdleTimeout:(unsigned long long)arg3 serverIdleTimeout:(unsigned long long)arg4 sendInternalTimeout:(unsigned long long)arg5 sendUserTimeout:(unsigned long long)arg6;
- (id)init;

@end

