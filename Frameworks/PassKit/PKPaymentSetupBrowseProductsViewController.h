//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/PKPaymentSetupTableViewController.h>

#import <PassKit/UITableViewDelegate-Protocol.h>
#import <PassKit/UITextFieldDelegate-Protocol.h>

@class NSString, PKPaymentSetupBrowseProductsModel, PKPaymentSetupProduct, PKSearchableTableHeaderView;
@protocol PKPaymentSetupBrowseProductsViewControllerDelegate;

@interface PKPaymentSetupBrowseProductsViewController : PKPaymentSetupTableViewController <UITableViewDelegate, UITextFieldDelegate>
{
    PKPaymentSetupBrowseProductsModel *_model;
    PKSearchableTableHeaderView *_headerView;
    id <PKPaymentSetupBrowseProductsViewControllerDelegate> _delegate;
    PKPaymentSetupProduct *_selectedProduct;
}

@property(readonly, retain, nonatomic) PKPaymentSetupProduct *selectedProduct; // @synthesize selectedProduct=_selectedProduct;
@property(nonatomic) id <PKPaymentSetupBrowseProductsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKPaymentSetupBrowseProductsModel *model; // @synthesize model=_model;
- (void)_updateFilterString:(id)arg1 userInteraction:(_Bool)arg2;
- (void)_notifyDelegateDidSelectProduct:(id)arg1;
- (void)_nextTapped:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)clearSelectedProduct;
- (void)clearSearchField;
- (_Bool)_searchUIEnabled;
- (void)_updateSelectedProduct:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_productAtIndexPath:(id)arg1;
- (_Bool)_isUnlikelySection:(long long)arg1;
- (_Bool)_isLikelySection:(long long)arg1;
- (_Bool)_showLikelySection;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithModel:(id)arg1 context:(long long)arg2;
- (id)initWithProducts:(id)arg1 likelyProductIdentifiers:(id)arg2 context:(long long)arg3;
- (id)initWithProducts:(id)arg1 context:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

