//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCHChartFeature.h>

__attribute__((visibility("hidden")))
@interface TSCHChartFeaturePie : TSCHChartFeature
{
}

- (_Bool)supportsReferenceLines;
- (int)representativeGridValueAxisType;
- (unsigned long long)maxCellsToCheckForGridValueType;
- (_Bool)supportsCategoryLabelsInChartRangeEditor;
- (_Bool)supportsMoreThanOneLiveCategory;
- (id)initialSceneWithChartInfo:(id)arg1 layoutSettings:(CDStruct_9aa9521f)arg2;
- (Class)presetImagerClass;
- (_Bool)supportsPercentNumberFormatting;
- (_Bool)supportsLabelExplosion;
- (_Bool)supportsElementSeriesNames;
- (_Bool)supportsBorderFrame;
- (_Bool)isPie;
- (_Bool)supportsErrorBars;
- (_Bool)supportsTrendLines;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (_Bool)supportsBackgroundFill;
- (_Bool)supportsGroupedShadows;
- (id)userInterfaceName;
- (id)genericToSpecificPropertyMap;
- (id)defaultDataFileName;
- (unsigned long long)styleIndexForAxisID:(id)arg1;
- (Class)valueAxisClassForID:(id)arg1 scale:(int)arg2;
- (void)p_initializeAxisIDs;
- (int)deprecated3DShadowSpecificProperty;
- (int)deprecated3DBevelEdgesSpecificProperty;

@end

