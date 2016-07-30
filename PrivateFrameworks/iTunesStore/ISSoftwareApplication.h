//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStore/SSXPCCoding-Protocol.h>

@class NSArray, NSDate, NSNumber, NSString, SSItemContentRating;

@interface ISSoftwareApplication : NSObject <SSXPCCoding>
{
    NSNumber *_accountDSID;
    NSString *_accountIdentifier;
    _Bool _beta;
    NSString *_bundleIdentifier;
    NSString *_bundleShortVersionString;
    NSString *_bundleVersion;
    NSString *_containerPath;
    SSItemContentRating *_contentRating;
    NSString *_deviceIdentifierForVendor;
    NSNumber *_familyAccountIdentifier;
    _Bool _hasMIDBasedSINF;
    NSNumber *_itemIdentifier;
    NSString *_itemName;
    _Bool _missingRequiredSINF;
    _Bool _placeholder;
    _Bool _profileValidated;
    NSString *_softwareType;
    NSNumber *_storeFrontIdentifier;
    NSString *_vendorName;
    NSNumber *_versionIdentifier;
    NSArray *_versionOrdering;
    NSDate *_receiptExpirationDate;
    unsigned long long _vppStateFlags;
    unsigned long long _removableStatus;
}

@property(readonly, nonatomic) unsigned long long removableStatus; // @synthesize removableStatus=_removableStatus;
@property(readonly, nonatomic) NSDate *receiptExpirationDate; // @synthesize receiptExpirationDate=_receiptExpirationDate;
@property(copy, nonatomic) NSArray *versionOrdering; // @synthesize versionOrdering=_versionOrdering;
@property(retain, nonatomic) NSNumber *versionIdentifier; // @synthesize versionIdentifier=_versionIdentifier;
@property(copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(retain, nonatomic) NSNumber *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
@property(copy, nonatomic) NSString *softwareType; // @synthesize softwareType=_softwareType;
@property(nonatomic, getter=isProfileValidated) _Bool profileValidated; // @synthesize profileValidated=_profileValidated;
@property(nonatomic, getter=isPlaceholder) _Bool placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) _Bool missingRequiredSINF; // @synthesize missingRequiredSINF=_missingRequiredSINF;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(retain, nonatomic) NSNumber *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(nonatomic) _Bool hasMIDBasedSINF; // @synthesize hasMIDBasedSINF=_hasMIDBasedSINF;
@property(copy, nonatomic) NSNumber *familyAccountIdentifier; // @synthesize familyAccountIdentifier=_familyAccountIdentifier;
@property(copy, nonatomic) NSString *deviceIdentifierForVendor; // @synthesize deviceIdentifierForVendor=_deviceIdentifierForVendor;
@property(copy, nonatomic) SSItemContentRating *contentRating; // @synthesize contentRating=_contentRating;
@property(copy, nonatomic) NSString *containerPath; // @synthesize containerPath=_containerPath;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleShortVersionString; // @synthesize bundleShortVersionString=_bundleShortVersionString;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic, getter=isBeta) _Bool beta; // @synthesize beta=_beta;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(retain, nonatomic) NSNumber *accountDSID; // @synthesize accountDSID=_accountDSID;
- (void)_loadMetadataFromContainer:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)ITunesMetadataDictionary;
@property(readonly, nonatomic) unsigned long long vppStateFlags;
- (void)resetVPPStateFlags;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithLaunchServicesApplication:(id)arg1 containerPath:(id)arg2;
- (id)initWithLaunchServicesApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

