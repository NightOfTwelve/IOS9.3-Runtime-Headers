//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/PKUsageNotificationClientExportedInterface-Protocol.h>

@class PKXPCService;

@interface PKUsageNotificationClient : NSObject <PKUsageNotificationClientExportedInterface>
{
    PKXPCService *_connection;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _paymentHandler;
}

- (void)usedPaymentPassWithUniqueIdentifier:(id)arg1 transactionIdentifier:(id)arg2 info:(id)arg3;
- (void)usedPassFromSource:(long long)arg1 withTypeIdentifier:(id)arg2 info:(id)arg3;
- (void)setPaymentUsageHandler:(CDUnknownBlockType)arg1;
- (void)setPassUsageHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

