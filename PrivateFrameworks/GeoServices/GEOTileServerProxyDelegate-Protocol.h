//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GEOTileKeyList, GEOTileServerProxy, NSData, NSDictionary, NSError;

@protocol GEOTileServerProxyDelegate
- (void)proxy:(GEOTileServerProxy *)arg1 didShrinkDiskCacheByAmount:(unsigned long long)arg2;
- (void)proxy:(GEOTileServerProxy *)arg1 canShrinkDiskCacheByAmount:(unsigned long long)arg2;
- (void)proxy:(GEOTileServerProxy *)arg1 willGoToNetworkForTiles:(GEOTileKeyList *)arg2;
- (void)proxy:(GEOTileServerProxy *)arg1 failedToLoadAllPendingTilesWithError:(NSError *)arg2;
- (void)proxy:(GEOTileServerProxy *)arg1 failedToLoadTiles:(GEOTileKeyList *)arg2 error:(NSError *)arg3;
- (void)proxy:(GEOTileServerProxy *)arg1 loadedTile:(NSData *)arg2 forKey:(const struct _GEOTileKey *)arg3 info:(NSDictionary *)arg4;
@end

