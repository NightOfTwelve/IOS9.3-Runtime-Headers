//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PlugInKit/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL, NSUUID, NSXPCConnection;

@protocol PKSubsystemServicePersonality <NSObject>
@property(readonly) NSXPCConnection *connection;
@property(readonly) NSDictionary *plugInDictionary;
@property(readonly) NSDictionary *bundleInfoDictionary;
@property(readonly) NSUUID *uuid;
@property(readonly) NSURL *url;
@property(readonly) NSString *version;
@property(readonly) NSString *identifier;
@end

