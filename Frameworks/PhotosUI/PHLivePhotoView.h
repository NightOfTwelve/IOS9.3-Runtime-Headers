//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUI/ISPlayerItemObserver-Protocol.h>
#import <PhotosUI/ISPlayerViewDelegate-Protocol.h>
#import <PhotosUI/ISPlayerViewDelegatePrivate-Protocol.h>
#import <PhotosUI/_UISettingsKeyObserver-Protocol.h>

@class ISManualPlaybackInput, ISPlayerItem, ISPlayerView, NSString, PHLivePhoto, UIGestureRecognizer;
@protocol PHLivePhotoViewDelegate;

@interface PHLivePhotoView : UIView <ISPlayerViewDelegate, ISPlayerViewDelegatePrivate, ISPlayerItemObserver, _UISettingsKeyObserver>
{
    struct {
        _Bool respondsToWillBeginPlaybackWithStyle;
        _Bool respondsToDidEndPlaybackWithStyle;
    } _delegateFlags;
    struct {
        _Bool respondsToDidEndPlayingVitality;
    } _delegatePrivateFlags;
    _Bool _muted;
    _Bool _shouldAutomaticallyPrepareForPlayback;
    _Bool __playingVitality;
    _Bool __didPlayToEnd;
    _Bool __playbackRequested;
    id <PHLivePhotoViewDelegate> _delegate;
    PHLivePhoto *_livePhoto;
    UIGestureRecognizer *_playbackGestureRecognizer;
    UIView *_photoView;
    ISPlayerView *_playerView;
    ISManualPlaybackInput *__playbackInput;
    long long __currentPlaybackStyle;
    long long __configuredPlaybackStyle;
    ISPlayerItem *__playerItem;
}

+ (id)livePhotoBadgeImageWithOptions:(unsigned long long)arg1;
@property(retain, nonatomic, setter=_setPlayerItem:) ISPlayerItem *_playerItem; // @synthesize _playerItem=__playerItem;
@property(nonatomic, setter=_configureForPlaybackStyle:) long long _configuredPlaybackStyle; // @synthesize _configuredPlaybackStyle=__configuredPlaybackStyle;
@property(nonatomic, setter=_setPlaybackRequested:) _Bool _playbackRequested; // @synthesize _playbackRequested=__playbackRequested;
@property(nonatomic, setter=_setDidPlayToEnd:) _Bool _didPlayToEnd; // @synthesize _didPlayToEnd=__didPlayToEnd;
@property(nonatomic, getter=_isPlayingVitality, setter=_setPlayingVitality:) _Bool _playingVitality; // @synthesize _playingVitality=__playingVitality;
@property(nonatomic, setter=_setCurrentPlaybackStyle:) long long _currentPlaybackStyle; // @synthesize _currentPlaybackStyle=__currentPlaybackStyle;
@property(readonly, nonatomic) ISManualPlaybackInput *_playbackInput; // @synthesize _playbackInput=__playbackInput;
@property(retain, nonatomic) ISPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIView *photoView; // @synthesize photoView=_photoView;
@property(nonatomic) _Bool shouldAutomaticallyPrepareForPlayback; // @synthesize shouldAutomaticallyPrepareForPlayback=_shouldAutomaticallyPrepareForPlayback;
@property(readonly, nonatomic) UIGestureRecognizer *playbackGestureRecognizer; // @synthesize playbackGestureRecognizer=_playbackGestureRecognizer;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(retain, nonatomic) PHLivePhoto *livePhoto; // @synthesize livePhoto=_livePhoto;
@property(nonatomic) __weak id <PHLivePhotoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)playerItemStatusDidChange:(id)arg1;
- (void)playerViewPlayingVitalityChanged:(id)arg1;
- (void)playerViewDidPlaybackVideoAssetToEnd:(id)arg1;
- (void)playerViewWillPlaybackVideoAssetToEnd:(id)arg1;
- (void)playerViewPlayerItemDidChange:(id)arg1;
- (void)playerViewPlaybackStateDidChange:(id)arg1;
- (void)playerViewIsInteractingDidChange:(id)arg1;
- (void)_updateStatusBorder;
- (void)_updatePlayingVitality;
- (void)_updateCurrentPlaybackStyle;
- (void)_updateMuted;
- (void)_ensurePlaybackInput;
- (void)_updatePlayerItemLoadingTarget;
- (void)setContentMode:(long long)arg1;
- (void)stopPlayback;
- (void)startPlaybackWithStyle:(long long)arg1;
- (void)_commonPHLivePhotoViewInitialization;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

