//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSString, PKPaymentApplication;
@protocol PKPaymentDataProviderDelegate;

@protocol PKPaymentDataProvider <NSObject>
@property(nonatomic) id <PKPaymentDataProviderDelegate> delegate;
@property(retain, nonatomic) NSString *defaultPaymentPassIdentifier;
@property(readonly, nonatomic) _Bool secureElementIsProductionSigned;
@property(readonly, nonatomic) NSString *secureElementIdentifier;
@property(readonly, nonatomic) _Bool isDeviceInRestrictedMode;
- (void)setDefaultPaymentApplication:(PKPaymentApplication *)arg1 forPassUniqueIdentifier:(NSString *)arg2 completion:(void (^)(PKPass *))arg3;
- (PKPaymentApplication *)defaultPaymentApplicationForPassUniqueIdentifier:(NSString *)arg1;

@optional
- (void)transactionsForPaymentPassWithUniqueIdentifier:(NSString *)arg1 includingSources:(unsigned long long)arg2 limit:(long long)arg3 completion:(void (^)(NSSet *))arg4;
- (NSString *)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(NSString *)arg1;
@end

