//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotificationCenter/_NCWidgetController_Service_IPC-Protocol.h>

@class NSXPCConnection;

@interface NCWidgetController : NSObject <_NCWidgetController_Service_IPC>
{
    NSXPCConnection *_connection;
}

+ (id)widgetController;
- (void)__didReceiveHasContentRequest;
- (void)setHasContent:(_Bool)arg1 forWidgetWithBundleIdentifier:(id)arg2;
- (id)_connectionForRequest;
- (void)_invalidateConnection;
- (void)dealloc;

@end

