//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CalDAV/CoreDAVPropFindTaskDelegate-Protocol.h>
#import <CalDAV/CoreDAVPropPatchTaskDelegate-Protocol.h>

@class CoreDAVPropFindTask, NSString, NSURL;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVUpdateFreeBusySetTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVPropPatchTaskDelegate>
{
    int _state;
    NSURL *_inboxURL;
    NSURL *_urlToAdd;
    NSString *_suffixToFilterOut;
    CoreDAVPropFindTask *_fetchTask;
}

@property(retain, nonatomic) CoreDAVPropFindTask *fetchTask; // @synthesize fetchTask=_fetchTask;
@property(retain, nonatomic) NSString *suffixToFilterOut; // @synthesize suffixToFilterOut=_suffixToFilterOut;
@property(retain, nonatomic) NSURL *urlToAdd; // @synthesize urlToAdd=_urlToAdd;
@property(retain, nonatomic) NSURL *inboxURL; // @synthesize inboxURL=_inboxURL;
@property(nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)startTaskGroup;
- (void)_startPropPatchWithURLs:(id)arg1;
- (void)_startFetchFreeBusySet;
- (id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 urlToAdd:(id)arg3 suffixToFilterOut:(id)arg4 taskManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <CoreDAVTaskGroupDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

