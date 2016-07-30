//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSCH3DScene, TSCHChartInfo;

__attribute__((visibility("hidden")))
@interface TSCH3DChartTitlePositioner : NSObject
{
    TSCH3DScene *mScene;
    TSCHChartInfo *mInfo;
    tvec2_84d5962d mCachedCategoryAxisLabelsSize;
    tvec2_84d5962d mCachedValueAxisLabelsSize;
    tvec2_84d5962d mCachedSeriesLabelsSize;
}

+ (id)positionerWithInfo:(id)arg1 scene:(id)arg2;
@property(readonly, nonatomic) TSCH3DScene *scene; // @synthesize scene=mScene;
@property(readonly, nonatomic) TSCHChartInfo *info; // @synthesize info=mInfo;
- (id).cxx_construct;
- (tvec2_84d5962d)sizeOfSeriesLabels;
- (tvec2_84d5962d)sizeOfValueAxisLabels;
- (tvec2_84d5962d)sizeOfCategoryAxisLabels;
- (double)wrapWidthForSize:(struct CGSize)arg1 labelTransform:(const struct LabelTransform *)arg2;
- (void)applyParagraphStyle:(id)arg1 onLabelTransform:(struct LabelTransform *)arg2 alignmentDimension:(int)arg3;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 scene:(id)arg2;

@end

