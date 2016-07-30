//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKPaymentSetupHeroView, PKPaymentSetupInfoView;

@interface PKPaymentSetupIntroView : UIView
{
    UIView *_maskView;
    PKPaymentSetupHeroView *_heroView;
    long long _context;
    PKPaymentSetupInfoView *_infoView;
}

@property(retain, nonatomic) PKPaymentSetupInfoView *infoView; // @synthesize infoView=_infoView;
- (_Bool)isBuddyiPad;
- (void)stopAnimation;
- (void)startAnimation;
- (void)layoutSubviews;
- (void)_createSubviewsWithNetworks:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(long long)arg1 featuredPaymentNetworks:(id)arg2;
- (id)initWithContext:(long long)arg1 featuredPaymentNetwork:(long long)arg2;
- (id)initWithContext:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

