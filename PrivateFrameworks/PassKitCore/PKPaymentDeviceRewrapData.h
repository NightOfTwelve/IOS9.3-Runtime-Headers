//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKPaymentDeviceRewrapData : NSObject <NSSecureCoding>
{
    NSString *_deviceIdentifier;
    NSString *_CASDECCCertificate;
    NSString *_CASDRSACertificate;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *CASDRSACertificate; // @synthesize CASDRSACertificate=_CASDRSACertificate;
@property(copy, nonatomic) NSString *CASDECCCertificate; // @synthesize CASDECCCertificate=_CASDECCCertificate;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

