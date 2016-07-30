//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCEmailAccountPayloadBase.h>

@class NSNumber, NSString;

@interface MCEmailAccountPayload : MCEmailAccountPayloadBase
{
    NSString *_emailAccountDescription;
    NSString *_emailAccountName;
    NSString *_emailAccountType;
    NSString *_emailAddress;
    NSString *_incomingMailServerAuthentication;
    NSString *_incomingMailServerHostname;
    NSNumber *_incomingMailServerPortNumber;
    _Bool _incomingMailServerUseSSL;
    NSString *_incomingMailServerUsername;
    NSString *_incomingMailServerIMAPPathPrefix;
    NSString *_incomingPassword;
    NSString *_outgoingPassword;
    _Bool _outgoingPasswordSameAsIncomingPassword;
    NSString *_outgoingMailServerAuthentication;
    NSString *_outgoingMailServerHostname;
    NSNumber *_outgoingMailServerPortNumber;
    _Bool _outgoingMailServerUseSSL;
    NSString *_outgoingMailServerUsername;
    NSNumber *_incomingMailServerUseSSLNum;
    NSNumber *_outgoingPasswordSameAsIncomingPasswordNum;
    NSNumber *_outgoingMailServerUseSSLNum;
}

+ (id)profileNameFromAccountTag:(id)arg1;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(readonly, nonatomic) NSNumber *outgoingMailServerUseSSLNum; // @synthesize outgoingMailServerUseSSLNum=_outgoingMailServerUseSSLNum;
@property(readonly, nonatomic) NSNumber *outgoingPasswordSameAsIncomingPasswordNum; // @synthesize outgoingPasswordSameAsIncomingPasswordNum=_outgoingPasswordSameAsIncomingPasswordNum;
@property(readonly, nonatomic) NSNumber *incomingMailServerUseSSLNum; // @synthesize incomingMailServerUseSSLNum=_incomingMailServerUseSSLNum;
@property(readonly, retain, nonatomic) NSString *outgoingMailServerUsername; // @synthesize outgoingMailServerUsername=_outgoingMailServerUsername;
@property(readonly, nonatomic) _Bool outgoingMailServerUseSSL; // @synthesize outgoingMailServerUseSSL=_outgoingMailServerUseSSL;
@property(readonly, retain, nonatomic) NSNumber *outgoingMailServerPortNumber; // @synthesize outgoingMailServerPortNumber=_outgoingMailServerPortNumber;
@property(readonly, retain, nonatomic) NSString *outgoingMailServerHostname; // @synthesize outgoingMailServerHostname=_outgoingMailServerHostname;
@property(readonly, retain, nonatomic) NSString *outgoingMailServerAuthentication; // @synthesize outgoingMailServerAuthentication=_outgoingMailServerAuthentication;
@property(readonly, nonatomic) _Bool outgoingPasswordSameAsIncomingPassword; // @synthesize outgoingPasswordSameAsIncomingPassword=_outgoingPasswordSameAsIncomingPassword;
@property(readonly, retain, nonatomic) NSString *outgoingPassword; // @synthesize outgoingPassword=_outgoingPassword;
@property(readonly, retain, nonatomic) NSString *incomingPassword; // @synthesize incomingPassword=_incomingPassword;
@property(readonly, retain, nonatomic) NSString *incomingMailServerIMAPPathPrefix; // @synthesize incomingMailServerIMAPPathPrefix=_incomingMailServerIMAPPathPrefix;
@property(readonly, retain, nonatomic) NSString *incomingMailServerUsername; // @synthesize incomingMailServerUsername=_incomingMailServerUsername;
@property(readonly, nonatomic) _Bool incomingMailServerUseSSL; // @synthesize incomingMailServerUseSSL=_incomingMailServerUseSSL;
@property(readonly, retain, nonatomic) NSNumber *incomingMailServerPortNumber; // @synthesize incomingMailServerPortNumber=_incomingMailServerPortNumber;
@property(readonly, retain, nonatomic) NSString *incomingMailServerHostname; // @synthesize incomingMailServerHostname=_incomingMailServerHostname;
@property(readonly, retain, nonatomic) NSString *incomingMailServerAuthentication; // @synthesize incomingMailServerAuthentication=_incomingMailServerAuthentication;
@property(readonly, retain, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(readonly, retain, nonatomic) NSString *emailAccountType; // @synthesize emailAccountType=_emailAccountType;
@property(readonly, retain, nonatomic) NSString *emailAccountName; // @synthesize emailAccountName=_emailAccountName;
@property(readonly, retain, nonatomic) NSString *emailAccountDescription; // @synthesize emailAccountDescription=_emailAccountDescription;
- (void).cxx_destruct;
- (_Bool)containsSensitiveUserInformation;
- (id)payloadDescriptionKeyValueSections;
- (id)_authenticationTypeLocalizedString:(id)arg1;
- (id)_emailAccountTypeLocalizedString;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)title;
- (id)description;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

