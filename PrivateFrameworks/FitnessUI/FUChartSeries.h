//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FUChartDataSet, NSArray, NSDate, NSNumber;
@protocol FUChartSeriesDataSource, FUChartSeriesDelegate;

@interface FUChartSeries : UIView
{
    NSDate *_minXValue;
    NSDate *_maxXValue;
    NSArray *_dataPoints;
    float _animationDuration;
    NSNumber *_minYValue;
    NSNumber *_maxYValue;
    id <FUChartSeriesDataSource> _dataSource;
    id <FUChartSeriesDelegate> _delegate;
    FUChartDataSet *_dataSet;
    struct UIEdgeInsets _edgeInsets;
}

@property(retain, nonatomic) FUChartDataSet *dataSet; // @synthesize dataSet=_dataSet;
@property(nonatomic) __weak id <FUChartSeriesDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FUChartSeriesDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(retain, nonatomic) NSNumber *maxYValue; // @synthesize maxYValue=_maxYValue;
@property(retain, nonatomic) NSNumber *minYValue; // @synthesize minYValue=_minYValue;
@property(nonatomic) float animationDuration; // @synthesize animationDuration=_animationDuration;
- (void).cxx_destruct;
- (id)_getMaxYValue;
- (id)_getMinYValue;
- (id)_getMaxXValue;
- (id)_getMinXValue;
- (double)_getYValueForPointFromChartPoint:(id)arg1 key:(id)arg2;
- (double)_getYValueForPointFromChartPoint:(id)arg1;
- (struct CGRect)insetBounds;
- (double)_getYValueForPointFromChartPointValue:(id)arg1;
- (double)_getXValueForPointFromChartPoint:(id)arg1;
- (float)_relativePositionForYPlaneValue:(id)arg1;
- (float)_relativePositionForXPlaneValue:(id)arg1;
- (void)_reloadMinMaxValues;
- (void)tapDragGestureRecognizerUpdated:(id)arg1;
- (id)getLabelsFromSet;
- (id)getChartPointFromDataSetAtIndex:(long long)arg1;
- (struct CGPoint)getPointFromChartPoint:(id)arg1 forKey:(id)arg2;
- (struct CGPoint)getPointFromChartPoint:(id)arg1;
- (id)getPointsFromDataSet;
- (void)refreshView;
- (void)selectedPointIndexesUpdated:(id)arg1 selectionPoints:(id)arg2;
- (void)layoutSubviews;
- (void)animate;
- (id)init;

@end

