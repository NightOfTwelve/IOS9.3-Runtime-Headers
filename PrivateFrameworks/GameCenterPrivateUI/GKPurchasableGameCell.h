//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKBaseGameCell.h>

@class GKRatingView, GKStoreItemInternal, UILabel;

@interface GKPurchasableGameCell : GKBaseGameCell
{
    float _capturedRating;
    GKStoreItemInternal *_storeItem;
    UILabel *_developerLabel;
    UILabel *_priceLabel;
    GKRatingView *_ratingStarsView;
    UILabel *_numberRatings;
}

@property(retain, nonatomic) UILabel *numberRatings; // @synthesize numberRatings=_numberRatings;
@property(nonatomic) float capturedRating; // @synthesize capturedRating=_capturedRating;
@property(retain, nonatomic) GKRatingView *ratingStarsView; // @synthesize ratingStarsView=_ratingStarsView;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *developerLabel; // @synthesize developerLabel=_developerLabel;
@property(retain, nonatomic) GKStoreItemInternal *storeItem; // @synthesize storeItem=_storeItem;
- (_Bool)canRemoveItem;
- (void)didUpdateModel;
- (void)prepareForReuse;
- (void)dealloc;
- (void)establishConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

