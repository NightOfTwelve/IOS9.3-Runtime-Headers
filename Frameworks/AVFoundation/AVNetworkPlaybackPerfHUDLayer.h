//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CATextLayer.h>

@class AVPlayer, NSObject;
@protocol OS_dispatch_source;

@interface AVNetworkPlaybackPerfHUDLayer : CATextLayer
{
    NSObject<OS_dispatch_source> *_hudTimer;
    AVPlayer *_player;
    _Bool _showHud;
    int _hudXoffset;
    int _hudYoffset;
    unsigned long long _hudUpdateInterval;
}

+ (id)convertBitrate:(double)arg1;
+ (_Bool)runningAnInternalBuild;
- (void)_hudUpdate;
- (void)setPlayer:(id)arg1;
- (void)dealloc;
- (void)startDispatchTimer;
- (void)getHudSetting;
- (void)setColor:(int)arg1;
- (void)updateBounds:(struct CGRect)arg1;
- (id)init;
- (_Bool)hudEnabled;

@end

