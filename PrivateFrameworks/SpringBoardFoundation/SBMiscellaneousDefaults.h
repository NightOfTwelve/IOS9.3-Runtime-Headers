//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSArray, NSString;

@interface SBMiscellaneousDefaults : SBAbstractSpringBoardDefaultDomain
{
}

- (void)_bindAndRegisterDefaults;

// Remaining properties
@property(nonatomic) float backlightLevel; // @dynamic backlightLevel;
@property(retain, nonatomic) NSString *carrierDebuggingAlertVersion; // @dynamic carrierDebuggingAlertVersion;
@property(nonatomic) long long dataPlanActivationPromptCount; // @dynamic dataPlanActivationPromptCount;
@property(readonly, nonatomic) NSArray *fakeDuetTriggers; // @dynamic fakeDuetTriggers;
@property(readonly, nonatomic, getter=isLoggingEnabled) _Bool loggingEnabled; // @dynamic loggingEnabled;
@property(readonly, nonatomic) _Bool showStackshotUIFeedback; // @dynamic showStackshotUIFeedback;

@end
