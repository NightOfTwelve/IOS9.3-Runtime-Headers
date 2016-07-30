//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BulletinDistributorCompanion/NSObject-Protocol.h>

@class BBBulletin, NSData, NSString;

@protocol BLTTTestServiceServerExportedInterface <NSObject>
- (void)overriddenSettingsWithCompletion:(void (^)(NSArray *))arg1;
- (void)originalSettingsWithCompletion:(void (^)(NSArray *))arg1;
- (void)settingOverridesWithCompletion:(void (^)(NSArray *))arg1;
- (void)willAlertForSectionID:(NSString *)arg1 subtype:(long long)arg2 considerSubtype:(_Bool)arg3 completion:(void (^)(_Bool))arg4;
- (void)disableStandaloneTestModeWithCompletion:(void (^)(void))arg1;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4 completion:(void (^)(void))arg5;
- (void)getStandaloneTestModeEnabledWithCompletion:(void (^)(_Bool))arg1;
- (void)clearSectionInfoSentCacheWithCompletion:(void (^)(void))arg1;
- (void)sendAllSectionInfoWithCompletion:(void (^)(void))arg1;
- (void)sendSectionInfoWithSectionID:(NSString *)arg1 completion:(void (^)(void))arg2;
- (void)addBulletin:(BBBulletin *)arg1 forFeed:(unsigned long long)arg2 playLightsAndSirens:(_Bool)arg3 attachment:(NSData *)arg4 attachmentType:(long long)arg5 completion:(void (^)(_Bool))arg6;
@end

