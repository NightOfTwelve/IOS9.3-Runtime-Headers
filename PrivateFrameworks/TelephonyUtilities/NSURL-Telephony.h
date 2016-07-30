//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (Telephony)
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5;
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2;
+ (id)URLWithTelephoneNumber:(id)arg1 promptUser:(_Bool)arg2;
+ (id)URLWithTelephoneNumber:(id)arg1;
+ (id)telephonyURLForTelEmergencyCall;
+ (id)telephonyURLForVoicemail;
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5;
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;
+ (id)telephonyURLWithDestinationID:(id)arg1 promptUser:(_Bool)arg2;
+ (id)telephonyURLWithDestinationID:(id)arg1;
- (id)_mobilePhoneQueryParameters;
- (id)_mobilePhonePathParameters;
- (id)telephonyParameterDictionary;
@property(readonly) _Bool isVoicemailURL;
@property(readonly) _Bool isEmergencyCallURL;
@property(readonly) _Bool isEmergencyURL;
@property(readonly) _Bool isBasebandLogURL;
- (id)webSafeTelephoneURL;
- (_Bool)isWebSafeTelephoneURL;
- (id)numberQualifiedForAddressBook;
- (id)formattedPhoneNumber;
- (_Bool)hasTelephonyScheme;
- (_Bool)isTelephonyPromptURL;
- (_Bool)isTelephonyURL;
@property(readonly) _Bool wasAlreadyAssisted;
@property(readonly) _Bool suppressAssist;
@property(readonly) _Bool forceAssist;
@property(readonly) NSString *originatingUIIdentifier;
@property(readonly) int callService;
@property(readonly) int addressBookUID;
@property(readonly) NSString *phoneNumber;
- (id)_phoneNumberConvertNumbersToLatin:(_Bool)arg1;
@end

