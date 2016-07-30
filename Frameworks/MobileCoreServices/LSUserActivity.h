//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MobileCoreServices/SFCompanionAdvertiserDelegate-Protocol.h>

@class LSUserActivityManager, NSData, NSDate, NSDictionary, NSError, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSURL, NSUUID, NSUserActivity, SFCompanionAdvertiser;
@protocol LSUserActivityDelegate;

@interface LSUserActivity : NSObject <SFCompanionAdvertiserDelegate>
{
    LSUserActivityManager *_manager;
    NSMutableDictionary *_userInfo;
    NSMutableDictionary *_frameworkPayload;
    NSString *_title;
    NSURL *_webpageURL;
    id <LSUserActivityDelegate> _delegate;
    SFCompanionAdvertiser *_advertiser;
    SFCompanionAdvertiser *_resumerAdvertiser;
    double _lastSaveTime;
    _Bool _saveScheduled;
    _Bool _createsNewUUIDIfSaved;
    NSError *_decodeUserInfoError;
    _Bool _needsSave;
    _Bool _dirty;
    _Bool _sendToServerPending;
    _Bool _inWillSaveCallback;
    _Bool _supportsContinuationStreams;
    _Bool _forceImmediateSendToServer;
    _Bool _encodedContainsUnsynchronizedCloudDocument;
    _Bool _encodedFileProviderURL;
    double _encodedContainsUnsynchronizedCloudDocumentBackoffInterval;
    NSString *_subtitle;
    NSMutableSet *_keywords;
    NSString *_contentIdentifier;
    NSString *_contentType;
    NSMutableDictionary *_contentAttributes;
    LSUserActivity *_parentUserActivity;
    NSMutableSet *_requiredUserActivityKeys;
    NSString *_teamIdentifier;
    _Bool _eligibleForHandoff;
    _Bool _eligibleForSearch;
    _Bool _eligibleForReminders;
    _Bool _eligibleForPublicIndexing;
    _Bool _canCreateStreams;
    NSString *_typeIdentifier;
    NSString *_dynamicIdentifier;
    NSUUID *_uniqueIdentifier;
    unsigned long long _suggestedActionType;
    NSDate *_lastActivityDate;
    NSDictionary *_options;
    NSData *_streamsData;
}

+ (void)removeDynamicUserActivity:(id)arg1 matching:(id)arg2;
+ (void)addDynamicUserActivity:(id)arg1 matching:(id)arg2;
+ (void)fetchUserActivityWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)userActivityFromUUID:(id)arg1 withError:(id *)arg2;
+ (id)userActivity;
+ (_Bool)userActivityContinuationSupported;
+ (id)suggestedActionOfType:(unsigned long long)arg1;
+ (_Bool)checkWebpageURL:(id)arg1 actionType:(unsigned long long)arg2 throwIfFailed:(_Bool)arg3;
+ (id)allowedWebpageURLSchemes;
+ (void)unregisterForSuggestedActionNudgeOfType:(id)arg1;
+ (id)registerForSuggestedActionNudgeOfType:(unsigned long long)arg1 withOptions:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (_Bool)_currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (_Bool)currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)currentUserActivityUUID;
+ (_Bool)supportsUserActivityAppLinks;
+ (id)_decodeFromString:(id)arg1;
+ (id)_decodeFromScanner:(id)arg1;
+ (id)_encodeKeyAndValueIntoString:(id)arg1 value:(id)arg2;
+ (id)_encodeToString:(id)arg1;
@property _Bool dirty; // @synthesize dirty=_dirty;
@property(readonly) LSUserActivityManager *manager; // @synthesize manager=_manager;
@property _Bool canCreateStreams; // @synthesize canCreateStreams=_canCreateStreams;
@property(copy) NSData *streamsData; // @synthesize streamsData=_streamsData;
@property(copy) NSDictionary *options; // @synthesize options=_options;
@property(copy) NSDate *lastActivityDate; // @synthesize lastActivityDate=_lastActivityDate;
@property(readonly) unsigned long long suggestedActionType; // @synthesize suggestedActionType=_suggestedActionType;
@property(copy) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property id <LSUserActivityDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool supportsContinuationStreams; // @synthesize supportsContinuationStreams=_supportsContinuationStreams;
@property _Bool needsSave; // @synthesize needsSave=_needsSave;
@property(copy) NSURL *webpageURL; // @synthesize webpageURL=_webpageURL;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSString *dynamicIdentifier; // @synthesize dynamicIdentifier=_dynamicIdentifier;
@property(copy) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
@property _Bool encodedFileProviderURL; // @synthesize encodedFileProviderURL=_encodedFileProviderURL;
@property double encodedContainsUnsynchronizedCloudDocumentBackoffInterval; // @synthesize encodedContainsUnsynchronizedCloudDocumentBackoffInterval=_encodedContainsUnsynchronizedCloudDocumentBackoffInterval;
@property _Bool encodedContainsUnsynchronizedCloudDocument; // @synthesize encodedContainsUnsynchronizedCloudDocument=_encodedContainsUnsynchronizedCloudDocument;
@property(retain) NSError *decodeUserInfoError; // @synthesize decodeUserInfoError=_decodeUserInfoError;
@property _Bool createsNewUUIDIfSaved; // @synthesize createsNewUUIDIfSaved=_createsNewUUIDIfSaved;
@property _Bool forceImmediateSendToServer; // @synthesize forceImmediateSendToServer=_forceImmediateSendToServer;
@property _Bool sendToServerPending; // @synthesize sendToServerPending=_sendToServerPending;
@property(copy) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;
- (id)initDynamicActivityWithTypeIdentifier:(id)arg1 dynamicIdentifier:(id)arg2 suggestedActionType:(unsigned long long)arg3 options:(id)arg4;
- (id)initWithTypeIdentifier:(id)arg1 dynamicIdentifier:(id)arg2 options:(id)arg3;
- (id)initWithTypeIdentifier:(id)arg1 suggestedActionType:(unsigned long long)arg2 options:(id)arg3;
- (id)initWithTypeIdentifier:(id)arg1 options:(id)arg2;
- (id)initWithTypeIdentifier:(id)arg1;
- (id)init;
- (id)initWithSuggestedActionType:(unsigned long long)arg1 options:(id)arg2;
- (id)initWithUUID:(id)arg1;
@property(copy) NSURL *webPageURL; // @dynamic webPageURL;
- (id)initWithManager:(id)arg1 userActivityInfo:(id)arg2;
- (id)initWithUserActivityData:(id)arg1 options:(id)arg2;
- (id)initWithUserActivityStrings:(id)arg1 optionalString:(id)arg2 tertiaryData:(id)arg3 options:(id)arg4;

// Remaining properties
@property(getter=isActive) _Bool active;
@property(copy) NSDictionary *activityPayload;
@property(copy, getter=activityPayload, setter=setActivityPayload:) NSDictionary *activityPayloadDictionary;
@property(copy) NSDictionary *contentAttributes;
@property(copy) NSString *contentIdentifier;
@property(copy) NSString *contentType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(getter=isEligibleForHandoff) _Bool eligibleForHandoff;
@property(getter=isEligibleForPublicIndexing) _Bool eligibleForPublicIndexing;
@property(getter=isEligibleForReminders) _Bool eligibleForReminders;
@property(getter=isEligibleForSearch) _Bool eligibleForSearch;
@property(copy) NSDictionary *frameworkPayload;
@property(copy, getter=frameworkPayload, setter=setFrameworkPayload:) NSDictionary *frameworkPayloadDictionary;
@property(readonly) unsigned long long hash;
@property(copy) NSSet *keywords;
@property(copy) NSString *owningBundleIdentifier;
@property(retain) NSUserActivity *parentUserActivity;
@property(copy) NSSet *requiredUserActivityKeys;
@property(copy) NSString *subtitle;
@property(readonly) Class superclass;

@end
