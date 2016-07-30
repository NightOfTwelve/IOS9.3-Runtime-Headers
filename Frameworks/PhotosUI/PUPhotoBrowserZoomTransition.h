//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUNavigationTransition.h>

#import <PhotosUI/PUTransitionViewAnimatorDelegate-Protocol.h>

@class NSString, PUPhotoPinchGestureRecognizer, PUTransitionViewAnimator, UIImageView;
@protocol PUPhotoBrowserZoomTransitionDelegate;

@interface PUPhotoBrowserZoomTransition : PUNavigationTransition <PUTransitionViewAnimatorDelegate>
{
    UIImageView *_impostorImageView;
    id _userInteractionDisabledToken;
    CDUnknownBlockType _individualAnimationCompletion;
    _Bool _useFallbackAnimation;
    _Bool _shouldEnd;
    _Bool _didFinish;
    id <PUPhotoBrowserZoomTransitionDelegate> _delegate;
    PUPhotoPinchGestureRecognizer *__photoPinchGestureRecognizer;
    PUTransitionViewAnimator *__transitionViewAnimator;
}

@property(retain, nonatomic, setter=_setTransitionViewAnimator:) PUTransitionViewAnimator *_transitionViewAnimator; // @synthesize _transitionViewAnimator=__transitionViewAnimator;
@property(retain, nonatomic, setter=_setPhotoPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *_photoPinchGestureRecognizer; // @synthesize _photoPinchGestureRecognizer=__photoPinchGestureRecognizer;
@property(nonatomic) __weak id <PUPhotoBrowserZoomTransitionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)transitionViewAnimatorDidEnd:(id)arg1 finished:(_Bool)arg2;
- (void)transitionViewAnimatorWillEnd:(id)arg1 withTargetTranslation:(inout struct CGPoint *)arg2;
- (void)transitionViewAnimatorDidUpdate:(id)arg1;
- (void)transitionDidStartOperation:(long long)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3;
- (void)transitionWillStartOperation:(long long)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3;
- (void)_endTransitionViewAnimatorForceCancel:(_Bool)arg1;
- (void)_animationTransitionForOperation:(long long)arg1 betweenViewController:(id)arg2 andPhotoBrowserController:(id)arg3;
- (void)animatePopTransition;
- (void)animatePushTransition;
- (void)updateInteractiveTransitionWithPhotoPinchGestureRecognizer:(id)arg1;
- (void)startInteractiveTransitionWithPhotoPinchGestureRecognizer:(id)arg1;
- (void)_getFullsizedImageForPhoto:(id)arg1 cachingImageManager:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setImageForImpostor:(id)arg1 photo:(id)arg2 photoToken:(id)arg3 fromCachingImageManager:(id)arg4;
- (void)_transitionDidFinishAnimationForOperation:(long long)arg1;
- (void)_transitionWillBeginAnimationForOperation:(long long)arg1;
- (void)_setSourceViewVisible:(_Bool)arg1 forPhotoToken:(id)arg2;
- (_Bool)_getFrame:(struct CGRect *)arg1 contentMode:(long long *)arg2 forPhotoToken:(id)arg3 operation:(long long)arg4;
- (id)_tokenForPhoto:(id)arg1 inContainer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

