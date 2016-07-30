//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TextToSpeech/TTSSpeechConnectionDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, TTSSpeechSynthesizerDelegate;

@interface TTSSpeechSynthesizer : NSObject <TTSSpeechConnectionDelegate>
{
    long long _footprint;
    id <TTSSpeechSynthesizerDelegate> _delegate;
    _Bool _useSharedSession;
    _Bool _audioSessionIDIsValid;
    unsigned int _audioSessionID;
    unsigned int _audioQueueFlags;
    _Bool _useMonarchStyleRate;
    NSMutableDictionary *_channels;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_currentRequestOwners;
    NSMutableArray *_speechRequests;
    struct {
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
    NSString *_voiceIdentifier;
}

+ (_Bool)isSystemSpeaking;
+ (id)availableLanguageCodes;
+ (id)availableVoicesForLanguageCode:(id)arg1;
+ (id)allAvailableVoices;
+ (void)refreshAllAvailableVoices;
+ (id)availableVoices;
+ (void)initialize;
@property(retain, nonatomic) NSString *voiceIdentifier; // @synthesize voiceIdentifier=_voiceIdentifier;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) float pitch; // @synthesize pitch=_pitch;
@property(nonatomic) float rate; // @synthesize rate=_rate;
- (void).cxx_destruct;
- (void)connection:(id)arg1 speechRequest:(id)arg2 willSpeakMark:(long long)arg3 inRange:(struct _NSRange)arg4;
- (void)connection:(id)arg1 speechRequest:(id)arg2 didStopAtEnd:(_Bool)arg3 phonemesSpoken:(id)arg4 error:(id)arg5;
- (void)connection:(id)arg1 speechRequestDidContinue:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidPause:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidStart:(id)arg2;
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
- (long long)footprint;
- (void)setFootprint:(long long)arg1;
- (_Bool)useMonarchStyleRate;
- (void)setUseMonarchStyleRate:(_Bool)arg1;
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
@property(nonatomic) __weak id <TTSSpeechSynthesizerDelegate> delegate; // @dynamic delegate;
- (_Bool)_continueSpeakingRequest:(id)arg1 withError:(id *)arg2;
- (_Bool)_pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(_Bool)arg3 error:(id *)arg4;
- (_Bool)_stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(_Bool)arg3 error:(id *)arg4;
- (id)_speechVoiceForIdentifier:(id)arg1 language:(id)arg2;
- (_Bool)_startSpeakingString:(id)arg1 orAttributedString:(id)arg2 toURL:(id)arg3 withLanguageCode:(id)arg4 request:(id *)arg5 error:(id *)arg6;
- (id)_preprocessText:(id)arg1 languageCode:(id)arg2;
- (id)resolvedVoiceIdentifierForLanguageCode:(id)arg1;
@property(readonly, nonatomic) NSString *resolvedVoiceIdentifier;
- (void)_setDelegate:(id)arg1;
- (void)dealloc;
- (_Bool)startSpeakingAttributedString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id *)arg4;
- (void)_mediaServicesDied;
- (id)init;

@end

