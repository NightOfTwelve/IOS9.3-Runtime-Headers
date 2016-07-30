//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUPhotoEditToolController.h>

#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, PUPhotoEditOverlayBadge, PURedeyeToolControllerSpec, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface PURedeyeToolController : PUPhotoEditToolController <UIGestureRecognizerDelegate>
{
    PUPhotoEditOverlayBadge *_instructionLabel;
    NSArray *_instructionLabelConstraints;
    PUPhotoEditOverlayBadge *_failureLabel;
    NSArray *_failureLabelConstraints;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSMutableArray *_knownCorrections;
    _Bool _failureAnimationIsInProgress;
    _Bool _isModelChangeLocal;
}

- (void).cxx_destruct;
- (void)_correctRedEyeAtPoint:(struct CGPoint)arg1;
- (_Bool)_removeCorrectionAtPoint:(struct CGPoint)arg1;
- (void)_handleRedeyeButton:(id)arg1;
- (void)_animateInstructionAppearance;
- (void)_animateFailureAppearance;
- (void)_showChangeIndicatorAtPoint:(struct CGPoint)arg1 YCoordinateIsFlipped:(_Bool)arg2 isFailure:(_Bool)arg3;
- (void)_loadCorrectionsFromModelAnimated:(_Bool)arg1;
- (struct CGPoint)_locationInCroppedImage:(struct CGPoint)arg1 YCoordinateIsFlipped:(_Bool)arg2;
- (struct CGPoint)_locationInOriginalImage:(struct CGPoint)arg1;
- (void)flashAutoRedEyeCorrections;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (id)selectedToolbarIcon;
- (id)toolbarIcon;
- (_Bool)wantsIrisAutoDisableWarning;
- (_Bool)wantsSecondaryToolbarVisible;
- (_Bool)wantsZoomAndPanEnabled;
- (void)photoEditModelDidChange;
- (id)localizedName;
- (void)didResignActiveTool;
- (unsigned long long)preferredRenderMode;
- (void)updateViewConstraints;
- (void)dealloc;
- (void)viewDidLoad;
- (void)didBecomeActiveTool;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) PURedeyeToolControllerSpec *spec; // @dynamic spec;
@property(readonly) Class superclass;

@end

