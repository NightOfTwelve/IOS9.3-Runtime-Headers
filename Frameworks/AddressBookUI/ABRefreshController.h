//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ACAccountStore, NSMutableDictionary, NSTimer;

@interface ABRefreshController : NSObject
{
    ACAccountStore *_accountStore;
    double _refreshDelay;
    NSMutableDictionary *_accountGroupListsToRefreshByObserver;
    NSMutableDictionary *_contactsFiltersToRefreshByObserver;
    NSTimer *_refreshTimer;
}

+ (id)sharedInstance;
- (_Bool)canRefreshSources:(id)arg1;
- (void)refreshEverythingNow;
- (void)refreshAccountGroupList:(id)arg1;
- (void)refreshContactsFilter:(id)arg1;
- (_Bool)_acAccountExistsForIdentifier:(id)arg1;
- (id)refreshableAccountIdentifiersForContactsFilter:(id)arg1;
- (_Bool)canRefreshAccountIdentifier:(id)arg1;
- (void)_refreshGroupListForACAccountWithIdentifier:(id)arg1 isUserRequested:(_Bool)arg2;
- (void)_refreshACAccountWithIdentifier:(id)arg1 isUserRequested:(_Bool)arg2;
- (void)startRefreshingOrphanedAccountsWithAddressBook:(void *)arg1;
- (void)startRefreshingOrphanedAccountsWithAddressBook:(void *)arg1 afterDelay:(_Bool)arg2;
- (void)_actuallyRefreshOrphanedAccountsWithAddressBook:(void *)arg1;
- (void)_resumeAllRefreshes;
- (void)_postponeAllRefreshes;
- (void)cancelAllScheduledRefreshesWithObserver:(void *)arg1;
- (void)scheduleRefreshForAccountGroupList:(id)arg1 withObserver:(void *)arg2;
- (void)scheduleRefreshForContactsFilter:(id)arg1 withObserver:(void *)arg2;
- (_Bool)canRefreshContactsFilter:(id)arg1;
- (void)_addObjectToRefresh:(id)arg1 withObserver:(void *)arg2 toDictionary:(id *)arg3;
- (void)_setRefreshDelay:(double)arg1;
- (id)accountStore;
- (void)_proceedWithRefresh:(id)arg1;
- (void)_invalidateTimer;
- (void)_scheduleRefreshTimerIfNeeded;
- (void)dealloc;
- (id)init;

@end

