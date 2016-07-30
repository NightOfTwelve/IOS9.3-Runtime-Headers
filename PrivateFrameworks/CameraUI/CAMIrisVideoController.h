//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMNebulaDaemonProxyManager, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CAMIrisVideoController : NSObject
{
    NSObject<OS_dispatch_queue> *__mutexQueue;
    CAMNebulaDaemonProxyManager *__nebulaDaemonProxyManager;
    NSMutableDictionary *__mutexQueue_pendingJobsByMasterVideoURL;
}

@property(readonly, nonatomic) NSMutableDictionary *_mutexQueue_pendingJobsByMasterVideoURL; // @synthesize _mutexQueue_pendingJobsByMasterVideoURL=__mutexQueue_pendingJobsByMasterVideoURL;
@property(readonly, nonatomic) CAMNebulaDaemonProxyManager *_nebulaDaemonProxyManager; // @synthesize _nebulaDaemonProxyManager=__nebulaDaemonProxyManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_mutexQueue; // @synthesize _mutexQueue=__mutexQueue;
- (void).cxx_destruct;
- (void)stillImageRequest:(id)arg1 didCompleteVideoCaptureWithResult:(id)arg2;
- (id)init;
- (id)initWithNebulaDaemonProxyManager:(id)arg1;

@end

