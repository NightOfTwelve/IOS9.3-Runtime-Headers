//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface SPAssetCacheClientCache : NSObject
{
    NSString *_gizmoCacheIdentifier;
    NSMutableDictionary *_assets;
    NSMutableArray *_keys;
    long long _size;
    unsigned long long _cacheType;
}

@property(nonatomic) unsigned long long cacheType; // @synthesize cacheType=_cacheType;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSMutableArray *keys; // @synthesize keys=_keys;
@property(retain, nonatomic) NSMutableDictionary *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) NSString *gizmoCacheIdentifier; // @synthesize gizmoCacheIdentifier=_gizmoCacheIdentifier;
- (void).cxx_destruct;
- (id)dataForImageWithName:(id)arg1;
- (void)deleteDataForAsset:(id)arg1;
- (_Bool)saveAssetData:(id)arg1 forAsset:(id)arg2;
- (void)clearedCache;
- (id)cachedImages;
- (void)deleteAllAssets;
- (void)deletedAssetWithName:(id)arg1;
- (void)deleteAssetWithName:(id)arg1;
- (void)deleteAsset:(id)arg1;
- (_Bool)checkAvailableSpaceForAssetWithName:(id)arg1 length:(unsigned long long)arg2;
- (void)clearSpaceForAsset:(unsigned long long)arg1;
- (void)addedAssetWithName:(id)arg1;
- (_Bool)addAsset:(id)arg1 withName:(id)arg2 sendImage:(_Bool)arg3;
- (void)syncAssets:(id)arg1;
- (id)pathForAssetDataWithName:(id)arg1;
- (id)cacheDirectory;
- (id)initWithIdentifier:(id)arg1 cacheType:(unsigned long long)arg2;

@end

