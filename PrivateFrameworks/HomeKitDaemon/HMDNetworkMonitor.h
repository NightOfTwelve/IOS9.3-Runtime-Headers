//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HMDNetworkMonitorDelegate, OS_dispatch_queue;

@interface HMDNetworkMonitor : NSObject
{
    _Bool _monitoring;
    unsigned int _currentNetworkFlags;
    id <HMDNetworkMonitorDelegate> _delegate;
    NSString *_hostname;
    NSObject<OS_dispatch_queue> *_clientQueue;
    struct __SCNetworkReachability *_networkReachabilityRef;
}

@property(nonatomic) unsigned int currentNetworkFlags; // @synthesize currentNetworkFlags=_currentNetworkFlags;
@property(nonatomic, getter=isMonitoring) _Bool monitoring; // @synthesize monitoring=_monitoring;
@property(readonly, nonatomic) struct __SCNetworkReachability *networkReachabilityRef; // @synthesize networkReachabilityRef=_networkReachabilityRef;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property __weak id <HMDNetworkMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleNetworkReachabilityChange:(unsigned int)arg1;
- (void)stop;
- (void)start;
- (id)description;
- (id)debugDescription;
- (id)shortDescription;
- (void)dealloc;
- (id)initWithRemoteHostname:(id)arg1;
- (id)init;

@end

