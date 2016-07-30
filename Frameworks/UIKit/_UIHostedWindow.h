//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class UIColor, UITraitCollection, _UIHostedWindowHostingHandle;

@interface _UIHostedWindow : UIWindow
{
    _Bool _wantsTraitPropagation;
    _Bool __hostViewUnderlapsStatusBar;
    long long _hostTintAdjustmentMode;
    UITraitCollection *_hostTraitCollection;
    UIColor *__hostTintColor;
}

@property(retain, nonatomic, setter=_setHostTintColor:) UIColor *_hostTintColor; // @synthesize _hostTintColor=__hostTintColor;
- (void)__setHostViewUnderlapsStatusBar:(_Bool)arg1;
- (_Bool)__hostViewUnderlapsStatusBar;
@property(nonatomic, setter=_setWantsTraitPropigation:) _Bool _wantsTraitPropagation; // @synthesize _wantsTraitPropagation;
@property(retain, nonatomic, setter=_setHostTraitCollection:) UITraitCollection *_hostTraitCollection; // @synthesize _hostTraitCollection;
@property(nonatomic, setter=_setHostTintAdjustmentMode:) long long _hostTintAdjustmentMode; // @synthesize _hostTintAdjustmentMode;
- (void).cxx_destruct;
- (_Bool)_presentActionSheet:(id)arg1 inView:(id)arg2 fromYCoordinate:(double)arg3;
- (id)_traitCollectionForSize:(struct CGSize)arg1 screenCollection:(id)arg2 virtualHorizontalSizeClass:(long long)arg3 virtualVerticalSizeClass:(long long)arg4;
- (void)_updateWindowTraitsAndNotify:(_Bool)arg1;
- (_Bool)_shouldPropigateTraitCollectionChanges;
- (void)setScreen:(id)arg1;
- (void)_configureContextOptions:(id)arg1;
- (long long)_defaultTintAdjustmentMode;
- (id)_normalInheritedTintColor;
- (long long)_orientationForRootTransform;
- (long long)_orientationForViewTransform;
- (_Bool)_isConstrainedByScreenJail;
- (_Bool)_needsShakesWhenInactive;
- (void)_updateTransformLayerForClassicPresentation;
- (void)_updateAppTintView;
- (void)_unregisterScrollToTopView:(id)arg1;
- (void)_registerScrollToTopView:(id)arg1;
- (_Bool)_usesWindowServerHitTesting;
@property(readonly, nonatomic) _UIHostedWindowHostingHandle *hostingHandle;
- (unsigned int)contextID;
- (_Bool)_canPromoteFromKeyWindowStack;
- (_Bool)_isWindowServerHostingManaged;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

