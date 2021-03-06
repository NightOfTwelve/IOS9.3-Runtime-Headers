//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TUCallNotificationManager : NSObject
{
    NSMutableArray *_deferredNotificationBlocks;
}

@property(retain, nonatomic) NSMutableArray *deferredNotificationBlocks; // @synthesize deferredNotificationBlocks=_deferredNotificationBlocks;
- (void).cxx_destruct;
- (void)conferenceParticipantCallsChangedForCallCenter:(id)arg1 conferenceParticipantCalls:(id)arg2;
- (void)hasUpdatedAudioChangedForCall:(id)arg1;
- (void)isSendingAudioChangedForCall:(id)arg1;
- (void)destinationIDOrCallerNameFromNetworkChangedForCall:(id)arg1;
- (void)isOnHoldChangedForCall:(id)arg1;
- (void)hasAudioFinishedChangedForCall:(id)arg1;
- (void)hasSentInvitationChangedForCall:(id)arg1;
- (void)needsManualInCallSoundsChangedForCall:(id)arg1;
- (void)hardPauseDigitsStateChangedForCall:(id)arg1;
- (void)voicemailChangedForCall:(id)arg1;
- (void)faceTimeIDStatusChangedForCall:(id)arg1;
- (void)shouldSuppressRingtoneChangedForCall:(id)arg1;
- (void)endpointOnCurrentDeviceChangedForCall:(id)arg1;
- (void)shouldPlayHoldMusicChangedForCall:(id)arg1;
- (void)wantsHoldMusicChangedForCall:(id)arg1;
- (void)managesAudioInterruptionsChangedForCall:(id)arg1;
- (void)connectedChangedForCall:(id)arg1;
- (void)connectingChangedForCall:(id)arg1;
- (void)statusChangedForCall:(id)arg1;
- (void)_postNotificationName:(id)arg1 object:(id)arg2;
- (void)deferNotificationsUntilAfterPerformingBlock:(CDUnknownBlockType)arg1;
- (void)postNotificationsForCallCenter:(id)arg1 afterUpdatesInBlock:(CDUnknownBlockType)arg2;
- (void)postNotificationsForCall:(id)arg1 usingComparisonCall:(id)arg2 afterUpdatesInBlock:(CDUnknownBlockType)arg3;
- (void)postNotificationsForCall:(id)arg1 usingComparisonCall:(id)arg2;
- (void)postNotificationsForCall:(id)arg1 afterUpdatesInBlock:(CDUnknownBlockType)arg2;

@end

