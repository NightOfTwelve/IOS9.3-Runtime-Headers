//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/NSObject-Protocol.h>

@class PKPaymentSetupDisambiguationViewController, PKPaymentSetupProduct;

@protocol PKPaymentSetupDisambiguationViewControllerDelegate <NSObject>
- (void)disambiguationViewControllerSetupLater:(PKPaymentSetupDisambiguationViewController *)arg1;
- (void)disambiguationViewController:(PKPaymentSetupDisambiguationViewController *)arg1 didSelectProduct:(PKPaymentSetupProduct *)arg2;
@end

