//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSError, PKPaymentSetupNavigationController;

@protocol PKPaymentSetupDelegate <NSObject>
- (void)paymentSetupDidFinish:(PKPaymentSetupNavigationController *)arg1;

@optional
- (void)paymentSetupDidShowEligibilityIssue;
- (void)paymentSetupDidShowError:(NSError *)arg1;
@end

