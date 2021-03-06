//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPass.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSSet, NSString, NSURL, PKPaymentApplication;

@interface PKPaymentPass : PKPass <NSCopying, NSSecureCoding>
{
    _Bool _supportsDPANNotifications;
    _Bool _supportsFPANNotifications;
    _Bool _supportsDefaultCardSelection;
    _Bool _supportsSerialNumberBasedProvisioning;
    _Bool _paymentOptionSelectable;
    _Bool _cobranded;
    NSString *_primaryAccountIdentifier;
    NSString *_primaryAccountNumberSuffix;
    NSSet *_associatedApplicationIdentifiers;
    NSString *_sanitizedPrimaryAccountNumber;
    NSSet *_paymentApplications;
    NSSet *_devicePaymentApplications;
    PKPaymentApplication *_devicePrimaryPaymentApplication;
    NSString *_cobrandName;
    NSURL *_transactionServiceURL;
    NSString *_transactionPushTopic;
    NSURL *_messageServiceURL;
    NSString *_messagePushTopic;
    NSString *_appURLScheme;
    NSString *_localizedSuspendedReason;
}

+ (unsigned long long)defaultSettings;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *localizedSuspendedReason; // @synthesize localizedSuspendedReason=_localizedSuspendedReason;
@property(copy, nonatomic) NSString *appURLScheme; // @synthesize appURLScheme=_appURLScheme;
@property(copy, nonatomic) NSString *messagePushTopic; // @synthesize messagePushTopic=_messagePushTopic;
@property(copy, nonatomic) NSURL *messageServiceURL; // @synthesize messageServiceURL=_messageServiceURL;
@property(copy, nonatomic) NSString *transactionPushTopic; // @synthesize transactionPushTopic=_transactionPushTopic;
@property(copy, nonatomic) NSURL *transactionServiceURL; // @synthesize transactionServiceURL=_transactionServiceURL;
@property(copy, nonatomic) NSString *cobrandName; // @synthesize cobrandName=_cobrandName;
@property(nonatomic, getter=isCobranded) _Bool cobranded; // @synthesize cobranded=_cobranded;
@property(retain, nonatomic) PKPaymentApplication *devicePrimaryPaymentApplication; // @synthesize devicePrimaryPaymentApplication=_devicePrimaryPaymentApplication;
@property(copy, nonatomic) NSSet *devicePaymentApplications; // @synthesize devicePaymentApplications=_devicePaymentApplications;
@property(copy, nonatomic) NSSet *paymentApplications; // @synthesize paymentApplications=_paymentApplications;
@property(nonatomic, getter=isPaymentOptionSelectable) _Bool paymentOptionSelectable; // @synthesize paymentOptionSelectable=_paymentOptionSelectable;
@property(nonatomic) _Bool supportsSerialNumberBasedProvisioning; // @synthesize supportsSerialNumberBasedProvisioning=_supportsSerialNumberBasedProvisioning;
@property(nonatomic) _Bool supportsDefaultCardSelection; // @synthesize supportsDefaultCardSelection=_supportsDefaultCardSelection;
@property(nonatomic) _Bool supportsFPANNotifications; // @synthesize supportsFPANNotifications=_supportsFPANNotifications;
@property(nonatomic) _Bool supportsDPANNotifications; // @synthesize supportsDPANNotifications=_supportsDPANNotifications;
@property(copy, nonatomic) NSString *sanitizedPrimaryAccountNumber; // @synthesize sanitizedPrimaryAccountNumber=_sanitizedPrimaryAccountNumber;
@property(copy, nonatomic) NSSet *associatedApplicationIdentifiers; // @synthesize associatedApplicationIdentifiers=_associatedApplicationIdentifiers;
@property(copy, nonatomic) NSString *primaryAccountNumberSuffix; // @synthesize primaryAccountNumberSuffix=_primaryAccountNumberSuffix;
@property(copy, nonatomic) NSString *primaryAccountIdentifier; // @synthesize primaryAccountIdentifier=_primaryAccountIdentifier;
- (id)_localizedSuspendedReasonForAID:(id)arg1;
- (void)sanitizePaymentApplications;
- (void)updateDevicePaymentApplicationsWithSecureElementIdentifier:(id)arg1;
- (unsigned long long)contactlessActivationState;
@property(readonly, nonatomic) unsigned long long activationState;
- (unsigned long long)_activationStateForApplicationState:(long long)arg1;
- (_Bool)hasDevicePaymentApplicationsAvailable;
- (long long)effectiveContactlessPaymentApplicationState;
- (id)sanitizedDeviceAccountNumber;
@property(readonly) NSString *deviceAccountNumberSuffix;
@property(readonly) NSString *deviceAccountIdentifier;
- (_Bool)availableForAutomaticPresentationUsingBeaconContext;
- (_Bool)availableForAutomaticPresentationUsingVASContext;
@property(readonly, nonatomic, getter=isPrivateLabel) _Bool privateLabel;
- (_Bool)isDevicePrimaryPaymentApplicationPersonalized;
- (id)paymentApplicationForAID:(id)arg1;
- (id)paymentApplicationsForSecureElementIdentifier:(id)arg1;
- (id)primaryPaymentApplicationForSecureElementIdentifier:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;

@end

