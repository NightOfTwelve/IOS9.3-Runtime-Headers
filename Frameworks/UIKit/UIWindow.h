//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/NSISEngineDelegate-Protocol.h>

@class CALayer, FBSScene, FBSSceneLayer, NSArray, NSMutableArray, NSMutableSet, NSString, NSUndoManager, UIResponder, UIScreen, UITraitCollection, UIViewController, _UIFocusEngine, _UISystemGestureGateGestureRecognizer, _UIViewControllerNullAnimationTransitionCoordinator, _UIWindowAnimationController;

@interface UIWindow : UIView <NSISEngineDelegate>
{
    _Bool _attachable;
    NSString *_debugName;
    FBSScene *_scene;
    FBSScene *_associatingScene;
    FBSSceneLayer *_associatingSceneLayer;
    CALayer *_rootLayer;
    long long _sceneOrientation;
    _Bool _notedOverlayInsetChange;
    id _delegate;
    double _windowLevel;
    double _windowSublevel;
    id _layerContext;
    UIView *_lastMouseDownView;
    UIView *_lastMouseEnteredView;
    UIResponder *_firstResponder;
    id _fingerInfo;
    id _touchData;
    long long _viewOrientation;
    UIView *_exclusiveTouchView;
    NSUndoManager *_undoManager;
    UIScreen *_screen;
    CALayer *_transformLayer;
    NSMutableArray *_rotationViewControllers;
    UIViewController *_rootViewController;
    NSMutableSet *_subtreeMonitoringViews;
    NSMutableSet *_tintViews;
    id _currentTintView;
    UIView *_rememberedFocusedView;
    struct {
        unsigned int delegateWillRotate:1;
        unsigned int delegateDidRotate:1;
        unsigned int delegateWillAnimateFirstHalf:1;
        unsigned int delegateDidAnimationFirstHalf:1;
        unsigned int delegateWillAnimateSecondHalf:1;
        unsigned int autorotatesToPortrait:1;
        unsigned int autorotatesToPortraitUpsideDown:1;
        unsigned int autorotatesToLandscapeLeft:1;
        unsigned int autorotatesToLandscapeRight:1;
        unsigned int dontBecomeKeyOnOrderFront:1;
        unsigned int output:1;
        unsigned int inGesture:1;
        unsigned int bitsPerComponent:4;
        unsigned int autorotates:1;
        unsigned int isRotating:1;
        unsigned int isUsingOnePartRotationAnimation:1;
        unsigned int isHandlingContentRotation:1;
        unsigned int disableAutorotationCount:4;
        unsigned int needsAutorotationWhenReenabled:1;
        unsigned int forceTwoPartRotationAnimation:1;
        unsigned int orderKeyboardInAfterRotating:1;
        unsigned int roundedCorners:4;
        unsigned int resizesToFullScreen:1;
        unsigned int keepContextInBackground:1;
        unsigned int ignoreSetHidden:1;
        unsigned int forceVisibleOnInit:1;
        unsigned int settingFirstResponder:1;
        unsigned int legacyOrientationChecks:1;
        unsigned int windowResizedToFullScreen:1;
        unsigned int statusBarFollowsOrientation:1;
        unsigned int secure:1;
        unsigned int isMainSceneSized:1;
        unsigned int isSettingFocusedView:1;
        unsigned int debugNeedsFocusItemOverlayUpdate:1;
        unsigned int didSetRestorationIdentifier:1;
    } _windowFlags;
    id _windowController;
    _UISystemGestureGateGestureRecognizer *_systemGestureGateForGestures;
    _UISystemGestureGateGestureRecognizer *_systemGestureGateForTouches;
    UITraitCollection *_traitCollection;
    UITraitCollection *_destinationTraitCollection;
    struct __CFDictionary *_touchMap;
    long long _containedGestureRecognizerMaximumState;
    double _lastTouchTimestamp;
    unsigned int _systemGesturesArePossible:1;
    long long _verticalSizeClassStateRestorationOverride;
    long long _horizontalSizeClassStateRestorationOverride;
    _UIFocusEngine *_focusEngine;
    _Bool _shouldDisableTransformLayerScalingForSnapshotting;
    _Bool __containedGestureRecognizersShouldRespectGestureServerInstructions;
    _Bool __representsSelfHostedContent;
    _Bool __usesLegacySupportedOrientationChecks;
    _Bool ___hostViewUnderlapsStatusBar;
    _Bool __shouldHitTestEntireScreen;
    _UIViewControllerNullAnimationTransitionCoordinator *_traitCollectionChangeTransitionCoordinator;
    NSArray *_windowInternalConstraints;
    NSArray *_rootViewConstraints;
    CDUnknownBlockType _deferredLaunchBlock;
    long long _toWindowOrientation;
    long long _fromWindowOrientation;
    _UIWindowAnimationController *__animationController;
    CDUnknownBlockType __shouldPreventRotationHook;
    long long __deferredLaunchOrientation;
}

+ (void)_adjustMediaTimingForLayerHostView:(id)arg1;
+ (void)_adjustMediaTimingForLayerHost:(id)arg1;
+ (id)_windowWithContextId:(unsigned int)arg1;
+ (_Bool)_isSystemWindow;
+ (_Bool)_isSecure;
+ (id)_findWithDisplayPoint:(struct CGPoint)arg1;
+ (void)_enumerateWindowsIncludingInternalWindows:(_Bool)arg1 onlyVisibleWindows:(_Bool)arg2 allowMutation:(_Bool)arg3 withBlock:(CDUnknownBlockType)arg4;
+ (void)_enumerateWindowsIncludingInternalWindows:(_Bool)arg1 onlyVisibleWindows:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (id)allWindowsIncludingInternalWindows:(_Bool)arg1 onlyVisibleWindows:(_Bool)arg2 forScreen:(id)arg3;
+ (id)allWindowsIncludingInternalWindows:(_Bool)arg1 onlyVisibleWindows:(_Bool)arg2;
+ (id)_statusBarControllingWindow;
+ (id)_hitTestToPoint:(struct CGPoint)arg1 forEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 screen:(id)arg4;
+ (id)_topVisibleWindowPassingTest:(CDUnknownBlockType)arg1;
+ (void *)createIOSurfaceFromScreen:(id)arg1;
+ (void *)createScreenIOSurface;
+ (void *)createIOSurfaceOnScreen:(id)arg1 withContextIds:(const unsigned int *)arg2 count:(unsigned long long)arg3 frame:(struct CGRect)arg4 baseTransform:(struct CGAffineTransform)arg5;
+ (void *)createIOSurfaceOnScreen:(id)arg1 withContextIds:(const unsigned int *)arg2 count:(unsigned long long)arg3 frame:(struct CGRect)arg4 usePurpleGfx:(_Bool)arg5 outTransform:(struct CGAffineTransform *)arg6;
+ (void *)createIOSurfaceWithContextIds:(const unsigned int *)arg1 count:(unsigned long long)arg2 frame:(struct CGRect)arg3 usePurpleGfx:(_Bool)arg4 outTransform:(struct CGAffineTransform *)arg5;
+ (void *)createIOSurfaceWithContextIds:(const unsigned int *)arg1 count:(unsigned long long)arg2 frame:(struct CGRect)arg3 outTransform:(struct CGAffineTransform *)arg4;
+ (void *)createIOSurfaceWithContextIds:(const unsigned int *)arg1 count:(unsigned long long)arg2 frame:(struct CGRect)arg3;
+ (void *)createIOSurfaceWithContextId:(unsigned int)arg1 frame:(struct CGRect)arg2;
+ (void)_noteStatusBarHeightChanged:(double)arg1 oldHeight:(double)arg2 forAutolayoutRootViewsOnly:(_Bool)arg3;
+ (void)_noteStatusBarHeightChanged:(double)arg1 oldHeight:(double)arg2;
+ (void)_unregisterChargedView:(id)arg1;
+ (void)_removeWindowFromStack:(id)arg1;
+ (void)_popKeyWindow:(id)arg1;
+ (void)_popKeyWindow;
+ (void)__popKeyWindow:(id)arg1 findNewKeyWindowIfStackEmpty:(_Bool)arg2;
+ (void)_pushKeyWindow:(id)arg1;
+ (void)_setKeyWindowStackEnabled:(_Bool)arg1;
+ (unsigned long long)_keyWindowStackSize;
+ (void)_clearKeyWindowStack;
+ (void)_synchronizeDrawingWithFence:(id)arg1 preCommitHandler:(CDUnknownBlockType)arg2;
+ (void)_synchronizeDrawingWithFence:(id)arg1;
+ (id)_synchronizedDrawingFence;
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1 withPreCommitHandler:(CDUnknownBlockType)arg2;
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1;
+ (unsigned int)_synchronizeDrawingAcrossProcesses;
+ (void)_synchronizeDrawingWithPreCommitHandler:(CDUnknownBlockType)arg1;
+ (void)_synchronizeDrawing;
+ (void)_setTransformLayerRotationsAreEnabled:(_Bool)arg1;
+ (_Bool)_transformLayerRotationsAreEnabled;
+ (void)_executeDeferredLaunchBlocks;
+ (void)_prepareWindowsForAppResume;
+ (void)_prepareWindowsPassingTestForAppResume:(CDUnknownBlockType)arg1;
+ (void)_prepareWindowsForAppSuspend;
+ (void)_setAllWindowsKeepContextInBackground:(_Bool)arg1;
+ (Class)layerClass;
+ (void)adjustForAccessibilityIfNeeded:(id)arg1;
+ (void)initialize;
+ (id)_externalKeyWindow;
+ (id)keyWindow;
+ (struct CGRect)constrainFrameToScreen:(struct CGRect)arg1;
@property(nonatomic, setter=_setShouldHitTestEntireScreen:) _Bool _shouldHitTestEntireScreen; // @synthesize _shouldHitTestEntireScreen=__shouldHitTestEntireScreen;
@property(nonatomic, setter=_setDeferredLaunchOrientation:) long long _deferredLaunchOrientation; // @synthesize _deferredLaunchOrientation=__deferredLaunchOrientation;
@property(nonatomic, setter=__setHostViewUnderlapsStatusBar:) _Bool __hostViewUnderlapsStatusBar; // @synthesize __hostViewUnderlapsStatusBar=___hostViewUnderlapsStatusBar;
@property(copy, nonatomic, setter=_setShouldPreventRotationHook:) CDUnknownBlockType _shouldPreventRotationHook; // @synthesize _shouldPreventRotationHook=__shouldPreventRotationHook;
@property(retain, nonatomic, getter=_animationController, setter=_setAnimationController:) _UIWindowAnimationController *_animationController; // @synthesize _animationController=__animationController;
@property(nonatomic, getter=_fromWindowOrientation, setter=_setFromWindowOrientation:) long long fromWindowOrientation; // @synthesize fromWindowOrientation=_fromWindowOrientation;
@property(nonatomic, getter=_toWindowOrientation, setter=_setToWindowOrientation:) long long toWindowOrientation; // @synthesize toWindowOrientation=_toWindowOrientation;
@property(readonly, nonatomic) _Bool _usesLegacySupportedOrientationChecks; // @synthesize _usesLegacySupportedOrientationChecks=__usesLegacySupportedOrientationChecks;
@property(nonatomic, getter=_representsSelfHostedContent, setter=_setRepresentsSelfHostedContent:) _Bool _representsSelfHostedContent; // @synthesize _representsSelfHostedContent=__representsSelfHostedContent;
@property(nonatomic, setter=_setContainedGestureRecognizersShouldRespectGestureServerInstructions:) _Bool _containedGestureRecognizersShouldRespectGestureServerInstructions; // @synthesize _containedGestureRecognizersShouldRespectGestureServerInstructions=__containedGestureRecognizersShouldRespectGestureServerInstructions;
@property(copy, nonatomic, setter=_setDeferredLaunchBlock:) CDUnknownBlockType _deferredLaunchBlock; // @synthesize _deferredLaunchBlock;
@property(nonatomic, setter=_setShouldDisableTransformLayerScalingForSnapshotting:) _Bool _shouldDisableTransformLayerScalingForSnapshotting; // @synthesize _shouldDisableTransformLayerScalingForSnapshotting;
@property(copy, nonatomic, setter=_setRootViewConstraints:) NSArray *_rootViewConstraints; // @synthesize _rootViewConstraints;
@property(copy, nonatomic, setter=_setWindowInternalConstraints:) NSArray *_windowInternalConstraints; // @synthesize _windowInternalConstraints;
@property(retain, nonatomic, setter=_setTraitCollectionChangeTransitionCoordinator:) _UIViewControllerNullAnimationTransitionCoordinator *_traitCollectionChangeTransitionCoordinator; // @synthesize _traitCollectionChangeTransitionCoordinator;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void).cxx_destruct;
- (void)setRestorationIdentifier:(id)arg1;
- (id)restorationIdentifier;
- (id)_viewControllersInPreferredFocusedChain;
- (void)updatePreferredFocusedItemIfNeeded;
- (void)setNeedsPreferredFocusedItemUpdate;
- (id)preferredFocusedView;
- (id)preferredFocusedItem;
- (_Bool)isAncestorOfItem:(id)arg1;
- (void)updateFocusIfNeeded;
- (void)setNeedsFocusUpdate;
- (void)_noteEnvironmentNeedsFocusUpdate:(id)arg1 allowsDeferral:(_Bool)arg2;
- (id)_parentFocusEnvironment;
- (id)_focusResponder;
- (_Bool)_appearsInLoupe;
- (_Bool)_shouldCreateContextAsSecure;
- (_Bool)_isSecure;
- (void)_setSecure:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_removeFocusEngine;
- (void)_installFocusEngine;
- (_Bool)_wantsFocusEngine;
- (id)_normalInheritedTintColor;
- (double)_touchSloppinessFactor;
- (_Bool)_canActAsKeyWindowForScreen:(id)arg1;
- (struct __CFDictionary *)_touchMap;
- (void)_setTouchMap:(struct __CFDictionary *)arg1;
- (_Bool)_shouldZoom;
- (void)_moveWithEvent:(id)arg1;
- (void)layoutSubviews;
- (void)_focusedViewDidChange:(id)arg1;
- (id)_focusedView;
- (id)_responderSelectionContainerViewForResponder:(id)arg1;
- (void)_resizeWindowToFullScreenIfNecessary;
- (void)_removeTintView:(id)arg1;
- (void)_addTintView:(id)arg1;
- (void)_updateCurrentTintView;
- (void)_updateCurrentTintViewForPotentialTintView:(id)arg1;
- (void)_tintViewDidChangeAppearance:(id)arg1;
- (void)_updateAppTintView;
- (id)_currentTintView;
- (void)_writeLayerTreeToPath:(id)arg1;
- (id)_subtreeMonitorsForView:(id)arg1;
- (void)_unregisterViewForSubtreeMonitoring:(id)arg1;
- (void)_registerViewForSubtreeMonitoring:(id)arg1;
- (void)removeFromSuperview;
- (void)setKeepContextInBackground:(_Bool)arg1;
- (_Bool)keepContextInBackground;
- (void)setResizesToFullScreen:(_Bool)arg1;
- (_Bool)resizesToFullScreen;
- (id)_touchData;
- (struct CGPoint)_transformDisplayToWindowCoordinates:(struct CGPoint)arg1;
- (_Bool)_canAffectStatusBarAppearance;
- (void)_didSnapshot;
- (void)_willSnapshot;
- (_Bool)_includeInDefaultImageSnapshot;
- (_Bool)isInternalWindow;
- (id)_responderWindow;
- (id)_window;
- (_Bool)_isInAWindow;
- (id)_targetWindowForPathIndex:(long long)arg1 atPoint:(struct CGPoint)arg2 forEvent:(id)arg3 windowServerHitTestWindow:(id)arg4 onScreen:(id)arg5;
- (void)_updateIsSceneSizedFlag;
- (void)_sceneBoundsDidChange;
- (_Bool)_resizeWindowFrameToSceneBoundsIfNecessary;
- (struct CGPoint)_clampPointToScreenJail:(struct CGPoint)arg1;
- (struct CGPoint)_convertDoublePointFromSceneReferenceSpace:(struct CGPoint)arg1;
- (struct CGPoint)_convertDoublePointToSceneReferenceSpace:(struct CGPoint)arg1;
- (struct CGRect)_convertRectToSceneReferenceSpace:(struct CGRect)arg1;
- (struct CGRect)_convertRectFromSceneReferenceSpace:(struct CGRect)arg1;
- (struct CGPoint)_convertPointToSceneReferenceSpace:(struct CGPoint)arg1;
- (struct CGPoint)_convertPointFromSceneReferenceSpace:(struct CGPoint)arg1;
- (struct CGRect)_sceneReferenceBounds;
- (long long)_sceneOrientation;
- (struct CGRect)_sceneBounds;
- (_Bool)_isHostedInAnotherProcess;
- (_Bool)_usesWindowServerHitTesting;
- (_Bool)_alwaysGetsContexts;
- (_Bool)_isWindowServerHostingManaged;
- (void *)createIOSurface;
- (void *)createIOSurfaceWithFrame:(struct CGRect)arg1;
- (_Bool)_isStatusBarWindow;
- (_Bool)_clearMouseView;
- (void)_setMouseEnteredView:(id)arg1;
- (void)_setMouseDownView:(id)arg1 withEvent:(struct __GSEvent *)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (id)undoManager;
- (_Bool)_needsShakesWhenInactive;
- (id)_deepestUnambiguousResponder;
- (_Bool)_supportsBecomeFirstResponderWhenPossible;
- (_Bool)_becomeFirstResponderWhenPossible;
- (_Bool)becomeFirstResponder;
- (id)_firstResponder;
- (id)firstResponder;
- (_Bool)_isSettingFirstResponder;
- (void)_setIsSettingFirstResponder:(_Bool)arg1;
- (void)_setFirstResponder:(id)arg1;
@property(retain, nonatomic, setter=_setFocusEngine:) _UIFocusEngine *_focusEngine;
- (void)_unregisterScrollToTopView:(id)arg1;
- (void)_registerScrollToTopView:(id)arg1;
- (id)_registeredScrollToTopViews;
- (void)_unregisterChargedView:(id)arg1;
- (void)_registerChargedView:(id)arg1;
- (id)contentView;
- (void)makeKeyAndVisible;
- (void)resignKeyWindow;
- (void)becomeKeyWindow;
- (void)_endKeyWindowDeferral;
- (void)_beginKeyWindowDeferral;
- (_Bool)_isKeyWindowForDeferral;
- (id)_deferralPropertiesWithContextID:(unsigned int)arg1;
- (void)_makeKeyWindowIgnoringOldKeyWindow:(_Bool)arg1;
- (void)_makeExternalKeyWindow;
- (void)makeKeyWindow;
- (void)_resignKeyWindowStatus;
@property(readonly, nonatomic, getter=isKeyWindow) _Bool keyWindow;
@property(nonatomic) double windowLevel;
- (double)_adjustedWindowLevelFromLevel:(double)arg1;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)_clearSizeClassesForStateRestoration;
- (void)_setStateRestorationVerticalSizeClass:(long long)arg1 horizontalSizeClass:(long long)arg2;
- (void)_propagateTraitCollectionChangedForStateRestoration;
- (void)_willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_willTransitionToVirtualHorizontalSizeClass:(long long)arg1 virtualVerticalSizeClass:(long long)arg2;
- (void)_screenWillTransitionToTraitCollection:(id)arg1;
- (_Bool)_shouldPropigateTraitCollectionChanges;
- (void)_willChangeToSize:(struct CGSize)arg1 orientation:(long long)arg2 screen:(id)arg3 withTransitionCoordinator:(id)arg4;
@property(readonly, nonatomic) CDStruct_d58201db __sizeClassPair;
- (void)_updateWindowTraitsAndNotify:(_Bool)arg1;
- (id)_traitCollectionForSize:(struct CGSize)arg1 screenCollection:(id)arg2 virtualHorizontalSizeClass:(long long)arg3 virtualVerticalSizeClass:(long long)arg4;
- (id)_traitCollectionForSize:(struct CGSize)arg1 screenCollection:(id)arg2;
- (id)_traitCollectionForSize:(struct CGSize)arg1 screen:(id)arg2;
- (id)_traitCollectionWhenRotated;
- (void)_updateWindowTraits;
- (id)traitCollection;
- (_Bool)_shouldParticipateInVirtualResizing;
@property(retain, nonatomic) UIScreen *screen;
- (_Bool)_shouldPrepareScreenForWindow;
- (void)_createContextIfNecessaryForCurrentApplicationState;
- (id)_screen;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)bitsPerComponent;
- (int)windowOutput;
- (void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2;
- (_Bool)_shouldDelayTouchForSystemGestures:(id)arg1;
- (void)_setSystemGestureRecognitionIsPossible:(_Bool)arg1 andTouchesAreCancelled:(_Bool)arg2;
- (_Bool)_systemGestureRecognitionIsPossible;
- (void)_createSystemGestureGateGestureRecognizerIfNeeded;
- (id)_appearanceContainer;
- (void)_setWindowInterfaceOrientation:(long long)arg1;
- (long long)_windowInterfaceOrientation;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)interfaceOrientation;
- (_Bool)isUsingOnePartRotationAnimation;
- (_Bool)isRotating;
- (_Bool)autorotates;
- (void)_finishedFullRotation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_finishedFullRotation:(id)arg1 finished:(id)arg2 context:(id)arg3 skipNotification:(_Bool)arg4;
- (void)_finishedFirstHalfRotation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 updateStatusBar:(_Bool)arg3 duration:(double)arg4 force:(_Bool)arg5 isRotating:(_Bool)arg6;
- (void)_rotateWindowToOrientation:(long long)arg1 updateStatusBar:(_Bool)arg2 duration:(double)arg3 skipCallbacks:(_Bool)arg4;
- (_Bool)_shouldResizeWithScene;
- (void)_setRotatableViewOrientation:(long long)arg1 duration:(double)arg2 force:(_Bool)arg3;
- (void)_setRotatableViewOrientation:(long long)arg1 updateStatusBar:(_Bool)arg2 duration:(double)arg3 force:(_Bool)arg4;
- (void)_updateStatusBarToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_updateStatusBarToInterfaceOrientation:(long long)arg1 duration:(double)arg2 animation:(int)arg3;
- (void)_forceTwoPartRotationAnimation:(_Bool)arg1;
- (void)_setRotatableViewOrientation:(long long)arg1 updateStatusBar:(_Bool)arg2 duration:(double)arg3;
- (void)_setRotatableViewOrientation:(long long)arg1 duration:(double)arg2;
- (void)setAutorotates:(_Bool)arg1 forceUpdateInterfaceOrientation:(_Bool)arg2;
- (void)setAutorotates:(_Bool)arg1;
- (void)endDisablingInterfaceAutorotation;
- (void)endDisablingInterfaceAutorotationAnimated:(_Bool)arg1;
- (_Bool)isInterfaceAutorotationDisabled;
- (void)beginDisablingInterfaceAutorotation;
- (void)_updateInterfaceOrientationFromDeviceOrientation:(_Bool)arg1;
- (void)_updateInterfaceOrientationFromDeviceOrientationIfRotationEnabled:(_Bool)arg1;
- (void)_updateInterfaceOrientationFromDeviceOrientation;
- (void)_updateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 force:(_Bool)arg3;
- (void)_updateToInterfaceOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_handleDeviceOrientationChange:(id)arg1;
- (void)_adjustSizeClassesAndResizeWindowToFrame:(struct CGRect)arg1;
- (_Bool)_shouldAdjustSizeClassesAndResizeWindow;
- (void)_rotateToBounds:(struct CGRect)arg1 withAnimator:(id)arg2 transitionContext:(id)arg3;
- (_Bool)_guardSizeTransitionFromAnimations;
- (void)_handleStatusBarOrientationChange:(id)arg1;
- (void)_setWindowControlsStatusBarOrientation:(_Bool)arg1;
- (_Bool)_windowControlsStatusBarOrientation;
- (_Bool)_isAnyWindowRotating;
- (_Bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1 checkForDismissal:(_Bool)arg2 isRotationDisabled:(_Bool *)arg3;
- (unsigned long long)_supportedInterfaceOrientationsForRootViewController;
- (_Bool)_legacyShouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)_clearPendingKeyboardChanges;
- (void)_removeRotationViewController:(id)arg1;
- (void)_addRotationViewController:(id)arg1;
- (id)__clientsForRotationCallbacks;
- (id)_clientsForRotation;
- (id)_rotationViewControllers;
- (void)_slideFooterFromOrientation:(long long)arg1 toOrientation:(long long)arg2 startSnapshot:(id)arg3 endSnapshot:(id)arg4 duration:(double)arg5;
- (void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(long long)arg3;
- (void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(_Bool)arg3 forInterfaceOrientation:(long long)arg4;
- (_Bool)_canPromoteFromKeyWindowStack;
- (_Bool)_canBecomeKeyWindow;
- (void)setBecomeKeyOnOrderFront:(_Bool)arg1;
- (double)level;
- (void)setLevel:(double)arg1;
- (struct CGPoint)convertDeviceToWindow:(struct CGPoint)arg1;
- (struct CGPoint)convertWindowToDevice:(struct CGPoint)arg1;
- (id)_rootForKeyResponderCycle;
- (_Bool)_containedInAbsoluteResponderChain;
- (id)nextResponder;
- (void)_endModalSession;
- (void)_beginModalSession;
- (id)_exclusiveTouchView;
- (void)_setExclusiveTouchView:(id)arg1;
- (double)_convertVisualAltitude:(double)arg1 toWindow:(id)arg2;
- (double)_convertVisualAltitude:(double)arg1 fromWindow:(id)arg2;
- (struct CGPoint)_convertOffsetFromSceneReferenceSpace:(struct CGPoint)arg1;
- (struct CGPoint)_convertOffsetToSceneReferenceSpace:(struct CGPoint)arg1;
- (struct CGPoint)_convertOffset:(struct CGPoint)arg1 fromWindow:(id)arg2;
- (struct CGPoint)_convertOffset:(struct CGPoint)arg1 toWindow:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromWindow:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toWindow:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromWindow:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toWindow:(id)arg2;
- (_Bool)_disableAutomaticKeyboardUI;
- (_Bool)_disableAutomaticKeyboardBehavior;
- (void)sendEvent:(id)arg1;
- (void)_sendButtonsForEvent:(id)arg1;
- (void)_sendButtonGesturesForEvent:(id)arg1;
- (void)_sendTouchesForEvent:(id)arg1;
- (void)_fadeCalloutBarIfNeededForTouchInView:(id)arg1;
- (_Bool)_touchesInsideShouldHideCalloutBarForViewHierarchy:(id)arg1;
- (void)_sendGesturesForEvent:(id)arg1;
- (void)_scrollToTopViewsUnderScreenPointIfNecessary:(struct CGPoint)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (_Bool)_isScrollingEnabledForView:(id)arg1;
- (id)_targetForStolenStatusBarTouchesAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2 excludingWindow:(id)arg3;
- (struct CGPoint)warpPoint:(struct CGPoint)arg1;
- (double)_chargeMultiplicationFactor;
- (_Bool)_areOverlayInsetsValid:(struct UIEdgeInsets)arg1;
- (void)_noteOverlayInsetsDidChange;
- (struct UIEdgeInsets)_overlayInsets;
- (void)makeKey:(id)arg1;
- (void)orderOut:(id)arg1;
- (void)_orderFrontWithoutMakingKey;
- (void)orderFront:(id)arg1;
- (void)makeKeyAndOrderFront:(id)arg1;
@property(nonatomic, setter=_setLegacyOrientationChecks:) _Bool _legacyOrientationChecks;
- (void)setHidden:(_Bool)arg1;
- (void)_setHidden:(_Bool)arg1 forced:(_Bool)arg2;
- (void)addRootViewControllerViewIfPossible;
- (id)_rootViewConstraintsUpdateIfNecessaryForView:(id)arg1;
- (void)_updateRootViewConstraintsForInterfaceOrientationAndStatusBarHeight;
- (unsigned int)_contextId;
- (_Bool)_disableGroupOpacity;
- (_Bool)_ignoresHitTest;
- (void)_updateLayerOrderingAndSetLayerHidden:(_Bool)arg1;
- (_Bool)_hasContext;
- (void)_destroyContext;
- (void)_configureContextOptions:(id)arg1;
- (_Bool)_shouldUseRemoteContext;
- (void)_createContextAttached:(_Bool)arg1;
- (void)_createContext;
- (void)_updateTransformLayer;
- (void)_configureRootLayer:(id)arg1 transformLayer:(id)arg2;
- (_Bool)_transformLayerIncludesScreenRotation;
- (_Bool)_windowOwnsInterfaceOrientation;
- (struct CGAffineTransform)_viewTransformForInterfaceOrientation:(long long)arg1;
- (long long)_orientationForRootTransform;
- (long long)_orientationForViewTransform;
- (_Bool)_isConstrainedByScreenJail;
- (void)_transformLayerShouldMaskToBounds:(_Bool)arg1;
- (void)_updateTransformLayerSizeForClassicPresentation;
- (void)_updateTransformLayerForClassicPresentation;
- (id)representation;
- (void)setContentView:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)_initWithOrientation:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentRect:(struct CGRect)arg1;
- (id)_initWithFrame:(struct CGRect)arg1 debugName:(id)arg2 scene:(id)arg3 attached:(_Bool)arg4;
- (id)_initWithFrame:(struct CGRect)arg1 debugName:(id)arg2 attached:(_Bool)arg3;
- (id)_initWithFrame:(struct CGRect)arg1 debugName:(id)arg2;
- (id)_initWithFrame:(struct CGRect)arg1 attached:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;
- (void)_commonInitAttachedWindow:(_Bool)arg1 debugName:(id)arg2 scene:(id)arg3;
- (id)_associatingSceneLayer;
- (void)_setAssociatingScene:(id)arg1;
- (id)_associatingScene;
- (void)_setScene:(id)arg1;
- (id)_scene;
- (void)_setAttachedToScene:(_Bool)arg1;
- (void)_configureSceneAndLayerIfNecessary;
- (void)_detachSceneLayer;
- (void)_attachSceneLayer;
- (id)_newSceneLayer;
- (_Bool)_wantsSceneAssociation;
- (id)_debugName;
- (void)_updateFocusItemOverlayViews;
- (void)_setNeedsFocusItemOverlayUpdate;
- (double)_classicOffset;
- (void)matchDeviceOrientation:(id)arg1;
- (void)keyboardDidHide;
- (void)setupForOrientation:(long long)arg1;
- (_Bool)inhibitTextEffectsRotation;
- (_Bool)inhibitManualTransform;
- (_Bool)inhibitSetupOrientation;
- (void)_matchDeviceOrientation;
- (_Bool)_isTextEffectsWindowNotificationOwner;
- (_Bool)_isTextEffectsWindowHosting;
- (_Bool)_isTextEffectsWindow;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;
- (id)_hostingHandle;
- (void)exerciseAmbiguityInLayout;
- (_Bool)hasAmbiguousLayout;
- (id)_descendantWithAmbiguousLayout;
- (void)updateConstraintsIfNeeded;
- (id)_redundantConstraints;
- (id)_uiib_candidateRedundantConstraints;
- (id)_uiib_layoutEngineCreatingIfNecessary;
- (id)_layoutEngineIfAvailable;
- (id)_layoutEngineCreateIfNecessary;
- (void)_initializeLayoutEngine;
- (void)_switchToLayoutEngine:(id)arg1;
- (void)_constraints_subviewWillChangeSuperview:(id)arg1;
- (void)_autolayout_windowDidChangeCenterFrom:(struct CGPoint)arg1;
- (void)_autolayout_windowDidChangeBoundsFrom:(struct CGRect)arg1;
- (void)_windowInternalConstraints_centerDidChange;
- (void)_windowInternalConstraints_sizeDidChange;
- (unsigned long long)_expectedWindowInternalConstraintsCount;
- (void)_uiib_invalidateWindowInternalConstraints;
- (void)_invalidateWindowInternalConstraints;
- (void)updateConstraints;
- (_Bool)_canBecomeLayoutEngineDelegate;
- (_Bool)_isLoweringAnchoringConstraints;
- (void)_setIsLoweringAnchoringConstraints:(_Bool)arg1;
- (id)_centerExpressionInContainer:(id)arg1 vertical:(_Bool)arg2 contentInsetScale:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

