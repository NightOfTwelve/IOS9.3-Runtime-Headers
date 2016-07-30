//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/NSObject-Protocol.h>

@class MFAttachment, MFMessage, NSData, NSString;
@protocol MFDataConsumer;

@protocol MFAttachmentDataProviderProtocol <NSObject>
- (NSString *)storageLocationForAttachment:(MFAttachment *)arg1 withMessage:(MFMessage *)arg2;
- (MFMessage *)messageForAttachment:(MFAttachment *)arg1;
- (void)fetchDataForAttachment:(MFAttachment *)arg1 withDataConsumer:(id <MFDataConsumer>)arg2 completion:(void (^)(_Bool, NSError *, _Bool))arg3;
- (NSData *)fetchLocalDataForAttachment:(MFAttachment *)arg1;
@end
