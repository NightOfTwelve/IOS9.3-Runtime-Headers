//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SharedWebCredentials/NSURLSessionDelegate-Protocol.h>
#import <SharedWebCredentials/NSXPCListenerDelegate-Protocol.h>
#import <SharedWebCredentials/SWCXPCServer-Protocol.h>

@class NSMutableArray, NSString, NSURLSession, NSXPCListener;

@interface SWCManager : NSObject <NSURLSessionDelegate, NSXPCListenerDelegate, SWCXPCServer>
{
    NSMutableArray *_database;
    NSXPCListener *_xpcListener;
    NSURLSession *_urlSession;
    NSMutableArray *_netRequests;
    NSMutableArray *_deferredRequests;
    NSMutableArray *_xpcRequests;
    _Bool _started;
    _Bool _addedAllApps;
    double _recheckForceTime;
    _Bool _allowUnsigned;
    unsigned int _maxNetRequests;
    long long _recheckFailureMaxCount;
    long long _recheckFailureSecs;
    long long _recheckSuccessSecs;
    _Bool _recheckVersionChange;
    _Bool _redirects;
    _Bool _verifyEV;
    _Bool _wellKnown;
    _Bool _wildcardDomains;
}

- (void).cxx_destruct;
- (int)_verifyTrust:(struct __SecTrust *)arg1 isFile:(_Bool)arg2;
- (void)_parseServiceDomainString:(id)arg1 legacy:(_Bool)arg2 service:(id *)arg3 domain:(id *)arg4;
- (_Bool)_equivalentDomain:(id)arg1 toDomain:(id)arg2 wildcards:(_Bool)arg3;
- (id)_appEntitlementsByID:(id)arg1;
- (void)show:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)logControl:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)addAllAppsWithReply:(CDUnknownBlockType)arg1;
- (void)setService:(id)arg1 app:(id)arg2 domain:(id)arg3 mask:(unsigned int)arg4 flags:(unsigned int)arg5 reply:(CDUnknownBlockType)arg6;
- (void)setService:(id)arg1 app:(id)arg2 domain:(id)arg3 details:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)removeService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (int)_addService:(id)arg1 app:(id)arg2 domain:(id)arg3;
- (void)addService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)getInfoForService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)checkService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)_connectionInvalidated:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_findAppRequestForTask:(id)arg1;
- (void)_completeAppsRequestForTask:(id)arg1 status:(int)arg2 services:(id)arg3;
- (int)_startAppsRequestForDomain:(id)arg1 wellKnown:(_Bool)arg2 immediate:(_Bool)arg3;
- (int)_startAppsRequestForDomain:(id)arg1;
- (void)_reorderAppLinks:(id)arg1 domain:(id)arg2;
- (void)_recheckStartTimer:(double)arg1;
- (void)_recheckSchedule;
- (void)_recheckPerform;
- (void)_processDeferredNetRequests;
- (void)_sanitizeDatabase;
- (id)_findService:(id)arg1 app:(id)arg2 domain:(id)arg3 wildcards:(_Bool)arg4;
- (id)_findService:(id)arg1 app:(id)arg2 domain:(id)arg3;
- (void)removeBundleID:(id)arg1;
- (void)addBundleID:(id)arg1 preApproved:(_Bool)arg2;
- (void)addBundleID:(id)arg1;
- (void)addAllApps;
- (void)addAllAppleApps;
- (int)_saveDatabase;
- (int)_ensureDatabaseLoaded;
- (void)stop;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

