//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCHChartValueAxis.h>

__attribute__((visibility("hidden")))
@interface TSCHChartStackedValueAxis : TSCHChartValueAxis
{
}

- (double)interceptForAxis:(id)arg1;
- (double)doubleAxisToModelValue:(double)arg1;
- (double)doubleModelToAxisValue:(double)arg1 forSeries:(id)arg2;
- (void)updateGridValueTypeInterceptInAnalysis:(id)arg1;
- (double *)unitSpaceValuesForSeries:(id)arg1 indexes:(struct _NSRange)arg2 min:(double)arg3 max:(double)arg4;
- (double)unitSpaceValueForSeries:(id)arg1 index:(unsigned long long)arg2 min:(double)arg3 max:(double)arg4;
- (void)updateMultiDataModelAxisAnalysis:(id)arg1;
- (void)updateModelAxisAnalysis:(id)arg1;
- (id)p_orthogonalAxisForSeries:(id)arg1;
- (_Bool)supportsReferenceLines;

@end

