//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDMescalSession;

__attribute__((visibility("hidden")))
@interface CKDMescalSessionOperation : CKDDatabaseOperation
{
    int _serverVersion;
    CKDMescalSession *_mescalSession;
}

@property(retain, nonatomic) CKDMescalSession *mescalSession; // @synthesize mescalSession=_mescalSession;
@property(nonatomic) int serverVersion; // @synthesize serverVersion=_serverVersion;
- (void).cxx_destruct;
- (void)_handleCertRequestFinished:(id)arg1;
- (void)_handleSessionRequestFinished:(id)arg1;
- (void)_exchangeDataAndSendRequest:(id)arg1;
- (void)_handleDataExchanged:(id)arg1 withError:(id)arg2;
- (void)main;
- (_Bool)allowsAnonymousAccount;
- (_Bool)shouldCheckAppVersion;
- (_Bool)requiresTokenRegistration;
- (id)flowControlKey;
- (unsigned long long)activityStart;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

