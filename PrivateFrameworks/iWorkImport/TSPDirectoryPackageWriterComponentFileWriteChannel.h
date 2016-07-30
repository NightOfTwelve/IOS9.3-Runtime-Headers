//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSPComponentWriteChannel-Protocol.h>

@class NSString, NSURL, TSUFileIOChannel;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPDirectoryPackageWriterComponentFileWriteChannel : NSObject <TSPComponentWriteChannel>
{
    NSURL *_URL;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _handler;
    TSUFileIOChannel *_writeChannel;
    _Bool _isClosed;
}

- (void).cxx_destruct;
- (void)close;
- (void)writeData:(id)arg1;
- (id)initWithURL:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

