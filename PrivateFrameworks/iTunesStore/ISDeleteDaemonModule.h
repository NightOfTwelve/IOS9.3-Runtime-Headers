//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SSAppPurchaseHistoryCache;

@interface ISDeleteDaemonModule : NSObject
{
    struct __CFURLStorageSession *_storageSession;
    struct _CFURLCache *_urlCache;
    SSAppPurchaseHistoryCache *_purchaseHistoryCache;
}

- (unsigned long long)purgeableSpace;
- (unsigned long long)purge:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

