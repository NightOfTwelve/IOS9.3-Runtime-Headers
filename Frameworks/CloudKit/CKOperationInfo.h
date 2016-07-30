//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKContainerSetupInfo, NSDictionary, NSString;

@interface CKOperationInfo : NSObject <NSSecureCoding>
{
    _Bool _allowsCellularAccess;
    _Bool _preferAnonymousRequests;
    _Bool _allowsBackgroundNetworking;
    _Bool _isLongLived;
    _Bool _isOutstandingOperation;
    NSString *_operationID;
    NSString *_name;
    NSString *_parentSectionID;
    long long _qualityOfService;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    NSString *_authPromptReason;
    CKContainerSetupInfo *_setupInfo;
    NSString *_operationClass;
    NSDictionary *_additionalRequestHTTPHeaders;
    NSString *_deviceIdentifier;
    id _parentOperation;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak id parentOperation; // @synthesize parentOperation=_parentOperation;
@property(retain, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain, nonatomic) NSDictionary *additionalRequestHTTPHeaders; // @synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders;
@property(retain, nonatomic) NSString *operationClass; // @synthesize operationClass=_operationClass;
@property(retain, nonatomic) CKContainerSetupInfo *setupInfo; // @synthesize setupInfo=_setupInfo;
@property(nonatomic) _Bool isOutstandingOperation; // @synthesize isOutstandingOperation=_isOutstandingOperation;
@property(nonatomic) _Bool isLongLived; // @synthesize isLongLived=_isLongLived;
@property(nonatomic) _Bool allowsBackgroundNetworking; // @synthesize allowsBackgroundNetworking=_allowsBackgroundNetworking;
@property(nonatomic) _Bool preferAnonymousRequests; // @synthesize preferAnonymousRequests=_preferAnonymousRequests;
@property(retain, nonatomic) NSString *authPromptReason; // @synthesize authPromptReason=_authPromptReason;
@property(retain, nonatomic) NSString *sourceApplicationSecondaryIdentifier; // @synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier;
@property(retain, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(retain, nonatomic) NSString *parentSectionID; // @synthesize parentSectionID=_parentSectionID;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

