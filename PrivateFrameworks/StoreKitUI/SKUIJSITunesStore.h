//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSITunesStore.h>

#import <StoreKitUI/SKUIItemStateCenterObserver-Protocol.h>
#import <StoreKitUI/SKUIJSITunesStore-Protocol.h>

@class NSString, SKUIClientContext, SKUIJSAppleAccount, SKUIJSRestrictions;

@interface SKUIJSITunesStore : IKJSITunesStore <SKUIItemStateCenterObserver, SKUIJSITunesStore>
{
    SKUIClientContext *_clientContext;
}

- (void).cxx_destruct;
- (void)_purchaseRequestDidSucceedNotification:(id)arg1;
- (id)_millisecondsFromTimeInterval:(double)arg1;
- (void)_finishPurchaseForOptions:(id)arg1 purchaseResponse:(id)arg2;
- (void)itemStateCenterMediaLibrariesDidChange:(id)arg1;
- (void)updateToggleStateForItem:(id)arg1 toggled:(_Bool)arg2:(id)arg3;
- (void)setPreviewOverlay:(id)arg1:(id)arg2;
@property(nonatomic) long long applicationIconBadgeNumber;
- (void)restoreRemovedSystemApp:(id)arg1:(id)arg2;
- (_Bool)resourceExists:(id)arg1;
- (void)resetStateForActiveDocument;
@property(readonly, nonatomic) SKUIJSRestrictions *restrictions;
@property(readonly, nonatomic) SKUIJSAppleAccount *primaryAppleAccount;
- (void)log:(id)arg1;
- (void)loadGratisContent:(id)arg1;
- (void)launchICloudFamilySettings;
- (void)isRemovedSystemApp:(id)arg1:(id)arg2;
- (void)getProfilePermissions:(id)arg1:(id)arg2;
@property(readonly, copy, nonatomic) NSString *hostApp;
- (void)getAdminStatus:(id)arg1:(id)arg2;
- (void)getBookSample:(id)arg1;
- (void)findToggleStateForItem:(id)arg1:(id)arg2;
- (void)findLibraryItems:(id)arg1:(id)arg2:(id)arg3;
- (void)findApps:(id)arg1:(id)arg2:(id)arg3;
- (void)exit:(id)arg1;
- (void)download:(id)arg1;
- (void)clearToggleStateItems;
- (void)approveInPerson:(id)arg1:(id)arg2;
- (void)buy:(id)arg1;
- (void)attemptLocalAskToBuyApproval:(id)arg1;
- (_Bool)sendOnXEventWithDictionary:(id)arg1;
- (void)sendOnPageResponseWithDocument:(id)arg1 data:(id)arg2 URLResponse:(id)arg3 performanceMetrics:(id)arg4;
- (void)sendApplicationWillEnterForeground;
- (void)sendApplicationDidEnterBackground;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1 clientContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

