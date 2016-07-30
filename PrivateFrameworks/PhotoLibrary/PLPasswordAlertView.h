//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertView.h>

#import <PhotoLibrary/UIAlertViewDelegate-Protocol.h>

@class NSString, UITextField;

@interface PLPasswordAlertView : UIAlertView <UIAlertViewDelegate>
{
    CDUnknownBlockType _completionHandler;
    UITextField *_accountTextField;
    UITextField *_passwordTextField;
    long long _style;
}

@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(copy, nonatomic) NSString *accountTextFieldPlaceholder;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)initWithStyle:(long long)arg1 title:(id)arg2 message:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

