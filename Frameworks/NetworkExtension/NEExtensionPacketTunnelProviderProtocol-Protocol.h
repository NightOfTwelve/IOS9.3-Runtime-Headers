//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEExtensionTunnelProviderProtocol-Protocol.h>

@class NSFileHandle;

@protocol NEExtensionPacketTunnelProviderProtocol <NEExtensionTunnelProviderProtocol>
- (void)fetchVirtualInterfaceTypeWithCompletionHandler:(void (^)(long long))arg1;
- (void)setVirtualInterfaceSocket:(NSFileHandle *)arg1;
@end

