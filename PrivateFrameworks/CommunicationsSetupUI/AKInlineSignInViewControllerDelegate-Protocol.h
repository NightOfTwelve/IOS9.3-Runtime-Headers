//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CommunicationsSetupUI/NSObject-Protocol.h>

@class AKAppleIDAuthenticationContext, AKInlineSignInViewController, NSDictionary, NSError, NSMutableDictionary;

@protocol AKInlineSignInViewControllerDelegate <NSObject>

@optional
- (void)signInViewController:(AKInlineSignInViewController *)arg1 shouldContinueWithAuthenticationResults:(NSMutableDictionary *)arg2 error:(NSError *)arg3 forContext:(AKAppleIDAuthenticationContext *)arg4 completion:(void (^)(_Bool))arg5;
- (_Bool)signInViewController:(AKInlineSignInViewController *)arg1 shouldContinueWithAuthenticationResults:(NSMutableDictionary *)arg2 error:(NSError *)arg3 forContext:(AKAppleIDAuthenticationContext *)arg4;
- (void)signInViewController:(AKInlineSignInViewController *)arg1 didAuthenticateWithResults:(NSDictionary *)arg2 error:(NSError *)arg3;
@end

