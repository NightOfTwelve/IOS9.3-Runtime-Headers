//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RTCReporting : NSObject
{
    NSObject<OS_dispatch_queue> *_reportingQueue;
    CDUnknownBlockType _loggingBlock;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_timer;
    int _counter;
    int _intervalMultiplier;
    NSMutableDictionary *_periodicServiceDict;
    NSArray *_enabledBackendNames;
}

+ (_Bool)sendOneMessageWithSessionInfo:(id)arg1 userInfo:(id)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(id)arg5 error:(id *)arg6;
+ (id)getPersistentIdentifierForDNU:(_Bool)arg1;
+ (void)regeneratePersistentIdentifierForDNU:(_Bool)arg1;
+ (_Bool)sendMsgToServer:(int)arg1 serverStoreBagName:(id)arg2 defaultSvrIP:(id)arg3 defaultSvrPort:(unsigned short)arg4 componentType:(int)arg5 version:(unsigned short)arg6 sessionID:(unsigned int)arg7 eventID:(unsigned short)arg8 method:(unsigned short)arg9 respCode:(unsigned short)arg10 dict:(id)arg11;
@property(copy, nonatomic) CDUnknownBlockType messageLoggingBlock; // @synthesize messageLoggingBlock=_loggingBlock;
- (_Bool)flushMessages;
- (_Bool)sendMessageWithDictionary:(id)arg1 error:(id *)arg2;
- (_Bool)sendMessageWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3 error:(id *)arg4;
- (void)fetchReportingStatesWithUserInfo:(id)arg1 fetchComplete:(CDUnknownBlockType)arg2;
- (void)startConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithSessionInfo:(id)arg1 userInfo:(id)arg2 frameworksToCheck:(id)arg3;
- (id)initWithSessionInfo:(id)arg1 userInfo:(id)arg2 frameworksToCheck:(id)arg3 aggregationBlock:(CDUnknownBlockType)arg4;
- (_Bool)unregisterPeriodTaskForModule:(unsigned int)arg1;
- (_Bool)registerPeriodicTaskForModule:(unsigned int)arg1 needToUpdate:(_Bool)arg2 needToReport:(_Bool)arg3 serviceBlock:(CDUnknownBlockType)arg4;
- (void)stopLogTimer;
- (void)startLogTimerWithInterval:(int)arg1 reportingMultiplier:(int)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4;
- (void)_myPeriodicTask:(unsigned short)arg1 type:(unsigned short)arg2;
- (_Bool)uploadDataArray:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)uploadFileWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)serverSupportsFileUpload;
- (_Bool)uploadFileWithName:(id)arg1;
- (int)getUploadflag;
- (_Bool)unregisterPeriodTask:(id)arg1 unservice_block:(CDUnknownBlockType)arg2;
- (_Bool)registerPeriodicTask:(id)arg1 needToUpDate:(_Bool)arg2 needToReport:(_Bool)arg3 service_block:(CDUnknownBlockType)arg4;
- (_Bool)stopLogTimerForSession;
- (_Bool)startLogTimerWithInterval:(int)arg1 reportingFrequency:(int)arg2 reportingMethod:(unsigned short)arg3 reportingStatus:(unsigned short)arg4;
- (void)sendMsgWithMethod:(unsigned short)arg1 respCode:(unsigned short)arg2 dict:(id)arg3;
- (_Bool)setReportToServer:(int)arg1 serverStoreBagName:(id)arg2 defaultSvrIP:(id)arg3 defaultSvrPort:(unsigned short)arg4 msgBlock:(CDUnknownBlockType)arg5;
- (_Bool)setReportToServer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setUserInfoDict:(id)arg1;
- (id)initWithSessionInfo:(int)arg1 version:(unsigned short)arg2 sessionID:(unsigned int)arg3;
- (id)initWithSessionInfo:(int)arg1 version:(unsigned short)arg2 sessionID:(unsigned int)arg3 frameworksToCheck:(id)arg4;

@end

