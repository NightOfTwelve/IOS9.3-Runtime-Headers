//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCHBaseStyle.h>

__attribute__((visibility("hidden")))
@interface TSCHChartSeriesStyle : TSCHBaseStyle
{
}

+ (id)bootstrappedSeriesStyleWithContext:(id)arg1 seriesIndex:(unsigned long long)arg2;
+ (id)getURLForImage:(id)arg1;
+ (id)identifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;
+ (id)presetStyleDescriptorForOrdinal:(unsigned long long)arg1;
+ (id)defaultStyleWithContext:(id)arg1;
+ (int)muxDefaultPropertyForSpecificProperty:(int)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)imageFillProperties;
+ (id)properties;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)initFromPreUFFArchiveWithUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)p_upgrade3DFillSubclassTSDFill:(id)arg1;
- (void)p_upgradeRemoveShadowEnabledPropertyUsage:(id)arg1;
- (void)p_upgrade3DChartProperties:(id)arg1;
- (void)p_upgradeBubbleChartProperties:(id)arg1;
- (void)p_upgradeSeparateVisibilityProperties:(id)arg1;
- (void)p_upgradeMixedChartProperties:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(_Bool)arg4;

@end

