//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUILockupViewElement;

@interface SKUIPreviewTemplateViewElement : SKUIViewElement
{
    long long _itemIdentifier;
    NSString *_previewURLString;
}

@property(readonly, nonatomic) NSString *previewURLString; // @synthesize previewURLString=_previewURLString;
@property(readonly, nonatomic) long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) SKUILockupViewElement *previewLockup;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

