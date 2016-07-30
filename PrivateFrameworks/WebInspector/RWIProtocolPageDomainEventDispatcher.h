//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface RWIProtocolPageDomainEventDispatcher : NSObject
{
    struct AugmentableInspectorController *_controller;
}

- (void)scriptsEnabledWithIsEnabled:(_Bool)arg1;
- (void)javascriptDialogClosed;
- (void)javascriptDialogOpeningWithMessage:(id)arg1;
- (void)frameClearedScheduledNavigationWithFrameId:(id)arg1;
- (void)frameScheduledNavigationWithFrameId:(id)arg1 delay:(double)arg2;
- (void)frameStoppedLoadingWithFrameId:(id)arg1;
- (void)frameStartedLoadingWithFrameId:(id)arg1;
- (void)frameDetachedWithFrameId:(id)arg1;
- (void)frameNavigatedWithFrame:(id)arg1;
- (void)loadEventFiredWithTimestamp:(double)arg1;
- (void)domContentEventFiredWithTimestamp:(double)arg1;
- (id)initWithController:(struct AugmentableInspectorController *)arg1;

@end

