//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/FBDisplayManagerObserver-Protocol.h>

@class FBSDisplay, FBSDisplayLayout, FBSDisplayLayoutTransitionContext, NSMutableSet, NSString;
@protocol FBDisplayLayoutDelegate;

@interface FBDisplayLayout : NSObject <FBDisplayManagerObserver>
{
    FBSDisplay *_display;
    unsigned long long _displayType;
    long long _backlightLevel;
    long long _interfaceOrientation;
    FBSDisplayLayout *_currentLayout;
    FBSDisplayLayoutTransitionContext *_currentTransitionContext;
    id <FBDisplayLayoutDelegate> _delegate;
    NSMutableSet *_assertions;
    NSMutableSet *_transitions;
    _Bool _transitionActive;
    int _displayBacklightToken;
}

@property(readonly, retain, nonatomic) FBSDisplayLayoutTransitionContext *currentTransitionContext; // @synthesize currentTransitionContext=_currentTransitionContext;
@property(readonly, nonatomic) id <FBDisplayLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) FBSDisplayLayout *currentLayout; // @synthesize currentLayout=_currentLayout;
@property(readonly, nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(readonly, nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
- (void)displayManager:(id)arg1 didDisconnectDisplay:(id)arg2;
- (void)displayManager:(id)arg1 didConnectDisplay:(id)arg2;
- (void)_updateStateForTransition:(id)arg1;
- (void)_updateTransitionContextForTransition:(id)arg1;
- (void)_sendLayoutIfNotTransitioning;
- (void)_buildAndSendLayout:(_Bool)arg1;
- (void)_updateBacklightLevel:(long long)arg1 notify:(_Bool)arg2;
- (void)_bgQueue_updateBacklightLevelAndNotify:(_Bool)arg1;
- (void)_registerForBacklightUpdates;
- (_Bool)_isReallyTransitioning;
- (void)flush;
- (void)removeElementAssertion:(id)arg1;
- (void)updateElementAssertion:(id)arg1;
- (void)addElementAssertion:(id)arg1;
- (void)endTransition:(id)arg1;
- (void)beginTransition:(id)arg1;
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning;
- (void)dealloc;
- (id)initWithDisplayType:(unsigned long long)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

