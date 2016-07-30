//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GKPlayer, NSMutableArray, NSMutableDictionary;

@interface GKMatchEventQueue : NSObject
{
    GKPlayer *_player;
    GKPlayer *_hostPlayer;
    NSMutableArray *_events;
    NSMutableDictionary *_connectionInfo;
    long long _playerState;
    long long _deferedPlayerState;
    unsigned int _sequenceNumber;
    _Bool _counted;
    _Bool _okToSend;
    _Bool _relayInitiated;
    _Bool _hasInitRelayInfo;
    _Bool _hasUpdateRelayInfo;
}

@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) _Bool hasUpdateRelayInfo; // @synthesize hasUpdateRelayInfo=_hasUpdateRelayInfo;
@property(nonatomic) _Bool hasInitRelayInfo; // @synthesize hasInitRelayInfo=_hasInitRelayInfo;
@property(nonatomic) _Bool relayInitiated; // @synthesize relayInitiated=_relayInitiated;
@property(retain, nonatomic) NSMutableDictionary *connectionInfo; // @synthesize connectionInfo=_connectionInfo;
@property(nonatomic) _Bool okToSend; // @synthesize okToSend=_okToSend;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(nonatomic) long long deferedPlayerState; // @synthesize deferedPlayerState=_deferedPlayerState;
@property(nonatomic) _Bool counted; // @synthesize counted=_counted;
@property(nonatomic) long long playerState; // @synthesize playerState=_playerState;
@property(retain, nonatomic) GKPlayer *hostPlayer; // @synthesize hostPlayer=_hostPlayer;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
- (void)dealloc;
- (id)init;

@end

