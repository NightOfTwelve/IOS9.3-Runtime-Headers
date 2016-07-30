//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HelpKit/HLPHelpTableOfContentViewControllerDelegate-Protocol.h>
#import <HelpKit/HLPHelpTopicViewControllerDelegate-Protocol.h>
#import <HelpKit/HLPReachabilityManagerDelegate-Protocol.h>

@class HLPHelpBookController, HLPHelpLoadingView, HLPHelpLocaleController, HLPHelpTableOfContentViewController, HLPHelpTopicViewController, HLPHelpUsageController, HLPReachabilityManager, NSMutableDictionary, NSString, NSURL;
@protocol HLPHelpViewControllerDelegate;

@interface HLPHelpViewController : UIViewController <HLPHelpTableOfContentViewControllerDelegate, HLPHelpTopicViewControllerDelegate, HLPReachabilityManagerDelegate>
{
    NSURL *_helpBookURL;
    NSMutableDictionary *_localHelpBookNameIDMap;
    HLPHelpUsageController *_usageController;
    HLPHelpLocaleController *_localeListController;
    HLPHelpBookController *_helpBookController;
    HLPHelpTopicViewController *_topicViewController;
    _Bool _hideDoneButton;
    _Bool _displayHelpTopicsOnly;
    _Bool _showTopicViewOnLoad;
    id <HLPHelpViewControllerDelegate> _delegate;
    NSString *_identifier;
    NSString *_version;
    NSString *_subpath;
    NSURL *_localHelpBookFileURL;
    NSString *_selectedHelpTopicID;
    NSString *_selectedHelpTopicName;
    HLPReachabilityManager *_reachabilityManager;
    HLPHelpLoadingView *_loadingView;
    HLPHelpTableOfContentViewController *_tableOfContentViewController;
}

+ (id)helpViewControllerWithTitle:(id)arg1 identifier:(id)arg2 version:(id)arg3 subpath:(id)arg4;
+ (id)helpViewControllerWithTitle:(id)arg1 identifier:(id)arg2 version:(id)arg3;
+ (id)helpViewControllerWithIdentifier:(id)arg1 version:(id)arg2;
+ (id)helpViewControllerWithLocalHelpBookFileURL:(id)arg1;
+ (id)helpViewController;
@property(retain, nonatomic) HLPHelpTableOfContentViewController *tableOfContentViewController; // @synthesize tableOfContentViewController=_tableOfContentViewController;
@property(retain, nonatomic) HLPHelpLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) HLPReachabilityManager *reachabilityManager; // @synthesize reachabilityManager=_reachabilityManager;
@property(copy, nonatomic) NSString *selectedHelpTopicName; // @synthesize selectedHelpTopicName=_selectedHelpTopicName;
@property(copy, nonatomic) NSString *selectedHelpTopicID; // @synthesize selectedHelpTopicID=_selectedHelpTopicID;
@property(copy, nonatomic) NSURL *localHelpBookFileURL; // @synthesize localHelpBookFileURL=_localHelpBookFileURL;
@property(copy, nonatomic) NSString *subpath; // @synthesize subpath=_subpath;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <HLPHelpViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showTopicViewOnLoad; // @synthesize showTopicViewOnLoad=_showTopicViewOnLoad;
@property(nonatomic) _Bool displayHelpTopicsOnly; // @synthesize displayHelpTopicsOnly=_displayHelpTopicsOnly;
@property(nonatomic) _Bool hideDoneButton; // @synthesize hideDoneButton=_hideDoneButton;
- (void).cxx_destruct;
- (void)reachabilityManagerConnectionStatusChanged:(id)arg1 connected:(_Bool)arg2;
- (void)helpTopicViewController:(id)arg1 failToLoadWithError:(id)arg2;
- (void)helpTopicViewController:(id)arg1 selectedHelpTopicItem:(id)arg2;
- (void)helpTopicViewControllerDoneButtonTapped:(id)arg1;
- (void)helpTopicViewControllerTableOfContentButtonTapped:(id)arg1;
- (id)currentHelpTopicItemForTableOfContentViewController:(id)arg1;
- (void)tableOfContentViewController:(id)arg1 showHelpTopicItem:(id)arg2;
- (void)popWelcomeTopicView;
- (void)dismiss;
- (id)topicIDForTopicName:(id)arg1 locale:(id)arg2;
- (void)showHelpTopicItem:(id)arg1 animate:(_Bool)arg2;
- (void)showMessageForError:(id)arg1;
- (void)loadHelpBook;
- (void)setupTableContentViewController;
- (void)updateDoneButton;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

