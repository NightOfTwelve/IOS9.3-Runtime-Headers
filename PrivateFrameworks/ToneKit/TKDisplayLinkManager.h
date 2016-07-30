//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMutableSet;

@interface TKDisplayLinkManager : NSObject
{
    _Bool _hasUpdatedTargetActions;
    _Bool _handlingDisplayRefresh;
    CADisplayLink *_storedDisplayLink;
    NSMutableSet *_activeTargetActions;
    NSMutableSet *_updatedTargetActions;
    unsigned long long _warmUpModeRequirementsCount;
}

+ (void)_releaseCurrentDisplayLinkManager;
+ (id)currentDisplayLinkManager;
@property(nonatomic, setter=_setWarmUpModeRequirementsCount:) unsigned long long _warmUpModeRequirementsCount; // @synthesize _warmUpModeRequirementsCount;
@property(nonatomic, getter=_isHandlingDisplayRefresh, setter=_setHandlingDisplayRefresh:) _Bool _handlingDisplayRefresh; // @synthesize _handlingDisplayRefresh;
@property(nonatomic, setter=_setHasUpdatedTargetActions:) _Bool _hasUpdatedTargetActions; // @synthesize _hasUpdatedTargetActions;
@property(retain, nonatomic, setter=_setUpdatedTargetActions:) NSMutableSet *_updatedTargetActions; // @synthesize _updatedTargetActions;
@property(retain, nonatomic, setter=_setActiveTargetActions:) NSMutableSet *_activeTargetActions; // @synthesize _activeTargetActions;
@property(retain, nonatomic, setter=_setStoredDisplayLink:) CADisplayLink *_storedDisplayLink; // @synthesize _storedDisplayLink;
- (void)_displayDidRefresh:(id)arg1;
- (void)endRequiringWarmUpMode;
- (void)beginRequiringWarmUpMode;
@property(readonly, nonatomic, getter=_isWarmUpModeEnabled) _Bool _warmUpModeEnabled;
- (void)_didRemoveLastTargetAction;
- (void)_didAddFirstTargetAction;
- (id)_prepareUpdatedTargetActionsForModification;
- (void)removeTarget:(id)arg1 selector:(SEL)arg2;
- (void)addTarget:(id)arg1 selector:(SEL)arg2 frameInterval:(unsigned long long)arg3;
- (void)addTarget:(id)arg1 selector:(SEL)arg2;
@property(retain, nonatomic, setter=_setDisplayLink:) CADisplayLink *_displayLink;
@property(readonly, nonatomic) unsigned long long frameInterval;
@property(readonly, nonatomic) double timestamp;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic, getter=isPaused) _Bool paused;
- (void)dealloc;
- (id)init;

@end

