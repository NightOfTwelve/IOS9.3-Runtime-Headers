//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HKObjectType, NSString;

@protocol HDHealthDataCollector <NSObject>
@property _Bool disabled;
- (NSString *)dataCollectorDiagnosticDescription;
- (void)updateHistoricalData;
- (void)collectionStoppedForType:(HKObjectType *)arg1;
- (void)updateCollectionInterval:(double)arg1 forType:(HKObjectType *)arg2;
- (void)collectionStartedForType:(HKObjectType *)arg1 collectionInterval:(double)arg2;
@end

