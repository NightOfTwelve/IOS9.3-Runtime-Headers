//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/MFRequestQueue.h>

@class DAMailAccount, NSString;

@interface MFDARequestQueue : MFRequestQueue
{
    DAMailAccount *_account;
    NSString *_folderID;
}

- (void)dealloc;
- (void)processRequests:(id)arg1 consumers:(id)arg2;
- (id)filterRequests:(id)arg1 consumers:(id)arg2 newConsumers:(id *)arg3;
- (id)initWithAccount:(id)arg1 folderID:(id)arg2;

@end

