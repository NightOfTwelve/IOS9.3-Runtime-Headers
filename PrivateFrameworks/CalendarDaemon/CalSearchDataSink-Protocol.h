//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarDaemon/NSObject-Protocol.h>

@protocol CalSearchDataSink <NSObject>
- (void)calSearchComplete:(id)arg1;
- (void)calSearch:(id)arg1 foundOccurrences:(struct __CFArray *)arg2 cachedDays:(struct __CFArray *)arg3 cachedDaysIndexes:(struct __CFArray *)arg4;

@optional
- (void)calSearch:(id)arg1 showResultsStartingOnDate:(double)arg2;
- (_Bool)calSearchShouldStopSearching:(id)arg1;
@end

