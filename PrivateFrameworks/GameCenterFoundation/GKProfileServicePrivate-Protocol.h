//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKProfileService-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol GKProfileServicePrivate <GKProfileService>
- (oneway void)invalidateCachedProfileForLocalPlayerWithHandler:(void (^)(void))arg1;
- (oneway void)changeAlias:(NSString *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)checkAliasForUniqueness:(NSString *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)setFindable:(_Bool)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)updateContactsWithHandler:(void (^)(NSError *))arg1;
- (oneway void)deletePhotoWithHandler:(void (^)(NSError *))arg1;
- (oneway void)setPhotoData:(NSData *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)cachePhotos:(NSDictionary *)arg1 handler:(void (^)(void))arg2;
- (oneway void)setStatus:(NSString *)arg1 handler:(void (^)(NSError *))arg2;
@end

