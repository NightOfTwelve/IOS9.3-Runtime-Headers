//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVKit/AVPlaybackControlsViewController.h>

@class AVButton, AVLoadingIndicatorView, AVScrubber, NSArray, NSLayoutConstraint, NSMutableArray, NSString, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface AVEmbeddedPlaybackControlsViewController : AVPlaybackControlsViewController
{
    unsigned int _showsLoadingIndicator:1;
    unsigned int _playing:1;
    unsigned int _scrubberEnabled:1;
    NSArray *_scrubberLoadedTimeRanges;
    unsigned int _playPauseButtonEnabled:1;
    unsigned int _showsStreamingControls:1;
    unsigned int _showsMediaSelectionButton:1;
    unsigned int _showsPictureInPictureButton:1;
    unsigned int _pictureInPictureButtonEnabled:1;
    NSString *_elapsedTimeLabelText;
    float _scrubberMinimumValue;
    float _scrubberValue;
    float _scrubberMaximumValue;
    NSString *_remainingTimeLabelText;
    UIView *_lowerControlsSubContainerView;
    AVButton *_playPauseButton;
    UILabel *_elapsedTimeLabel;
    AVScrubber *_scrubber;
    UILabel *_remainingTimeLabel;
    AVButton *_mediaSelectionButton;
    AVButton *_pictureInPictureButton;
    AVButton *_fullScreenButton;
    UILabel *_liveStreamingLabel;
    AVLoadingIndicatorView *_loadingIndicatorView;
    UILabel *_scrubInstructionsTitleLabel;
    UILabel *_scrubInstructionsSubtitleLabel;
    NSMutableArray *_layoutConstraints;
    NSLayoutConstraint *_controlsContainerViewHeightLayoutConstraint;
    unsigned int _showsScrubInstructions:1;
    unsigned int _controlsVisibilityHasBeenManagedBefore:1;
}

- (void).cxx_destruct;
- (void)_hideScrubInstructions;
- (void)_showScrubInstructions;
- (void)_manageControlsVisibility;
- (void)_scrubberEndTracking:(id)arg1;
- (void)_scrubberBeginTracking:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateViewConstraints;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)updateRemainingTimeLabel:(id)arg1;
- (void)updateScrubberMaximumValue:(float)arg1;
- (void)updateScrubberValue:(float)arg1;
- (void)updateScrubberMinimumValue:(float)arg1;
- (void)updateElapsedTimeLabel:(id)arg1;
- (void)setPictureInPictureButtonEnabled:(_Bool)arg1;
- (_Bool)isPictureInPictureButtonEnabled;
- (void)setShowsPictureInPictureButton:(_Bool)arg1;
- (_Bool)showsPictureInPictureButton;
- (void)setShowsMediaSelectionButton:(_Bool)arg1;
- (_Bool)showsMediaSelectionButton;
- (void)setShowsLoadingIndicator:(_Bool)arg1;
- (_Bool)showsLoadingIndicator;
- (void)setShowsStreamingControls:(_Bool)arg1;
- (_Bool)showsStreamingControls;
- (void)setPlayPauseButtonEnabled:(_Bool)arg1;
- (_Bool)isPlayPauseButtonEnabled;
- (void)setScrubberLoadedTimeRanges:(id)arg1;
- (id)scrubberLoadedTimeRanges;
- (void)setScrubberEnabled:(_Bool)arg1;
- (_Bool)isScrubberEnabled;
- (void)setPlaying:(_Bool)arg1;
- (_Bool)isPlaying;
- (double)scrubberWidth;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

