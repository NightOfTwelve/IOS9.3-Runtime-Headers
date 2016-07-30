//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, NSURLSession, PinnedHTTPSSessionDelegate;

@interface HTTPSASLClientSession : NSObject
{
    NSURL *_authURL;
    NSURLSession *_authSession;
    NSString *_authUsername;
    NSString *_authPassword;
    CDUnknownBlockType _authCompletionHandler;
    struct srp_context *_srpContext;
    NSString *_authenticatedCookie;
    PinnedHTTPSSessionDelegate *_authenticatedSessionDelegate;
    NSString *_authMechanism;
}

@property(retain) NSString *authMechanism; // @synthesize authMechanism=_authMechanism;
@property(retain, nonatomic) PinnedHTTPSSessionDelegate *authenticatedSessionDelegate; // @synthesize authenticatedSessionDelegate=_authenticatedSessionDelegate;
@property(retain, nonatomic) NSString *authenticatedCookie; // @synthesize authenticatedCookie=_authenticatedCookie;
- (void).cxx_destruct;
- (void)restoreCachedAuthenticatedCookie:(id)arg1 andTrustedCertData:(id)arg2;
- (void)_authStep:(id)arg1 state:(int)arg2;
- (void)_completeSRP:(id)arg1;
- (void)_stepSRP:(id)arg1;
- (void)_stepPLAIN:(id)arg1;
- (void)_tryAuthFallbackIfAllowed:(id)arg1;
- (void)_startAuthWithURL:(id)arg1 mechanism:(id)arg2 username:(id)arg3 password:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)addAuthenticationToRequest:(id)arg1;
- (void)startAuthWithURL:(id)arg1 username:(id)arg2 password:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

