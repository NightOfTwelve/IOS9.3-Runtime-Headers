//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFAttachmentDataProviderProtocol-Protocol.h>

@class MFMailMessage, NSString;

@interface MFDecryptedAttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol>
{
    MFMailMessage *_message;
}

- (id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;
- (id)messageForAttachment:(id)arg1;
- (void)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fetchLocalDataForAttachment:(id)arg1;
- (void)dealloc;
- (id)initWithDecryptedMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

