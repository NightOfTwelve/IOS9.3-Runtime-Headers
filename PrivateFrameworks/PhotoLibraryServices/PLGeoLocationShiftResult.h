//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface PLGeoLocationShiftResult : NSObject
{
    NSMutableDictionary *_shiftedLocations;
    NSArray *_shiftedAssetIDs;
    _Bool _encounteredErrors;
}

- (void)_setEncounteredErrors:(_Bool)arg1;
@property(nonatomic) _Bool encounteredErrors; // @synthesize encounteredErrors=_encounteredErrors;
- (void)_setCoordinate:(CDStruct_c3b9c2ee)arg1 ForAssetID:(id)arg2;
- (CDStruct_c3b9c2ee)shiftedLocationForAssetID:(id)arg1;
- (_Bool)hasShiftedLocationForAssetID:(id)arg1;
@property(readonly, nonatomic) NSArray *assetIDs;
- (void)dealloc;
- (id)initWithAssetIDs:(id)arg1;

@end

