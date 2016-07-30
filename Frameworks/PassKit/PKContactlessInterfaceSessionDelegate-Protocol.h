//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/NSObject-Protocol.h>

@class NSArray, PKContactlessInterfaceSession, PKFieldProperties, PKPaymentApplication, PKPaymentPass, PKPaymentTransaction;

@protocol PKContactlessInterfaceSessionDelegate <NSObject>

@optional
- (void)contactlessInterfaceSessionDidEnterField:(PKContactlessInterfaceSession *)arg1;
- (void)contactlessInterfaceSessionDidSelectValueAddedService:(PKContactlessInterfaceSession *)arg1;
- (void)contactlessInterfaceSessionDidSelectPayment:(PKContactlessInterfaceSession *)arg1;
- (void)contactlessInterfaceSessionDidExitField:(PKContactlessInterfaceSession *)arg1;
- (void)contactlessInterfaceSessionDidEnterField:(PKContactlessInterfaceSession *)arg1 withProperties:(PKFieldProperties *)arg2;
- (void)contactlessInterfaceSession:(PKContactlessInterfaceSession *)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)contactlessInterfaceSession:(PKContactlessInterfaceSession *)arg1 didGeneratePaymentTransaction:(PKPaymentTransaction *)arg2 forPaymentApplication:(PKPaymentApplication *)arg3 paymentPass:(PKPaymentPass *)arg4 andValueAddedServiceTransactions:(NSArray *)arg5 forValueAddedServicePasses:(NSArray *)arg6;
- (void)contactlessInterfaceSessionDidFail:(PKContactlessInterfaceSession *)arg1 forPaymentApplication:(PKPaymentApplication *)arg2 paymentPass:(PKPaymentPass *)arg3 valueAddedServicePasses:(NSArray *)arg4;
- (void)contactlessInterfaceSessionDidTimeout:(PKContactlessInterfaceSession *)arg1 forPaymentApplication:(PKPaymentApplication *)arg2 paymentPass:(PKPaymentPass *)arg3 valueAddedServicePasses:(NSArray *)arg4;
- (void)contactlessInterfaceSessionDidFailTransaction:(PKContactlessInterfaceSession *)arg1 forPaymentApplication:(PKPaymentApplication *)arg2 paymentPass:(PKPaymentPass *)arg3;
@end

