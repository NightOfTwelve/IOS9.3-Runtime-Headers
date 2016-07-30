//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDStyledInfo.h>

#import <iWorkImport/TSDInfoWithPathSource-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSDReducableInfo-Protocol.h>
#import <iWorkImport/TSKSearchable-Protocol.h>

@class NSObject, NSString, TSDFill, TSDInfoGeometry, TSDLineEnd, TSDPathSource, TSDShapeStyle, TSPObject;
@protocol TSDContainerInfo, TSDOwningAttachment;

__attribute__((visibility("hidden")))
@interface TSDShapeInfo : TSDStyledInfo <TSDMixing, TSDReducableInfo, TSKSearchable, TSDInfoWithPathSource>
{
    TSDPathSource *mPathSource;
    TSDShapeStyle *mStyle;
}

@property(retain, nonatomic) TSDPathSource *pathSource; // @synthesize pathSource=mPathSource;
- (id)style;
- (_Bool)shouldFlipLineEndsForStyle:(id)arg1 isStyleTailEndOnLeft:(int)arg2;
- (_Bool)isTailEndOnLeftFromTemporaryLayoutForPasteboard;
- (id)objectForProperty:(int)arg1;
- (_Bool)pathIsOpen;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)animationFilters;
- (struct CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
- (id)imageDatasForReducingFileSizeWithAssociatedHints;
- (void)setValuesForProperties:(id)arg1;
@property(copy, nonatomic) TSDFill *fill;
@property(copy, nonatomic) TSDLineEnd *tailLineEnd;
@property(copy, nonatomic) TSDLineEnd *headLineEnd;
- (void)setStyle:(id)arg1;
@property(readonly, nonatomic) _Bool supportsShrinkTextToFit;
@property(readonly, nonatomic) _Bool supportsTextInset;
@property(readonly, nonatomic) TSDShapeStyle *shapeStyle;
- (Class)styleClass;
- (Class)repClass;
- (Class)layoutClass;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4;
- (void)saveToArchive:(struct ShapeArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct ShapeArchive *)arg1 unarchiver:(id)arg2;
- (id)subclassInitFromUnarchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)p_correctNearZeroWidthLines;
- (void)p_correctLineSegmentGeometry;
- (int)elementKind;
- (_Bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;

// Remaining properties
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property(readonly) Class superclass;

@end

