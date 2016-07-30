//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface CKDMarkNotificationsReadOperation : CKDOperation
{
    CDUnknownBlockType _notificationMarkedRead;
    NSArray *_notificationIDs;
    NSMutableDictionary *_errorByNotificationID;
    NSMutableSet *_successfulNotificationIDs;
}

@property(retain, nonatomic) NSMutableSet *successfulNotificationIDs; // @synthesize successfulNotificationIDs=_successfulNotificationIDs;
@property(retain, nonatomic) NSMutableDictionary *errorByNotificationID; // @synthesize errorByNotificationID=_errorByNotificationID;
@property(retain, nonatomic) NSArray *notificationIDs; // @synthesize notificationIDs=_notificationIDs;
@property(copy, nonatomic) CDUnknownBlockType notificationMarkedRead; // @synthesize notificationMarkedRead=_notificationMarkedRead;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_handleNotificationID:(id)arg1 withResponse:(id)arg2;
- (unsigned long long)activityStart;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end
