//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VoiceServices/VSSpeechConnectionDelegate-Protocol.h>

@class NSString, VSKeepAlive, VSSpeechConnection;
@protocol OS_dispatch_queue, VSSpeechSynthesizerDelegate;

@interface VSSpeechSynthesizer : NSObject <VSSpeechConnectionDelegate>
{
    VSKeepAlive *_keepAlive;
    VSKeepAlive *_inactiveKeepAlive;
    long long _footprint;
    _Bool _useCustomVoice;
    long long _gender;
    _Bool _useSharedSession;
    _Bool _audioSessionIDIsValid;
    unsigned int _audioSessionID;
    unsigned int _audioQueueFlags;
    NSObject<OS_dispatch_queue> *_queue;
    VSSpeechConnection *_speechConnection;
    struct {
        unsigned int delegateStart:1;
        unsigned int delegateFinish:1;
        unsigned int delegateFinishWithPhonemesSpoken:1;
        unsigned int delegatePause:1;
        unsigned int delegateContinue:1;
        unsigned int delegateWillSpeak:1;
        unsigned int delegateStartWithRequest:1;
        unsigned int delegateFinishWithRequest:1;
        unsigned int delegateFinishWithPhonemesSpokenWithRequest:1;
        unsigned int delegatePauseWithRequest:1;
        unsigned int delegateContinueWithRequest:1;
        unsigned int delegateWillSpeakWithRequest:1;
        unsigned int willUseInput:1;
    } _synthesizerFlags;
    float _rate;
    float _pitch;
    float _volume;
    id <VSSpeechSynthesizerDelegate> _delegate;
    NSString *_voice;
}

+ (void)getLogToFile:(CDUnknownBlockType)arg1;
+ (void)setLogToFile:(_Bool)arg1;
+ (_Bool)playVoicePreviewForLanguageCode:(id)arg1 gender:(long long)arg2;
+ (void)initialize;
+ (_Bool)isSystemSpeaking;
+ (id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2;
+ (id)availableLanguageCodes;
+ (id)availableVoicesForLanguageCode:(id)arg1;
+ (id)availableVoices;
+ (void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 custom:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;
+ (void)getAutoDownloadedVoiceAssets:(CDUnknownBlockType)arg1;
+ (void)setAutoDownloadedVoiceAssets:(id)arg1;
+ (void)downloadVoiceAsset:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)getLocalVoiceAssets:(CDUnknownBlockType)arg1;
+ (void)getAllVoiceAssets:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSString *voice; // @synthesize voice=_voice;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) float pitch; // @synthesize pitch=_pitch;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(nonatomic) __weak id <VSSpeechSynthesizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)connection:(id)arg1 speechRequest:(id)arg2 willSpeakMark:(long long)arg3 inRange:(struct _NSRange)arg4;
- (void)connection:(id)arg1 speechRequest:(id)arg2 didStopAtEnd:(_Bool)arg3 phonemesSpoken:(id)arg4 error:(id)arg5;
- (void)connection:(id)arg1 speechRequestDidContinue:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidPause:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidStart:(id)arg2;
- (void)setMaintainInactivePersistentConnection:(_Bool)arg1;
- (void)setMaintainPersistentConnection:(_Bool)arg1;
- (_Bool)continueSpeakingRequest:(id)arg1 withError:(id *)arg2;
- (_Bool)pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(_Bool)arg3 error:(id *)arg4;
- (_Bool)pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 error:(id *)arg3;
- (_Bool)stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(_Bool)arg3 error:(id *)arg4;
- (_Bool)stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 error:(id *)arg3;
- (_Bool)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 request:(id *)arg3 error:(id *)arg4;
- (_Bool)startSpeakingString:(id)arg1 toURL:(id)arg2 request:(id *)arg3 error:(id *)arg4;
- (_Bool)startSpeakingString:(id)arg1 request:(id *)arg2 error:(id *)arg3;
- (void)useAudioQueueFlags:(unsigned int)arg1;
- (void)useSpecificAudioSession:(unsigned int)arg1;
- (void)useSharedAudioSession:(_Bool)arg1;
- (long long)gender;
- (void)setGender:(long long)arg1;
- (_Bool)useCustomVoice;
- (void)setUseCustomVoice:(_Bool)arg1;
- (long long)footprint;
- (void)setFootprint:(long long)arg1;
- (float)maximumRate;
- (float)minimumRate;
- (id)speechString;
- (_Bool)isSpeaking;
- (_Bool)continueSpeakingWithError:(id *)arg1;
- (_Bool)pauseSpeakingAtNextBoundary:(long long)arg1 synchronously:(_Bool)arg2 error:(id *)arg3;
- (_Bool)pauseSpeakingAtNextBoundary:(long long)arg1 error:(id *)arg2;
- (_Bool)stopSpeakingAtNextBoundary:(long long)arg1 synchronously:(_Bool)arg2 error:(id *)arg3;
- (_Bool)stopSpeakingAtNextBoundary:(long long)arg1 error:(id *)arg2;
- (_Bool)startSpeakingString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id *)arg4;
- (_Bool)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 error:(id *)arg3;
- (_Bool)startSpeakingString:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)startSpeakingString:(id)arg1 error:(id *)arg2;
- (_Bool)_continueSpeakingRequest:(id)arg1 withError:(id *)arg2;
- (_Bool)_pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(_Bool)arg3 error:(id *)arg4;
- (_Bool)_stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(_Bool)arg3 error:(id *)arg4;
- (_Bool)_startSpeakingString:(id)arg1 orAttributedString:(id)arg2 toURL:(id)arg3 withLanguageCode:(id)arg4 request:(id *)arg5 error:(id *)arg6;
- (void)_setDelegate:(id)arg1;
- (void)dealloc;
- (_Bool)startSpeakingAttributedString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id *)arg4;
- (id)initForInputFeedback;
- (id)init;

@end

