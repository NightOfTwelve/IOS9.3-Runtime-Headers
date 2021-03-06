//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

#import <FuseUI/MusicNowPlayingAtmosphericStatusBarDelegate-Protocol.h>

@class MusicNowPlayingAtmosphericStatusBar, NSString, UIView;

@interface MusicNowPlayingPresentationController : UIPresentationController <MusicNowPlayingAtmosphericStatusBarDelegate>
{
    _Bool _isPresented;
    _Bool _wantsAtmosphericStatusBar;
    UIView *_nowPlayingClippingView;
    MusicNowPlayingAtmosphericStatusBar *_nowPlayingStatusBar;
}

@property(nonatomic) _Bool wantsAtmosphericStatusBar; // @synthesize wantsAtmosphericStatusBar=_wantsAtmosphericStatusBar;
@property(retain, nonatomic) MusicNowPlayingAtmosphericStatusBar *nowPlayingStatusBar; // @synthesize nowPlayingStatusBar=_nowPlayingStatusBar;
@property(retain, nonatomic) UIView *nowPlayingClippingView; // @synthesize nowPlayingClippingView=_nowPlayingClippingView;
- (void).cxx_destruct;
- (void)_updateStatusBar;
- (void)_restoreStatusBar;
- (struct CGRect)_currentStatusBarFrame;
- (void)_attachStatusBar;
- (void)statusBar:(id)arg1 styleDidChange:(long long)arg2;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (_Bool)_shouldChangeStatusBarViewController;
- (_Bool)shouldRemovePresentersView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

