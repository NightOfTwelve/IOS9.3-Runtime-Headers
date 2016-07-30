//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/TKProtocolSlotClientNotification-Protocol.h>

@class NSArray, NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface TKSmartCardSlotManager : NSObject <TKProtocolSlotClientNotification>
{
    NSXPCConnection *_connection;
    NSMutableDictionary *_endpoints;
    NSArray *_slotNames;
    NSObject<OS_dispatch_queue> *_slotNamesQueue;
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (void)getSlotWithName:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setSlotWithName:(id)arg1 endpoint:(id)arg2 type:(id)arg3 reply:(CDUnknownBlockType)arg4;
@property(readonly) NSArray *slotNames;
- (id)init;

@end

