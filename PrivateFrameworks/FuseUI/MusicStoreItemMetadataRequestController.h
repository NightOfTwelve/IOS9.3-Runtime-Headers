//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLRUDictionary, NSMapTable, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface MusicStoreItemMetadataRequestController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    CPLRUDictionary *_itemIdentifierToCompositeStoreItemMetadataLRUDictionary;
    NSMapTable *_itemIdentifierToCompositeStoreItemMetadataMapTable;
    NSOperationQueue *_operationQueue;
}

+ (unsigned long long)optimalBatchSize;
+ (id)sharedStoreItemMetadataRequestController;
- (void).cxx_destruct;
- (id)_storePlatformKeyProfileForRequestReason:(unsigned long long)arg1;
- (_Bool)_storeItemMetadata:(id)arg1 hasCompleteDataForRequestReason:(unsigned long long)arg2;
- (void)_resolveItemIdentifiers:(id)arg1 withKeyProfile:(id)arg2 storeBagDictionary:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (id)_cachedStoreItemMetadataWithItemIdentifier:(id)arg1;
- (id)_addStoreItemMetadata:(id)arg1 forItemIdentifier:(id)arg2;
- (void)requestStoreItemMetadataForReason:(unsigned long long)arg1 withItemIdentifiers:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (id)cachedResponseForItemIdentifiers:(id)arg1;
- (id)addStoreItemMetadata:(id)arg1;
- (id)init;

@end
