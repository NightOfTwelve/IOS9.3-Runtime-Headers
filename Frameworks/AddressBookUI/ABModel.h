//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ABContactsFilter, NSArray, NSMutableArray, NSRecursiveLock;

@interface ABModel : NSObject
{
    void *_addressBook;
    CDStruct_0029e0ce *_sectionLists;
    struct __CFDictionary *_headerSortKeyToHeaderString;
    struct _NSRange _displayedMemberPreparedRange;
    unsigned long long _numberOfDisplayedMembers;
    _Bool _displayedMembersAreSearchResults;
    void *_selectedPerson;
    unsigned int _displayOrdering;
    struct __CFArray *_databaseChangeDelegates;
    void *_backgroundAddressBook;
    _Bool _backgroundAddressBookInvalidated;
    NSMutableArray *_cachedModelRecords;
    NSRecursiveLock *_memberLock;
    _Bool _loadingInBackground;
    NSRecursiveLock *_backgroundLoadingLock;
    _Bool _backgroundInvalidated;
    id _delayedNotificationHandler;
    _Bool _autoInvalidateOnDatabaseChange;
    NSArray *_lastSeenSources;
    NSArray *_lastSeenGroups;
    int _meID;
    ABContactsFilter *_displayedContactsFilter;
    ABContactsFilter *_selectedContactsFilter;
    ABContactsFilter *_lastSelectedContactsFilter;
}

+ (unsigned int)sortOrdering;
+ (void)initialize;
- (void)stopDelayingNotificationsForDatabaseChangeDelegate:(id)arg1 andDeliverDelayedNotifications:(_Bool)arg2;
- (void)startDelayingNotificationsForDatabaseChangeDelegate:(id)arg1;
- (struct __CFArray *)_databaseChangeDelegates;
- (void)removeDatabaseChangeDelegate:(id)arg1;
- (void)addDatabaseChangeDelegate:(id)arg1;
- (void)setAutoInvalidateOnDatabaseChange:(_Bool)arg1;
- (void)_updateForMajorAddressBookChange:(_Bool)arg1;
- (void)updateForMajorAddressBookChange;
- (void)_modelDatabaseChangedExternally:(struct __CFDictionary *)arg1;
- (void)_modelDatabaseChangedLocally:(struct __CFDictionary *)arg1;
- (void)_notifyDelegatesOfExternalDatabaseChangeWithDeletedGroup:(_Bool)arg1 deletedPerson:(_Bool)arg2;
- (int)meID;
- (void)_cacheMeID;
- (id)allGroups;
- (id)allSources;
@property(nonatomic) void *addressBook;
@property(readonly, nonatomic) void *sourceForNewRecords;
@property(readonly, nonatomic) void *groupForNewRecords;
- (void)invalidateDisplayedMembers;
@property(retain, nonatomic) ABContactsFilter *displayedContactsFilter; // @synthesize displayedContactsFilter=_displayedContactsFilter;
@property(readonly, nonatomic) ABContactsFilter *selectedContactsFilter; // @synthesize selectedContactsFilter=_selectedContactsFilter;
- (void)setSelectedContactsFilter:(id)arg1;
- (void)invalidateLastSelectedContactsFilter;
- (void)setLastSelectedContactsFilter:(id)arg1;
@property(readonly, nonatomic) ABContactsFilter *lastSelectedContactsFilter; // @synthesize lastSelectedContactsFilter=_lastSelectedContactsFilter;
- (void *)selectedPerson;
- (void)setSelectedPerson:(void *)arg1;
- (void)prepareDisplayedMembersInRange:(struct _NSRange)arg1;
- (CDStruct_0029e0ce *)displayedMemberSectionLists;
- (void)copyDisplayedNamePieces:(id *)arg1 isGroup:(_Bool *)arg2 highlightIndex:(long long *)arg3 forMemberID:(int *)arg4 atindex:(long long)arg5;
- (long long)indexForDisplayedMember:(void *)arg1;
- (void *)displayedMemberAtIndex:(long long)arg1;
- (id)displayedMembersInRange:(struct _NSRange)arg1;
- (id)_displayedGroupMembersInRange:(struct _NSRange)arg1;
- (id)_partialDisplayedGroupMembersInRange:(struct _NSRange)arg1;
- (void)_startBackgroundThreadIfNecessaryScanningForward:(_Bool)arg1;
- (void)_loadMembersInBackground:(id)arg1;
- (struct __CFArray *)_copyArrayOfPeopleInDisplayedContactsFilterForRange:(struct _NSRange)arg1 inBackground:(_Bool)arg2;
- (void)_cachePeople:(struct __CFArray *)arg1 atEnd:(_Bool)arg2;
- (long long)_indexOfMember:(void *)arg1 inDisplayedMembers:(id)arg2;
- (id)_newModelRecordFromRecord:(void *)arg1;
- (unsigned long long)numberOfDisplayedMembers;
- (id)allCachedModelRecords;
- (unsigned long long)displayedMemberSectionListsCount;
- (void)setFilteredDisplayedMembers:(struct __CFArray *)arg1;
- (void)resetSectionList;
- (long long)resetFullSectionList:(struct __CFDictionary *)arg1 maximumSectionCount:(int)arg2;
- (long long)resetPartialSectionListWithMaximumCount:(int)arg1 headerSortKeyToHeaderString:(struct __CFDictionary *)arg2;
- (_Bool)shouldUsePartialLoadingForContactsFilter:(id)arg1;
- (struct __CFDictionary *)headerSortKeyToHeaderStringDictionary;
- (void)resetSortKeyToHeaderStringDictionary;
- (void)setDisplayNameOrdering:(unsigned int)arg1;
- (void)setSortOrdering:(unsigned int)arg1;
- (void)_waitUntilBackgroundThreadFinished;
- (void)dealloc;
- (id)initWithAddressBook:(void *)arg1;

@end

