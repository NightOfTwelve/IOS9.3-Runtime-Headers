//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/CATOperation.h>

@class CATMessage, CATRemoteTransport;

@interface _CATRemoteTransportSendMessageOperation : CATOperation
{
    CATRemoteTransport *_transport;
    CATMessage *_message;
}

@property(retain, nonatomic) CATMessage *message; // @synthesize message=_message;
@property(nonatomic) __weak CATRemoteTransport *transport; // @synthesize transport=_transport;
- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didSendData;
- (void)didEncodeData:(id)arg1;
- (void)main;
- (_Bool)isAsynchronous;

@end

