//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface NARApplicationWorkspace : NSObject
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)_loadConnectionIfNeeded;
- (void)_connectionInvalidated;
- (id)_workspaceServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)getWorkspaceInfoWithCompletion:(CDUnknownBlockType)arg1;
- (id)workspaceInfo:(id *)arg1;
- (id)init;

@end
