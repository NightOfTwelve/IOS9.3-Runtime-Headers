//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDClient, HDDataOriginProvenance, HDDeviceEntity, HDSQLiteDatabase, HDSQLitePredicate, HDSourceEntity, HKObject, HKObjectType, NSArray, NSNumber, NSSet, NSString;
@protocol HDDataObserver;

@protocol HDHealthDataManager <NSObject>
- (void)setBackgroundObserverFrequency:(HDClient *)arg1 forDataType:(HKObjectType *)arg2 frequency:(long long)arg3 completion:(void (^)(void))arg4;
- (void)closeObserverTransaction;
- (void)openObserverTransaction;
- (void)removeObserver:(id <HDDataObserver>)arg1 forDataType:(HKObjectType *)arg2 sourceBundleIdentifier:(NSString *)arg3;
- (void)addObserver:(id <HDDataObserver>)arg1 forDataType:(HKObjectType *)arg2 sourceBundleIdentifier:(NSString *)arg3;
- (void)removeObserver:(id <HDDataObserver>)arg1 forDataType:(HKObjectType *)arg2;
- (void)addObserver:(id <HDDataObserver>)arg1 forDataType:(HKObjectType *)arg2;
- (void)removeObserverForAllTypes:(id <HDDataObserver>)arg1;
- (void)addObserverForAllTypes:(id <HDDataObserver>)arg1;
- (_Bool)containsDataObject:(HKObject *)arg1;
- (_Bool)deleteSamplesWithUUIDs:(NSArray *)arg1 generateDeletedObjects:(_Bool)arg2 database:(HDSQLiteDatabase *)arg3 error:(id *)arg4;
- (_Bool)deleteSamplesWithUUIDs:(NSArray *)arg1 error:(id *)arg2;
- (_Bool)deleteSamplesWithTypes:(NSSet *)arg1 sourceID:(NSNumber *)arg2 error:(id *)arg3;
- (_Bool)deleteSamplesWithSourceIdentifier:(NSNumber *)arg1 error:(id *)arg2;
- (_Bool)deleteDataObjectsOfClass:(Class)arg1 predicate:(HDSQLitePredicate *)arg2 limit:(unsigned long long)arg3 deletedSampleCount:(unsigned long long *)arg4 notifyObservers:(_Bool)arg5 generateDeletedObjects:(_Bool)arg6 error:(id *)arg7;
- (_Bool)deleteDataObjects:(NSArray *)arg1 restrictedSourceEntity:(HDSourceEntity *)arg2 failIfNotFound:(_Bool)arg3 error:(id *)arg4;
- (_Bool)deleteDataObjects:(NSArray *)arg1 sourceBundleIdentifier:(NSString *)arg2 error:(id *)arg3;
- (_Bool)insertDataObjects:(NSArray *)arg1 withProvenance:(HDDataOriginProvenance *)arg2 creationDate:(double)arg3 skipInsertionFilter:(_Bool)arg4 error:(id *)arg5;
- (_Bool)insertDataObjects:(NSArray *)arg1 withProvenance:(HDDataOriginProvenance *)arg2 creationDate:(double)arg3 error:(id *)arg4;
- (_Bool)insertDataObjects:(NSArray *)arg1 sourceEntity:(HDSourceEntity *)arg2 deviceEntity:(HDDeviceEntity *)arg3 sourceVersion:(NSString *)arg4 creationDate:(double)arg5 error:(id *)arg6;
@end

