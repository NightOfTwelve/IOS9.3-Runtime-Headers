//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FitnessUI/NSObject-Protocol.h>

@class FUChartDataGroup, NSArray;
@protocol FUChartPoint;

@protocol FUChartDataGroupDataSource <NSObject>
- (id <FUChartPoint>)dataGroup:(FUChartDataGroup *)arg1 pointForSetAtIndex:(unsigned long long)arg2 pointIndex:(unsigned long long)arg3;
- (unsigned long long)dataGroup:(FUChartDataGroup *)arg1 numberOfPointsInSetAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfDataSetsInGroup:(FUChartDataGroup *)arg1;

@optional
- (NSArray *)dataGroup:(FUChartDataGroup *)arg1 labelsForSetAtIndex:(unsigned long long)arg2;
- (NSArray *)dataGroup:(FUChartDataGroup *)arg1 dataPointsForSetAtIndex:(unsigned long long)arg2;
@end

