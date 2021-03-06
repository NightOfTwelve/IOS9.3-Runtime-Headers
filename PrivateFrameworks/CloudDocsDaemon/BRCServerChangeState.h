//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/NSCopying-Protocol.h>
#import <CloudDocsDaemon/NSSecureCoding-Protocol.h>

@class CKServerChangeToken, NSDate;

__attribute__((visibility("hidden")))
@interface BRCServerChangeState : NSObject <NSSecureCoding, NSCopying>
{
    NSDate *_lastSyncDownDate;
    long long _lastSyncDownStatus;
    CKServerChangeToken *_changeToken;
    CKServerChangeToken *_pendingChangeToken;
    unsigned long long _clientRequestID;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long clientRequestID; // @synthesize clientRequestID=_clientRequestID;
@property(retain, nonatomic) CKServerChangeToken *pendingChangeToken; // @synthesize pendingChangeToken=_pendingChangeToken;
@property(retain, nonatomic) CKServerChangeToken *changeToken; // @synthesize changeToken=_changeToken;
@property(nonatomic) long long lastSyncDownStatus; // @synthesize lastSyncDownStatus=_lastSyncDownStatus;
@property(retain) NSDate *lastSyncDownDate; // @synthesize lastSyncDownDate=_lastSyncDownDate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithServerSyncState:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)forgetClientRequestID;
- (void)forgetPendingChangeToken;
- (void)forgetChangeTokens;
- (_Bool)updateWithServerChangeToken:(id)arg1 clientRequestID:(unsigned long long)arg2 syncDownStatus:(long long)arg3;
@property(readonly, nonatomic) _Bool hasNeverSyncedDown;
@property(readonly, nonatomic) CKServerChangeToken *nextSyncRequestChangeToken;
- (id)description;

@end

