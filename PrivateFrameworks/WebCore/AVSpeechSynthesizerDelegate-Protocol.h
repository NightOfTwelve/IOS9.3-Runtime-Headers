//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/NSObject-Protocol.h>

@class AVSpeechSynthesizer, AVSpeechUtterance;

@protocol AVSpeechSynthesizerDelegate <NSObject>

@optional
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2 utterance:(AVSpeechUtterance *)arg3;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 didCancelSpeechUtterance:(AVSpeechUtterance *)arg2;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 didContinueSpeechUtterance:(AVSpeechUtterance *)arg2;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 didPauseSpeechUtterance:(AVSpeechUtterance *)arg2;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 didFinishSpeechUtterance:(AVSpeechUtterance *)arg2;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 didStartSpeechUtterance:(AVSpeechUtterance *)arg2;
@end

