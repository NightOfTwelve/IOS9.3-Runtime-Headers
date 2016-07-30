//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetReaderOutput, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor;
@protocol OS_dispatch_queue;

@interface PFRWSampleBufferChannel : NSObject
{
    CDUnknownBlockType completionHandler;
    NSObject<OS_dispatch_queue> *serializationQueue;
    _Bool _useAdaptor;
    _Bool _finished;
    AVAssetWriterInput *_assetWriterInput;
    AVAssetReaderOutput *_assetReaderOutput;
    AVAssetWriterInputPixelBufferAdaptor *_adaptor;
}

@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *adaptor; // @synthesize adaptor=_adaptor;
@property(retain, nonatomic) AVAssetReaderOutput *assetReaderOutput; // @synthesize assetReaderOutput=_assetReaderOutput;
@property(retain, nonatomic) AVAssetWriterInput *assetWriterInput; // @synthesize assetWriterInput=_assetWriterInput;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) _Bool useAdaptor; // @synthesize useAdaptor=_useAdaptor;
- (void).cxx_destruct;
- (void)cancel;
- (void)startWithDelegate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)callCompletionHandlerIfNecessary;
- (id)initWithAssetReaderOutput:(id)arg1 assetWriterInput:(id)arg2 useAdaptor:(_Bool)arg3;
- (id)init;

@end

