//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSDContainerInfo-Protocol.h>

@class NSString, TPPageHint, TPPageInfo, TSDInfoGeometry, TSPObject, TSWPStorage;
@protocol TSDContainerInfo, TSDHint, TSDOwningAttachment, TSWPOffscreenColumn;

__attribute__((visibility("hidden")))
@interface TPBodyInfo : NSObject <TSDContainerInfo>
{
    TPPageInfo *_pageInfo;
}

@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @synthesize parentInfo=_pageInfo;
- (id)infoForSelectionPath:(id)arg1;
- (id)childInfos;
- (id)copyWithContext:(id)arg1;
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
- (void)setPrimitiveGeometry:(id)arg1;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (void)inflateBodyLayout:(id)arg1;
@property(readonly, nonatomic) _Bool layoutVertically;
@property(readonly, nonatomic) TPPageHint *pageHint;
@property(readonly, nonatomic) TSWPStorage *storage;
@property(readonly, nonatomic) TSWPStorage *bodyStorage;
@property(readonly, nonatomic) id <TSDHint> nextTargetFirstChildHint;
@property(readonly, nonatomic) const struct TSWPTopicNumberHints *nextTargetTopicNumbers;
@property(readonly, nonatomic) id <TSWPOffscreenColumn> nextTargetFirstColumn;
@property(readonly, nonatomic) const struct TSWPTopicNumberHints *previousTargetTopicNumbers;
@property(readonly, nonatomic) id <TSWPOffscreenColumn> previousTargetLastColumn;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(readonly) Class superclass;

@end

