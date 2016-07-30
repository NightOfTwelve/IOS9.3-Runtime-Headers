//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <QuickLook/UIScrollViewDelegate-Protocol.h>

@class NSString, NSTimer, UIView;
@protocol QLPreviewItem, QLPreviewItemInteractionDelegate;

@interface QLDisplayBundle : UIViewController <UIScrollViewDelegate>
{
    id <QLPreviewItemInteractionDelegate> _delegate;
    id <QLPreviewItem> _previewItem;
    _Bool _overlayHidden;
    int _previewMode;
    _Bool _loaded;
    _Bool _loading;
    _Bool _audioSessionActive;
    NSString *_password;
    NSTimer *_refreshTimer;
    double _navigationBarVerticalOffset;
    _Bool _inScroll;
    long long _index;
    unsigned long long _orbMode;
    CDStruct_0109ef53 clientContext;
}

+ (_Bool)needsAVControls;
+ (double)allowedLoadingDelay;
+ (id)currentAudioSessionDisplayBundle;
+ (void)setCurrentAudioSessionDisplayBundle:(id)arg1;
@property(nonatomic) unsigned long long orbMode; // @synthesize orbMode=_orbMode;
@property(nonatomic) double navigationBarVerticalOffset; // @synthesize navigationBarVerticalOffset=_navigationBarVerticalOffset;
@property _Bool inScroll; // @synthesize inScroll=_inScroll;
@property long long index; // @synthesize index=_index;
@property CDStruct_0109ef53 clientContext; // @synthesize clientContext;
@property _Bool loading; // @synthesize loading=_loading;
@property _Bool loaded; // @synthesize loaded=_loaded;
@property id <QLPreviewItemInteractionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFinishSwiping;
- (void)willStartSwiping:(_Bool)arg1;
- (void)requireActiveAudioSession;
- (void)audioSessionDidInterrupt;
- (_Bool)canHideOverlay;
- (id)gestureRecognizersForFullScreenDisplay;
- (void)togglePlayState;
- (void)endScrubbing;
- (void)scrubToValue:(double)arg1;
- (void)beginScrubbing;
- (void)setAudioSessionActive:(_Bool)arg1 force:(_Bool)arg2;
- (void)setAudioSessionActive:(_Bool)arg1;
- (id)printPageHelper;
- (id)printPageRenderer;
- (id)pdfPreviewData;
- (_Bool)needsContentInset;
- (id)scrollView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateContentOffsetAnimated:(_Bool)arg1;
@property(readonly) struct CGRect contentFrame;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUpdate;
- (void)discardAirPlayView;
- (void)setupAirPlayView;
- (void)endTrackingViewUpdates;
- (void)beginTrackingViewUpdates;
@property(readonly) UIView *airplayView;
@property(readonly) UIView *accessoryView;
@property(readonly) int airPlayMode;
- (_Bool)canCopyToPasteboard;
- (_Bool)adaptativeHeight;
- (_Bool)acceptControllerTouch:(id)arg1 fromGestureRecognizer:(id)arg2;
- (void)requiresDisplayBundle:(id)arg1 withHints:(id)arg2;
- (void)didFailPresentingWithError:(id)arg1;
- (void)didFailLoadingWithError:(id)arg1;
- (void)didLoad;
- (void)_notifyDidFailPresentingWithError:(id)arg1;
- (void)_notifyDidLoadWithError:(id)arg1;
- (void)updateAfterCancelledDismissTransitionWithSize:(struct CGSize)arg1;
- (void)cancelLoad;
- (void)_performCancelLoad;
- (void)loadWithHints:(id)arg1;
- (id)defaultBackgroundColor;
- (_Bool)isMainDisplayBundle;
- (void)enterForeground;
- (void)enterBackground;
- (_Bool)overlayIsHidden;
- (void)setOverlayHidden:(_Bool)arg1 duration:(double)arg2;
@property int previewMode;
@property(retain) NSString *password;
@property(retain) id <QLPreviewItem> previewItem;
- (_Bool)wantsCustomOrbPop;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)cancelLoadIfNeeded;
- (void)loadIfNeededWithHints:(id)arg1;
@property(readonly, copy) NSString *description;
- (long long)modalPresentationStyle;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)invalidate;
- (id)init;
- (_Bool)canBeCached;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

