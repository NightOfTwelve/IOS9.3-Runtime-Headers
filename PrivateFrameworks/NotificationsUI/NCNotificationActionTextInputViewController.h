//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NotificationsUI/NCInteractiveNotificationHost-Protocol.h>
#import <NotificationsUI/UITextViewDelegate-Protocol.h>

@class NCViewServiceDescriptor, NSString, UIButton, UITextView, _UITextFieldRoundedRectBackgroundViewNeue;
@protocol NCInteractiveNotificationHostDelegate, NCNotificationActionTextInputDelegate;

@interface NCNotificationActionTextInputViewController : UIViewController <UITextViewDelegate, NCInteractiveNotificationHost>
{
    _Bool _modal;
    double _maximumHeight;
    id <NCInteractiveNotificationHostDelegate> _delegate;
    NSString *_buttonTitle;
    NSString *_actionIdentifier;
    id <NCNotificationActionTextInputDelegate> _textInputDelegate;
    _UITextFieldRoundedRectBackgroundViewNeue *_coverView;
    UITextView *_textEntryView;
    UIButton *_sendButton;
}

@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UITextView *textEntryView; // @synthesize textEntryView=_textEntryView;
@property(retain, nonatomic) _UITextFieldRoundedRectBackgroundViewNeue *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) id <NCNotificationActionTextInputDelegate> textInputDelegate; // @synthesize textInputDelegate=_textInputDelegate;
@property(retain, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(nonatomic) id <NCInteractiveNotificationHostDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double maximumHeight; // @synthesize maximumHeight=_maximumHeight;
@property(nonatomic, getter=isModal) _Bool modal; // @synthesize modal=_modal;
- (void)textViewDidChange:(id)arg1;
- (void)handleActionIdentifier:(id)arg1;
- (void)handleActionAtIndex:(long long)arg1;
- (void)getActionContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)willPresentFromActionIdentifier:(id)arg1;
@property(readonly, retain, nonatomic) NCViewServiceDescriptor *accessoryViewService;
@property(readonly, retain, nonatomic) NCViewServiceDescriptor *inlayViewService;
- (void)interactiveNotificationDidAppear;
- (void)didChangeRevealPercent:(double)arg1;
@property(readonly, nonatomic) _Bool showsKeyboard;
@property(readonly, nonatomic) double bottomOverhangHeight;
- (double)preferredContentHeight;
- (void)_updateForTextChanged;
- (void)_sendButtonTouchUpInside:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

