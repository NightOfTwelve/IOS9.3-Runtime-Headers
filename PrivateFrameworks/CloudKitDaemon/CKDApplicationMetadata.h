//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDApplicationMetadata : NSObject
{
    _Bool _isCKSystemService;
    _Bool _canMasquerade;
    _Bool _canSetEnvironment;
    _Bool _allowCustomAccounts;
    _Bool _canAccessProtectionData;
    _Bool _canSetDeviceIdentifier;
    _Bool _hasAccessDuringBuddy;
    _Bool _hasLightweightPCS;
    _Bool _hasTCCAuthorization;
    _Bool _allowsPowerNapScheduling;
    NSString *_apsEnvironmentString;
    long long _isApplication;
    NSString *_applicationIdentifier;
    NSString *_clientPrefix;
}

@property(retain, nonatomic) NSString *clientPrefix; // @synthesize clientPrefix=_clientPrefix;
@property(retain, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(nonatomic) _Bool allowsPowerNapScheduling; // @synthesize allowsPowerNapScheduling=_allowsPowerNapScheduling;
@property(nonatomic) _Bool hasTCCAuthorization; // @synthesize hasTCCAuthorization=_hasTCCAuthorization;
@property(nonatomic) _Bool hasLightweightPCS; // @synthesize hasLightweightPCS=_hasLightweightPCS;
@property(nonatomic) _Bool hasAccessDuringBuddy; // @synthesize hasAccessDuringBuddy=_hasAccessDuringBuddy;
@property(nonatomic) _Bool canSetDeviceIdentifier; // @synthesize canSetDeviceIdentifier=_canSetDeviceIdentifier;
@property(nonatomic) _Bool canAccessProtectionData; // @synthesize canAccessProtectionData=_canAccessProtectionData;
@property(nonatomic) _Bool allowCustomAccounts; // @synthesize allowCustomAccounts=_allowCustomAccounts;
@property(nonatomic) _Bool canSetEnvironment; // @synthesize canSetEnvironment=_canSetEnvironment;
@property(nonatomic) _Bool canMasquerade; // @synthesize canMasquerade=_canMasquerade;
@property(nonatomic) _Bool isCKSystemService; // @synthesize isCKSystemService=_isCKSystemService;
@property(nonatomic) long long isApplication; // @synthesize isApplication=_isApplication;
@property(retain, nonatomic) NSString *apsEnvironmentString; // @synthesize apsEnvironmentString=_apsEnvironmentString;
- (void).cxx_destruct;
- (id)init;

@end

