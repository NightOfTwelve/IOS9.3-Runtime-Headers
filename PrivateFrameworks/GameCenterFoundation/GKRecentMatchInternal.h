//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKGameRecordInternal, GKPlayerInternal, NSDate;

@interface GKRecentMatchInternal : GKInternalRepresentation
{
    GKPlayerInternal *_player;
    GKGameRecordInternal *_game;
    NSDate *_date;
}

+ (id)secureCodedPropertyKeys;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) GKGameRecordInternal *game; // @synthesize game=_game;
@property(retain, nonatomic) GKPlayerInternal *player; // @synthesize player=_player;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;

@end

