//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataAccessUI/NSObject-Protocol.h>

@class UIAlertView;

@protocol UIAlertViewDelegate <NSObject>

@optional
- (_Bool)alertViewShouldEnableFirstOtherButton:(UIAlertView *)arg1;
- (void)alertView:(UIAlertView *)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(UIAlertView *)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)didPresentAlertView:(UIAlertView *)arg1;
- (void)willPresentAlertView:(UIAlertView *)arg1;
- (void)alertViewCancel:(UIAlertView *)arg1;
- (void)alertView:(UIAlertView *)arg1 clickedButtonAtIndex:(long long)arg2;
@end

