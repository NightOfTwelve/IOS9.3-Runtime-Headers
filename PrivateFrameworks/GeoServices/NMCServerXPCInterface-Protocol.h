//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOGizmoXPCInterface-Protocol.h>

@class NSData;

@protocol NMCServerXPCInterface <GEOGizmoXPCInterface>
- (void)invalidateNavigationSessionWithRouteContext:(NSData *)arg1;
- (void)pingForNavigationBarrier:(void (^)(void))arg1;
@end
