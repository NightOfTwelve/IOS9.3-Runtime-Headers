//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSDMagicMoveMatching-Protocol.h>

@class CALayer, NSArray, NSDictionary, TSDCanvas, TSDKnobTracker, TSDLayout, TSDLayoutGeometry, TSDTextureContext, TSDTextureSet;
@protocol OS_dispatch_queue, TSDContainerRep;

__attribute__((visibility("hidden")))
@interface TSDRep : NSObject <TSDMagicMoveMatching>
{
    TSDCanvas *mCanvas;
    TSDRep<TSDContainerRep> *mParentRep;
    TSDKnobTracker *mKnobTracker;
    _Bool mSelectionHighlightLayerValid;
    CALayer *mSelectionHighlightLayer;
    _Bool mCollaboratorCursorLayerValid;
    CALayer *mCollaboratorCursorLayer;
    unsigned long long mTextureDeliveryStyle;
    int mTextureByGlyphStyle;
    TSDTextureContext *mTextureContext;
    unsigned long long mTextureStage;
    NSDictionary *mTextureActionAttributes;
    NSDictionary *mTextureAnimationInfo;
    _Bool mShowTemporaryHighlight;
    CALayer *mTemporaryHighlightLayer;
    _Bool mShowDragAndDropHighlight;
    CALayer *mDragAndDropHighlightLayer;
    TSDLayout *mTemporaryMixingLayout;
    TSDLayout *mLayout;
    TSDTextureSet *mTexture;
    NSObject<OS_dispatch_queue> *mTextureAccessQueue;
    struct CGColor *mDefaultSelectionHighlightColor;
    TSDLayoutGeometry *mLastGeometryInRoot;
    struct CGRect mOriginalLayerFrameInScaledCanvas;
    _Bool mHasBeenRemoved;
}

@property(retain, nonatomic) NSDictionary *textureAnimationInfo; // @synthesize textureAnimationInfo=mTextureAnimationInfo;
@property(retain, nonatomic) NSDictionary *textureActionAttributes; // @synthesize textureActionAttributes=mTextureActionAttributes;
@property(nonatomic) unsigned long long textureStage; // @synthesize textureStage=mTextureStage;
@property(copy) TSDTextureContext *textureContext; // @synthesize textureContext=mTextureContext;
@property(nonatomic) int textureByGlyphStyle; // @synthesize textureByGlyphStyle=mTextureByGlyphStyle;
@property(nonatomic) unsigned long long textureDeliveryStyle; // @synthesize textureDeliveryStyle=mTextureDeliveryStyle;
@property(nonatomic) TSDRep<TSDContainerRep> *parentRep; // @synthesize parentRep=mParentRep;
@property(retain, nonatomic) TSDLayout *temporaryMixingLayout; // @synthesize temporaryMixingLayout=mTemporaryMixingLayout;
@property(readonly, nonatomic) TSDCanvas *canvas; // @synthesize canvas=mCanvas;
@property(readonly, nonatomic) NSArray *hyperlinkRegions;
- (_Bool)wantsToDistortWithImagerContext;
- (_Bool)directlyManagesLayerContent;
- (struct CGPoint)centerForRotation;
- (id)infoForTransforming;
- (_Bool)resizeFromCenterOnly;
- (double)opacity;
- (id)resizedGeometryForTransform:(struct CGAffineTransform)arg1;
- (struct CGRect)targetRectForEditMenu;
- (id)itemsToAddToEditMenu;
- (_Bool)handlesEditMenu;
- (_Bool)isLocked;
- (_Bool)isPlaceholder;
- (_Bool)isOpaque;
- (_Bool)masksToBounds;
- (_Bool)canEditWithEditor:(id)arg1;
- (void)willBeRemoved;
- (void)processChangedProperty:(int)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (_Bool)repDirectlyManagesContentsScaleOfLayer:(id)arg1;
- (id)textureForContext:(id)arg1;
- (void)setTextureAttributes:(id)arg1;
- (struct CGAffineTransform)unRotatedTransform:(struct CGAffineTransform)arg1;
- (void)markTextureDirty;
@property(readonly, nonatomic) double textureAngle;
@property(retain) TSDTextureSet *texture; // @synthesize texture=mTexture;
- (_Bool)wantsToHandleTapsWhenLocked;
- (_Bool)wantsToHandleTapsOnContainingGroup;
- (_Bool)canClipThemeContentToCanvas;
- (_Bool)handleMultipleTapAtPoint:(struct CGPoint)arg1;
- (_Bool)handleDoubleTapAtPoint:(struct CGPoint)arg1;
- (_Bool)handleSingleTapAtPoint:(struct CGPoint)arg1;
- (void)endDragInlineWithText;
- (void)beginDragInlineWithText;
- (_Bool)allowDragAcrossPageBoundaries;
- (struct CGRect)i_originalLayerFrameInScaledCanvas;
- (double)contentsScale;
- (void)i_configureFontSmoothingForContext:(struct CGContext *)arg1 layer:(id)arg2;
- (void)endDrawingOperation;
- (void)beginDrawingOperation;
- (void)recursivelyDrawChildrenInContext:(struct CGContext *)arg1;
- (void)recursivelyDrawInContext:(struct CGContext *)arg1;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (struct CGRect)clipRect;
- (_Bool)isDrawingInFlippedContext;
- (void)computeDirectLayerFrame:(struct CGRect *)arg1 andTransform:(struct CGAffineTransform *)arg2 basedOnLayoutGeometry:(id)arg3;
- (void)computeDirectLayerFrame:(struct CGRect *)arg1 andTransform:(struct CGAffineTransform *)arg2;
- (void)computeDirectLayerFrame:(struct CGRect *)arg1 andTransform:(struct CGAffineTransform *)arg2 basedOnTransform:(struct CGAffineTransform)arg3 andSize:(struct CGSize)arg4;
- (void)antiAliasDefeatLayerFrame:(struct CGRect *)arg1 forTransform:(struct CGAffineTransform)arg2;
- (void)antiAliasDefeatLayerTransform:(struct CGAffineTransform *)arg1 forFrame:(struct CGRect)arg2;
- (void)updateLayerGeometryFromLayout:(id)arg1;
- (struct CGAffineTransform)layerTransformInRootForZeroAnchor;
- (struct CGAffineTransform)parentLayerInverseTransformInRootForZeroAnchor;
- (struct CGAffineTransform)layerTransform;
- (void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(_Bool)arg3;
- (void)updateFromLayout;
- (void)updateChildrenFromLayout;
- (id)repForHandleSingleTap;
- (id)repForRotating;
- (id)repForSelecting;
- (id)additionalRepsForDragging;
- (id)repForDragging;
- (_Bool)intersectsUnscaledRect:(struct CGRect)arg1;
- (double)shortestDistanceToPoint:(struct CGPoint)arg1 countAsHit:(_Bool *)arg2;
- (_Bool)shouldExpandHitRegionWhenSmall;
- (id)hitRepChrome:(struct CGPoint)arg1;
- (id)hitRepChrome:(struct CGPoint)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)hitReps:(struct CGPoint)arg1 withSlopBlock:(CDUnknownBlockType)arg2;
- (id)hitReps:(struct CGPoint)arg1 withSlop:(struct CGSize)arg2;
- (id)hitRep:(struct CGPoint)arg1;
- (id)hitRep:(struct CGPoint)arg1 passingTest:(CDUnknownBlockType)arg2;
- (_Bool)containsPoint:(struct CGPoint)arg1 withSlop:(struct CGSize)arg2;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (struct CGRect)convertNaturalRectFromLayerRelative:(struct CGRect)arg1;
- (struct CGRect)convertNaturalRectToLayerRelative:(struct CGRect)arg1;
- (struct CGPoint)convertNaturalPointFromLayerRelative:(struct CGPoint)arg1;
- (struct CGPoint)convertNaturalPointToLayerRelative:(struct CGPoint)arg1;
- (struct CGAffineTransform)transformToConvertNaturalFromLayerRelative;
- (struct CGAffineTransform)transformToConvertNaturalToLayerRelative;
- (struct CGRect)layerFrameInScaledCanvasRelativeToParent;
- (struct CGRect)i_layerFrameInScaledCanvasIgnoringDragging;
- (struct CGRect)layerFrameInScaledCanvas;
- (struct CGRect)frameInScreenSpace;
- (struct CGRect)frameInUnscaledCanvasIncludingChrome;
- (struct CGRect)frameInUnscaledCanvas;
- (struct CGPoint)convertNaturalPointFromUnscaledCanvas:(struct CGPoint)arg1;
- (struct CGPoint)convertNaturalPointToUnscaledCanvas:(struct CGPoint)arg1;
- (struct CGPath *)newPathInScaledCanvasFromNaturalRect:(struct CGRect)arg1;
- (struct CGRect)convertNaturalRectFromUnscaledCanvas:(struct CGRect)arg1;
- (struct CGRect)convertNaturalRectToUnscaledCanvas:(struct CGRect)arg1;
- (struct CGRect)naturalBounds;
- (double)angleInRoot;
- (void)addToSet:(id)arg1;
- (void)i_willBeRemoved;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (id)connectedReps;
- (id)info;
@property(readonly, nonatomic) TSDLayout *layout; // @synthesize layout=mLayout;
- (id)interactiveCanvasController;
- (_Bool)i_hasInteractiveCanvasController;
- (id)description;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (void)willBeginEyedropperMode;
- (struct CGRect)i_partition_deepClipRect;

@end

