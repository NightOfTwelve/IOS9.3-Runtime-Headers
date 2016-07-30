//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/_SFToolbar.h>

@class UIBarButtonItem;
@protocol _SFBrowserToolbarDataSource, _SFBrowserToolbarDelegate;

__attribute__((visibility("hidden")))
@interface _SFBrowserToolbar : _SFToolbar
{
    UIBarButtonItem *_backItem;
    UIBarButtonItem *_forwardItem;
    UIBarButtonItem *_openInSafariItem;
    id <_SFBrowserToolbarDelegate> _browserDelegate;
    id <_SFBrowserToolbarDataSource> _dataSource;
    UIBarButtonItem *_actionItem;
}

@property(readonly, nonatomic) UIBarButtonItem *actionItem; // @synthesize actionItem=_actionItem;
@property(nonatomic) __weak id <_SFBrowserToolbarDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <_SFBrowserToolbarDelegate> browserDelegate; // @synthesize browserDelegate=_browserDelegate;
- (void).cxx_destruct;
- (double)URLFieldHorizontalMargin;
- (struct CGRect)popoverPresentationRectForButtonItem:(id)arg1;
- (void)openInSafariButtonPressed;
- (void)addBookmarkButtonPressed;
- (void)actionButtonPressed;
- (void)forwardButtonPressed;
- (void)backButtonPressed;
- (void)updateButtonStates;
- (void)layoutSubviews;
- (_Bool)isMinibar;
- (id)_toolbarItems;

@end

