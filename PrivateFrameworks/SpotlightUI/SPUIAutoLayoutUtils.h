//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPUIAutoLayoutUtils : NSObject
{
}

+ (void)alignViews:(id)arg1 withAttribute:(long long)arg2;
+ (id)alignView:(id)arg1 attribute:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4 constant:(double)arg5;
+ (id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2 spacing:(double)arg3;
+ (id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2;
+ (id)alignView:(id)arg1 attribute:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4;
+ (id)alignView:(id)arg1 toView:(id)arg2 withAttribute:(long long)arg3 constant:(double)arg4;
+ (id)alignView:(id)arg1 toView:(id)arg2 withAttribute:(long long)arg3;
+ (void)installConstraintsWithVisualFormat:(id)arg1 withViews:(id)arg2 metrics:(id)arg3 options:(unsigned long long)arg4;
+ (void)installConstraintsWithVisualFormat:(id)arg1 views:(id)arg2 metrics:(id)arg3;
+ (void)installConstraintsWithVisualFormat:(id)arg1 views:(id)arg2 options:(unsigned long long)arg3;
+ (void)installConstraintsWithVisualFormat:(id)arg1 views:(id)arg2;

@end

