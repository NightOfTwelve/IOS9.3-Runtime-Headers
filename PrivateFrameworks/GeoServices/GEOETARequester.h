//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSMapTable;

__attribute__((visibility("hidden")))
@interface GEOETARequester : NSObject
{
    NSMapTable *_pendingRequests;
    NSLock *_pendingRequestsLock;
}

+ (id)sharedRequester;
- (void)cancelRequest:(id)arg1;
- (void)startSimpleETARequest:(id)arg1 finished:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)_startRequest:(id)arg1 provider:(id)arg2 isRequestUpdate:(_Bool)arg3 connectionProperties:(const CDStruct_96e0509c *)arg4 willSendRequest:(CDUnknownBlockType)arg5 finished:(CDUnknownBlockType)arg6 networkActivity:(CDUnknownBlockType)arg7 error:(CDUnknownBlockType)arg8;
- (void)updateRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)startRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)startRequest:(id)arg1 connectionProperties:(const CDStruct_96e0509c *)arg2 willSendRequest:(CDUnknownBlockType)arg3 finished:(CDUnknownBlockType)arg4 networkActivity:(CDUnknownBlockType)arg5 error:(CDUnknownBlockType)arg6;
- (void)dealloc;
- (id)init;

@end

