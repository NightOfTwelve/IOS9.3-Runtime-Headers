//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol GKVoiceChatClient;

@interface GKVoiceChatService : NSObject
{
    id _voiceChatService;
}

+ (_Bool)isVoIPAllowed;
+ (id)defaultVoiceChatService;
+ (void)initialize;
@property(readonly) float inputMeterLevel;
@property(readonly) float outputMeterLevel;
@property(nonatomic, getter=isInputMeteringEnabled) _Bool inputMeteringEnabled;
@property(nonatomic, getter=isOutputMeteringEnabled) _Bool outputMeteringEnabled;
@property(nonatomic) float remoteParticipantVolume;
@property(nonatomic, getter=isMicrophoneMuted) _Bool microphoneMuted;
- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (void)denyCallID:(long long)arg1;
- (_Bool)acceptCallID:(long long)arg1 error:(id *)arg2;
- (void)stopVoiceChatWithParticipantID:(id)arg1;
- (_Bool)startVoiceChatWithParticipantID:(id)arg1 error:(id *)arg2;
@property id <GKVoiceChatClient> client;
- (void)dealloc;

@end

