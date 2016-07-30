//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDNanoSyncEntity-Protocol.h>
#import <HealthDaemon/HDSyncEntity-Protocol.h>

@class NSString;

@interface HDKeyValueSyncEntity : NSObject <HDNanoSyncEntity, HDSyncEntity>
{
}

+ (id)syncEntityDependencies;
+ (void)didReceiveKeysAndValuesWithHealthDaemon:(id)arg1;
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (long long)nextSyncAnchorWithStore:(id)arg1 predicate:(id)arg2 startSyncAnchor:(long long)arg3 healthDaemon:(id)arg4 error:(id *)arg5;
+ (id)syncObjectsWithStore:(id)arg1 predicate:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange)arg3 lastSyncAnchor:(long long *)arg4 limit:(unsigned long long)arg5 healthDaemon:(id)arg6 error:(id *)arg7;
+ (id)_syncObjectPredicateWithPredicate:(id)arg1;
+ (long long)syncEntityType;
+ (long long)outgoingCategoryWithSyncStore:(id)arg1;
+ (long long)category;
+ (long long)finalAnchorForNanoSyncRestoreSession:(id)arg1 healthDaemon:(id)arg2 error:(id *)arg3;
+ (id)objectsForNanoSyncRestoreSession:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange)arg2 lastSyncAnchor:(long long *)arg3 healthDaemon:(id)arg4 error:(id *)arg5;
+ (long long)_outgoingCategoryForNanoSyncProtocolVersion:(int)arg1;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (int)nanoSyncObjectType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

