//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/JSExport-Protocol.h>

@class IKDOMDocument, JSValue, NSArray, NSDictionary, NSNumber, NSString, SKUIJSAppleAccount, SKUIJSRestrictions;

@protocol SKUIJSITunesStore <JSExport>
@property(readonly, copy, nonatomic) NSString *hostApp;
@property(readonly, nonatomic) SKUIJSRestrictions *restrictions;
@property(readonly, nonatomic) SKUIJSAppleAccount *primaryAppleAccount;
@property(nonatomic) long long applicationIconBadgeNumber;
- (void)updateToggleStateForItem:(NSString *)arg1 toggled:(_Bool)arg2:(JSValue *)arg3;
- (void)restoreRemovedSystemApp:(NSString *)arg1:(JSValue *)arg2;
- (void)setPreviewOverlay:(IKDOMDocument *)arg1:(NSDictionary *)arg2;
- (_Bool)resourceExists:(NSString *)arg1;
- (void)resetStateForActiveDocument;
- (void)log:(NSString *)arg1;
- (void)loadGratisContent:(JSValue *)arg1;
- (void)launchICloudFamilySettings;
- (void)isRemovedSystemApp:(NSString *)arg1:(JSValue *)arg2;
- (void)getProfilePermissions:(NSDictionary *)arg1:(JSValue *)arg2;
- (void)getBookSample:(NSDictionary *)arg1;
- (void)clearToggleStateItems;
- (void)findToggleStateForItem:(NSString *)arg1:(JSValue *)arg2;
- (void)findLibraryItems:(NSArray *)arg1:(JSValue *)arg2:(NSDictionary *)arg3;
- (void)findApps:(NSArray *)arg1:(JSValue *)arg2:(NSDictionary *)arg3;
- (void)exit:(NSDictionary *)arg1;
- (void)download:(NSDictionary *)arg1;
- (void)attemptLocalAskToBuyApproval:(NSNumber *)arg1;
- (void)approveInPerson:(NSNumber *)arg1:(JSValue *)arg2;
- (void)getAdminStatus:(NSDictionary *)arg1:(JSValue *)arg2;
- (void)buy:(NSDictionary *)arg1;
@end

