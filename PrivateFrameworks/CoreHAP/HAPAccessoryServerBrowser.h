//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HAPKeyStore, OS_dispatch_queue;

@interface HAPAccessoryServerBrowser : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    long long _linkType;
    id <HAPKeyStore> _keyStore;
}

@property(retain, nonatomic) id <HAPKeyStore> keyStore; // @synthesize keyStore=_keyStore;
@property(readonly, nonatomic) long long linkType; // @synthesize linkType=_linkType;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (void)stopDiscoveringAccessoryServers;
- (void)startDiscoveringAccessoryServers;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithQueue:(id)arg1;

@end

