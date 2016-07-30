//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileAccessClaim.h>

@class NSFileAccessNode, NSURL;

__attribute__((visibility("hidden")))
@interface NSFileWritingClaim : NSFileAccessClaim
{
    NSURL *_url;
    _Bool _urlDidChange;
    unsigned long long _options;
    NSFileAccessNode *_location;
}

- (id)allURLs;
- (_Bool)blocksClaim:(id)arg1;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)devalueSelf;
- (void)invokeClaimer;
- (void)resolveURLsThenContinueInvokingClaimer:(CDUnknownBlockType)arg1;
- (void)granted;
- (_Bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(_Bool)arg2;
- (void)forwardUsingMessageSender:(CDUnknownBlockType)arg1 crashHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithClient:(id)arg1 messageParameters:(id)arg2 arbiterQueue:(id)arg3 replySender:(CDUnknownBlockType)arg4;
- (id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned long long)arg3 claimer:(CDUnknownBlockType)arg4;

@end

