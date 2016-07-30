//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDAccessory, HMDAccessoryManager, NSArray;

@protocol HMDAccessoryManagerDelegate <NSObject>

@optional
- (void)accessoryManager:(HMDAccessoryManager *)arg1 didRemoveDiscoveredAccessories:(NSArray *)arg2 fromBridgeAccessory:(HMDAccessory *)arg3;
- (void)accessoryManager:(HMDAccessoryManager *)arg1 didAddDiscoveredAccessories:(NSArray *)arg2 toBridgeAccessory:(HMDAccessory *)arg3;
- (void)accessoryManager:(HMDAccessoryManager *)arg1 didRemovePairedAccessories:(NSArray *)arg2 fromBridgeAccessory:(HMDAccessory *)arg3;
- (void)accessoryManager:(HMDAccessoryManager *)arg1 didAddPairedAccessories:(NSArray *)arg2 toBridgeAccessory:(HMDAccessory *)arg3;
- (void)accessoryManager:(HMDAccessoryManager *)arg1 didRemoveNewAccessory:(HMDAccessory *)arg2;
- (void)accessoryManager:(HMDAccessoryManager *)arg1 didFindNewAccessory:(HMDAccessory *)arg2;
@end

