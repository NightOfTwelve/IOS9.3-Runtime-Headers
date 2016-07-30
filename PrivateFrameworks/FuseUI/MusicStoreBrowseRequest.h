//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicStoreModelRequest.h>

@class MPUOperationQueue, MusicStoreBrowseResponse, MusicStoreBrowseSection, NSMapTable, NSObject;
@protocol OS_dispatch_group;

@interface MusicStoreBrowseRequest : MusicStoreModelRequest
{
    _Bool _didInitializeTimeoutIntervalAdditions;
    long long _domain;
    _Bool _errorReportingDisabled;
    long long _filteringPolicy;
    MusicStoreBrowseRequest *_individualPendingNestedRequest;
    NSObject<OS_dispatch_group> *_nestedRequestsGroup;
    MPUOperationQueue *_nestedRequestsOperationQueue;
    MusicStoreBrowseSection *_parentSection;
    unsigned long long _requestType;
    NSMapTable *_sectionsToPendingNestedRequests;
    double _timeoutIntervalAdditions;
}

+ (id)allSupportedSectionProperties;
+ (id)allSupportedItemProperties;
- (void).cxx_destruct;
- (void)_produceResponseWithParser:(id)arg1 results:(id)arg2 changeDetails:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_produceRegularResponseWithParser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_produceCarPlayResponseWithParser:(id)arg1 withNestedRequestsForEmptyBrickSectionsInOperationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_nestedRequestsOperationQueue;
@property(retain) MusicStoreBrowseSection *parentSection;
@property long long filteringPolicy;
@property long long domain;
- (double)adjustTimeoutInterval:(double)arg1;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)configurationForLoadingModelDataWithStoreBag:(id)arg1 error:(id *)arg2;
- (void)execute;
- (void)cancel;
- (id)init;

// Remaining properties
@property(retain, nonatomic) MusicStoreBrowseResponse *previousResponse; // @dynamic previousResponse;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @dynamic responseHandler;

@end

