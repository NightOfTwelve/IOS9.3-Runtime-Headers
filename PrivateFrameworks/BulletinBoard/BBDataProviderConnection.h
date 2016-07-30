//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BulletinBoard/NSXPCListenerDelegate-Protocol.h>

@class BBDataProviderConnectionResolver, NSMutableDictionary, NSString;
@protocol BBDataProviderConnectionServerProxy, OS_dispatch_queue;

@interface BBDataProviderConnection : NSObject <NSXPCListenerDelegate>
{
    NSString *_serviceName;
    NSString *_bundleID;
    BBDataProviderConnectionResolver *_connectionResolver;
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    id <BBDataProviderConnectionServerProxy> _serverProxy;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    _Bool _connected;
    NSMutableDictionary *_dataProvidersBySectionID;
    NSMutableDictionary *_parentFactoriesBySectionID;
}

+ (void)initialize;
- (void)ping:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)_invalidate;
- (void)removeDataProviderWithSectionID:(id)arg1;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3 universalSectionID:(id)arg4;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3 unversalSectionID:(id)arg4;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3;
- (id)_addDataProvider:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)addDataProvider:(id)arg1;
- (void)addDataProvider:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setServerProxy:(id)arg1;
- (id)bundleID;
- (id)serviceName;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

