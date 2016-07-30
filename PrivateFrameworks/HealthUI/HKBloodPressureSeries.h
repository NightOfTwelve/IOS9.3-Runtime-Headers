//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKGraphSeries.h>

@class HKBloodPressureSeriesPresentationStyle, _HKStretchableImage;

@interface HKBloodPressureSeries : HKGraphSeries
{
    _HKStretchableImage *_stretchableSystolicSelectedImage;
    _HKStretchableImage *_stretchableSystolicUnselectedImage;
    _HKStretchableImage *_stretchableDiastolicSelectedImage;
    _HKStretchableImage *_stretchableDiastolicUnselectedImage;
    HKBloodPressureSeriesPresentationStyle *_unselectedPresentationStyle;
    HKBloodPressureSeriesPresentationStyle *_selectedPresentationStyle;
}

@property(retain, nonatomic) HKBloodPressureSeriesPresentationStyle *selectedPresentationStyle; // @synthesize selectedPresentationStyle=_selectedPresentationStyle;
@property(retain, nonatomic) HKBloodPressureSeriesPresentationStyle *unselectedPresentationStyle; // @synthesize unselectedPresentationStyle=_unselectedPresentationStyle;
- (void).cxx_destruct;
- (id)_generateStretchableImageWithPresentationStyle:(id)arg1 arrowsUp:(_Bool)arg2;
- (_Bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect)arg1 blockCoordinate:(id)arg2;
- (double)yAxisDifferenceToPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)xAxisDistanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)distanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)_drawMinMaxCoordinate:(id)arg1 withStretchableImage:(id)arg2 context:(struct CGContext *)arg3 contextBounds:(struct CGRect)arg4;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;

@end

