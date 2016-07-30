//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BulletinBoard/BBServerConduitClientInterface-Protocol.h>

@class NSString, NSXPCConnection;

@interface BBServerConduit : NSObject <BBServerConduitClientInterface>
{
    NSXPCConnection *_connection;
}

+ (id)sharedConduit;
+ (id)clientInterface;
+ (id)serverInterface;
- (void)weeAppWithBundleID:(id)arg1 getHiddenFromUser:(CDUnknownBlockType)arg2;
- (void)weeAppWithBundleID:(id)arg1 setHiddenFromUser:(_Bool)arg2;
- (void)sendMessageToDataProviderSectionID:(id)arg1 name:(id)arg2 userInfo:(id)arg3;
- (void)invalidate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

