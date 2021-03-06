//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, NSUUID, TLAccessQueue;

@interface TKVibratorController : NSObject
{
    TLAccessQueue *_accessQueue;
    NSUUID *_activePlayRequestsIdentifier;
    NSMutableSet *_pendingStopRequestIdentifiers;
}

@property(retain, nonatomic, setter=_setPendingStopRequestIdentifiers:) NSMutableSet *_pendingStopRequestIdentifiers; // @synthesize _pendingStopRequestIdentifiers;
@property(retain, nonatomic, setter=_setActivePlayRequestIdentifier:) NSUUID *_activePlayRequestsIdentifier; // @synthesize _activePlayRequestsIdentifier;
@property(retain, setter=_setAccessQueue:) TLAccessQueue *_accessQueue; // @synthesize _accessQueue;
- (void)_vibrationDidCompleteWithPlayRequestIdentifier:(id)arg1;
- (void)_turnOffIfAppropriate;
- (void)turnOff;
- (void)turnOnWithVibrationPattern:(id)arg1;
@property(readonly, nonatomic) unsigned int _previewVibrationSystemSoundID;
@property(readonly, nonatomic) unsigned long long vibratorState;
- (void)dealloc;
- (id)init;

@end

