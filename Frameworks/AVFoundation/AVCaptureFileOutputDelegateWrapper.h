//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVWeakReferencingDelegateStorage, NSArray, NSURL;

@interface AVCaptureFileOutputDelegateWrapper : NSObject
{
    _Bool _recording;
    _Bool _paused;
    long long _settingsID;
    NSURL *_outputFileURL;
    NSArray *_metadata;
    AVWeakReferencingDelegateStorage *_delegateStorage;
    NSArray *_connections;
}

+ (id)wrapperWithURL:(id)arg1 delegate:(id)arg2 settingsID:(long long)arg3 connections:(id)arg4;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isRecording) _Bool recording; // @synthesize recording=_recording;
@property(readonly) NSArray *connections; // @synthesize connections=_connections;
@property(readonly) AVWeakReferencingDelegateStorage *delegateStorage; // @synthesize delegateStorage=_delegateStorage;
@property(retain) NSArray *metadata; // @synthesize metadata=_metadata;
@property(readonly) NSURL *outputFileURL; // @synthesize outputFileURL=_outputFileURL;
@property(readonly) long long settingsID; // @synthesize settingsID=_settingsID;
- (void)dealloc;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 settingsID:(long long)arg3 connections:(id)arg4;

@end

