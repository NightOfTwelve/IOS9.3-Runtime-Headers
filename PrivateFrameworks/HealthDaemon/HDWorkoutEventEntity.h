//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutEventEntity : HDHealthEntity
{
}

+ (void)enumerateEventsForWorkout:(long long)arg1 withStatement:(id)arg2 eventHandler:(CDUnknownBlockType)arg3;
+ (id)statementForEnumeratingEventsForWorkoutInDatabase:(id)arg1 error:(id *)arg2;
+ (id)workoutEventsWithWorkoutID:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)deleteStatementForWorkoutEventsWithDatabase:(id)arg1;
+ (id)workoutEventsWithWorkoutID:(id)arg1 database:(id)arg2;
+ (_Bool)insertWorkoutEventsFromWorkout:(id)arg1 workoutPersistentID:(id)arg2 database:(id)arg3 error:(id *)arg4;
+ (id)insertWorkoutEventWithWorkoutID:(id)arg1 date:(id)arg2 eventType:(long long)arg3 database:(id)arg4 error:(id *)arg5;
+ (long long)protectionClass;
+ (id)columnsDefinition;
+ (id)databaseTable;

@end

