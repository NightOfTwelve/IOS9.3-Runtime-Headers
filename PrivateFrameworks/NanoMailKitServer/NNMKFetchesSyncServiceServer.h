//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKFetchesSyncServiceServerDelegate;

@interface NNMKFetchesSyncServiceServer : NNMKSyncServiceEndpoint
{
    id <NNMKFetchesSyncServiceServerDelegate> _delegate;
}

@property(nonatomic) __weak id <NNMKFetchesSyncServiceServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (id)reportComposedMessageSendingProgress:(id)arg1;
- (void)notifyFetchRequestCompleted:(id)arg1;
- (void)notifyOldMessagesAvailable:(id)arg1;
- (void)warnErrorDownloadingContentForMessage:(id)arg1 notificationPriority:(_Bool)arg2 userRequested:(_Bool)arg3;
- (void)warnNeedsUnlock:(id)arg1;
- (void)requestPrepareForFullSync:(id)arg1;
- (id)initWithQueue:(id)arg1;

@end

