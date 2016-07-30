//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection, PKEntitlementWhitelist;

@interface NPKPassLibraryFilter : NSObject
{
    NSXPCConnection *_connection;
    PKEntitlementWhitelist *_whitelist;
}

@property(retain) PKEntitlementWhitelist *whitelist; // @synthesize whitelist=_whitelist;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (_Bool)_entitledForPassTypeID:(id)arg1 teamID:(id)arg2;
@property(readonly) _Bool allowsSilentAdd;
- (id)filterPassIfNeeded:(id)arg1;
- (_Bool)allowAccessToPass:(id)arg1;
- (id)initWithConnection:(id)arg1;

@end

