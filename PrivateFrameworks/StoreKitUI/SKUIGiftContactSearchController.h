//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/MFContactsSearchConsumer-Protocol.h>
#import <StoreKitUI/UITableViewDataSource-Protocol.h>
#import <StoreKitUI/UITableViewDelegate-Protocol.h>

@class MFContactsSearchManager, MFContactsSearchResultsModel, NSArray, NSNumber, NSString, UITableView, UIView;
@protocol SKUIGiftContactSearchDelegate;

@interface SKUIGiftContactSearchController : NSObject <MFContactsSearchConsumer, UITableViewDataSource, UITableViewDelegate>
{
    void *_addressBook;
    id <SKUIGiftContactSearchDelegate> _delegate;
    NSArray *_results;
    MFContactsSearchResultsModel *_resultsModel;
    MFContactsSearchManager *_searchManager;
    UIView *_searchResultsView;
    NSNumber *_searchTaskIdentifier;
    UITableView *_tableView;
}

@property(nonatomic) __weak id <SKUIGiftContactSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_tableView;
- (void)_setResults:(id)arg1;
- (void)_finishSearchWithResults:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)finishedTaskWithID:(id)arg1;
- (void)finishedSearchingForType:(unsigned long long)arg1;
- (void)endedNetworkActivity;
- (void)consumeSearchResults:(id)arg1 type:(unsigned long long)arg2 taskID:(id)arg3;
- (void)beganNetworkActivity;
@property(readonly, nonatomic) UIView *searchResultsView;
- (void)searchForText:(id)arg1;
- (void)resetSearch;
@property(readonly, nonatomic) long long numberOfResults;
- (_Bool)cancelSearch;
- (void)dealloc;
- (id)initWithAddressBook:(void *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

