//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDJournalEntry.h>

@class HKAchievement;

@interface _HDAchievementInsertionJournalEntry : HDJournalEntry
{
    HKAchievement *_achievement;
}

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withDaemon:(id)arg2;
+ (long long)behavior;
@property(readonly, nonatomic) HKAchievement *achievement; // @synthesize achievement=_achievement;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAchievement:(id)arg1;

@end
