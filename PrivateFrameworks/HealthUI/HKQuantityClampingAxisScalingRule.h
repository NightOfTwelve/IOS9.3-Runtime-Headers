//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKInteractiveChartsAxisScalingRule-Protocol.h>

@class HKUnit, NSArray, NSDictionary, NSString;

@interface HKQuantityClampingAxisScalingRule : NSObject <HKInteractiveChartsAxisScalingRule>
{
    NSDictionary *_chartBoundsRuleChoicesByUnit;
    NSArray *_chartBoundsRuleChoices;
    HKUnit *_unit;
}

+ (id)ruleWithChartBoundsRuleChoicesByUnit:(id)arg1;
- (void).cxx_destruct;
- (id)portraitYValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 allowedDecimalPrecision:(long long)arg3;
- (id)yValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2;
- (void)_convertQuantityRanges;
- (void)setUnit:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

