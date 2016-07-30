//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFXPCWrapper, AceObject, NSDictionary, NSError, NSString, NSURL, SASSpeechPartialResult, SASSpeechRecognized;
@protocol SAAceCommand;

@protocol AFClientServiceDelegate <NSObject>
- (oneway void)aceConnectionWillRetryOnError:(NSError *)arg1;
- (oneway void)speechRecognitionDidFail:(NSError *)arg1;
- (oneway void)speechRecognizedPartialResult:(SASSpeechPartialResult *)arg1;
- (oneway void)speechRecognized:(SASSpeechRecognized *)arg1;
- (oneway void)speechRecordingDidFail:(NSError *)arg1;
- (oneway void)speechRecordingDidCancel;
- (oneway void)speechRecordingDidEnd;
- (oneway void)speechRecordingStartpointDetected;
- (oneway void)speechRecordingDidChangeAVRecordRoute:(NSString *)arg1;
- (oneway void)speechRecordingDidBeginOnAVRecordRoute:(NSString *)arg1;
- (oneway void)speechRecordingWillBeginWithLevelsSharedMem:(AFXPCWrapper *)arg1;
- (oneway void)getBulletinContext:(void (^)(NSArray *))arg1;
- (oneway void)invalidateCurrentUserActivity;
- (oneway void)setUserActivityInfo:(NSDictionary *)arg1 webpageURL:(NSURL *)arg2;
- (oneway void)acousticIDRequestDidFinishWithSuccess:(_Bool)arg1;
- (oneway void)musicWasDetected;
- (oneway void)acousticIDRequestWillStart;
- (oneway void)requestRequestedDismissAssistant;
- (oneway void)requestRequestedOpenURL:(NSURL *)arg1 reply:(void (^)(_Bool))arg2;
- (oneway void)requestRequestedOpenApplicationWithBundleID:(NSString *)arg1 URL:(NSURL *)arg2 reply:(void (^)(_Bool))arg3;
- (oneway void)requestDidFailWithError:(NSError *)arg1 requestClass:(NSString *)arg2;
- (oneway void)requestDidReceiveCommand:(AceObject<SAAceCommand> *)arg1 reply:(void (^)(AceObject<SAAceCommand> *))arg2;
- (oneway void)requestDidFinish;
- (oneway void)shouldSpeakChanged:(_Bool)arg1;
@end

