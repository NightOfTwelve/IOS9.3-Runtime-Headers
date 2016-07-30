//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIGridViewElement.h>

@class NSMutableDictionary;

@interface SKUIDynamicGridViewElement : SKUIGridViewElement
{
    _Bool _hasValidTemplateDefinitionMap;
    NSMutableDictionary *_templateDefinitionTypeToModeValueMap;
    long long _minimumEntityCountForSections;
}

@property(readonly, nonatomic) long long minimumEntityCountForSections; // @synthesize minimumEntityCountForSections=_minimumEntityCountForSections;
- (void).cxx_destruct;
- (void)_unfilteredEnumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (id)_templateDefinitionTypeToModeValueMap;
- (id)templateDefinitionViewElementsForType:(id)arg1 mode:(id)arg2;
- (id)bestTemplateDefinitionViewElementFromTemplateDefinitionViewElements:(id)arg1 entityValueProvider:(id)arg2;
@property(readonly, nonatomic, getter=isMalformed) _Bool malformed;
@property(readonly, nonatomic) _Bool hasSectionHeaders;
- (_Bool)allowsMultipleSelectionDuringEditing;
- (long long)pageComponentType;
- (_Bool)isDynamicContainer;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

