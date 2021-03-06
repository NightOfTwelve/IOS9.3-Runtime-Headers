//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MarkupUI/MUContentViewControllerProtocol-Protocol.h>
#import <MarkupUI/UIScrollViewDelegate-Protocol.h>

@class AKController, NSArray, NSString, NSURL, UIImageView, UIScrollView, UIView;

@interface MUImageContentViewController : UIViewController <UIScrollViewDelegate, MUContentViewControllerProtocol>
{
    struct CGPoint _pointToCenterAfterRotation;
    double _scaleToRestoreAfterRotation;
    _Bool _inDoubleTapZoom;
    AKController *_annotationController;
    UIScrollView *_scrollView;
    UIView *_combinedContentView;
    UIImageView *_imageView;
    double _initialContentScaleInModel;
    double _downsampledImageScale;
    NSURL *_fileURL;
    CDUnknownBlockType _loadCompletionBlock;
    struct UIEdgeInsets _edgeInsets;
}

@property(copy) CDUnknownBlockType loadCompletionBlock; // @synthesize loadCompletionBlock=_loadCompletionBlock;
@property(nonatomic) _Bool inDoubleTapZoom; // @synthesize inDoubleTapZoom=_inDoubleTapZoom;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property double downsampledImageScale; // @synthesize downsampledImageScale=_downsampledImageScale;
@property double initialContentScaleInModel; // @synthesize initialContentScaleInModel=_initialContentScaleInModel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *combinedContentView; // @synthesize combinedContentView=_combinedContentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property __weak AKController *annotationController; // @synthesize annotationController=_annotationController;
- (void).cxx_destruct;
- (void)controllerDidExitToolMode:(id)arg1;
- (void)controllerDidEnterToolMode:(id)arg1;
- (_Bool)shouldPlaceProposedFormElementAtRect:(struct CGRect)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (_Bool)shouldPlaceFormElementAtPoint:(struct CGPoint)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (_Bool)controllerShouldDetectFormElements:(id)arg1;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (id)newContentSnapshotPDFDataIncludingAdornments:(_Bool)arg1 atScale:(double)arg2 inRect:(struct CGRect)arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(id)arg5;
- (struct CGRect)maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (struct CGPoint)_minimumContentOffset;
- (void)_updateMinMaxZoomFactor;
- (struct CGPoint)_maximumContentOffset;
- (void)_recoverFromRotation;
- (void)_prepareToRotate;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)_imageIsSize:(struct CGSize)arg1 isSmallerThanSize:(struct CGSize)arg2;
- (_Bool)_imageIsSmallerThanView;
- (struct CGRect)_zoomRectForScale:(double)arg1 withCenter:(struct CGPoint)arg2;
- (void)_doubleTap:(id)arg1;
- (double)_zoomToFitZoomFactorInBounds:(struct CGRect)arg1;
- (double)_zoomToFitZoomFactorIncludingScrollViewEdgeInsets;
- (double)_zoomToFitZoomFactor;
- (void)_downsampleImageForDisplay:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)viewDidLayoutSubviews;
- (void)setImage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setImage:(id)arg1;
- (void)_installOverlayOfController:(id)arg1 forPageAtIndex:(unsigned long long)arg2;
- (void)setupForController:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (id)contentSnapshot;
- (struct CGRect)visibleContentRect;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) NSArray *sourceContentReplacedAnnotationIndexes;
@property(readonly) Class superclass;

@end

