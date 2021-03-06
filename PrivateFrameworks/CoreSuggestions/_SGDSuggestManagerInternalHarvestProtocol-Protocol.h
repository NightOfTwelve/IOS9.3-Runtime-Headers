//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestions/_SGDSuggestManagerBaseProtocol-Protocol.h>

@class NSArray, NSData, NSString;

@protocol _SGDSuggestManagerInternalHarvestProtocol <_SGDSuggestManagerBaseProtocol>
- (void)deleteSpotlightReferencesWithBundleIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(NSString *)arg1 domainIdentifiers:(NSArray *)arg2 completion:(void (^)(NSError *))arg3;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(NSString *)arg1 uniqueIdentifiers:(NSArray *)arg2 completion:(void (^)(NSError *))arg3;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(NSString *)arg1 uniqueIdentifiers:(NSArray *)arg2 completion:(void (^)(NSError *))arg3;
- (void)addSearchableItemMetadata:(NSData *)arg1 htmlData:(NSData *)arg2 completion:(void (^)(NSError *))arg3;
@end

