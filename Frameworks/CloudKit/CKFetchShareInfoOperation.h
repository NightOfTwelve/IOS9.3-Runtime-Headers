//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKFetchShareInfoOperation : CKOperation
{
    NSArray *_shareURLs;
    CDUnknownBlockType _perShareInfoBlock;
    CDUnknownBlockType _fetchShareInfoCompletionBlock;
    NSMutableDictionary *_shareInfoByURL;
    NSMutableDictionary *_errorsByURL;
}

@property(retain, nonatomic) NSMutableDictionary *errorsByURL; // @synthesize errorsByURL=_errorsByURL;
@property(retain, nonatomic) NSMutableDictionary *shareInfoByURL; // @synthesize shareInfoByURL=_shareInfoByURL;
@property(copy, nonatomic) CDUnknownBlockType fetchShareInfoCompletionBlock; // @synthesize fetchShareInfoCompletionBlock=_fetchShareInfoCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perShareInfoBlock; // @synthesize perShareInfoBlock=_perShareInfoBlock;
@property(retain, nonatomic) NSArray *shareURLs; // @synthesize shareURLs=_shareURLs;
- (void).cxx_destruct;
- (unsigned long long)activityStart;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithShareURLs:(id)arg1;

@end

