//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayerUI/MPUExtrasTemplateViewController.h>

#import <MediaPlayerUI/MPUExtrasCarouselViewControllerDataSource-Protocol.h>
#import <MediaPlayerUI/MPUExtrasCarouselViewControllerDelegate-Protocol.h>
#import <MediaPlayerUI/MPUExtrasImageBrowserViewControllerDataSource-Protocol.h>
#import <MediaPlayerUI/MPUExtrasNavigationAnimationControllerProvider-Protocol.h>
#import <MediaPlayerUI/MPUExtrasZoomingImageInteractiveTransitionSource-Protocol.h>
#import <MediaPlayerUI/MPUExtrasZoomingImageTransitionParticipant-Protocol.h>

@class IKShowcaseTemplate, MPUExtrasCarouselViewController, MPUExtrasImageBrowserViewController, MPUExtrasZoomingImageTransitionController, NSArray, NSDictionary, NSString;

@interface MPUExtrasShowcaseTemplateViewController : MPUExtrasTemplateViewController <MPUExtrasCarouselViewControllerDataSource, MPUExtrasCarouselViewControllerDelegate, MPUExtrasImageBrowserViewControllerDataSource, MPUExtrasNavigationAnimationControllerProvider, MPUExtrasZoomingImageInteractiveTransitionSource, MPUExtrasZoomingImageTransitionParticipant>
{
    _Bool _supportsOneupMode;
    MPUExtrasZoomingImageTransitionController *_activeZoomingImageInteractiveTransitionController;
    NSArray *_bannerButtonElements;
    NSArray *_carouselLockupElements;
    MPUExtrasCarouselViewController *_carouselViewController;
    MPUExtrasImageBrowserViewController *_imageBrowserViewController;
    NSDictionary *_overriddenFullscreenImages;
    unsigned long long _autohighlightIndex;
}

@property(nonatomic) unsigned long long autohighlightIndex; // @synthesize autohighlightIndex=_autohighlightIndex;
@property(nonatomic) _Bool supportsOneupMode; // @synthesize supportsOneupMode=_supportsOneupMode;
@property(retain, nonatomic) NSDictionary *overriddenFullscreenImages; // @synthesize overriddenFullscreenImages=_overriddenFullscreenImages;
@property(retain, nonatomic) MPUExtrasImageBrowserViewController *imageBrowserViewController; // @synthesize imageBrowserViewController=_imageBrowserViewController;
@property(retain, nonatomic) MPUExtrasCarouselViewController *carouselViewController; // @synthesize carouselViewController=_carouselViewController;
@property(retain, nonatomic) NSArray *carouselLockupElements; // @synthesize carouselLockupElements=_carouselLockupElements;
@property(retain, nonatomic) NSArray *bannerButtonElements; // @synthesize bannerButtonElements=_bannerButtonElements;
@property(retain, nonatomic) MPUExtrasZoomingImageTransitionController *activeZoomingImageInteractiveTransitionController; // @synthesize activeZoomingImageInteractiveTransitionController=_activeZoomingImageInteractiveTransitionController;
- (void).cxx_destruct;
- (void)_pushImageBrowserWithVisibleItemIndex:(unsigned long long)arg1;
- (id)_mainChildViewController;
- (void)_loadTextElement:(id)arg1 textAttributes:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) unsigned long long indexOfVisibleItem;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(_Bool)arg2;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)handlePinchGestureForZoomingImageInteractiveTransitionWithContext:(id)arg1;
- (id)animationControllerForNavigationOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)imageBrowserViewController:(id)arg1 loadDescriptionAtIndex:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)imageBrowserViewController:(id)arg1 loadSubtitleAtIndex:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)imageBrowserViewController:(id)arg1 loadTitleAtIndex:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)imageBrowserViewController:(id)arg1 loadImageAtIndex:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)numberOfImagesForBrowserViewController:(id)arg1;
- (void)carouselViewController:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)carouselViewController:(id)arg1 didHighlightItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)carouselSize;
- (void)carouselViewController:(id)arg1 configureCarouselCollectionViewCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3 withThumbnailImageContainerSize:(struct CGSize)arg4;
- (unsigned long long)numberOfItemsInCarouselViewController:(id)arg1;
- (void)_prepareLayout;
- (_Bool)showsPlaceholder;
@property(readonly, nonatomic) IKShowcaseTemplate *templateElement;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

