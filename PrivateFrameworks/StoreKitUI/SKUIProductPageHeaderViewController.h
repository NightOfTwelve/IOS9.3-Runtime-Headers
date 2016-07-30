//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/SKUIItemStateCenterObserver-Protocol.h>
#import <StoreKitUI/UIPopoverControllerDelegate-Protocol.h>

@class NSOperationQueue, NSString, SKUIClientContext, SKUIContentRatingArtworkResourceLoader, SKUIItem, SKUIItemArtworkContext, SKUIItemOffer, SKUIProductPage, SKUIProductPageHeaderFloatingView, SKUIProductPageHeaderView, SSVLoadURLOperation, UIImage, UIPopoverController;
@protocol SKUIProductPageHeaderViewDelegate;

@interface SKUIProductPageHeaderViewController : UIViewController <SKUIItemStateCenterObserver, UIPopoverControllerDelegate>
{
    UIPopoverController *_activityPopoverController;
    _Bool _askPermission;
    SKUIContentRatingArtworkResourceLoader *_contentRatingArtworkLoader;
    SKUIItemArtworkContext *_artworkContext;
    SKUIClientContext *_clientContext;
    id <SKUIProductPageHeaderViewDelegate> _delegate;
    SKUIProductPageHeaderView *_headerView;
    UIImage *_iconImage;
    SKUIItem *_item;
    long long _itemIdentifier;
    SSVLoadURLOperation *_loadIconOperation;
    SSVLoadURLOperation *_loadUberOperation;
    NSOperationQueue *_operationQueue;
    long long _personalizationState;
    SKUIItemOffer *_personalizedOffer;
    UIImage *_placeholderImage;
    SKUIProductPage *_productPage;
    UIImage *_uberImage;
    _Bool _wantsActivityViewController;
    SKUIProductPageHeaderFloatingView *_floatingView;
    _Bool _performArtistActionOnLoad;
}

@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) SKUIItem *item; // @synthesize item=_item;
@property(nonatomic) __weak id <SKUIProductPageHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(nonatomic) _Bool askPermission; // @synthesize askPermission=_askPermission;
- (void).cxx_destruct;
- (void)_showSynthesizedItemStateWithFlag:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_showAskPermissionBanner;
- (void)_showActivityViewControllerFromView:(id)arg1;
- (void)_setUberWithImage:(id)arg1 error:(id)arg2;
- (void)_setItemState:(id)arg1 animated:(_Bool)arg2;
- (void)_setPersonalizedOffer:(id)arg1;
- (void)_setArtworkWithImage:(id)arg1 error:(id)arg2;
- (void)_sendDidReloadOffer;
- (id)_segmentedControlTitles;
- (void)_reloadItemStateAnimated:(_Bool)arg1;
- (void)_loadUberImageIfAvailable;
- (_Bool)_isRestricted;
- (void)_disableItemOfferButtonWithTitle:(id)arg1 animated:(_Bool)arg2;
- (id)_contentRatingResourceLoader;
- (void)_destroyPopoverController;
- (id)_artworkContext;
- (id)_ageBandString;
- (id)_activeItem;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)_shareButtonAction:(id)arg1;
- (void)_sectionControlAction:(id)arg1;
- (void)_itemOfferButtonAction:(id)arg1;
- (void)_artistButtonAction:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
@property(nonatomic) long long selectedSectionIndex;
- (void)setProductPage:(id)arg1;
- (void)reloadData;
@property(readonly, nonatomic) UIImage *iconImage;
@property(readonly, nonatomic) SKUIProductPageHeaderFloatingView *floatingView;
- (void)dealloc;
- (id)initWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

