//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataMigration/DataClassMigrator.h>

@interface ETDataMigrator : DataClassMigrator
{
    _Bool _done;
}

+ (_Bool)normalizeFriendListIfNeeded;
+ (id)_normalizedFriendListForFriendList:(id)arg1;
- (_Bool)performMigration;
- (float)migrationProgress;
- (float)estimatedDuration;
- (id)dataClassName;
- (void)_updateSettingsVersion:(long long)arg1;
- (_Bool)_isSettingsVersionIsGreaterThanOrEqualTo:(long long)arg1;
- (_Bool)_updatePhotoCache;
- (_Bool)_migratePerGizmoDefaultsToCompanionDefaults;
- (_Bool)_performDatabaseUpgradeIfNeeded;

@end

