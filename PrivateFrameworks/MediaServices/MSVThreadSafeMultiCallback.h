//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaServices/MSVMultiCallback.h>

@class NSLock;

@interface MSVThreadSafeMultiCallback : MSVMultiCallback
{
    NSLock *_readLock;
    NSLock *_writeLock;
    int readers;
}

- (void).cxx_destruct;
- (void)invoke:(id)arg1;
- (void)removeCallback:(id)arg1;
- (void)addCallback:(id)arg1;
- (id)init;

@end

