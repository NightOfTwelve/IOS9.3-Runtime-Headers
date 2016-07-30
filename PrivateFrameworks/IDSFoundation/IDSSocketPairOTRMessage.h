//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData;

@interface IDSSocketPairOTRMessage : IDSSocketPairMessage
{
    unsigned long long _offset;
    unsigned char _versionNumber;
    _Bool _encrypted;
    _Bool _shouldEncrypt;
    unsigned char _protectionClass;
    unsigned short _streamID;
    unsigned short _priority;
    unsigned int _sequenceNumber;
    NSData *_data;
}

@property(readonly, nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic) unsigned short priority; // @synthesize priority=_priority;
@property(nonatomic) unsigned short streamID; // @synthesize streamID=_streamID;
@property(readonly, nonatomic) unsigned char protectionClass; // @synthesize protectionClass=_protectionClass;
@property(readonly, nonatomic) _Bool shouldEncrypt; // @synthesize shouldEncrypt=_shouldEncrypt;
@property(readonly, nonatomic) _Bool encrypted; // @synthesize encrypted=_encrypted;
@property(readonly, nonatomic) unsigned char versionNumber; // @synthesize versionNumber=_versionNumber;
- (id)_nonHeaderData;
@property(readonly, retain, nonatomic) NSData *data;
- (unsigned char)command;
- (id)description;
- (void)dealloc;
- (id)initWithVersion:(unsigned char)arg1 encrypted:(_Bool)arg2 shouldEncrypt:(_Bool)arg3 protectionClass:(unsigned char)arg4 streamID:(unsigned short)arg5 priority:(unsigned short)arg6 sequenceNumber:(unsigned int)arg7 data:(id)arg8;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end

