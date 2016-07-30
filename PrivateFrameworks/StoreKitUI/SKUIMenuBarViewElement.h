//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

#import <StoreKitUI/SKUIMenuBarViewElement-Protocol.h>
#import <StoreKitUI/_SKUIMenuBarViewElementConfigurationReloadDelegate-Protocol.h>

@class NSArray, NSString, SKUIMenuBarViewElementConfiguration;

@interface SKUIMenuBarViewElement : SKUIViewElement <_SKUIMenuBarViewElementConfigurationReloadDelegate, SKUIMenuBarViewElement>
{
    NSArray *_titleViewElements;
    SKUIMenuBarViewElementConfiguration *_configuration;
}

+ (Class)_shelfMenuBarViewElementClass;
+ (Class)_titlesMenuBarViewElementClass;
+ (id)supportedFeatures;
@property(retain, nonatomic) SKUIMenuBarViewElementConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)_reloadMenuItems;
- (id)titleForMenuItemAtIndex:(unsigned long long)arg1;
- (void)_menuBarViewElementConfigurationRequestsReload:(id)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

