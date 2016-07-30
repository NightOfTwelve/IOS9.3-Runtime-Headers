//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <MessageUI/NSStreamDelegate-Protocol.h>

@class NSData, NSInputStream, NSObject, NSOutputStream, NSString;
@protocol MFComposeActivityContinuationOperationDelegate, OS_dispatch_queue;

@interface MFComposeActivityContinuationOperation : NSOperation <NSStreamDelegate>
{
    _Bool _finished;
    _Bool _executing;
    NSObject<OS_dispatch_queue> *_streamHandlerQueue;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSData *_draftData;
    unsigned long long _draftDataByteIndex;
    unsigned long long _draftBytesReceived;
    unsigned long long _draftExpectedSize;
    unsigned long long _transmissionType;
    _Bool _doneWithInputStream;
    _Bool _doneWithOutputStream;
    id <MFComposeActivityContinuationOperationDelegate> _delegate;
}

+ (id)sendingOperationWithDraftData:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3;
+ (id)receivingOperationWithInputStream:(id)arg1 outputStream:(id)arg2;
@property(nonatomic) id <MFComposeActivityContinuationOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSData *draftData; // @synthesize draftData=_draftData;
@property(nonatomic) unsigned long long transmissionType; // @synthesize transmissionType=_transmissionType;
@property(readonly, nonatomic) unsigned long long bytesExpected; // @synthesize bytesExpected=_draftExpectedSize;
@property(readonly, nonatomic) unsigned long long bytesReceived; // @synthesize bytesReceived=_draftBytesReceived;
- (void)_commonContinuationStreamTeardownWithStream:(id *)arg1;
- (void)_checkInContinuationStream:(id)arg1;
- (void)_commonContinuationStreamInitializationWithStream:(id)arg1;
- (void)_finishReceivingContinuationDataAndCloseStream;
- (void)_sendingDataStream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_receivingDataStream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_sendingMessageStream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_receivingMessageStream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_failedToTransferContinuationPayload;
- (void)_didFinishTransferringContinuationPayload;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_handleErrorCode:(unsigned long long)arg1 logString:(id)arg2;
- (void)_startContinuationStreams;
- (void)_complete;
- (_Bool)isFinished;
- (void)_setFinished:(_Bool)arg1;
- (_Bool)isExecuting;
- (void)_setExecuting:(_Bool)arg1;
- (_Bool)isConcurrent;
- (void)start;
- (void)dealloc;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

