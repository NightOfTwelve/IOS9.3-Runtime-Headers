//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface RWIProtocolConsoleDomainEventDispatcher : NSObject
{
    struct AugmentableInspectorController *_controller;
}

- (void)messagesCleared;
- (void)messageRepeatCountUpdatedWithCount:(int)arg1;
- (void)messageAddedWithMessage:(id)arg1;
- (id)initWithController:(struct AugmentableInspectorController *)arg1;

@end

