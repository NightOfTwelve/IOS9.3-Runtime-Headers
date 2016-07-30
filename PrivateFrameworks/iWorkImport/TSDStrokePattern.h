//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSDStrokePattern : NSObject <NSCopying, TSDMixing>
{
    double mPattern[6];
    unsigned long long mCount;
    double mPhase;
    int mType;
}

+ (id)strokePatternWithPattern:(const double *)arg1 count:(unsigned long long)arg2 phase:(double)arg3;
+ (id)dashPatternWithSpacing:(double)arg1;
+ (id)roundDashPatternWithSpacing:(double)arg1;
+ (id)roundDashPattern;
+ (id)longDashPattern;
+ (id)mediumDashPattern;
+ (id)shortDashPattern;
+ (id)emptyPattern;
+ (id)solidPattern;
@property(readonly, nonatomic) double phase; // @synthesize phase=mPhase;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=mCount;
@property(readonly, nonatomic) int patternType; // @synthesize patternType=mType;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)p_applyToCAShapeLayer:(id)arg1 lineWidth:(double)arg2;
- (void)applyToCAShapeLayer:(id)arg1;
- (void)i_applyToContext:(struct CGContext *)arg1 lineWidth:(double)arg2 capStyle:(unsigned long long *)arg3;
- (void)applyToContext:(struct CGContext *)arg1 lineWidth:(double)arg2;
@property(readonly, nonatomic) _Bool isRoundDash;
@property(readonly, nonatomic) _Bool isDash;
@property(readonly, nonatomic) double *pattern;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPattern:(const double *)arg1 count:(unsigned long long)arg2 phase:(double)arg3;
- (id)p_initWithType:(int)arg1 pattern:(const double *)arg2 count:(unsigned long long)arg3 phase:(double)arg4;
- (void)saveToArchive:(struct StrokePatternArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct StrokePatternArchive *)arg1 unarchiver:(id)arg2;

@end
