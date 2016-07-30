//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

#import <HealthDaemon/HDNanoSyncEntity-Protocol.h>
#import <HealthDaemon/HDSyncEntity-Protocol.h>

@class NSString;

@interface HDAchievementEntity : HDHealthEntity <HDNanoSyncEntity, HDSyncEntity>
{
}

+ (id)_predicateForProvenance:(long long)arg1;
+ (id)_predicateForSyncAnchor:(id)arg1;
+ (id)syncEntityDependencies;
+ (id)_achievementsByRemovingDuplicatesWithSyncedAchievements:(id)arg1 achievementsToDelete:(id *)arg2 healthDaemon:(id)arg3;
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (long long)nextSyncAnchorWithStore:(id)arg1 predicate:(id)arg2 startSyncAnchor:(long long)arg3 healthDaemon:(id)arg4 error:(id *)arg5;
+ (id)syncObjectsWithStore:(id)arg1 predicate:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange)arg3 lastSyncAnchor:(long long *)arg4 limit:(unsigned long long)arg5 healthDaemon:(id)arg6 error:(id *)arg7;
+ (id)propertyForSyncProvenance;
+ (long long)syncEntityType;
+ (id)entityEncoderForHealthDaemon:(id)arg1 database:(id)arg2 purpose:(long long)arg3 authorizationFilter:(CDUnknownBlockType)arg4;
+ (long long)protectionClass;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (_Bool)markAchievement:(id)arg1 viewedInHealthDatabase:(id)arg2 error:(id *)arg3;
+ (long long)numberOfUnviewedAchievementsInHealthDatabase:(id)arg1;
+ (_Bool)markAchievement:(id)arg1 alertedInHealthDatabase:(id)arg2 error:(id *)arg3;
+ (id)predicateForAchievementsWithAchievementTypes:(id)arg1;
+ (id)achievementsWithPredicate:(id)arg1 healthDaemon:(id)arg2 error:(id *)arg3;
+ (id)unalertedAchievementsInHealthDaemon:(id)arg1;
+ (long long)countOfUnalertedAchievementsInHealthDatabase:(id)arg1;
+ (id)_unalertedAchievementsPredicate;
+ (_Bool)deleteAllAchievementsInHealthDatabase:(id)arg1 error:(id *)arg2;
+ (_Bool)deleteAchievementWithUUID:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (_Bool)deleteAchievements:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)_insertAchievement:(id)arg1 provenance:(long long)arg2 database:(id)arg3 error:(id *)arg4;
+ (_Bool)_insertAchievements:(id)arg1 provenance:(long long)arg2 healthDatabase:(id)arg3 error:(id *)arg4;
+ (_Bool)insertAchievements:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (_Bool)insertAchievement:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (_Bool)supportsSpeculativeNanoSyncChanges;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (int)nanoSyncObjectType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

