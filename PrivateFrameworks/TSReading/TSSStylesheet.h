//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSPObject.h>

#import <TSReading/TSKTransformableObject-Protocol.h>

@class NSMutableDictionary, NSSet, NSString, TSUMutableRetainedPointerSet, TSURetainedPointerKeyDictionary;

@interface TSSStylesheet : TSPObject <TSKTransformableObject>
{
    TSSStylesheet *mParent;
    TSSStylesheet *mChild;
    TSUMutableRetainedPointerSet *mStyles;
    NSMutableDictionary *mIdentifierToStyleMap;
    TSURetainedPointerKeyDictionary *mParentToChildrenStyleMap;
    _Bool mIsLocked;
    _Bool mCanCullStyles;
}

@property(readonly, nonatomic) TSSStylesheet *child; // @synthesize child=mChild;
@property(readonly, nonatomic) TSSStylesheet *parent; // @synthesize parent=mParent;
- (id)unusedStyleIdentifierWithPackageString:(id)arg1 styleDescriptor:(id)arg2 contentTag:(id)arg3;
- (id)pVariationOfStyle:(id)arg1 propertyMap:(id)arg2 matchStyles:(id)arg3 context:(id)arg4;
- (void)p_removeStyleFromParentChildren:(id)arg1;
- (void)p_addStyleToParentChildren:(id)arg1;
- (void)p_setParent:(id)arg1 ofStyle:(id)arg2;
- (void)p_setIdentifier:(id)arg1 ofStyle:(id)arg2;
- (void)p_removeStyle:(id)arg1;
- (void)p_addStyle:(id)arg1 withParent:(id)arg2 identifier:(id)arg3;
- (void)unlockStylesheetForDurationOfBlock:(CDUnknownBlockType)arg1;
- (void)didLoadChildObjectFromDocumentSupport:(id)arg1;
- (id)variationOfStyle:(id)arg1 exactPropertyMap:(id)arg2;
- (id)variationOfStyle:(id)arg1 propertyMap:(id)arg2 matchStyles:(id)arg3 context:(id)arg4;
- (id)variationOfStyle:(id)arg1 propertyMap:(id)arg2 context:(id)arg3;
- (id)variationOfStyleMatchingStyle:(id)arg1 withNewParentStyle:(id)arg2;
- (id)variationOfStyle:(id)arg1 propertyMap:(id)arg2;
- (id)firstRootlessStyleOfClass:(Class)arg1 withOverridePropertyMap:(id)arg2;
- (id)namedStylesOfClass:(Class)arg1;
- (id)stylesPassingTest:(CDUnknownBlockType)arg1;
- (void)enumerateCascadedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateStylesUsingBlock:(CDUnknownBlockType)arg1;
- (id)identifiedStylesOfClass:(Class)arg1;
- (id)identifiedStyles;
- (id)stylesOfClass:(Class)arg1;
- (id)stylesWithName:(id)arg1 ofClass:(Class)arg2;
- (id)stylesWithName:(id)arg1;
- (id)cascadedFirstStyleWithName:(id)arg1;
- (id)firstStyleWithName:(id)arg1;
- (id)childrenOfStyle:(id)arg1;
- (void)setParent:(id)arg1 ofStyle:(id)arg2;
- (void)setIdentifier:(id)arg1 ofStyle:(id)arg2;
- (id)cascadedStyleWithIdentifier:(id)arg1 componentMask:(int)arg2;
- (id)styleWithIdentifier:(id)arg1 componentMask:(int)arg2;
- (id)cascadedStyleWithIdentifier:(id)arg1;
- (id)styleWithIdentifier:(id)arg1;
- (_Bool)cascadedContainsStyle:(id)arg1;
- (_Bool)containsStyle:(id)arg1;
- (void)removeStyle:(id)arg1;
- (void)addStyle:(id)arg1 withParent:(id)arg2 identifier:(id)arg3;
- (void)addStyle:(id)arg1 withParent:(id)arg2;
- (void)addStyle:(id)arg1 withIdentifier:(id)arg2;
- (void)addStyle:(id)arg1;
- (unsigned long long)descendantCount;
- (id)rootAncestor;
- (_Bool)isAncestorOf:(id)arg1;
- (_Bool)isDescendentOf:(id)arg1;
- (_Bool)isParentOf:(id)arg1;
- (_Bool)isChildOf:(id)arg1;
- (void)setParent:(id)arg1 withParentStyleMap:(struct __CFDictionary *)arg2;
- (void)setParent:(id)arg1;
@property(readonly, nonatomic) NSSet *styles;
@property(nonatomic) _Bool canCullStyles;
@property(nonatomic) _Bool isLocked;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 canCullStyles:(_Bool)arg2;
- (id)headerAndFooterStyle;
- (id)defaultColumnStyle;
- (id)defaultParagraphStyle;
- (id)defaultListStyle;
- (id)hyperlinkStyle;
- (id)defaultCharacterStyle;
- (id)variationOfCharacterStyle:(id)arg1 paragraphStyle:(id)arg2 propertyMap:(id)arg3;
- (id)p_variationMapForVaryingCharacterStyle:(id)arg1 overParagraphStyle:(id)arg2 withPropertyMap:(id)arg3;
- (id)_defaultStyleOfClass:(Class)arg1 withIdentifier:(id)arg2 wasCreated:(_Bool *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)_defaultColumnStyleWasCreated:(_Bool *)arg1;
- (id)_defaultListStyleWasCreated:(_Bool *)arg1;
- (id)_defaultParagraphStyleWasCreated:(_Bool *)arg1;
- (id)_hyperlinkStyleWasCreated:(_Bool *)arg1;
- (id)_defaultCharacterStyleWasCreated:(_Bool *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

