//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FMF/FMFXPCServerProtocol-Protocol.h>

@class FMFHandle, NSString;

@protocol FMFXPCInternalServerProtocol <FMFXPCServerProtocol>
- (oneway void)dumpStateWithCompletion:(void (^)(NSDictionary *))arg1;
- (oneway void)sendIDSPacket:(NSString *)arg1 toHandle:(FMFHandle *)arg2;
- (oneway void)isIn5XXGracePeriodWithCompletion:(void (^)(_Bool))arg1;
- (oneway void)exit5XXGracePeriod;
- (oneway void)crashDaemon;
- (oneway void)setSessionClientBundleId:(NSString *)arg1;
- (oneway void)iCloudAccountNameWithCompletion:(void (^)(NSString *))arg1;
@end

