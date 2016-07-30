//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaRemote/GameControllerDaemonListener-Protocol.h>

@class NSString, NSXPCConnection;
@protocol GameControllerDaemon;

@interface MRGameControllerDaemonProxy : NSObject <GameControllerDaemonListener>
{
    NSXPCConnection *_connection;
    id <GameControllerDaemon> _remote;
}

+ (id)defaultGameControllerDaemonProxy;
- (void)microControllerWithUDID:(unsigned long long)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(_Bool)arg5;
- (void)microControllerWithDigitizerX:(float)arg1 withY:(float)arg2 withTimeStamp:(unsigned long long)arg3 touchDown:(_Bool)arg4;
- (void)controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3;
- (void)controllerWithUDID:(unsigned long long)arg1 setData:(id)arg2;
- (void)removeController:(id)arg1;
- (void)addController:(id)arg1;
- (void)replyConnectedHosts:(id)arg1;
- (void)controllerID:(unsigned long long)arg1 setArrayValueX:(float)arg2 y:(float)arg3 z:(float)arg4 forElement:(int)arg5;
- (void)controllerID:(unsigned long long)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(_Bool)arg5;
- (void)controllerID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3;
- (void)removeEmulatedController:(id)arg1;
- (id)addEmulatedControllerWithProfile:(int)arg1;
- (void)_openConnection;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
