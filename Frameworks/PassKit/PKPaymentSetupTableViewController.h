//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKit/UITableViewDataSource-Protocol.h>
#import <PassKit/UITableViewDelegate-Protocol.h>

@class NSString, UITableView, UITableViewController, UIView;

@interface PKPaymentSetupTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    UITableViewController *_tableViewController;
    UIView *_containerView;
    long long _style;
    long long _context;
}

@property(readonly, retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long context; // @synthesize context=_context;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)edgesForExtendedLayout;
- (_Bool)extendedLayoutIncludesOpaqueBars;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 context:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

