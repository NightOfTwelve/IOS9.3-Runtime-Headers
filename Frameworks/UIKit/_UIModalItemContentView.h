//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UITableViewDataSource-Protocol.h>
#import <UIKit/UITableViewDelegate-Protocol.h>
#import <UIKit/UITextFieldDelegate-Protocol.h>

@class NSString, UIButton, UILabel, UITableView, UITextField, UIViewController, _UIModalItem, _UIModalItemsPresentingViewController;

@interface _UIModalItemContentView : UIView <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>
{
    _UIModalItem *_modalItem;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_messageLabel;
    UITextField *_loginTextField;
    UITextField *_passwordTextField;
    UIViewController *_accessoryViewController;
    struct CGSize _accessoryViewControllerSize;
    UIView *_accessoryViewControllerContrainerView;
    struct CGSize _actualViewControllerSize;
    UIButton *_cancelButton;
    UIButton *_defaultButton;
    long long _cancelButtonIndex;
    long long _defaultButtonIndex;
    UITableView *_buttonTable;
    struct CGSize _presentingSize;
    _UIModalItemsPresentingViewController *_presentingViewController;
    struct CGSize _maxSize;
    _Bool _enableFirstOtherButton;
}

@property(readonly, nonatomic) UITableView *buttonTable; // @synthesize buttonTable=_buttonTable;
@property(readonly, nonatomic) long long defaultButtonIndex; // @synthesize defaultButtonIndex=_defaultButtonIndex;
@property(readonly, nonatomic) long long cancelButtonIndex; // @synthesize cancelButtonIndex=_cancelButtonIndex;
@property(retain, nonatomic) UIButton *defaultButton; // @synthesize defaultButton=_defaultButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) UIView *accessoryViewControllerContrainerView; // @synthesize accessoryViewControllerContrainerView=_accessoryViewControllerContrainerView;
@property(readonly, nonatomic) struct CGSize accessoryViewControllerSize; // @synthesize accessoryViewControllerSize=_accessoryViewControllerSize;
@property(readonly, nonatomic) UIViewController *accessoryViewController; // @synthesize accessoryViewController=_accessoryViewController;
@property(readonly, nonatomic) UITextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(readonly, nonatomic) UITextField *loginTextField; // @synthesize loginTextField=_loginTextField;
@property(readonly, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool enableFirstOtherButton; // @synthesize enableFirstOtherButton=_enableFirstOtherButton;
@property(nonatomic) struct CGSize actualViewControllerSize; // @synthesize actualViewControllerSize=_actualViewControllerSize;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) _UIModalItemsPresentingViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) struct CGSize presentingSize; // @synthesize presentingSize=_presentingSize;
@property(nonatomic) _UIModalItem *modalItem; // @synthesize modalItem=_modalItem;
- (void)_reloadButtons;
- (void)textFieldValueDidChange:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)layout;
- (void)_createViewControllerContentView;
- (void)_createAndConfigureTextFieldsForInputStyle:(long long)arg1;
- (void)_createAndConfigureMessageLabel;
- (void)_createAndConfigureSubtitleLabel;
- (void)_createAndConfigureTitleLabel;
- (void)_createAndConfigureButtonTable;
- (void)setModalItem:(id)arg1 skipLayout:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
