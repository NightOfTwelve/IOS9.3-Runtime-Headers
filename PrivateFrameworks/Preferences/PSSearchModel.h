//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Preferences/PSSearchIndexOperationDelegate-Protocol.h>
#import <Preferences/PSSearchOperationDelegate-Protocol.h>
#import <Preferences/PSSpecifierObserver-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableSet, NSOperationQueue, NSString, PSSearchOperation, PSSearchResults;
@protocol OS_dispatch_queue, PSSearchModelDataSource;

@interface PSSearchModel : NSObject <PSSearchIndexOperationDelegate, PSSearchOperationDelegate, PSSpecifierObserver>
{
    NSMutableSet *_delegates;
    NSMapTable *_specifierDataSources;
    NSMutableArray *_rootEntries;
    NSMutableSet *_entriesBeingIndexed;
    NSMutableSet *_indexingEntriesWithLoadedDataSources;
    NSMutableSet *_removedEntriesStillIndexing;
    NSMutableArray *_deferredSpecifierUpdates;
    PSSearchResults *_currentResults;
    NSString *_queryForCurrentResults;
    NSMutableSet *_entriesPendingSearch;
    NSMutableSet *_removedEntriesStillSearching;
    NSObject<OS_dispatch_queue> *_searchStateAccessQueue;
    _Bool _hasLoadedRootEntries;
    _Bool _hasStartedIndexing;
    NSOperationQueue *_indexOperationQueue;
    NSOperationQueue *_searchOperationQueue;
    _Bool _indexing;
    _Bool _waitUntilFinished;
    _Bool _showSectionInDetailText;
    id <PSSearchModelDataSource> _dataSource;
    NSString *_currentQuery;
    PSSearchOperation *_activeSearchOperation;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool showSectionInDetailText; // @synthesize showSectionInDetailText=_showSectionInDetailText;
@property(retain) PSSearchOperation *activeSearchOperation; // @synthesize activeSearchOperation=_activeSearchOperation;
@property(readonly, nonatomic) NSArray *rootEntries; // @synthesize rootEntries=_rootEntries;
@property(nonatomic) _Bool waitUntilFinished; // @synthesize waitUntilFinished=_waitUntilFinished;
@property(readonly, nonatomic, getter=isIndexing) _Bool indexing; // @synthesize indexing=_indexing;
@property(copy) NSString *currentQuery; // @synthesize currentQuery=_currentQuery;
@property(nonatomic) __weak id <PSSearchModelDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)recursiveDescription;
- (void)invalidateSpecifiersForDataSource:(id)arg1;
- (void)dataSource:(id)arg1 performUpdates:(id)arg2;
- (void)_performSpecifierUpdates:(id)arg1 forSearchEntries:(id)arg2;
@property(readonly, nonatomic) long long observerType;
- (void)searchOperationDidCancel:(id)arg1;
- (void)searchOperationDidFinish:(id)arg1 withResults:(id)arg2;
- (id)searchOperation:(id)arg1 filteredEntriesForEntries:(id)arg2;
- (void)searchOperation:(id)arg1 configureSearchResults:(id)arg2;
- (void)searchOperationDidBegin:(id)arg1;
- (void)_updateWithNewSearchResults:(id)arg1 forQuery:(id)arg2 newSearch:(_Bool)arg3;
- (void)_beginSearchingEntriesForCurrentQuery:(id)arg1 newSearch:(_Bool)arg2;
- (void)_cancelAllSearchOperations;
- (CDUnknownBlockType)_defaultSearchResultsSectionComparator;
- (void)searchForQuery:(id)arg1;
@property(readonly) PSSearchResults *currentResults;
@property(readonly, nonatomic, getter=isLoadingResults) _Bool loadingResults;
- (void)searchIndexOperationDidCancel:(id)arg1;
- (void)searchIndexOperationDidFinish:(id)arg1 searchEntries:(id)arg2;
- (void)searchIndexOperation:(id)arg1 didFindSpecifierDataSource:(id)arg2;
- (void)_finishedIndexingEntry:(id)arg1;
- (void)_updatedEntry:(id)arg1 withChildren:(id)arg2;
- (void)_loadChildrenForEntry:(id)arg1;
- (void)_beginIndexingIfNecessary;
@property(readonly, nonatomic) _Bool hasCompletedIndexing;
- (void)_performDeferredUpdatesForEntry:(id)arg1;
- (void)_reloadSearchEntries:(id)arg1;
- (void)_removeSearchEntries:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 forReload:(_Bool)arg3;
- (void)_removeSearchEntries:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_addSearchEntries:(id)arg1 parent:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)removeRootSpecifier:(id)arg1;
- (void)reloadRootSpecifier:(id)arg1;
- (void)addRootSpecifier:(id)arg1;
- (void)_addSpecifierDataSource:(id)arg1 forSearchEntry:(id)arg2;
- (id)_searchEntriesForSpecifierDataSource:(id)arg1;
- (void)_enumerateDelegatesUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)preheat;
- (id)_rootSpecifiers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

