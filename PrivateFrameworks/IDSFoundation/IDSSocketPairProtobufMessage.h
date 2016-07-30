//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData, NSDate, NSString;

@interface IDSSocketPairProtobufMessage : IDSSocketPairMessage
{
    unsigned long long _payloadOffset;
    unsigned long long _payloadLength;
    unsigned short _isResponse;
    unsigned short _type;
    NSData *_data;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    _Bool _expectsPeerResponse;
    _Bool _wantsAppAck;
    _Bool _compressed;
    NSString *_peerResponseIdentifier;
    NSString *_messageUUID;
    NSDate *_expiryDate;
}

@property(retain, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(nonatomic) _Bool compressed; // @synthesize compressed=_compressed;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) unsigned short streamID; // @synthesize streamID=_streamID;
@property(readonly, nonatomic) unsigned short type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned short isResponse; // @synthesize isResponse=_isResponse;
@property(readonly, retain, nonatomic) NSString *peerResponseIdentifier; // @synthesize peerResponseIdentifier=_peerResponseIdentifier;
@property(readonly, nonatomic) _Bool wantsAppAck; // @synthesize wantsAppAck=_wantsAppAck;
@property(readonly, retain, nonatomic) NSString *messageUUID; // @synthesize messageUUID=_messageUUID;
@property(readonly, nonatomic) _Bool expectsPeerResponse; // @synthesize expectsPeerResponse=_expectsPeerResponse;
- (id)_nonHeaderData;
@property(readonly, retain, nonatomic) NSData *data; // @synthesize data=_data;
- (unsigned char)command;
- (void)dealloc;
- (id)initWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 expectsPeerResponse:(_Bool)arg3 wantsAppAck:(_Bool)arg4 compressed:(_Bool)arg5 peerResponseIdentifier:(id)arg6 messageUUID:(id)arg7 expiryDate:(id)arg8 protobuf:(id)arg9;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end

