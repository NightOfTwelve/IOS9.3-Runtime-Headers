//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDKeyValueSyncEntity.h>

@interface HDAchievementProgressLocalSyncEntity : HDKeyValueSyncEntity
{
}

+ (id)syncEntityDependencies;
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
+ (long long)syncEntityType;
+ (long long)category;
+ (int)outgoingNanoSyncObjectTypeForNanoSyncProtocolVersion:(int)arg1;
+ (long long)_outgoingCategoryForNanoSyncProtocolVersion:(int)arg1;
+ (long long)outgoingCategoryWithSyncStore:(id)arg1;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (int)nanoSyncObjectType;

@end

