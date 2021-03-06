//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUITableViewController.h>

@class NSArray, UIColor;
@protocol SearchUIFeedbackDelegate, SearchUIResult;

@interface SearchUICardViewController : SearchUITableViewController
{
    id <SearchUIResult> _result;
    unsigned long long _style;
    NSArray *_cardSectionViews;
    id <SearchUIFeedbackDelegate> _feedbackDelegate;
}

+ (double)separatorHeight;
+ (id)cardViewControllerForResult:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;
+ (id)cardViewControllerForResult:(id)arg1 style:(unsigned long long)arg2;
@property(nonatomic) __weak id <SearchUIFeedbackDelegate> feedbackDelegate; // @synthesize feedbackDelegate=_feedbackDelegate;
@property(retain) NSArray *cardSectionViews; // @synthesize cardSectionViews=_cardSectionViews;
@property unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) id <SearchUIResult> result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)openPunchout:(id)arg1 fallbackURL:(id)arg2 fromSection:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)fallbackURLForIndexPath:(id)arg1;
- (id)punchoutsForIndexPath:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
@property(readonly) UIColor *textColor;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)setupTableViewInsetsForTraitCollection:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithResult:(id)arg1 style:(unsigned long long)arg2 inline:(_Bool)arg3 feedbackDelegate:(id)arg4;
- (id)initWithResult:(id)arg1 style:(unsigned long long)arg2 inline:(_Bool)arg3;
- (id)initWithResult:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;
- (id)initWithResult:(id)arg1 style:(unsigned long long)arg2;

@end

