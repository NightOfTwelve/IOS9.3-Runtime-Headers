//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLPhotoLibrary.h>

@interface PLSharedPhotoLibrary : PLPhotoLibrary
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedPhotoLibrary;
- (void)_assetsdHasNoXPCTransactions:(id)arg1;
- (void)_updateWithInsertedAssetsCount:(unsigned long long)arg1 deletedCount:(unsigned long long)arg2 updatedAssets:(id)arg3;
- (unsigned long long)concurrencyType;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

