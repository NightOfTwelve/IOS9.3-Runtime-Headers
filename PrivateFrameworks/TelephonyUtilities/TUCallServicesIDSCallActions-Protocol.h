//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSData, NSString;

@protocol TUCallServicesIDSCallActions <NSObject>
- (void)sendConversationData:(NSData *)arg1 forCallWithUniqueProxyIdentifier:(NSString *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
@end

