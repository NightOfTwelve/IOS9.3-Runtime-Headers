//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@protocol _GEONetworkDefaultsServerProxyDelegate;

@protocol _GEONetworkDefaultsServerProxy <NSObject>
@property(nonatomic) id <_GEONetworkDefaultsServerProxyDelegate> delegate;
- (void)updateNetworkDefaults:(void (^)(NSError *))arg1;
@end

