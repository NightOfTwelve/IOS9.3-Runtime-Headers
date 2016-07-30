//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDHealthMetadataManager-Protocol.h>

@class HDDatabaseValueCache, NSString;

@interface HDMetadataManager : NSObject <HDHealthMetadataManager>
{
    HDDatabaseValueCache *_keyEntityCache;
    HDDatabaseValueCache *_keyCache;
}

- (void).cxx_destruct;
- (_Bool)_insertValueEntityWithKeyID:(id)arg1 healthEntityID:(id)arg2 value:(id)arg3 database:(id)arg4 error:(id *)arg5;
- (id)_keyForKeyID:(id)arg1 database:(id)arg2;
- (id)_keyEntityForKey:(id)arg1 createIfNecessary:(_Bool)arg2 database:(id)arg3 error:(id *)arg4;
- (_Bool)insertMetadata:(id)arg1 forDataEntityWithID:(id)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
- (id)metadataForDataEntityWithPersistentID:(long long)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
- (id)metadataForDataEntityWithPersistentID:(long long)arg1 statement:(id)arg2 error:(id *)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
