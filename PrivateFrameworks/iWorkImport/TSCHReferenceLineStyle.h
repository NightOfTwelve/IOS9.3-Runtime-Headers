//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCHBaseStyle.h>

__attribute__((visibility("hidden")))
@interface TSCHReferenceLineStyle : TSCHBaseStyle
{
}

+ (id)defaultStyleForPresetFromChartStyle:(id)arg1 seriesStyle:(id)arg2 paragraphStyles:(id)arg3 valueAxisStyle:(id)arg4;
+ (id)overrideMapFromChartStyle:(id)arg1 seriesStyle:(id)arg2 paragraphStyles:(id)arg3 valueAxisStyle:(id)arg4;
+ (id)identifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;
+ (id)presetStyleDescriptorForOrdinal:(unsigned long long)arg1;
+ (id)defaultStyleWithContext:(id)arg1;
+ (int)muxDefaultPropertyForSpecificProperty:(int)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)imageFillProperties;
+ (id)properties;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end

