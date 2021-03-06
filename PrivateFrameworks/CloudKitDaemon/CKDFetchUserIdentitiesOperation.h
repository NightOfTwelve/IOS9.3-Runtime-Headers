//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKDFetchUserIdentitiesOperation : CKDOperation
{
    CDUnknownBlockType _fetchUserIdentityProgressBlock;
    NSArray *_identityInfos;
}

@property(retain, nonatomic) NSArray *identityInfos; // @synthesize identityInfos=_identityInfos;
@property(copy, nonatomic) CDUnknownBlockType fetchUserIdentityProgressBlock; // @synthesize fetchUserIdentityProgressBlock=_fetchUserIdentityProgressBlock;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_fetchInfoFromCache;
- (void)_handleFetchedInfo:(id)arg1 withIdentity:(id)arg2 error:(id)arg3;
- (unsigned long long)activityStart;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

