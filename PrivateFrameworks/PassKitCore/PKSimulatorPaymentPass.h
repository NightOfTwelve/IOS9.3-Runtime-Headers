//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentPass.h>

@class NSDictionary;

@interface PKSimulatorPaymentPass : PKPaymentPass
{
    NSDictionary *_dictionary;
}

- (void)dealloc;
- (id)primaryAccountIdentifier;
- (id)primaryAccountNumberSuffix;
- (id)localizedDescription;
- (id)devicePrimaryPaymentApplication;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;

@end

