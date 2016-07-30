//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDNanoSyncDescription-Protocol.h>

@class HDIDSMessageCenter, IDSDevice, NSData, NSDate, NSDictionary, NSString;

@interface HDIDSIncomingResponse : NSObject <HDNanoSyncDescription>
{
    unsigned short _messageID;
    IDSDevice *_fromDevice;
    NSData *_data;
    NSString *_idsIdentifier;
    NSString *_requestIDSIdentifier;
    NSDate *_requestSent;
    NSDictionary *_requestPersistentUserInfo;
    HDIDSMessageCenter *_messageCenter;
    id _pbResponse;
}

@property(retain, nonatomic) id pbResponse; // @synthesize pbResponse=_pbResponse;
@property(nonatomic) __weak HDIDSMessageCenter *messageCenter; // @synthesize messageCenter=_messageCenter;
@property(retain, nonatomic) NSDictionary *requestPersistentUserInfo; // @synthesize requestPersistentUserInfo=_requestPersistentUserInfo;
@property(retain, nonatomic) NSDate *requestSent; // @synthesize requestSent=_requestSent;
@property(copy, nonatomic) NSString *requestIDSIdentifier; // @synthesize requestIDSIdentifier=_requestIDSIdentifier;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) unsigned short messageID; // @synthesize messageID=_messageID;
@property(retain, nonatomic) IDSDevice *fromDevice; // @synthesize fromDevice=_fromDevice;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)nanoSyncDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

