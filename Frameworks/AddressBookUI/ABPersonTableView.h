//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import <AddressBookUI/ABPersonTabsScrollView-Protocol.h>

@class ABPersonViewControllerHelper, NSString, UIView;
@protocol ABPersonTabsLayoutManager;

@interface ABPersonTableView : UITableView <ABPersonTabsScrollView>
{
    double _minimumBottomInset;
    struct UIEdgeInsets _savedContentInset;
    ABPersonViewControllerHelper *_helper;
    id <ABPersonTabsLayoutManager> _tabsLayoutManager;
}

@property(retain, nonatomic) id <ABPersonTabsLayoutManager> tabsLayoutManager; // @synthesize tabsLayoutManager=_tabsLayoutManager;
@property(nonatomic) ABPersonViewControllerHelper *helper; // @synthesize helper=_helper;
- (void)layoutSubviews;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
@property(nonatomic) double minimumBottomInset;
- (void)setContentOffset:(struct CGPoint)arg1;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(retain, nonatomic) UIView *backgroundView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

