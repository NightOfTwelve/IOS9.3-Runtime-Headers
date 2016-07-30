//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface HMDIdentityRegistry : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_registry;
}

@property(retain, nonatomic) NSMutableDictionary *registry; // @synthesize registry=_registry;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)clear;
- (id)publicKeyForIdentifier:(id)arg1;
- (void)deregisterPublicKeyForIdentifier:(id)arg1;
- (void)registerPublicKey:(id)arg1 forIdentifier:(id)arg2;
- (id)init;

@end

