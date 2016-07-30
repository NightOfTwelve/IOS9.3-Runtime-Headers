//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSDDrawableContainerInfo-Protocol.h>
#import <iWorkImport/TSKDocumentObject-Protocol.h>
#import <iWorkImport/TSKTransformableObject-Protocol.h>
#import <iWorkImport/TSSPropertySource-Protocol.h>
#import <iWorkImport/TSSStyleClient-Protocol.h>

@class KNBodyPlaceholderInfo, KNObjectPlaceholderInfo, KNSlideBackgroundInfo, KNSlideNode, KNSlideNumberPlaceholderInfo, KNSlideStyle, KNTitlePlaceholderInfo, KNTransition, NSArray, NSDictionary, NSMutableDictionary, NSObject, NSOrderedSet, NSSet, NSString, TSDFill, TSDInfoGeometry, TSUMutablePointerSet, TSUPointerKeyDictionary;
@protocol TSDContainerInfo, TSDOwningAttachment;

__attribute__((visibility("hidden")))
@interface KNAbstractSlide : TSPObject <TSSPropertySource, TSSStyleClient, TSKDocumentObject, TSDDrawableContainerInfo, TSKTransformableObject>
{
    KNSlideNode *mSlideNode;
    KNTitlePlaceholderInfo *mTitlePlaceholder;
    KNBodyPlaceholderInfo *mBodyPlaceholder;
    KNObjectPlaceholderInfo *mObjectPlaceholder;
    KNSlideNumberPlaceholderInfo *mSlideNumberPlaceholder;
    KNSlideStyle *mStyle;
    KNSlideBackgroundInfo *mBackground;
    NSOrderedSet *mChildInfos;
    _Bool mInDocument;
    NSMutableDictionary *mPlaceholdersForTags;
    NSSet *_builds;
    NSArray *_buildChunks;
    _Bool mNeedsSlideNodeEventCountUpdate;
    TSUPointerKeyDictionary *mDrawableToGhostInfosMap;
    TSUMutablePointerSet *mDrawablesWithInvalidGhosts;
    _Bool mShouldConsiderAllChunksActive;
    KNTransition *mTransition;
}

+ (unsigned long long)deliveryGroupCountForBuildChunks:(id)arg1;
+ (id)buildChunksInDeliveryGroupAtIndex:(unsigned long long)arg1 inBuildChunks:(id)arg2;
+ (id)p_firstActiveChunkInChunks:(id)arg1;
+ (_Bool)chunk:(id)arg1 isFirstInDeliveryGroupForChunks:(id)arg2;
+ (unsigned long long)deliveryGroupIndexForBuildChunk:(id)arg1 inBuildChunks:(id)arg2;
+ (id)parentSlideForInfo:(id)arg1;
+ (id)newObjectForUnarchiver:(id)arg1;
+ (_Bool)needsObjectUUID;
@property(readonly, nonatomic) _Bool inDocument; // @synthesize inDocument=mInDocument;
@property(retain, nonatomic) KNSlideNumberPlaceholderInfo *slideNumberPlaceholder; // @synthesize slideNumberPlaceholder=mSlideNumberPlaceholder;
@property(retain, nonatomic) KNObjectPlaceholderInfo *objectPlaceholder; // @synthesize objectPlaceholder=mObjectPlaceholder;
@property(retain, nonatomic) KNBodyPlaceholderInfo *bodyPlaceholder; // @synthesize bodyPlaceholder=mBodyPlaceholder;
@property(retain, nonatomic) KNTitlePlaceholderInfo *titlePlaceholder; // @synthesize titlePlaceholder=mTitlePlaceholder;
@property(readonly, nonatomic) KNSlideNode *slideNode; // @synthesize slideNode=mSlideNode;
- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (id)referencedStyles;
- (double)CGFloatValueForProperty:(int)arg1;
- (double)doubleValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1;
- (int)intValueForProperty:(int)arg1;
- (id)objectForProperty:(int)arg1;
- (id)boxedObjectForProperty:(int)arg1;
- (_Bool)containsProperty:(int)arg1;
- (id)copyWithContext:(id)arg1;
- (id)childEnumerator;
- (_Bool)isThemeContent;
- (Class)repClass;
- (Class)layoutClass;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo;
- (void)setPrimitiveGeometry:(id)arg1;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (id)infoForSelectionPath:(id)arg1;
- (id)infoCorrespondingToInfo:(id)arg1;
- (void)replaceChildInfo:(id)arg1 with:(id)arg2;
- (void)removeChildInfo:(id)arg1;
- (void)insertChildInfo:(id)arg1 above:(id)arg2;
- (void)insertChildInfo:(id)arg1 below:(id)arg2;
- (void)insertChildInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addChildInfo:(id)arg1;
- (void)p_insertChildInfos:(id)arg1 atIndex:(unsigned long long)arg2 dolcContext:(id)arg3;
- (_Bool)canMoveDeliveryGroupFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) NSArray *buildsGroupedByDeliveryGroup;
@property(readonly, nonatomic) unsigned long long deliveryGroupCount;
- (_Bool)p_canMoveDeliveryGroupBuildChunks:(id)arg1 toIndex:(unsigned long long)arg2;
- (_Bool)p_canMoveDeliveryGroupBuildChunksFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)buildChunksInDeliveryGroupAtIndex:(unsigned long long)arg1;
- (id)deliveryGroupIndexesForBuilds:(id)arg1;
- (unsigned long long)deliveryGroupIndexForBuildChunk:(id)arg1;
- (_Bool)hasComplementForBuildChunk:(id)arg1;
- (_Bool)hasComplementForBuildChunk:(id)arg1 inBuildChunks:(id)arg2;
- (id)p_calculateActiveBuildChunks;
@property(readonly, nonatomic) NSArray *activeBuildChunks;
- (struct _NSRange)p_activeChunkRangeForBuild:(id)arg1 inActiveChunks:(id)arg2;
- (_Bool)p_activeChunks:(id)arg1 interleaveChunksForComplementOfBuild:(id)arg2;
- (_Bool)p_activeChunks:(id)arg1 areInOrderForBuild:(id)arg2;
- (_Bool)p_areActiveBuildChunksInValidOrder:(id)arg1;
- (long long)validateMoveActiveBuildChunks:(id)arg1 toActiveIndex:(unsigned long long)arg2;
- (long long)canMoveBuildChunk:(id)arg1 toIndex:(unsigned long long)arg2;
- (_Bool)p_isValidToMoveChunk:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)p_lastActiveChunkInChunksForBuild:(id)arg1;
- (id)p_firstActiveChunkInChunksForBuild:(id)arg1;
- (id)p_complementForBuild:(id)arg1;
- (id)activeChunksForDrawable:(id)arg1 animationType:(int)arg2;
- (id)activeChunksForDrawable:(id)arg1;
- (void)removeBuildChunk:(id)arg1 rollbackGeneratedIdentifier:(_Bool)arg2;
- (void)insertBuildChunk:(id)arg1 afterChunk:(id)arg2 generateIdentifier:(_Bool)arg3;
- (void)p_assertChunksInSequenceForBuild:(id)arg1;
- (void)setBuildChunks:(id)arg1 generateIdentifiers:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long buildChunkCount;
@property(readonly, nonatomic) NSArray *buildChunks;
- (void)removeInvalidBuildsOnDrawable:(id)arg1 usingParentCommand:(id)arg2;
- (id)p_invalidBuildsOnDrawable:(id)arg1;
- (id)outBuildForDrawable:(id)arg1;
- (id)inBuildForDrawable:(id)arg1;
- (id)buildsForDrawable:(id)arg1;
- (id)buildsForDrawable:(id)arg1 type:(int)arg2;
- (id)buildsForDrawables:(id)arg1;
- (void)removeBuild:(id)arg1;
- (void)addBuild:(id)arg1;
@property(copy, nonatomic) NSSet *builds;
@property(readonly, nonatomic) unsigned long long buildCount;
- (void)p_invalidateSlideNodeBuildEventCountCaches;
- (void)p_invalidateCachesForBuildUpdate:(id)arg1 isForRemoval:(_Bool)arg2;
- (void)p_invalidateCachesForChunkUpdate:(id)arg1 isForRemoval:(_Bool)arg2;
- (void)p_invalidateAllChunkAndBuildCaches;
@property(readonly, nonatomic) _Bool hasFreeformTextPlaceholders;
- (void)removeTagForDrawable:(id)arg1;
- (_Bool)infoIsPlaceholder:(id)arg1;
- (id)tagForInfo:(id)arg1;
- (_Bool)infoExistsForTag:(id)arg1;
- (id)infoForTag:(id)arg1;
- (void)setInfo:(id)arg1 forSageTag:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
@property(readonly, nonatomic, getter=isSlideNumberVisible) _Bool slideNumberVisible;
@property(readonly, nonatomic, getter=isObjectVisible) _Bool objectVisible;
@property(readonly, nonatomic, getter=isBodyVisible) _Bool bodyVisible;
@property(readonly, nonatomic, getter=isTitleVisible) _Bool titleVisible;
- (id)placeholderOfClass:(Class)arg1 withGeometry:(id)arg2 stylesheet:(id)arg3 shapePresetIndex:(long long)arg4 textPresetStyle:(id)arg5 listStyle:(id)arg6 layoutPropertyMap:(id)arg7 paragraphPropertyMap:(id)arg8 listPropertyMap:(id)arg9 context:(id)arg10;
- (id)placeholderOfClass:(Class)arg1 withGeometry:(id)arg2 stylesheet:(id)arg3 shapePresetIndex:(long long)arg4 textPresetStyle:(id)arg5 layoutPropertyMap:(id)arg6 paragraphPropertyMap:(id)arg7 listPropertyMap:(id)arg8 context:(id)arg9;
- (id)placeholderOfClass:(Class)arg1 withGeometry:(id)arg2 stylesheet:(id)arg3 shapePresetIndex:(long long)arg4 textPresetIndex:(long long)arg5 layoutPropertyMap:(id)arg6 paragraphPropertyMap:(id)arg7 listPropertyMap:(id)arg8 context:(id)arg9;
- (id)placeholderWithPlaceholder:(id)arg1 context:(id)arg2;
- (id)placeholderWithPlaceholder:(id)arg1 context:(id)arg2 placeholderClass:(Class)arg3;
- (id)defaultSlideNumberPlaceholderWithContext:(id)arg1;
- (id)defaultSlideNumberPlaceholder;
- (id)defaultBodyPlaceholderWithContext:(id)arg1;
- (id)defaultTitlePlaceholderWithContext:(id)arg1;
- (id)defaultBodyPlaceholder;
- (id)defaultTitlePlaceholder;
- (void)performBlockOnInfos:(CDUnknownBlockType)arg1;
- (void)moveChildren:(id)arg1 toIndexes:(id)arg2;
- (_Bool)canMoveDrawables:(id)arg1 toIndexes:(id)arg2;
- (void)removeDrawable:(id)arg1;
- (void)insertDrawables:(id)arg1 atIndex:(unsigned long long)arg2 dolcContext:(id)arg3;
- (void)insertDrawable:(id)arg1 atIndex:(unsigned long long)arg2 dolcContext:(id)arg3;
- (void)addDrawable:(id)arg1 dolcContext:(id)arg2;
@property(readonly, nonatomic) NSArray *infosToDisplay;
@property(readonly, nonatomic) NSArray *ownedChildInfos;
- (_Bool)p_isChildPlaceholderInfo:(id)arg1;
- (void)p_setChildInfosAsOrderedSet:(id)arg1 usingDOLC:(_Bool)arg2 dolcContext:(id)arg3;
- (void)setChildInfosWithoutDOLC:(id)arg1;
- (void)setChildInfos:(id)arg1;
- (id)childInfos;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
@property(readonly, nonatomic) TSDFill *backgroundFill;
- (void)dealloc;
- (id)objectUUIDPath;
- (id)initWithContext:(id)arg1;
- (id)initWithSlideNode:(id)arg1 context:(id)arg2;
@property(copy, nonatomic) NSDictionary *placeholdersForTags;
@property(retain, nonatomic) KNSlideBackgroundInfo *background;
@property(retain, nonatomic) KNTransition *transition;
@property(retain, nonatomic) KNSlideStyle *style;
- (void)p_updateChartBuildChunksImmediatelyWithoutUndoHistory;
- (void)p_updatePreUFFBuildEffects;
- (void)p_updateOverlappingBuildEventTriggers;
- (void)saveToArchive:(struct SlideArchive *)arg1 archiver:(id)arg2;
- (void)p_updateStartAndEndOffsetsIfNecessaryForFileVersion:(unsigned long long)arg1;
- (void)loadFromArchive:(const struct SlideArchive *)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (void)p_updateBuildsReplacingPlaceholder:(id)arg1 withPlaceholder:(id)arg2;
- (id)imageUsingDocumentRoot:(id)arg1;
- (id)pdfDataUsingDocumentRoot:(id)arg1;
- (void)i_primitiveInsertBuildChunk:(id)arg1 afterChunk:(id)arg2 generateIdentifier:(_Bool)arg3;
- (void)i_primitiveAddBuild:(id)arg1;
- (void)i_invalidateActiveChunkCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(readonly) Class superclass;

@end

