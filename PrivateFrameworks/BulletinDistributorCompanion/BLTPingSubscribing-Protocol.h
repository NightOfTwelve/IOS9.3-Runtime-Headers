//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BulletinDistributorCompanion/NSObject-Protocol.h>

@class BBBulletin, NSSet, NSString;

@protocol BLTPingSubscribing <NSObject>
- (void)pingSubscriberDidLoad;
- (NSSet *)sectionIDsForBulletins;
- (NSSet *)sectionIDsForPings;
- (NSSet *)sectionIDs;
- (void)pingWithBulletin:(BBBulletin *)arg1;
- (void)pingWithRecordID:(NSString *)arg1 forSectionID:(NSString *)arg2;
@end

