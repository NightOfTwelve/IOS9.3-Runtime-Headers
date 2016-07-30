//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, NSMutableArray, SKUIIndexBarViewElement, SKUINavigationBarViewElement, SKUIToolbarViewElement;

@interface SKUIStackTemplateElement : SKUIViewElement
{
    NSMutableArray *_collectionElements;
    SKUIViewElement *_collectionHeaderViewElement;
    _Bool _needsStateReset;
}

@property(readonly, nonatomic) _Bool needsStateReset; // @synthesize needsStateReset=_needsStateReset;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long numberOfSplits;
@property(readonly, nonatomic) SKUIToolbarViewElement *toolbarElement;
@property(readonly, nonatomic) SKUINavigationBarViewElement *navigationBarElement;
@property(readonly, nonatomic) SKUIIndexBarViewElement *indexBarViewElement;
@property(readonly, nonatomic) SKUIViewElement *collectionHeaderViewElement;
@property(readonly, nonatomic) NSArray *collectionElements;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

