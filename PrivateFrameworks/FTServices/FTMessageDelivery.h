//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FTServices/FTMessageQueueDelegate-Protocol.h>

@class FTMessageQueue, IDSBaseMessage, IMTimer, NSArray, NSNumber, NSString;

@interface FTMessageDelivery : NSObject <FTMessageQueueDelegate>
{
    unsigned int _retries;
    NSNumber *_protocolVersion;
    FTMessageQueue *_queue;
    NSString *_userAgent;
    unsigned long long _maxConcurrentMessages;
    _Bool _retryInAirplaneMode;
    _Bool _logToRegistration;
    IMTimer *_timer;
}

+ (id)_errorForTDMessageDeliveryStatus:(long long)arg1 userInfo:(id)arg2;
+ (id)alloc;
+ (Class)APNSMessageDeliveryClass;
+ (Class)HTTPMessageDeliveryClass;
@property _Bool retryInAirplaneMode; // @synthesize retryInAirplaneMode=_retryInAirplaneMode;
@property unsigned long long maxConcurrentMessages; // @synthesize maxConcurrentMessages=_maxConcurrentMessages;
@property _Bool logToRegistration; // @synthesize logToRegistration=_logToRegistration;
@property(copy) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(copy) NSNumber *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
- (void)_signMessage:(id)arg1 useDataSignatures:(_Bool)arg2 body:(id)arg3 queryString:(id)arg4 intoDictionary:(id)arg5;
- (void)networkStateChanged;
@property(readonly) long long maxLargeMessageSize;
@property(readonly) long long maxMessageSize;
- (void)_setRetryTimer:(double)arg1;
- (void)_clearRetryTimer;
- (void)_retryTimerHit:(id)arg1;
- (_Bool)sendMessage:(id)arg1;
- (void)cancelMessage:(id)arg1;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (id)_queue;
@property(readonly) _Bool hasQueuedItems;
@property(readonly) _Bool busy;
@property(readonly) NSArray *allMessages;
@property(readonly) IDSBaseMessage *currentMessage;
@property(readonly) NSArray *queuedMessages;
- (_Bool)_sendMessageAsynchronously:(id)arg1 error:(id *)arg2;
- (void)_informDelegateAboutMessage:(id)arg1 error:(id)arg2 result:(id)arg3 resultCode:(long long)arg4;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end

