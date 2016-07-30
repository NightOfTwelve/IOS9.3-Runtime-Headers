//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface PKNFCPayload : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _requiresCertificate;
    NSString *_message;
    NSData *_encryptionPublicKeyData;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSData *encryptionPublicKeyData; // @synthesize encryptionPublicKeyData=_encryptionPublicKeyData;
@property(nonatomic) _Bool requiresCertificate; // @synthesize requiresCertificate=_requiresCertificate;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToPKNFCPayload:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithNFCDictionary:(id)arg1;

@end

