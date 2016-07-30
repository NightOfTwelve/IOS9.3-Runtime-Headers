//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <MusicCarDisplayUI/UINavigationControllerDelegate-Protocol.h>

@class MCDPCContainer, MCDPCModel, NSArray, NSString;

@interface MCDPlayableContentViewController : UINavigationController <UINavigationControllerDelegate>
{
    MCDPCModel *_model;
    MCDPCContainer *_rootContainer;
    NSArray *_stackToRebuild;
    _Bool _hasBrowsableContent;
    _Bool _hasLoaded;
    NSString *_bundleID;
}

@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)currentStack;
- (void)_populateStack;
- (void)_modelDidInvalidate:(id)arg1;
- (void)_modelWillInvalidate:(id)arg1;
- (void)_updateStackForPlaying:(_Bool)arg1;
- (void)refreshNavigationStackForLaunch;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)_setupView;
- (id)_createRootViewController;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_browsableContentEndpointChangedNotification:(id)arg1;
- (void)_checkAndSetupView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithBundleID:(id)arg1;
- (id)initWithBundleID:(id)arg1 stack:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

