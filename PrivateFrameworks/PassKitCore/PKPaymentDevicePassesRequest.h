//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentDevicePassesRequest : PKPaymentWebServiceRequest
{
    NSString *_updatedSince;
}

@property(copy, nonatomic) NSString *updatedSince; // @synthesize updatedSince=_updatedSince;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3;
- (void)dealloc;

@end

