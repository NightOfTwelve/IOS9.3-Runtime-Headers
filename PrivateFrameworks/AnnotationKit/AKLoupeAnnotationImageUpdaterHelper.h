//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AKLoupeAnnotationImageUpdaterHelper : NSObject
{
}

+ (void)updateFastPathImageOnLoupeAnnotation:(id)arg1 onPageController:(id)arg2;
+ (void)updateModelImageOnLoupeAnnotation:(id)arg1 onPageController:(id)arg2;
+ (struct CGRect)unmagnifiedRectForMagnifiedRect:(struct CGRect)arg1 ofLoupeAnnotation:(id)arg2;
+ (struct CGRect)magnifiedRectForUnmagnifiedRect:(struct CGRect)arg1 ofLoupeAnnotation:(id)arg2 onPageController:(id)arg3;

@end
