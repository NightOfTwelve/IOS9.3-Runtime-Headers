//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIVisualEffect.h>

@interface UIVibrancyEffect : UIVisualEffect
{
    long long _blurStyle;
}

+ (_Bool)supportsSecureCoding;
+ (id)effectForBlurEffect:(id)arg1;
- (id)_reduceTransparencyEffectConfig;
- (id)_lowQualityEffectConfig;
- (id)_highQualityEffectConfig;
- (id)effectConfigForQuality:(long long)arg1;
- (id)effectConfig;
- (id)effectForUserInterfaceStyle:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

