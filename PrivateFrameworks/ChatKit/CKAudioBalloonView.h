//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKColoredBalloonView.h>

#import <ChatKit/CKAudioBalloonView-Protocol.h>

@class CKAudioProgressView, CKWaveformProgressView, NSString, UILabel;

@interface CKAudioBalloonView : CKColoredBalloonView <CKAudioBalloonView>
{
    _Bool _playing;
    _Bool _played;
    double _time;
    double _duration;
    NSString *_timeFormat;
    UILabel *_timeLabel;
    CKAudioProgressView *_progressView;
    CKWaveformProgressView *_waveformProgressView;
}

@property(retain, nonatomic) CKWaveformProgressView *waveformProgressView; // @synthesize waveformProgressView=_waveformProgressView;
@property(retain, nonatomic) CKAudioProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(copy, nonatomic) NSString *timeFormat; // @synthesize timeFormat=_timeFormat;
@property(nonatomic, getter=isPlayed) _Bool played; // @synthesize played=_played;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double time; // @synthesize time=_time;
- (void)updateProgress;
- (void)updateTimeString;
@property(nonatomic) long long waveformContentMode;
@property(nonatomic, getter=isControlHidden) _Bool controlHidden;
- (void)setWaveform:(id)arg1;
- (void)prepareForReuse;
- (void)prepareForDisplay;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (void)configureForMessagePart:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

