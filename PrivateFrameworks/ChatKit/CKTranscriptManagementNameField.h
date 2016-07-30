//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ChatKit/UITextFieldDelegate-Protocol.h>

@class NSString, UILabel, UITextField, _UIBackdropView;
@protocol CKTranscriptManagementNameFieldDelegate;

@interface CKTranscriptManagementNameField : UIView <UITextFieldDelegate>
{
    _Bool _isOverlay;
    _Bool _enabled;
    id <CKTranscriptManagementNameFieldDelegate> _delegate;
    UILabel *_fieldLabel;
    UITextField *_textField;
    UIView *_topSeparator;
    UIView *_bottomSeparator;
    _UIBackdropView *_backdropView;
}

+ (double)preferredHeight;
@property(retain, nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) UIView *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UILabel *fieldLabel; // @synthesize fieldLabel=_fieldLabel;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool isOverlay; // @synthesize isOverlay=_isOverlay;
@property(nonatomic) id <CKTranscriptManagementNameFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void)commitGroupName;
@property(copy, nonatomic) NSString *groupName;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

