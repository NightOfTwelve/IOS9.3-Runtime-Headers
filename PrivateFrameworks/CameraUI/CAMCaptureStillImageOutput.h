//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVCaptureStillImageOutput.h>

@class CAMCaptureEngine, NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CAMCaptureStillImageOutput : AVCaptureStillImageOutput
{
    CAMCaptureEngine *__captureEngine;
    NSObject<OS_dispatch_queue> *__userInfoQueue;
    NSMutableDictionary *__userInfoBySettingsID;
    NSDictionary *_currentUserInfo;
    NSDictionary *_userInfoForNextCapture;
}

@property(copy, nonatomic) NSDictionary *userInfoForNextCapture; // @synthesize userInfoForNextCapture=_userInfoForNextCapture;
@property(copy, nonatomic) NSDictionary *currentUserInfo; // @synthesize currentUserInfo=_currentUserInfo;
@property(readonly, nonatomic) NSMutableDictionary *_userInfoBySettingsID; // @synthesize _userInfoBySettingsID=__userInfoBySettingsID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_userInfoQueue; // @synthesize _userInfoQueue=__userInfoQueue;
@property(readonly, nonatomic) __weak CAMCaptureEngine *_captureEngine; // @synthesize _captureEngine=__captureEngine;
- (void).cxx_destruct;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (void)_userInfoQueueAtomicIncrementSettingsID;
@property(copy, nonatomic) NSDictionary *userInfo;
- (void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)captureStillImageBracketAsynchronouslyFromConnection:(id)arg1 withSettingsArray:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)captureStillImageAsynchronouslyFromConnection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_incrementSettingsIDAndStoreCaptureUserInfo;
- (id)initWithEngine:(id)arg1;

@end

