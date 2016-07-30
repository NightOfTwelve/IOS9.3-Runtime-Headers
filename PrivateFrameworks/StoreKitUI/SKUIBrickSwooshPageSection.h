//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

#import <StoreKitUI/SKUIMissingItemDelegate-Protocol.h>
#import <StoreKitUI/SKUISwooshViewControllerDelegate-Protocol.h>

@class NSString, SKUIBrickSwooshArtworkLoader, SKUIBrickSwooshViewController, SKUIMissingItemLoader, SKUISwooshPageComponent;

@interface SKUIBrickSwooshPageSection : SKUIStorePageSection <SKUIMissingItemDelegate, SKUISwooshViewControllerDelegate>
{
    SKUIBrickSwooshArtworkLoader *_artworkLoader;
    SKUIMissingItemLoader *_missingItemLoader;
    SKUIBrickSwooshViewController *_swooshViewController;
}

- (void).cxx_destruct;
- (id)_swooshViewController;
- (id)_missingItemLoader;
- (void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2;
- (id)_artworkLoader;
- (void)_addImpressionForIndex:(long long)arg1 toSession:(id)arg2;
- (void)swoosh:(id)arg1 willDisplayCellAtIndex:(long long)arg2;
- (id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2;
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (long long)numberOfCells;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SKUISwooshPageComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

