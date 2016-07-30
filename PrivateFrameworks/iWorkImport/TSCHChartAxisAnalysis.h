//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSCHChartAxisAnalysis : NSObject
{
    long long _retainCount;
    double _min;
    double _max;
    double _modelMin;
    double _modelMax;
    double _dataSetModelMin;
    double _dataSetModelMax;
    double _modelAverage;
    double _modelMedian;
    NSArray *_majorGridLocations;
    NSArray *_minorGridLocations;
    NSArray *_totals;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSArray *totals; // @synthesize totals=_totals;
@property(copy, nonatomic) NSArray *minorGridLocations; // @synthesize minorGridLocations=_minorGridLocations;
@property(copy, nonatomic) NSArray *majorGridLocations; // @synthesize majorGridLocations=_majorGridLocations;
@property(nonatomic) double modelMedian; // @synthesize modelMedian=_modelMedian;
@property(nonatomic) double modelAverage; // @synthesize modelAverage=_modelAverage;
@property(nonatomic) double dataSetModelMax; // @synthesize dataSetModelMax=_dataSetModelMax;
@property(nonatomic) double dataSetModelMin; // @synthesize dataSetModelMin=_dataSetModelMin;
@property(nonatomic) double modelMax; // @synthesize modelMax=_modelMax;
@property(nonatomic) double modelMin; // @synthesize modelMin=_modelMin;
@property(nonatomic) double max; // @synthesize max=_max;
@property(nonatomic) double min; // @synthesize min=_min;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;

@end

