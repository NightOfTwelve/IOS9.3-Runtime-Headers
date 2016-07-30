//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Contacts/CNObjectValidation-Protocol.h>
#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class NSString;

@interface CNPhoneNumber : NSObject <CNObjectValidation, NSCopying, NSSecureCoding>
{
    NSString *_stringValue;
    struct __CFPhoneNumber *_phoneNumberRef;
}

+ (_Bool)supportsSecureCoding;
+ (id)defaultCountryCode;
+ (id)phoneNumberWithStringValue:(id)arg1;
+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;
+ (id)phoneNumberWithCFPhoneNumberRef:(struct __CFPhoneNumber *)arg1;
@property(readonly, copy, nonatomic) NSString *stringValue;
@property(readonly, copy, nonatomic) NSString *unformattedInternationalStringValue;
@property(readonly, copy, nonatomic) NSString *formattedInternationalStringValue;
@property(readonly, copy, nonatomic) NSString *formattedStringValue;
@property(readonly, copy, nonatomic) NSString *countryCode;
@property(readonly, copy, nonatomic) NSString *digits;
- (_Bool)isValid:(id *)arg1;
@property(readonly, nonatomic) struct __CFPhoneNumber *phoneNumberRef;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isLikePhoneNumber:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStringValue:(id)arg1 countryCode:(id)arg2;
- (id)initWithStringValue:(id)arg1;
- (id)initWithDigits:(id)arg1 countryCode:(id)arg2;
- (id)initWithCFPhoneNumberRef:(struct __CFPhoneNumber *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

