//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetClientURLRequestHelper, AVWeakReference, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AVAssetResourceLoaderInternal : NSObject
{
    AVAssetClientURLRequestHelper *URLRequestHelper;
    NSObject<OS_dispatch_queue> *stateQueue;
    AVWeakReference *weakReferenceToDelegate;
    NSObject<OS_dispatch_queue> *delegateQueue;
    int loadingCancelled;
    NSMutableDictionary *pendingRequests;
    NSObject<OS_dispatch_queue> *contentInformationCachingQueue;
    NSMutableDictionary *contentInformationCache;
    _Bool preloadsEligibleContentKeys;
}

@end

