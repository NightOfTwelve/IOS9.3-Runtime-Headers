//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDSSimulatorSupport/NSObject-Protocol.h>

@class NSData, NSString, NSUUID;

@protocol IDSSimLocalServerProtocol <NSObject>
- (void)getCurrentConnectedSimulatorUniqueID:(void (^)(NSUUID *))arg1;
- (void)switchToActivePairedDeviceWithSimulatorID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)deletePairedDeviceWithSimulatorID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)addPairedDeviceWithSimulatorID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)transportResumeWithCompletion:(void (^)(NSError *))arg1;
- (void)transportSuspendWithCompletion:(void (^)(NSError *))arg1;
- (void)transportDisconnectWithSimulatorID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)transportConnectWithSimulatorID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)unregisterDataHandlerForService:(NSString *)arg1;
- (void)registerDataHandlerForService:(NSString *)arg1;
- (void)getNetworkSimulationState:(NSString *)arg1 completion:(void (^)(_Bool, _Bool))arg2;
- (void)setNetworkSimulation:(NSString *)arg1 enabled:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
- (unsigned long long)connectionStateForSimulatorID:(NSUUID *)arg1;
- (void)getConnectionState:(void (^)(unsigned long long))arg1;
- (void)sendData:(NSData *)arg1 toDevice:(NSUUID *)arg2 withServiceName:(NSString *)arg3 messageID:(NSString *)arg4 completion:(void (^)(_Bool, NSError *, NSDictionary *))arg5;
- (void)sendData:(NSData *)arg1 withServiceName:(NSString *)arg2 messageID:(NSString *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
@end

