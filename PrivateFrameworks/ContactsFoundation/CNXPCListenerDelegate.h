//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ContactsFoundation/NSXPCListenerDelegate-Protocol.h>

@class NSString, Protocol;

__attribute__((visibility("hidden")))
@interface CNXPCListenerDelegate : NSObject <NSXPCListenerDelegate>
{
    id _exportedObject;
    Protocol *_exportedInterfaceProtocol;
}

- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithWithExportedObject:(id)arg1 exportedInterfaceProtocol:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

