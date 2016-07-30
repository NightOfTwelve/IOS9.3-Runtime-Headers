//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDEntityEncoder.h>

@class HDDataProvenanceCache, HDMetadataValueStatement;

@interface _HDDataEntityEncoder : HDEntityEncoder
{
    HDMetadataValueStatement *_metadataValueStatement;
    HDDataProvenanceCache *_dataProvenanceCache;
}

@property(retain, nonatomic) HDDataProvenanceCache *dataProvenanceCache; // @synthesize dataProvenanceCache=_dataProvenanceCache;
@property(retain, nonatomic) HDMetadataValueStatement *metadataValueStatement; // @synthesize metadataValueStatement=_metadataValueStatement;
- (void).cxx_destruct;
- (void)finish;
- (void)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow *)arg3;
- (id)objectForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 collection:(id)arg3;
- (id)orderedProperties;
- (id)initWithHealthEntityClass:(Class)arg1 healthDaemon:(id)arg2 database:(id)arg3 purpose:(long long)arg4 authorizationFilter:(CDUnknownBlockType)arg5;

@end

