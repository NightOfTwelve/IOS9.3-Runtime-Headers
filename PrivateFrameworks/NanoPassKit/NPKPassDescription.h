//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NSCopying-Protocol.h>
#import <NanoPassKit/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSNumber, NSString, PKColor, PKImage, PKNFCPayload, PKPaymentApplication;

@interface NPKPassDescription : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _hasStoredValue;
    _Bool _privateLabel;
    _Bool _cobranded;
    _Bool _deletePending;
    _Bool _hasUserSelectablePaymentApplications;
    PKImage *_logoImage;
    PKImage *_backgroundImage;
    NSString *_uniqueID;
    NSNumber *_groupID;
    NSString *_passTypeIdentifier;
    NSData *_manifestHash;
    long long _style;
    NSDate *_relevantDate;
    NSDate *_ingestionDate;
    PKNFCPayload *_nfcPayload;
    NSData *_completeHash;
    unsigned long long _settings;
    NSString *_logoText;
    PKColor *_backgroundColor;
    PKColor *_foregroundColor;
    PKColor *_labelColor;
    PKPaymentApplication *_devicePrimaryPaymentApplication;
    PKPaymentApplication *_preferredPaymentApplication;
    long long _effectivePaymentApplicationState;
    NSData *_logoImageEncoded;
    NSData *_backgroundImageEncoded;
}

+ (void)setCachingEnabled:(_Bool)arg1;
+ (_Bool)isCachingEnabled;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSData *backgroundImageEncoded; // @synthesize backgroundImageEncoded=_backgroundImageEncoded;
@property(retain, nonatomic) NSData *logoImageEncoded; // @synthesize logoImageEncoded=_logoImageEncoded;
@property(nonatomic) _Bool hasUserSelectablePaymentApplications; // @synthesize hasUserSelectablePaymentApplications=_hasUserSelectablePaymentApplications;
@property(nonatomic) _Bool deletePending; // @synthesize deletePending=_deletePending;
@property(nonatomic, getter=isCobranded) _Bool cobranded; // @synthesize cobranded=_cobranded;
@property(nonatomic, getter=isPrivateLabel) _Bool privateLabel; // @synthesize privateLabel=_privateLabel;
@property(nonatomic) long long effectivePaymentApplicationState; // @synthesize effectivePaymentApplicationState=_effectivePaymentApplicationState;
@property(retain, nonatomic) PKPaymentApplication *preferredPaymentApplication; // @synthesize preferredPaymentApplication=_preferredPaymentApplication;
@property(retain, nonatomic) PKPaymentApplication *devicePrimaryPaymentApplication; // @synthesize devicePrimaryPaymentApplication=_devicePrimaryPaymentApplication;
@property(retain, nonatomic) PKColor *labelColor; // @synthesize labelColor=_labelColor;
@property(retain, nonatomic) PKColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(retain, nonatomic) PKColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *logoText; // @synthesize logoText=_logoText;
@property(nonatomic) unsigned long long settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSData *completeHash; // @synthesize completeHash=_completeHash;
@property(nonatomic) _Bool hasStoredValue; // @synthesize hasStoredValue=_hasStoredValue;
@property(retain, nonatomic) PKNFCPayload *nfcPayload; // @synthesize nfcPayload=_nfcPayload;
@property(retain, nonatomic) NSDate *ingestionDate; // @synthesize ingestionDate=_ingestionDate;
@property(retain, nonatomic) NSDate *relevantDate; // @synthesize relevantDate=_relevantDate;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSData *manifestHash; // @synthesize manifestHash=_manifestHash;
@property(retain, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property(retain, nonatomic) NSNumber *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void).cxx_destruct;
@property(retain, nonatomic) PKImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) PKImage *logoImage; // @synthesize logoImage=_logoImage;
- (id)safeUnarchiveObjectOfClass:(Class)arg1 withData:(id)arg2;
- (void)encodeObject:(id)arg1 asDataInCoder:(id)arg2 withKey:(id)arg3;
- (id)encodeAsData:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPass:(id)arg1;

@end

