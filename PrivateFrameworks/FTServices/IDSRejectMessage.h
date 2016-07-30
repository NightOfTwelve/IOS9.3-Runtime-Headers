//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTServices/IDSFaceTimeMessage.h>

#import <FTServices/NSCopying-Protocol.h>

@class NSData, NSNumber, NSString;

@interface IDSRejectMessage : IDSFaceTimeMessage <NSCopying>
{
    NSData *_selfPushToken;
    NSData *_peerPushToken;
    NSString *_peerID;
    NSNumber *_reason;
}

@property(copy) NSNumber *reason; // @synthesize reason=_reason;
@property(copy) NSString *peerID; // @synthesize peerID=_peerID;
@property(copy) NSData *peerPushToken; // @synthesize peerPushToken=_peerPushToken;
@property(copy) NSData *selfPushToken; // @synthesize selfPushToken=_selfPushToken;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

