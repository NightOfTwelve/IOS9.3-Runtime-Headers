//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIAttributedStringView.h>

@interface SKUIAttributedStringWrapperView : SKUIAttributedStringView
{
    SKUIAttributedStringView *_delegateView;
}

@property(readonly, nonatomic) SKUIAttributedStringView *delegateView; // @synthesize delegateView=_delegateView;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)usesTallCharacterSet;
- (id)treatmentColor;
- (void)setTreatmentColor:(id)arg1;
- (_Bool)textColorFollowsTintColor;
- (void)setTextColorFollowsTintColor:(_Bool)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (long long)stringTreatment;
- (void)setStringTreatment:(long long)arg1;
- (id)requiredBadges;
- (void)setRequiredBadges:(id)arg1;
- (id)layout;
- (void)setLayout:(id)arg1;
- (long long)firstLineTopInset;
- (void)setFirstLineTopInset:(long long)arg1;
- (void)setBadgePlacement:(long long)arg1;
- (double)firstBaselineOffset;
- (double)baselineOffset;
- (long long)badgePlacement;
- (id)initWithFrame:(struct CGRect)arg1;

@end

