//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUAssetsDataSource.h>

@class NSArray, NSDictionary;
@protocol PUDisplayAssetCollection;

@interface PUCameraTransientAssetsDataSource : PUAssetsDataSource
{
    id <PUDisplayAssetCollection> __transientAssetCollection;
    NSArray *__assetUUIDs;
    NSDictionary *__assetsByUUID;
    NSDictionary *__representativeAssetsByBurstIdentifier;
}

@property(readonly, nonatomic) NSDictionary *_representativeAssetsByBurstIdentifier; // @synthesize _representativeAssetsByBurstIdentifier=__representativeAssetsByBurstIdentifier;
@property(readonly, nonatomic) NSDictionary *_assetsByUUID; // @synthesize _assetsByUUID=__assetsByUUID;
@property(readonly, nonatomic) NSArray *_assetUUIDs; // @synthesize _assetUUIDs=__assetUUIDs;
@property(readonly, nonatomic) id <PUDisplayAssetCollection> _transientAssetCollection; // @synthesize _transientAssetCollection=__transientAssetCollection;
- (void).cxx_destruct;
- (id)_uuidAtIndexPath:(id)arg1;
- (_Bool)isEmpty;
- (id)startingAssetReference;
- (id)convertIndexPath:(id)arg1 fromAssetsDataSource:(id)arg2;
- (id)assetReferenceForAssetReference:(id)arg1;
- (id)assetAtIndexPath:(id)arg1;
- (id)badgeInfoForAssetAtIndexPath:(id)arg1;
- (id)indexPathForAssetCollection:(id)arg1;
- (id)assetCollectionAtIndexPath:(id)arg1;
- (id)indexPathForAssetReference:(id)arg1;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;
- (id)initWithUUIDs:(id)arg1 mapping:(id)arg2 representativeMapping:(id)arg3 inAssetCollection:(id)arg4;

@end

