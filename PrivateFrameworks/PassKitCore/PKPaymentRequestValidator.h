//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/PKPaymentValidating-Protocol.h>

@class NSString, PKPaymentRequest;

@interface PKPaymentRequestValidator : NSObject <PKPaymentValidating>
{
    PKPaymentRequest *_request;
}

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)arg1;
- (_Bool)isValidWithError:(id *)arg1;
- (_Bool)_checkTotal:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithPaymentRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

