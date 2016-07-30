//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class WBSSiteMetadataProvider, WBSSiteMetadataRequest, WBSSiteMetadataResponse;
@protocol NSFastEnumeration;

@protocol WBSSiteMetadataProviderDelegate <NSObject>
- (void)siteMetadataProvider:(WBSSiteMetadataProvider *)arg1 cancelRequestsWithTokens:(id <NSFastEnumeration>)arg2;
- (id)siteMetadataProvider:(WBSSiteMetadataProvider *)arg1 registerOneTimeRequest:(WBSSiteMetadataRequest *)arg2 priority:(long long)arg3 responseHandler:(void (^)(WBSSiteMetadataResponse *))arg4;
- (id)siteMetadataProvider:(WBSSiteMetadataProvider *)arg1 registerRequest:(WBSSiteMetadataRequest *)arg2 priority:(long long)arg3 responseHandler:(void (^)(WBSSiteMetadataResponse *))arg4;
- (void)siteMetadataProvider:(WBSSiteMetadataProvider *)arg1 didReceiveResponse:(WBSSiteMetadataResponse *)arg2 forRequest:(WBSSiteMetadataRequest *)arg3;
- (void)siteMetadataProvider:(WBSSiteMetadataProvider *)arg1 didFinishRequestWithoutReceivingNewData:(WBSSiteMetadataRequest *)arg2;
- (void)siteMetadataProvider:(WBSSiteMetadataProvider *)arg1 didReceiveUpdateForRequest:(WBSSiteMetadataRequest *)arg2;
@end

