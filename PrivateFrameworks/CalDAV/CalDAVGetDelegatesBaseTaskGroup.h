//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CalDAV/CoreDAVTaskDelegate-Protocol.h>
#import <CalDAV/CoreDAVTaskGroupDelegate-Protocol.h>

@class CalDAVGetPrincipalEmailDetailsTaskGroup, NSMutableArray, NSMutableSet, NSSet, NSString, NSURL;

@interface CalDAVGetDelegatesBaseTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate, CoreDAVTaskGroupDelegate>
{
    _Bool _serverSupportsExpandPropertyReport;
    NSURL *_principalURL;
    NSMutableArray *_readPrincipalURLs;
    NSMutableArray *_writePrincipalURLs;
    NSMutableSet *_writeDetails;
    NSMutableSet *_readDetails;
    CalDAVGetPrincipalEmailDetailsTaskGroup *_getPrincipalEmailDetailsTaskGroup;
}

@property(retain, nonatomic) CalDAVGetPrincipalEmailDetailsTaskGroup *getPrincipalEmailDetailsTaskGroup; // @synthesize getPrincipalEmailDetailsTaskGroup=_getPrincipalEmailDetailsTaskGroup;
@property(retain, nonatomic) NSMutableSet *readDetails; // @synthesize readDetails=_readDetails;
@property(retain, nonatomic) NSMutableSet *writeDetails; // @synthesize writeDetails=_writeDetails;
@property(retain, nonatomic) NSMutableArray *writePrincipalURLs; // @synthesize writePrincipalURLs=_writePrincipalURLs;
@property(retain, nonatomic) NSMutableArray *readPrincipalURLs; // @synthesize readPrincipalURLs=_readPrincipalURLs;
@property(retain, nonatomic) NSURL *principalURL; // @synthesize principalURL=_principalURL;
@property(nonatomic) _Bool serverSupportsExpandPropertyReport; // @synthesize serverSupportsExpandPropertyReport=_serverSupportsExpandPropertyReport;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSSet *readWritePrincipalDetails;
@property(readonly, retain, nonatomic) NSSet *readOnlyPrincipalDetails;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (id)_popFromArray:(id)arg1;
- (void)_getPrincipalDetailsForURL:(id)arg1;
- (void)_processDetailsFromMultiStatus:(id)arg1 allowWrite:(_Bool)arg2;
- (id)_mappingsForPrincipalDetails;
- (id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

