//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CNiOSAddressBook, CNiOSAddressBookDataMapper;

@interface CNContactStore : NSObject
{
}

+ (id)standardLabelsForPropertyWithKey:(id)arg1;
+ (long long)authorizationStatusForEntityType:(long long)arg1;
+ (id)internalIdentifierFromContactIdentifier:(id)arg1;
+ (id)storeIdentifierFromContactIdentifier:(id)arg1;
+ (id)contactIdentifierFromInternalIdentifier:(id)arg1;
+ (id)storeInfoClasses;
+ (Class)storeClassWithIdentifier:(id)arg1;
+ (id)storeIdentifier;
+ (id)storeWithOptions:(unsigned long long)arg1;
+ (void)initialize;
+ (_Bool)eraseAllDataAtLocationWithName:(id)arg1 error:(id *)arg2;
+ (id)basePath;
- (id)userActivityUserInfoForContact:(id)arg1;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (id)usedLabelsForPropertyWithKey:(id)arg1 error:(id *)arg2;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)executeFetchRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)defaultContainerIdentifier;
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)groupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)contactIdentifiersForFetchRequest:(id)arg1 error:(id *)arg2;
- (_Bool)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)enumerateContactsWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)_ios_meContactWithKeysToFetch:(id)arg1 error:(id *)arg2;
- (_Bool)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id *)arg4;
- (_Bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id *)arg3;
- (_Bool)setMeContact:(id)arg1 error:(id *)arg2;
- (id)unifiedMeContactWithKeysToFetch:(id)arg1 error:(id *)arg2;
- (id)meContactIdentifierWithError:(id *)arg1;
- (id)unifiedContactWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
@property(readonly, nonatomic) CNiOSAddressBook *addressBook;
@property(readonly, nonatomic) CNiOSAddressBookDataMapper *iOSMapper;
@property(readonly, nonatomic) _Bool hasMultipleGroupsOrAccounts;
@property(readonly, nonatomic) unsigned long long countOfPreferredNamePeople;
- (id)initWithAddressBook:(void *)arg1;
- (_Bool)setDefaultContainer:(id)arg1 forAccount:(id)arg2 error:(id *)arg3;
- (id)initWithDataLocationName:(id)arg1;
- (void *)personFromContact:(id)arg1;
- (id)contactIdentifierFromPersonID:(int)arg1;
- (id)contactFromPersonID:(int)arg1 keysToFetch:(id)arg2;
- (id)_contactFromPersonID:(int)arg1 keysToFetch:(id)arg2;
- (id)contactFromPerson:(void *)arg1 keysToFetch:(id)arg2;
- (id)contactFromPersonID:(int)arg1;
- (id)contactFromPerson:(void *)arg1;
- (id)originForSuggestion:(id)arg1 error:(id *)arg2;

@end

