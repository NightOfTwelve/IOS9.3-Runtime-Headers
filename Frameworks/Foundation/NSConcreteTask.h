//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSTask.h>

@class NSMutableDictionary, NSObject, NSPort;
@protocol OS_dispatch_semaphore, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface NSConcreteTask : NSTask
{
    NSObject<OS_dispatch_semaphore> *_lock;
    NSMutableDictionary *_dictionary;
    CDUnknownBlockType _terminationHandler;
    NSObject<OS_dispatch_source> *_dsrc;
    NSPort *_tmpPort;
    long long _suspendCount;
    int _pid;
    int _platformExitInfo;
    _Bool _hasExeced;
    _Bool _isRunning;
    _Bool _hasPostedDeathNotification;
    _Bool _terminationRun;
    BOOL _qos;
}

- (void)setStartsNewProcessGroup:(_Bool)arg1;
- (int)processIdentifier;
- (int)_procid;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (long long)suspendCount;
- (_Bool)resume;
- (_Bool)suspend;
- (void)terminateTask;
- (void)terminate;
- (void)interrupt;
- (id)taskDictionary;
- (void)setTaskDictionary:(id)arg1;
- (void)setStandardError:(id)arg1;
- (void)setStandardOutput:(id)arg1;
- (void)setStandardInput:(id)arg1;
- (id)standardError;
- (id)standardOutput;
- (id)standardInput;
- (id)currentDirectoryPath;
- (id)preferredArchitectures;
- (id)arguments;
- (id)environment;
- (id)launchPath;
- (void)setLaunchPath:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setCurrentDirectoryPath:(id)arg1;
- (void)setPreferredArchitectures:(id)arg1;
- (void)setArguments:(id)arg1;
- (void)_withTaskDictionary:(CDUnknownBlockType)arg1;
- (void)waitUntilExit;
- (void)launchWithDictionary:(id)arg1;
- (void)launch;
- (_Bool)isRunning;
- (long long)terminationReason;
- (long long)_platformExitInformation;
- (int)terminationStatus;
- (void)setTerminationHandler:(CDUnknownBlockType)arg1;
- (void)_setTerminationHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)terminationHandler;
- (void)setQualityOfService:(long long)arg1;
- (long long)qualityOfService;

@end

