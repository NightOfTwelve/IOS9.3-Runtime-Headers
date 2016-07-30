//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, SPXPCConnection;
@protocol OS_xpc_object;

@interface SPXPCMessage : NSObject
{
    SPXPCConnection *_receivingConnection;
    NSString *_name;
    NSDictionary *_info;
    unsigned long long _shmemPtr;
    unsigned long long _shmemLen;
    NSObject<OS_xpc_object> *_x_reply_connection;
    NSObject<OS_xpc_object> *_x_message;
    NSObject<OS_xpc_object> *_x_reply;
}

@property(nonatomic) unsigned long long sharedMemoryLength; // @synthesize sharedMemoryLength=_shmemLen;
@property(nonatomic) unsigned long long sharedMemoryRegion; // @synthesize sharedMemoryRegion=_shmemPtr;
@property(copy, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)needsReply;
- (void)sendReply:(id)arg1;
- (id)_createXPCMessage;
- (id)_initWithXPCMessage:(id)arg1 onConnection:(id)arg2;
- (id)initWithName:(id)arg1;

@end

