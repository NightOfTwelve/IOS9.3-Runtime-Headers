//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEExtensionTunnelProviderHostProtocol-Protocol.h>

@class NEAppRule, NSUUID;

@protocol NEExtensionAppProxyProviderHostProtocol <NEExtensionTunnelProviderHostProtocol>
- (void)openFlowDivertControlSocketWithCompletionHandler:(void (^)(NSFileHandle *))arg1;
- (void)verifyAppWithPID:(long long)arg1 uuid:(NSUUID *)arg2 matchesAppRule:(NEAppRule *)arg3 completionHandler:(void (^)(_Bool))arg4;
@end

