//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibrary/NSObject-Protocol.h>

@class PHAssetCollection, PHFetchResult;

@protocol PHAssetCollectionDataSource <NSObject>
@property(readonly, nonatomic) PHFetchResult *assetCollectionsFetchResult;
- (PHFetchResult *)assetsInAssetCollection:(PHAssetCollection *)arg1;
@end

