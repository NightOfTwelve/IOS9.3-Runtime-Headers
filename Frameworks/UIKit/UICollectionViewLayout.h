//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCoding-Protocol.h>

@class NSArray, NSIndexSet, NSMutableDictionary, NSMutableIndexSet, UICollectionView, UICollectionViewLayoutInvalidationContext, UIDynamicAnimator, _UICollectionViewCompositionLayout;

@interface UICollectionViewLayout : NSObject <NSCoding>
{
    UICollectionView *_collectionView;
    struct CGSize _collectionViewBoundsSize;
    NSMutableDictionary *_initialAnimationLayoutAttributesDict;
    NSMutableDictionary *_finalAnimationLayoutAttributesDict;
    NSMutableDictionary *_deletedSupplementaryIndexPathsDict;
    NSMutableDictionary *_insertedSupplementaryIndexPathsDict;
    NSMutableDictionary *_deletedDecorationIndexPathsDict;
    NSMutableDictionary *_insertedDecorationIndexPathsDict;
    NSMutableIndexSet *_deletedSectionsSet;
    NSMutableIndexSet *_insertedSectionsSet;
    NSMutableDictionary *_decorationViewClassDict;
    NSMutableDictionary *_decorationViewNibDict;
    NSMutableDictionary *_decorationViewExternalObjectsTables;
    UICollectionViewLayout *_transitioningFromLayout;
    UICollectionViewLayout *_transitioningToLayout;
    UIDynamicAnimator *_animator;
    UICollectionViewLayoutInvalidationContext *_invalidationContext;
    struct CGRect _frame;
    NSIndexSet *_sections;
    NSIndexSet *_items;
    NSArray *_elementKinds;
    struct _UICollectionViewCompositionLayout *_compositionLayout;
    UICollectionViewLayout *_siblingLayout;
    struct CGPoint _layoutOffset;
    unsigned long long _layoutOffsetEdges;
    struct {
        unsigned int inTransitionFromTransitionLayout:1;
        unsigned int inTransitionToTransitionLayout:1;
        unsigned int prepared:1;
    } _layoutFlags;
    long long _sublayoutType;
}

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;
@property(nonatomic, getter=_sublayoutType, setter=_setSublayoutType:) long long sublayoutType; // @synthesize sublayoutType=_sublayoutType;
- (void).cxx_destruct;
- (_Bool)_shouldScrollToContentBeginningInRightToLeft;
- (id)invalidationContextForEndingInteractiveMovementOfItemsToFinalIndexPaths:(id)arg1 previousIndexPaths:(id)arg2 movementCancelled:(_Bool)arg3;
- (id)invalidationContextForInteractivelyMovingItems:(id)arg1 withTargetPosition:(struct CGPoint)arg2 previousIndexPaths:(id)arg3 previousPosition:(struct CGPoint)arg4;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint)arg2;
- (id)targetIndexPathForInteractivelyMovingItem:(id)arg1 withPosition:(struct CGPoint)arg2;
- (id)_invalidationContextForEndingReorderingItemToFinalIndexPaths:(id)arg1 previousIndexPaths:(id)arg2 reorderingCancelled:(_Bool)arg3;
- (id)_invalidationContextForReorderingTargetPosition:(struct CGPoint)arg1 targetIndexPaths:(id)arg2 withPreviousPosition:(struct CGPoint)arg3 previousIndexPaths:(id)arg4;
- (id)_layoutAttributesForReorderedItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint)arg2;
- (id)_reorderingTargetItemIndexPathForPosition:(struct CGPoint)arg1 withPreviousIndexPath:(id)arg2;
@property(nonatomic, getter=_isPrepared, setter=_setPrepared:) _Bool prepared;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromLayout:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toLayout:(id)arg2;
- (struct CGPoint)_offsetInTopParentLayout:(struct _UICollectionViewCompositionLayout **)arg1;
@property(nonatomic, getter=_layoutOffsetEdges, setter=_setLayoutOffsetEdges:) unsigned long long layoutOffsetEdges;
@property(nonatomic, getter=_layoutOffset, setter=_setLayoutOffset:) struct CGPoint layoutOffset;
@property(nonatomic, getter=_siblingLayout, setter=_setSiblingLayout:) UICollectionViewLayout *siblingLayout;
@property(nonatomic, getter=_compositionLayout, setter=_setCompositionLayout:) _UICollectionViewCompositionLayout *compositionLayout;
@property(copy, nonatomic, getter=_elementKinds, setter=_setElementKinds:) NSArray *elementKinds;
@property(copy, nonatomic, getter=_items, setter=_setItems:) NSIndexSet *items;
@property(copy, nonatomic, getter=_sections, setter=_setSections:) NSIndexSet *sections;
- (struct CGRect)_dynamicReferenceBounds;
- (struct CGRect)_bounds;
@property(nonatomic, getter=_frame, setter=_setFrame:) struct CGRect frame;
- (void)_invalidateLayoutUsingContext:(id)arg1;
- (_Bool)_supportsAdvancedTransitionAnimations;
- (void)_setExternalObjectTable:(id)arg1 forNibLoadingOfDecorationViewOfKind:(id)arg2;
- (id)_decorationViewForLayoutAttributes:(id)arg1;
- (void)_finalizeCollectionViewItemAnimations;
- (id)indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)_indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (id)_indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (id)_indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)_indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)_prepareToAnimateFromCollectionViewItems:(id)arg1 atContentOffset:(struct CGPoint)arg2 toItems:(id)arg3 atContentOffset:(struct CGPoint)arg4;
- (id)_dynamicAnimator;
- (void)_setDynamicAnimator:(id)arg1;
- (void)finalizeAnimatedBoundsChange;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (void)_setCollectionViewBoundsSize:(struct CGSize)arg1;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)_setCollectionView:(id)arg1;
- (struct CGPoint)updatesContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)transitionContentOffsetForProposedContentOffset:(struct CGPoint)arg1 keyItemIndexPath:(id)arg2;
- (void)_didFinishLayoutTransitionAnimations:(_Bool)arg1;
- (void)finalizeLayoutTransition;
- (void)prepareForTransitionFromLayout:(id)arg1;
- (void)prepareForTransitionToLayout:(id)arg1;
- (void)_finalizeLayoutTransition;
- (void)_prepareForTransitionFromLayout:(id)arg1;
- (void)_prepareForTransitionToLayout:(id)arg1;
- (void)registerNib:(id)arg1 forDecorationViewOfKind:(id)arg2;
- (void)registerClass:(Class)arg1 forDecorationViewOfKind:(id)arg2;
- (id)snapshottedLayoutAttributeForItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)invalidateLayout;
- (void)prepareLayout;
- (_Bool)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

