//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKAchievement.h>

#import <HealthDaemon/HDCoding-Protocol.h>

@class NSString;

@interface HKAchievement (HDCodingSupport) <HDCoding>
+ (id)createWithCodable:(id)arg1;
- (id)codableRepresentationForSync;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

