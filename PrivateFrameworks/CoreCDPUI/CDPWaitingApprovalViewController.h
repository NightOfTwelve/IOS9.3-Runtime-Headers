//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreCDPUI/CDPTableViewController.h>

#import <CoreCDPUI/UITableViewDataSource-Protocol.h>
#import <CoreCDPUI/UITableViewDelegate-Protocol.h>

@class NSString, UIActivityIndicatorView, UIButton, UILabel;
@protocol CDPWaitingApprovalDelegate;

@interface CDPWaitingApprovalViewController : CDPTableViewController <UITableViewDataSource, UITableViewDelegate>
{
    id <CDPWaitingApprovalDelegate> _delegate;
    UIActivityIndicatorView *_spinner;
    UILabel *_waitingLabel;
    UIButton *_escapeButton;
    unsigned long long _escapeOffer;
}

@property(nonatomic) unsigned long long escapeOffer; // @synthesize escapeOffer=_escapeOffer;
- (void).cxx_destruct;
- (void)escapeTapped:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)remoteApprovalSucceeded;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

