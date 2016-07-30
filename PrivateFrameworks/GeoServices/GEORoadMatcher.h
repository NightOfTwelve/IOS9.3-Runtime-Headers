//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOMapAccessRestrictions-Protocol.h>

@class GEOMapAccess, NSString;

@interface GEORoadMatcher : NSObject <GEOMapAccessRestrictions>
{
    GEOMapAccess *_map;
}

- (id)_bestSegmentForTile:(id)arg1 location:(id)arg2 transportType:(int)arg3;
- (id)_tilesAround:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2;
- (id)matchLocation:(id)arg1 forTransportType:(int)arg2;
@property(readonly, nonatomic) _Bool allowsNetworkTileLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

