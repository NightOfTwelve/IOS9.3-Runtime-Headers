//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFXPCWrapper, NSArray, NSDictionary, NSError, NSFileHandle, NSString;

@protocol AFDictationServiceDelegate <NSObject>
- (oneway void)speechDidReceiveSearchResults:(NSArray *)arg1 recognitionText:(NSString *)arg2 stable:(_Bool)arg3 final:(_Bool)arg4;
- (oneway void)speechDidFinishWritingAudioFile:(NSFileHandle *)arg1 error:(NSError *)arg2;
- (oneway void)speechRecognitionDidFail:(NSError *)arg1;
- (oneway void)speechDidRecognizeTranscriptionObjects:(NSArray *)arg1 usingSpeechModel:(NSString *)arg2;
- (oneway void)speechDidRecognizeTokens:(NSArray *)arg1 usingSpeechModel:(NSString *)arg2;
- (oneway void)speechDidRecognizePhrases:(NSArray *)arg1 usingSpeechModel:(NSString *)arg2 correctionContext:(NSDictionary *)arg3;
- (oneway void)speechRecordingDidFail:(NSError *)arg1;
- (oneway void)speechRecordingDidCancel;
- (oneway void)speechRecordingDidEnd;
- (oneway void)speechRecordingDidBegin;
- (oneway void)speechRecordingWillBeginWithLevelsSharedMem:(AFXPCWrapper *)arg1;
@end

