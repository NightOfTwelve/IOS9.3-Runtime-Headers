//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CHDChartType.h>

__attribute__((visibility("hidden")))
@interface CHDPie2DType : CHDChartType
{
    int mFirstSliceAngle;
    _Bool mDoughnutType;
    _Bool mPieOfPieType;
    _Bool mBarOfPieType;
}

- (_Bool)hasExplosion;
- (id)contentFormat;
- (int)defaultLabelPosition;
- (void)setBarOfPieType:(_Bool)arg1;
- (_Bool)isBarOfPieType;
- (void)setPieOfPieType:(_Bool)arg1;
- (_Bool)isPieOfPieType;
- (void)setDoughnutType:(_Bool)arg1;
- (_Bool)isDoughnutType;
- (void)setFirstSliceAngle:(int)arg1;
- (int)firstSliceAngle;
- (id)initWithChart:(id)arg1;

@end

