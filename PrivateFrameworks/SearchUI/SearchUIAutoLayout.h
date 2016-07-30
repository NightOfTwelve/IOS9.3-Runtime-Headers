//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SearchUIAutoLayout : NSObject
{
}

+ (double)deviceScaledRoundedValue:(double)arg1;
+ (double)scaledValueForValue:(double)arg1 withFont:(id)arg2;
+ (void)setVisibility:(_Bool)arg1 forView:(id)arg2;
+ (void)requireIntrinsicSizeForView:(id)arg1 withPriority:(float)arg2;
+ (void)requireIntrinsicSizeForView:(id)arg1;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 spacing:(double)arg3 isDynamic:(_Bool)arg4 forFont:(id)arg5 minimum:(_Bool)arg6;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 dynamicSpacing:(double)arg3 forFont:(id)arg4 minimum:(_Bool)arg5;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 dynamicSpacing:(double)arg3 forFont:(id)arg4;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 dynamicSpacing:(double)arg3 minimum:(_Bool)arg4;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 dynamicSpacing:(double)arg3;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 spacing:(double)arg3 minimum:(_Bool)arg4;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 spacing:(double)arg3;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2;
+ (void)spanContainerHeightForView:(id)arg1;
+ (void)spanContainerWidthForView:(id)arg1;
+ (void)fillContainerWithView:(id)arg1;
+ (void)alignViews:(id)arg1 withAttribute:(long long)arg2;
+ (void)enableAutoLayoutForViews:(id)arg1;
+ (id)alignView:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toView:(id)arg4 attribute:(long long)arg5 constant:(double)arg6 priority:(float)arg7;
+ (void)setSize:(struct CGSize)arg1 forView:(id)arg2;
+ (id)setHeight:(double)arg1 forView:(id)arg2;
+ (id)setWidth:(double)arg1 forView:(id)arg2;
+ (id)alignView:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toView:(id)arg4 attribute:(long long)arg5 constant:(double)arg6;
+ (id)alignView:(id)arg1 attribute:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4 constant:(double)arg5;
+ (id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2 spacing:(double)arg3 minimum:(_Bool)arg4 priority:(float)arg5;
+ (id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2 spacing:(double)arg3 minimum:(_Bool)arg4;
+ (id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2 spacing:(double)arg3;
+ (id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2 priority:(float)arg3;
+ (id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2;
+ (id)alignView:(id)arg1 attribute:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4;
+ (id)alignView:(id)arg1 toView:(id)arg2 withAttribute:(long long)arg3 constant:(double)arg4;
+ (id)alignView:(id)arg1 toView:(id)arg2 withAttribute:(long long)arg3 priority:(float)arg4;
+ (id)alignView:(id)arg1 toView:(id)arg2 withAttribute:(long long)arg3;
+ (id)installConstraintsWithVisualFormat:(id)arg1 withViews:(id)arg2 metrics:(id)arg3 options:(unsigned long long)arg4;
+ (id)installConstraintsWithVisualFormat:(id)arg1 views:(id)arg2 metrics:(id)arg3;
+ (id)installConstraintsWithVisualFormat:(id)arg1 views:(id)arg2 options:(unsigned long long)arg3;
+ (id)installConstraintsWithVisualFormat:(id)arg1 views:(id)arg2;

@end

