//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface CKDPublicIdentityLookupRequest : NSObject
{
    _Bool _isCancelled;
    CDUnknownBlockType _perEmailProgressBlock;
    CDUnknownBlockType _lookupCompletionBlock;
    NSMutableSet *_remainingEmailsToFetch;
    NSMutableDictionary *_emailsToProtectionInfo;
    NSMutableDictionary *_emailsToUserInfo;
}

@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(retain, nonatomic) NSMutableDictionary *emailsToUserInfo; // @synthesize emailsToUserInfo=_emailsToUserInfo;
@property(retain, nonatomic) NSMutableDictionary *emailsToProtectionInfo; // @synthesize emailsToProtectionInfo=_emailsToProtectionInfo;
@property(retain, nonatomic) NSMutableSet *remainingEmailsToFetch; // @synthesize remainingEmailsToFetch=_remainingEmailsToFetch;
@property(copy, nonatomic) CDUnknownBlockType lookupCompletionBlock; // @synthesize lookupCompletionBlock=_lookupCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perEmailProgressBlock; // @synthesize perEmailProgressBlock=_perEmailProgressBlock;
- (void).cxx_destruct;
- (void)cancel;
- (void)finishWithError:(id)arg1;
- (void)receivedProtectionInfo:(id)arg1 userInfo:(id)arg2 forEmail:(id)arg3;
- (id)initWithEmails:(id)arg1;

@end

