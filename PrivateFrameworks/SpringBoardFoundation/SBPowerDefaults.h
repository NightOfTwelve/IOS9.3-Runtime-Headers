//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBPowerDefaults : SBAbstractSpringBoardDefaultDomain
{
}

- (void)_bindAndRegisterDefaults;

// Remaining properties
@property(nonatomic) _Bool disableIdleSleep; // @dynamic disableIdleSleep;
@property(nonatomic) _Bool hideACPower; // @dynamic hideACPower;
@property(readonly, nonatomic) _Bool hideLowPowerAlerts; // @dynamic hideLowPowerAlerts;
@property(readonly, nonatomic) long long lowBatteryLevel; // @dynamic lowBatteryLevel;
@property(readonly, nonatomic) _Bool trackPowerEvents; // @dynamic trackPowerEvents;

@end

