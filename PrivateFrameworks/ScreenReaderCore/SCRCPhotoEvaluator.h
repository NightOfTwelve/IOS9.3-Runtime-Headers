//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCRCPhotoEvaluator : NSObject
{
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
- (id)evaluateImage:(struct CGImage *)arg1 forCriteria:(int)arg2 inRect:(struct CGRect)arg3;
- (void)dealloc;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
