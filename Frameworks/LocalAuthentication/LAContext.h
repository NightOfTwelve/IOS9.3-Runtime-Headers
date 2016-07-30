//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LAClient, NSData, NSNumber, NSString;
@protocol LAPrearmContextXPC;

@interface LAContext : NSObject
{
    LAClient *_client;
    id <LAPrearmContextXPC> _prearmContext;
    NSNumber *_maxBiometryFailures;
    NSData *_evaluatedPolicyDomainState;
    NSData *_externalizedContext;
}

@property(retain, nonatomic) NSData *externalizedContext; // @synthesize externalizedContext=_externalizedContext;
@property(retain, nonatomic) NSData *evaluatedPolicyDomainState; // @synthesize evaluatedPolicyDomainState=_evaluatedPolicyDomainState;
@property(retain, nonatomic) NSNumber *maxBiometryFailures; // @synthesize maxBiometryFailures=_maxBiometryFailures;
- (void).cxx_destruct;
@property(nonatomic) double touchIDAuthenticationAllowableReuseDuration;
@property(retain, nonatomic) NSNumber *touchIDAuthenticationRetryLimit;
@property(nonatomic, getter=isFallbackButtonVisible) _Bool fallbackButtonVisible;
@property(nonatomic, getter=isCancelButtonVisible) _Bool cancelButtonVisible;
@property(copy, nonatomic) NSString *localizedFallbackTitle;
- (void)_setServerPropertyForOption:(long long)arg1 value:(id)arg2;
- (id)_serverPropertyValueForOption:(long long)arg1;
- (void)prearmTouchIDWithReply:(CDUnknownBlockType)arg1;
- (_Bool)isCredentialSet:(long long)arg1;
- (_Bool)setCredential:(id)arg1 type:(long long)arg2;
- (void)evaluateAccessControl:(struct __SecAccessControl *)arg1 operation:(long long)arg2 localizedReason:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)evaluateAccessControl:(struct __SecAccessControl *)arg1 operation:(long long)arg2 options:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)enterPassword:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)canEvaluatePolicy:(long long)arg1 error:(id *)arg2;
- (id)evaluationMechanismsForPolicy:(long long)arg1 error:(id *)arg2;
- (void)evaluatePolicy:(long long)arg1 localizedReason:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)_publicErrorFromInternalError:(id)arg1;
- (id)evaluatePolicy:(long long)arg1 options:(id)arg2 error:(id *)arg3;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (id)initWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2;
- (id)initWithUIDelegate:(id)arg1;
- (id)initWithExternalizedContext:(id)arg1;
- (id)init;

@end

