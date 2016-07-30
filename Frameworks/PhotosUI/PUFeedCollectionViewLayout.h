//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray, PUParallaxComputer;

__attribute__((visibility("hidden")))
@interface PUFeedCollectionViewLayout : UICollectionViewLayout
{
    PUParallaxComputer *_parallaxComputer;
    NSMutableArray *_sectionLayoutInfos;
    struct CGSize _contentSize;
    _Bool _shouldDisplayCaptionsBelowBatches;
    _Bool _shouldDisplaySectionHeadersBelowSections;
    _Bool _shouldApplyParallaxEffect;
    _Bool _shouldFloatThumbnails;
    _Bool _shouldFloatSectionHeaders;
    _Bool _shouldFloatWithEase;
    _Bool _shouldFloatOverShortDistances;
    long long _flowDirection;
    long long _parallaxModel;
    double _parallaxFactor;
    double _thumbnailSpacing;
    double _sectionHeaderBackgroundHeight;
    double _floatingBottomDecorationHeight;
    struct CGSize _sectionReferenceSize;
    struct CGSize _interTileSpacing;
    struct CGSize _noCaptionSpacing;
    struct UIEdgeInsets _captionPadding;
    struct UIEdgeInsets _floatPadding;
}

+ (Class)layoutAttributesClass;
@property(nonatomic) struct UIEdgeInsets floatPadding; // @synthesize floatPadding=_floatPadding;
@property(nonatomic) double floatingBottomDecorationHeight; // @synthesize floatingBottomDecorationHeight=_floatingBottomDecorationHeight;
@property(nonatomic) _Bool shouldFloatOverShortDistances; // @synthesize shouldFloatOverShortDistances=_shouldFloatOverShortDistances;
@property(nonatomic) _Bool shouldFloatWithEase; // @synthesize shouldFloatWithEase=_shouldFloatWithEase;
@property(nonatomic) double sectionHeaderBackgroundHeight; // @synthesize sectionHeaderBackgroundHeight=_sectionHeaderBackgroundHeight;
@property(nonatomic) _Bool shouldFloatSectionHeaders; // @synthesize shouldFloatSectionHeaders=_shouldFloatSectionHeaders;
@property(nonatomic) double thumbnailSpacing; // @synthesize thumbnailSpacing=_thumbnailSpacing;
@property(nonatomic) _Bool shouldFloatThumbnails; // @synthesize shouldFloatThumbnails=_shouldFloatThumbnails;
@property(nonatomic) double parallaxFactor; // @synthesize parallaxFactor=_parallaxFactor;
@property(nonatomic) long long parallaxModel; // @synthesize parallaxModel=_parallaxModel;
@property(nonatomic) _Bool shouldApplyParallaxEffect; // @synthesize shouldApplyParallaxEffect=_shouldApplyParallaxEffect;
@property(nonatomic) _Bool shouldDisplaySectionHeadersBelowSections; // @synthesize shouldDisplaySectionHeadersBelowSections=_shouldDisplaySectionHeadersBelowSections;
@property(nonatomic) _Bool shouldDisplayCaptionsBelowBatches; // @synthesize shouldDisplayCaptionsBelowBatches=_shouldDisplayCaptionsBelowBatches;
@property(nonatomic) struct CGSize noCaptionSpacing; // @synthesize noCaptionSpacing=_noCaptionSpacing;
@property(nonatomic) struct UIEdgeInsets captionPadding; // @synthesize captionPadding=_captionPadding;
@property(nonatomic) struct CGSize interTileSpacing; // @synthesize interTileSpacing=_interTileSpacing;
@property(nonatomic) struct CGSize sectionReferenceSize; // @synthesize sectionReferenceSize=_sectionReferenceSize;
@property(nonatomic) long long flowDirection; // @synthesize flowDirection=_flowDirection;
- (void).cxx_destruct;
- (void)updateCollectionViewWithDeletedSections:(id)arg1 insertedSections:(id)arg2 updatedSections:(id)arg3;
- (void)_getSizeForHorizontalFlowDirection:(out struct CGSize *)arg1 headerSize:(out struct CGSize *)arg2 footerSize:(out struct CGSize *)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out long long *)arg7 forSection:(long long)arg8 isJoined:(_Bool)arg9;
- (void)_getSizeForVerticalFlowDirection:(out struct CGSize *)arg1 headerSize:(out struct CGSize *)arg2 footerSize:(out struct CGSize *)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out long long *)arg7 forSection:(long long)arg8 isJoined:(_Bool)arg9;
- (void)_getSize:(out struct CGSize *)arg1 headerSize:(out struct CGSize *)arg2 footerSize:(out struct CGSize *)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out long long *)arg7 forSection:(long long)arg8 isJoined:(_Bool)arg9;
- (void)_enumerateSectionsInRect:(struct CGRect)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_adjustFloatingLayoutAttributes:(id)arg1 inSection:(long long)arg2;
- (void)_sectionAtIndex:(long long)arg1 sizeDidChangeFrom:(struct CGSize)arg2 to:(struct CGSize)arg3;
- (void)_updateLayoutInfoForSection:(long long)arg1 ignoreSizeChange:(_Bool)arg2;
- (void)_updateGlobalLayoutInfoWithOptions:(long long)arg1 sectionsWithUpdatedGroupIDs:(out id *)arg2;
- (id)_delegate;
- (struct CGRect)frameForTileAtIndexPath:(id)arg1;
- (id)indexPathForImageElementAtPoint:(struct CGPoint)arg1;
- (void)enumerateImageElementsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct CGRect)frameForSection:(long long)arg1;
- (long long)numberOfTilesOmittedInSection:(long long)arg1;
- (id)sectionsJoinedWithSection:(long long)arg1;
- (void)invalidateLayoutAndCache;
@property(readonly, nonatomic) unsigned int flowDirectionEdge;
- (void)_updateParallaxComputer;
- (id)_parallaxComputer;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)_setOrigin:(struct CGPoint)arg1 forSectionLayoutInfo:(id)arg2;
- (void)_updateParallaxForLayoutAttributes:(id)arg1;
- (void)_updateSectionLayoutInfosIfNecessary;
- (void)prepareLayout;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;

@end

