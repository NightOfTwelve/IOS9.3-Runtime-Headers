//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSArray, NSString, PKPaymentWebServiceBackgroundContext, PKPaymentWebServiceContext;

@protocol NPKPaymentWebServiceTargetDeviceDelegate <NSObject>
- (void)shouldSetNewAuthRandom:(void (^)(_Bool))arg1;
- (void)shouldArchiveWebServiceBackgroundContext:(PKPaymentWebServiceBackgroundContext *)arg1;
- (void)shouldArchiveWebServiceContext:(PKPaymentWebServiceContext *)arg1;
- (void)handlePreferredAID:(NSString *)arg1 forPassWithUniqueID:(NSString *)arg2;
- (void)handleUpdatePaymentPassWithTypeIdentifier:(NSString *)arg1;
- (void)handlePushToken:(NSString *)arg1;
- (void)handlePreconditionNotMetWithUniqueIDs:(NSArray *)arg1 shouldUnregister:(_Bool)arg2;
@end

